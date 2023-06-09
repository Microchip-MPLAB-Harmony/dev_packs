/*
 * Component description for DACC
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

/* file generated from device description version 2023-03-27T04:07:22Z */
#ifndef _SAMRH707_DACC_COMPONENT_H_
#define _SAMRH707_DACC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DACC                                         */
/* ************************************************************************** */

/* -------- DACC_CR : (DACC Offset: 0x00) ( /W 32) Control Register -------- */
#define DACC_CR_SWRST_Pos                     _UINT32_(0)                                          /* (DACC_CR) Software Reset Position */
#define DACC_CR_SWRST_Msk                     (_UINT32_(0x1) << DACC_CR_SWRST_Pos)                 /* (DACC_CR) Software Reset Mask */
#define DACC_CR_SWRST(value)                  (DACC_CR_SWRST_Msk & (_UINT32_(value) << DACC_CR_SWRST_Pos)) /* Assigment of value for SWRST in the DACC_CR register */
#define DACC_CR_Msk                           _UINT32_(0x00000001)                                 /* (DACC_CR) Register Mask  */


/* -------- DACC_MR : (DACC Offset: 0x04) (R/W 32) Mode Register -------- */
#define DACC_MR_TRGEN_Pos                     _UINT32_(0)                                          /* (DACC_MR) Trigger Enable Position */
#define DACC_MR_TRGEN_Msk                     (_UINT32_(0x1) << DACC_MR_TRGEN_Pos)                 /* (DACC_MR) Trigger Enable Mask */
#define DACC_MR_TRGEN(value)                  (DACC_MR_TRGEN_Msk & (_UINT32_(value) << DACC_MR_TRGEN_Pos)) /* Assigment of value for TRGEN in the DACC_MR register */
#define   DACC_MR_TRGEN_DIS_Val               _UINT32_(0x0)                                        /* (DACC_MR) External trigger mode disabled. DACC in free-running mode.  */
#define   DACC_MR_TRGEN_EN_Val                _UINT32_(0x1)                                        /* (DACC_MR) External trigger mode enabled.  */
#define DACC_MR_TRGEN_DIS                     (DACC_MR_TRGEN_DIS_Val << DACC_MR_TRGEN_Pos)         /* (DACC_MR) External trigger mode disabled. DACC in free-running mode. Position  */
#define DACC_MR_TRGEN_EN                      (DACC_MR_TRGEN_EN_Val << DACC_MR_TRGEN_Pos)          /* (DACC_MR) External trigger mode enabled. Position  */
#define DACC_MR_TRGSEL_Pos                    _UINT32_(1)                                          /* (DACC_MR) Trigger Selection Position */
#define DACC_MR_TRGSEL_Msk                    (_UINT32_(0x7) << DACC_MR_TRGSEL_Pos)                /* (DACC_MR) Trigger Selection Mask */
#define DACC_MR_TRGSEL(value)                 (DACC_MR_TRGSEL_Msk & (_UINT32_(value) << DACC_MR_TRGSEL_Pos)) /* Assigment of value for TRGSEL in the DACC_MR register */
#define   DACC_MR_TRGSEL_TRGSEL0_Val          _UINT32_(0x0)                                        /* (DACC_MR) External trigger  */
#define   DACC_MR_TRGSEL_TRGSEL1_Val          _UINT32_(0x1)                                        /* (DACC_MR) TIOA Output of the Timer Counter Channel 0  */
#define   DACC_MR_TRGSEL_TRGSEL2_Val          _UINT32_(0x2)                                        /* (DACC_MR) TIOA Output of the Timer Counter Channel 1  */
#define   DACC_MR_TRGSEL_TRGSEL3_Val          _UINT32_(0x3)                                        /* (DACC_MR) TIOA Output of the Timer Counter Channel 2  */
#define   DACC_MR_TRGSEL_TRGSEL4_Val          _UINT32_(0x4)                                        /* (DACC_MR) PWM Event Line 0  */
#define   DACC_MR_TRGSEL_TRGSEL5_Val          _UINT32_(0x5)                                        /* (DACC_MR) PWM Event Line 1  */
#define DACC_MR_TRGSEL_TRGSEL0                (DACC_MR_TRGSEL_TRGSEL0_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) External trigger Position  */
#define DACC_MR_TRGSEL_TRGSEL1                (DACC_MR_TRGSEL_TRGSEL1_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) TIOA Output of the Timer Counter Channel 0 Position  */
#define DACC_MR_TRGSEL_TRGSEL2                (DACC_MR_TRGSEL_TRGSEL2_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) TIOA Output of the Timer Counter Channel 1 Position  */
#define DACC_MR_TRGSEL_TRGSEL3                (DACC_MR_TRGSEL_TRGSEL3_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) TIOA Output of the Timer Counter Channel 2 Position  */
#define DACC_MR_TRGSEL_TRGSEL4                (DACC_MR_TRGSEL_TRGSEL4_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) PWM Event Line 0 Position  */
#define DACC_MR_TRGSEL_TRGSEL5                (DACC_MR_TRGSEL_TRGSEL5_Val << DACC_MR_TRGSEL_Pos)   /* (DACC_MR) PWM Event Line 1 Position  */
#define DACC_MR_WORD_Pos                      _UINT32_(4)                                          /* (DACC_MR) Word Transfer Position */
#define DACC_MR_WORD_Msk                      (_UINT32_(0x1) << DACC_MR_WORD_Pos)                  /* (DACC_MR) Word Transfer Mask */
#define DACC_MR_WORD(value)                   (DACC_MR_WORD_Msk & (_UINT32_(value) << DACC_MR_WORD_Pos)) /* Assigment of value for WORD in the DACC_MR register */
#define   DACC_MR_WORD_HALF_Val               _UINT32_(0x0)                                        /* (DACC_MR) Half-word transfer  */
#define   DACC_MR_WORD_WORD_Val               _UINT32_(0x1)                                        /* (DACC_MR) Word transfer  */
#define DACC_MR_WORD_HALF                     (DACC_MR_WORD_HALF_Val << DACC_MR_WORD_Pos)          /* (DACC_MR) Half-word transfer Position  */
#define DACC_MR_WORD_WORD                     (DACC_MR_WORD_WORD_Val << DACC_MR_WORD_Pos)          /* (DACC_MR) Word transfer Position  */
#define DACC_MR_ONE_Pos                       _UINT32_(8)                                          /* (DACC_MR) Must Be Set to 1 Position */
#define DACC_MR_ONE_Msk                       (_UINT32_(0x1) << DACC_MR_ONE_Pos)                   /* (DACC_MR) Must Be Set to 1 Mask */
#define DACC_MR_ONE(value)                    (DACC_MR_ONE_Msk & (_UINT32_(value) << DACC_MR_ONE_Pos)) /* Assigment of value for ONE in the DACC_MR register */
#define DACC_MR_USER_SEL_Pos                  _UINT32_(16)                                         /* (DACC_MR) User Channel Selection Position */
#define DACC_MR_USER_SEL_Msk                  (_UINT32_(0x3) << DACC_MR_USER_SEL_Pos)              /* (DACC_MR) User Channel Selection Mask */
#define DACC_MR_USER_SEL(value)               (DACC_MR_USER_SEL_Msk & (_UINT32_(value) << DACC_MR_USER_SEL_Pos)) /* Assigment of value for USER_SEL in the DACC_MR register */
#define   DACC_MR_USER_SEL_CHANNEL0_Val       _UINT32_(0x0)                                        /* (DACC_MR) Channel 0  */
#define   DACC_MR_USER_SEL_CHANNEL1_Val       _UINT32_(0x1)                                        /* (DACC_MR) Channel 1  */
#define   DACC_MR_USER_SEL_CHANNEL2_Val       _UINT32_(0x2)                                        /* (DACC_MR) Channel 2  */
#define DACC_MR_USER_SEL_CHANNEL0             (DACC_MR_USER_SEL_CHANNEL0_Val << DACC_MR_USER_SEL_Pos) /* (DACC_MR) Channel 0 Position  */
#define DACC_MR_USER_SEL_CHANNEL1             (DACC_MR_USER_SEL_CHANNEL1_Val << DACC_MR_USER_SEL_Pos) /* (DACC_MR) Channel 1 Position  */
#define DACC_MR_USER_SEL_CHANNEL2             (DACC_MR_USER_SEL_CHANNEL2_Val << DACC_MR_USER_SEL_Pos) /* (DACC_MR) Channel 2 Position  */
#define DACC_MR_TAG_Pos                       _UINT32_(20)                                         /* (DACC_MR) Tag Selection Mode Position */
#define DACC_MR_TAG_Msk                       (_UINT32_(0x1) << DACC_MR_TAG_Pos)                   /* (DACC_MR) Tag Selection Mode Mask */
#define DACC_MR_TAG(value)                    (DACC_MR_TAG_Msk & (_UINT32_(value) << DACC_MR_TAG_Pos)) /* Assigment of value for TAG in the DACC_MR register */
#define   DACC_MR_TAG_DIS_Val                 _UINT32_(0x0)                                        /* (DACC_MR) Tag selection mode disabled. Using USER_SEL to select the channel for the conversion.  */
#define   DACC_MR_TAG_EN_Val                  _UINT32_(0x1)                                        /* (DACC_MR) Tag selection mode enabled  */
#define DACC_MR_TAG_DIS                       (DACC_MR_TAG_DIS_Val << DACC_MR_TAG_Pos)             /* (DACC_MR) Tag selection mode disabled. Using USER_SEL to select the channel for the conversion. Position  */
#define DACC_MR_TAG_EN                        (DACC_MR_TAG_EN_Val << DACC_MR_TAG_Pos)              /* (DACC_MR) Tag selection mode enabled Position  */
#define DACC_MR_MAXS_Pos                      _UINT32_(21)                                         /* (DACC_MR) Maximum Speed Mode Position */
#define DACC_MR_MAXS_Msk                      (_UINT32_(0x1) << DACC_MR_MAXS_Pos)                  /* (DACC_MR) Maximum Speed Mode Mask */
#define DACC_MR_MAXS(value)                   (DACC_MR_MAXS_Msk & (_UINT32_(value) << DACC_MR_MAXS_Pos)) /* Assigment of value for MAXS in the DACC_MR register */
#define   DACC_MR_MAXS_NORMAL_Val             _UINT32_(0x0)                                        /* (DACC_MR) Normal mode  */
#define   DACC_MR_MAXS_MAXIMUM_Val            _UINT32_(0x1)                                        /* (DACC_MR) Maximum speed mode enabled  */
#define DACC_MR_MAXS_NORMAL                   (DACC_MR_MAXS_NORMAL_Val << DACC_MR_MAXS_Pos)        /* (DACC_MR) Normal mode Position  */
#define DACC_MR_MAXS_MAXIMUM                  (DACC_MR_MAXS_MAXIMUM_Val << DACC_MR_MAXS_Pos)       /* (DACC_MR) Maximum speed mode enabled Position  */
#define DACC_MR_CLKDIV_Pos                    _UINT32_(22)                                         /* (DACC_MR) Shall be always write at '0' Position */
#define DACC_MR_CLKDIV_Msk                    (_UINT32_(0x1) << DACC_MR_CLKDIV_Pos)                /* (DACC_MR) Shall be always write at '0' Mask */
#define DACC_MR_CLKDIV(value)                 (DACC_MR_CLKDIV_Msk & (_UINT32_(value) << DACC_MR_CLKDIV_Pos)) /* Assigment of value for CLKDIV in the DACC_MR register */
#define DACC_MR_STARTUP_Pos                   _UINT32_(24)                                         /* (DACC_MR) Startup Time Selection Position */
#define DACC_MR_STARTUP_Msk                   (_UINT32_(0x3F) << DACC_MR_STARTUP_Pos)              /* (DACC_MR) Startup Time Selection Mask */
#define DACC_MR_STARTUP(value)                (DACC_MR_STARTUP_Msk & (_UINT32_(value) << DACC_MR_STARTUP_Pos)) /* Assigment of value for STARTUP in the DACC_MR register */
#define   DACC_MR_STARTUP_0_Val               _UINT32_(0x0)                                        /* (DACC_MR) 0 periods of peripheral clock  */
#define   DACC_MR_STARTUP_8_Val               _UINT32_(0x1)                                        /* (DACC_MR) 8 periods of peripheral clock  */
#define   DACC_MR_STARTUP_16_Val              _UINT32_(0x2)                                        /* (DACC_MR) 16 periods of peripheral clock  */
#define   DACC_MR_STARTUP_24_Val              _UINT32_(0x3)                                        /* (DACC_MR) 24 periods of peripheral clock  */
#define   DACC_MR_STARTUP_64_Val              _UINT32_(0x4)                                        /* (DACC_MR) 64 periods of peripheral clock  */
#define   DACC_MR_STARTUP_80_Val              _UINT32_(0x5)                                        /* (DACC_MR) 80 periods of peripheral clock  */
#define   DACC_MR_STARTUP_96_Val              _UINT32_(0x6)                                        /* (DACC_MR) 96 periods of peripheral clock  */
#define   DACC_MR_STARTUP_112_Val             _UINT32_(0x7)                                        /* (DACC_MR) 112 periods of peripheral clock  */
#define   DACC_MR_STARTUP_512_Val             _UINT32_(0x8)                                        /* (DACC_MR) 512 periods of peripheral clock  */
#define   DACC_MR_STARTUP_576_Val             _UINT32_(0x9)                                        /* (DACC_MR) 576 periods of peripheral clock  */
#define   DACC_MR_STARTUP_640_Val             _UINT32_(0xA)                                        /* (DACC_MR) 640 periods of peripheral clock  */
#define   DACC_MR_STARTUP_704_Val             _UINT32_(0xB)                                        /* (DACC_MR) 704 periods of peripheral clock  */
#define   DACC_MR_STARTUP_768_Val             _UINT32_(0xC)                                        /* (DACC_MR) 768 periods of peripheral clock  */
#define   DACC_MR_STARTUP_832_Val             _UINT32_(0xD)                                        /* (DACC_MR) 832 periods of peripheral clock  */
#define   DACC_MR_STARTUP_896_Val             _UINT32_(0xE)                                        /* (DACC_MR) 896 periods of peripheral clock  */
#define   DACC_MR_STARTUP_960_Val             _UINT32_(0xF)                                        /* (DACC_MR) 960 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1024_Val            _UINT32_(0x10)                                       /* (DACC_MR) 1024 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1088_Val            _UINT32_(0x11)                                       /* (DACC_MR) 1088 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1152_Val            _UINT32_(0x12)                                       /* (DACC_MR) 1152 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1216_Val            _UINT32_(0x13)                                       /* (DACC_MR) 1216 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1280_Val            _UINT32_(0x14)                                       /* (DACC_MR) 1280 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1344_Val            _UINT32_(0x15)                                       /* (DACC_MR) 1344 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1408_Val            _UINT32_(0x16)                                       /* (DACC_MR) 1408 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1472_Val            _UINT32_(0x17)                                       /* (DACC_MR) 1472 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1536_Val            _UINT32_(0x18)                                       /* (DACC_MR) 1536 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1600_Val            _UINT32_(0x19)                                       /* (DACC_MR) 1600 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1664_Val            _UINT32_(0x1A)                                       /* (DACC_MR) 1664 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1728_Val            _UINT32_(0x1B)                                       /* (DACC_MR) 1728 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1792_Val            _UINT32_(0x1C)                                       /* (DACC_MR) 1792 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1856_Val            _UINT32_(0x1D)                                       /* (DACC_MR) 1856 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1920_Val            _UINT32_(0x1E)                                       /* (DACC_MR) 1920 periods of peripheral clock  */
#define   DACC_MR_STARTUP_1984_Val            _UINT32_(0x1F)                                       /* (DACC_MR) 1984 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2048_Val            _UINT32_(0x20)                                       /* (DACC_MR) 2048 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2112_Val            _UINT32_(0x21)                                       /* (DACC_MR) 2112 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2176_Val            _UINT32_(0x22)                                       /* (DACC_MR) 2176 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2240_Val            _UINT32_(0x23)                                       /* (DACC_MR) 2240 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2304_Val            _UINT32_(0x24)                                       /* (DACC_MR) 2304 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2368_Val            _UINT32_(0x25)                                       /* (DACC_MR) 2368 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2432_Val            _UINT32_(0x26)                                       /* (DACC_MR) 2432 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2496_Val            _UINT32_(0x27)                                       /* (DACC_MR) 2496 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2560_Val            _UINT32_(0x28)                                       /* (DACC_MR) 2560 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2624_Val            _UINT32_(0x29)                                       /* (DACC_MR) 2624 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2688_Val            _UINT32_(0x2A)                                       /* (DACC_MR) 2688 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2752_Val            _UINT32_(0x2B)                                       /* (DACC_MR) 2752 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2816_Val            _UINT32_(0x2C)                                       /* (DACC_MR) 2816 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2880_Val            _UINT32_(0x2D)                                       /* (DACC_MR) 2880 periods of peripheral clock  */
#define   DACC_MR_STARTUP_2944_Val            _UINT32_(0x2E)                                       /* (DACC_MR) 2944 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3008_Val            _UINT32_(0x2F)                                       /* (DACC_MR) 3008 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3072_Val            _UINT32_(0x30)                                       /* (DACC_MR) 3072 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3136_Val            _UINT32_(0x31)                                       /* (DACC_MR) 3136 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3200_Val            _UINT32_(0x32)                                       /* (DACC_MR) 3200 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3264_Val            _UINT32_(0x33)                                       /* (DACC_MR) 3264 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3328_Val            _UINT32_(0x34)                                       /* (DACC_MR) 3328 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3392_Val            _UINT32_(0x35)                                       /* (DACC_MR) 3392 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3456_Val            _UINT32_(0x36)                                       /* (DACC_MR) 3456 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3520_Val            _UINT32_(0x37)                                       /* (DACC_MR) 3520 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3584_Val            _UINT32_(0x38)                                       /* (DACC_MR) 3584 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3648_Val            _UINT32_(0x39)                                       /* (DACC_MR) 3648 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3712_Val            _UINT32_(0x3A)                                       /* (DACC_MR) 3712 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3776_Val            _UINT32_(0x3B)                                       /* (DACC_MR) 3776 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3840_Val            _UINT32_(0x3C)                                       /* (DACC_MR) 3840 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3904_Val            _UINT32_(0x3D)                                       /* (DACC_MR) 3904 periods of peripheral clock  */
#define   DACC_MR_STARTUP_3968_Val            _UINT32_(0x3E)                                       /* (DACC_MR) 3968 periods of peripheral clock  */
#define   DACC_MR_STARTUP_4032_Val            _UINT32_(0x3F)                                       /* (DACC_MR) 4032 periods of peripheral clock  */
#define DACC_MR_STARTUP_0                     (DACC_MR_STARTUP_0_Val << DACC_MR_STARTUP_Pos)       /* (DACC_MR) 0 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_8                     (DACC_MR_STARTUP_8_Val << DACC_MR_STARTUP_Pos)       /* (DACC_MR) 8 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_16                    (DACC_MR_STARTUP_16_Val << DACC_MR_STARTUP_Pos)      /* (DACC_MR) 16 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_24                    (DACC_MR_STARTUP_24_Val << DACC_MR_STARTUP_Pos)      /* (DACC_MR) 24 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_64                    (DACC_MR_STARTUP_64_Val << DACC_MR_STARTUP_Pos)      /* (DACC_MR) 64 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_80                    (DACC_MR_STARTUP_80_Val << DACC_MR_STARTUP_Pos)      /* (DACC_MR) 80 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_96                    (DACC_MR_STARTUP_96_Val << DACC_MR_STARTUP_Pos)      /* (DACC_MR) 96 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_112                   (DACC_MR_STARTUP_112_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 112 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_512                   (DACC_MR_STARTUP_512_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 512 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_576                   (DACC_MR_STARTUP_576_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 576 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_640                   (DACC_MR_STARTUP_640_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 640 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_704                   (DACC_MR_STARTUP_704_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 704 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_768                   (DACC_MR_STARTUP_768_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 768 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_832                   (DACC_MR_STARTUP_832_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 832 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_896                   (DACC_MR_STARTUP_896_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 896 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_960                   (DACC_MR_STARTUP_960_Val << DACC_MR_STARTUP_Pos)     /* (DACC_MR) 960 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1024                  (DACC_MR_STARTUP_1024_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1024 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1088                  (DACC_MR_STARTUP_1088_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1088 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1152                  (DACC_MR_STARTUP_1152_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1152 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1216                  (DACC_MR_STARTUP_1216_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1216 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1280                  (DACC_MR_STARTUP_1280_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1280 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1344                  (DACC_MR_STARTUP_1344_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1344 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1408                  (DACC_MR_STARTUP_1408_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1408 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1472                  (DACC_MR_STARTUP_1472_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1472 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1536                  (DACC_MR_STARTUP_1536_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1536 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1600                  (DACC_MR_STARTUP_1600_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1600 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1664                  (DACC_MR_STARTUP_1664_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1664 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1728                  (DACC_MR_STARTUP_1728_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1728 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1792                  (DACC_MR_STARTUP_1792_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1792 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1856                  (DACC_MR_STARTUP_1856_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1856 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1920                  (DACC_MR_STARTUP_1920_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1920 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_1984                  (DACC_MR_STARTUP_1984_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 1984 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2048                  (DACC_MR_STARTUP_2048_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2048 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2112                  (DACC_MR_STARTUP_2112_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2112 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2176                  (DACC_MR_STARTUP_2176_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2176 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2240                  (DACC_MR_STARTUP_2240_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2240 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2304                  (DACC_MR_STARTUP_2304_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2304 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2368                  (DACC_MR_STARTUP_2368_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2368 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2432                  (DACC_MR_STARTUP_2432_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2432 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2496                  (DACC_MR_STARTUP_2496_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2496 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2560                  (DACC_MR_STARTUP_2560_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2560 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2624                  (DACC_MR_STARTUP_2624_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2624 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2688                  (DACC_MR_STARTUP_2688_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2688 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2752                  (DACC_MR_STARTUP_2752_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2752 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2816                  (DACC_MR_STARTUP_2816_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2816 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2880                  (DACC_MR_STARTUP_2880_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2880 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_2944                  (DACC_MR_STARTUP_2944_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 2944 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3008                  (DACC_MR_STARTUP_3008_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3008 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3072                  (DACC_MR_STARTUP_3072_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3072 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3136                  (DACC_MR_STARTUP_3136_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3136 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3200                  (DACC_MR_STARTUP_3200_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3200 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3264                  (DACC_MR_STARTUP_3264_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3264 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3328                  (DACC_MR_STARTUP_3328_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3328 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3392                  (DACC_MR_STARTUP_3392_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3392 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3456                  (DACC_MR_STARTUP_3456_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3456 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3520                  (DACC_MR_STARTUP_3520_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3520 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3584                  (DACC_MR_STARTUP_3584_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3584 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3648                  (DACC_MR_STARTUP_3648_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3648 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3712                  (DACC_MR_STARTUP_3712_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3712 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3776                  (DACC_MR_STARTUP_3776_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3776 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3840                  (DACC_MR_STARTUP_3840_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3840 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3904                  (DACC_MR_STARTUP_3904_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3904 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_3968                  (DACC_MR_STARTUP_3968_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 3968 periods of peripheral clock Position  */
#define DACC_MR_STARTUP_4032                  (DACC_MR_STARTUP_4032_Val << DACC_MR_STARTUP_Pos)    /* (DACC_MR) 4032 periods of peripheral clock Position  */
#define DACC_MR_Msk                           _UINT32_(0x3F73011F)                                 /* (DACC_MR) Register Mask  */


/* -------- DACC_CHER : (DACC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define DACC_CHER_CH0_Pos                     _UINT32_(0)                                          /* (DACC_CHER) Channel 0 Enable Position */
#define DACC_CHER_CH0_Msk                     (_UINT32_(0x1) << DACC_CHER_CH0_Pos)                 /* (DACC_CHER) Channel 0 Enable Mask */
#define DACC_CHER_CH0(value)                  (DACC_CHER_CH0_Msk & (_UINT32_(value) << DACC_CHER_CH0_Pos)) /* Assigment of value for CH0 in the DACC_CHER register */
#define DACC_CHER_CH1_Pos                     _UINT32_(1)                                          /* (DACC_CHER) Channel 1 Enable Position */
#define DACC_CHER_CH1_Msk                     (_UINT32_(0x1) << DACC_CHER_CH1_Pos)                 /* (DACC_CHER) Channel 1 Enable Mask */
#define DACC_CHER_CH1(value)                  (DACC_CHER_CH1_Msk & (_UINT32_(value) << DACC_CHER_CH1_Pos)) /* Assigment of value for CH1 in the DACC_CHER register */
#define DACC_CHER_CH2_Pos                     _UINT32_(2)                                          /* (DACC_CHER) Channel 2 Enable Position */
#define DACC_CHER_CH2_Msk                     (_UINT32_(0x1) << DACC_CHER_CH2_Pos)                 /* (DACC_CHER) Channel 2 Enable Mask */
#define DACC_CHER_CH2(value)                  (DACC_CHER_CH2_Msk & (_UINT32_(value) << DACC_CHER_CH2_Pos)) /* Assigment of value for CH2 in the DACC_CHER register */
#define DACC_CHER_Msk                         _UINT32_(0x00000007)                                 /* (DACC_CHER) Register Mask  */

#define DACC_CHER_CH_Pos                      _UINT32_(0)                                          /* (DACC_CHER Position) Channel 2 Enable */
#define DACC_CHER_CH_Msk                      (_UINT32_(0x7) << DACC_CHER_CH_Pos)                  /* (DACC_CHER Mask) CH */
#define DACC_CHER_CH(value)                   (DACC_CHER_CH_Msk & (_UINT32_(value) << DACC_CHER_CH_Pos)) 

/* -------- DACC_CHDR : (DACC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define DACC_CHDR_CH0_Pos                     _UINT32_(0)                                          /* (DACC_CHDR) Channel 0 Disable Position */
#define DACC_CHDR_CH0_Msk                     (_UINT32_(0x1) << DACC_CHDR_CH0_Pos)                 /* (DACC_CHDR) Channel 0 Disable Mask */
#define DACC_CHDR_CH0(value)                  (DACC_CHDR_CH0_Msk & (_UINT32_(value) << DACC_CHDR_CH0_Pos)) /* Assigment of value for CH0 in the DACC_CHDR register */
#define DACC_CHDR_CH1_Pos                     _UINT32_(1)                                          /* (DACC_CHDR) Channel 1 Disable Position */
#define DACC_CHDR_CH1_Msk                     (_UINT32_(0x1) << DACC_CHDR_CH1_Pos)                 /* (DACC_CHDR) Channel 1 Disable Mask */
#define DACC_CHDR_CH1(value)                  (DACC_CHDR_CH1_Msk & (_UINT32_(value) << DACC_CHDR_CH1_Pos)) /* Assigment of value for CH1 in the DACC_CHDR register */
#define DACC_CHDR_CH2_Pos                     _UINT32_(2)                                          /* (DACC_CHDR) Channel 2 Disable Position */
#define DACC_CHDR_CH2_Msk                     (_UINT32_(0x1) << DACC_CHDR_CH2_Pos)                 /* (DACC_CHDR) Channel 2 Disable Mask */
#define DACC_CHDR_CH2(value)                  (DACC_CHDR_CH2_Msk & (_UINT32_(value) << DACC_CHDR_CH2_Pos)) /* Assigment of value for CH2 in the DACC_CHDR register */
#define DACC_CHDR_Msk                         _UINT32_(0x00000007)                                 /* (DACC_CHDR) Register Mask  */

#define DACC_CHDR_CH_Pos                      _UINT32_(0)                                          /* (DACC_CHDR Position) Channel 2 Disable */
#define DACC_CHDR_CH_Msk                      (_UINT32_(0x7) << DACC_CHDR_CH_Pos)                  /* (DACC_CHDR Mask) CH */
#define DACC_CHDR_CH(value)                   (DACC_CHDR_CH_Msk & (_UINT32_(value) << DACC_CHDR_CH_Pos)) 

/* -------- DACC_CHSR : (DACC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define DACC_CHSR_CH0_Pos                     _UINT32_(0)                                          /* (DACC_CHSR) Channel 0 Status Position */
#define DACC_CHSR_CH0_Msk                     (_UINT32_(0x1) << DACC_CHSR_CH0_Pos)                 /* (DACC_CHSR) Channel 0 Status Mask */
#define DACC_CHSR_CH0(value)                  (DACC_CHSR_CH0_Msk & (_UINT32_(value) << DACC_CHSR_CH0_Pos)) /* Assigment of value for CH0 in the DACC_CHSR register */
#define DACC_CHSR_CH1_Pos                     _UINT32_(1)                                          /* (DACC_CHSR) Channel 1 Status Position */
#define DACC_CHSR_CH1_Msk                     (_UINT32_(0x1) << DACC_CHSR_CH1_Pos)                 /* (DACC_CHSR) Channel 1 Status Mask */
#define DACC_CHSR_CH1(value)                  (DACC_CHSR_CH1_Msk & (_UINT32_(value) << DACC_CHSR_CH1_Pos)) /* Assigment of value for CH1 in the DACC_CHSR register */
#define DACC_CHSR_CH2_Pos                     _UINT32_(2)                                          /* (DACC_CHSR) Channel 2 Status Position */
#define DACC_CHSR_CH2_Msk                     (_UINT32_(0x1) << DACC_CHSR_CH2_Pos)                 /* (DACC_CHSR) Channel 2 Status Mask */
#define DACC_CHSR_CH2(value)                  (DACC_CHSR_CH2_Msk & (_UINT32_(value) << DACC_CHSR_CH2_Pos)) /* Assigment of value for CH2 in the DACC_CHSR register */
#define DACC_CHSR_Msk                         _UINT32_(0x00000007)                                 /* (DACC_CHSR) Register Mask  */

#define DACC_CHSR_CH_Pos                      _UINT32_(0)                                          /* (DACC_CHSR Position) Channel 2 Status */
#define DACC_CHSR_CH_Msk                      (_UINT32_(0x7) << DACC_CHSR_CH_Pos)                  /* (DACC_CHSR Mask) CH */
#define DACC_CHSR_CH(value)                   (DACC_CHSR_CH_Msk & (_UINT32_(value) << DACC_CHSR_CH_Pos)) 

/* -------- DACC_CDR : (DACC Offset: 0x20) ( /W 32) Conversion Data Register -------- */
#define DACC_CDR_DATA_Pos                     _UINT32_(0)                                          /* (DACC_CDR) Data to Convert Position */
#define DACC_CDR_DATA_Msk                     (_UINT32_(0xFFFFFFFF) << DACC_CDR_DATA_Pos)          /* (DACC_CDR) Data to Convert Mask */
#define DACC_CDR_DATA(value)                  (DACC_CDR_DATA_Msk & (_UINT32_(value) << DACC_CDR_DATA_Pos)) /* Assigment of value for DATA in the DACC_CDR register */
#define DACC_CDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (DACC_CDR) Register Mask  */


/* -------- DACC_IER : (DACC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define DACC_IER_TXRDY_Pos                    _UINT32_(0)                                          /* (DACC_IER) Transmit Ready Interrupt Enable Position */
#define DACC_IER_TXRDY_Msk                    (_UINT32_(0x1) << DACC_IER_TXRDY_Pos)                /* (DACC_IER) Transmit Ready Interrupt Enable Mask */
#define DACC_IER_TXRDY(value)                 (DACC_IER_TXRDY_Msk & (_UINT32_(value) << DACC_IER_TXRDY_Pos)) /* Assigment of value for TXRDY in the DACC_IER register */
#define DACC_IER_EOC_Pos                      _UINT32_(1)                                          /* (DACC_IER) End of Conversion Interrupt Enable Position */
#define DACC_IER_EOC_Msk                      (_UINT32_(0x1) << DACC_IER_EOC_Pos)                  /* (DACC_IER) End of Conversion Interrupt Enable Mask */
#define DACC_IER_EOC(value)                   (DACC_IER_EOC_Msk & (_UINT32_(value) << DACC_IER_EOC_Pos)) /* Assigment of value for EOC in the DACC_IER register */
#define DACC_IER_Msk                          _UINT32_(0x00000003)                                 /* (DACC_IER) Register Mask  */


/* -------- DACC_IDR : (DACC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define DACC_IDR_TXRDY_Pos                    _UINT32_(0)                                          /* (DACC_IDR) Transmit Ready Interrupt Disable. Position */
#define DACC_IDR_TXRDY_Msk                    (_UINT32_(0x1) << DACC_IDR_TXRDY_Pos)                /* (DACC_IDR) Transmit Ready Interrupt Disable. Mask */
#define DACC_IDR_TXRDY(value)                 (DACC_IDR_TXRDY_Msk & (_UINT32_(value) << DACC_IDR_TXRDY_Pos)) /* Assigment of value for TXRDY in the DACC_IDR register */
#define DACC_IDR_EOC_Pos                      _UINT32_(1)                                          /* (DACC_IDR) End of Conversion Interrupt Disable Position */
#define DACC_IDR_EOC_Msk                      (_UINT32_(0x1) << DACC_IDR_EOC_Pos)                  /* (DACC_IDR) End of Conversion Interrupt Disable Mask */
#define DACC_IDR_EOC(value)                   (DACC_IDR_EOC_Msk & (_UINT32_(value) << DACC_IDR_EOC_Pos)) /* Assigment of value for EOC in the DACC_IDR register */
#define DACC_IDR_Msk                          _UINT32_(0x00000003)                                 /* (DACC_IDR) Register Mask  */


/* -------- DACC_IMR : (DACC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define DACC_IMR_TXRDY_Pos                    _UINT32_(0)                                          /* (DACC_IMR) Transmit Ready Interrupt Mask Position */
#define DACC_IMR_TXRDY_Msk                    (_UINT32_(0x1) << DACC_IMR_TXRDY_Pos)                /* (DACC_IMR) Transmit Ready Interrupt Mask Mask */
#define DACC_IMR_TXRDY(value)                 (DACC_IMR_TXRDY_Msk & (_UINT32_(value) << DACC_IMR_TXRDY_Pos)) /* Assigment of value for TXRDY in the DACC_IMR register */
#define DACC_IMR_EOC_Pos                      _UINT32_(1)                                          /* (DACC_IMR) End of Conversion Interrupt Mask Position */
#define DACC_IMR_EOC_Msk                      (_UINT32_(0x1) << DACC_IMR_EOC_Pos)                  /* (DACC_IMR) End of Conversion Interrupt Mask Mask */
#define DACC_IMR_EOC(value)                   (DACC_IMR_EOC_Msk & (_UINT32_(value) << DACC_IMR_EOC_Pos)) /* Assigment of value for EOC in the DACC_IMR register */
#define DACC_IMR_Msk                          _UINT32_(0x00000003)                                 /* (DACC_IMR) Register Mask  */


/* -------- DACC_ISR : (DACC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define DACC_ISR_TXRDY_Pos                    _UINT32_(0)                                          /* (DACC_ISR) Transmit Ready Interrupt Flag Position */
#define DACC_ISR_TXRDY_Msk                    (_UINT32_(0x1) << DACC_ISR_TXRDY_Pos)                /* (DACC_ISR) Transmit Ready Interrupt Flag Mask */
#define DACC_ISR_TXRDY(value)                 (DACC_ISR_TXRDY_Msk & (_UINT32_(value) << DACC_ISR_TXRDY_Pos)) /* Assigment of value for TXRDY in the DACC_ISR register */
#define DACC_ISR_EOC_Pos                      _UINT32_(1)                                          /* (DACC_ISR) End of Conversion Interrupt Flag Position */
#define DACC_ISR_EOC_Msk                      (_UINT32_(0x1) << DACC_ISR_EOC_Pos)                  /* (DACC_ISR) End of Conversion Interrupt Flag Mask */
#define DACC_ISR_EOC(value)                   (DACC_ISR_EOC_Msk & (_UINT32_(value) << DACC_ISR_EOC_Pos)) /* Assigment of value for EOC in the DACC_ISR register */
#define DACC_ISR_Msk                          _UINT32_(0x00000003)                                 /* (DACC_ISR) Register Mask  */


/* -------- DACC_ACR : (DACC Offset: 0x94) (R/W 32) Analog Current Register -------- */
#define DACC_ACR_IBCTLCH0_Pos                 _UINT32_(0)                                          /* (DACC_ACR) Analog Output Current Control Position */
#define DACC_ACR_IBCTLCH0_Msk                 (_UINT32_(0x3) << DACC_ACR_IBCTLCH0_Pos)             /* (DACC_ACR) Analog Output Current Control Mask */
#define DACC_ACR_IBCTLCH0(value)              (DACC_ACR_IBCTLCH0_Msk & (_UINT32_(value) << DACC_ACR_IBCTLCH0_Pos)) /* Assigment of value for IBCTLCH0 in the DACC_ACR register */
#define DACC_ACR_IBCTLCH1_Pos                 _UINT32_(2)                                          /* (DACC_ACR) Analog Output Current Control Position */
#define DACC_ACR_IBCTLCH1_Msk                 (_UINT32_(0x3) << DACC_ACR_IBCTLCH1_Pos)             /* (DACC_ACR) Analog Output Current Control Mask */
#define DACC_ACR_IBCTLCH1(value)              (DACC_ACR_IBCTLCH1_Msk & (_UINT32_(value) << DACC_ACR_IBCTLCH1_Pos)) /* Assigment of value for IBCTLCH1 in the DACC_ACR register */
#define DACC_ACR_IBCTLCH2_Pos                 _UINT32_(4)                                          /* (DACC_ACR) Analog Output Current Control Position */
#define DACC_ACR_IBCTLCH2_Msk                 (_UINT32_(0x3) << DACC_ACR_IBCTLCH2_Pos)             /* (DACC_ACR) Analog Output Current Control Mask */
#define DACC_ACR_IBCTLCH2(value)              (DACC_ACR_IBCTLCH2_Msk & (_UINT32_(value) << DACC_ACR_IBCTLCH2_Pos)) /* Assigment of value for IBCTLCH2 in the DACC_ACR register */
#define DACC_ACR_IBCTLDACCORE_Pos             _UINT32_(8)                                          /* (DACC_ACR) Bias Current Control for DAC Core Position */
#define DACC_ACR_IBCTLDACCORE_Msk             (_UINT32_(0x3) << DACC_ACR_IBCTLDACCORE_Pos)         /* (DACC_ACR) Bias Current Control for DAC Core Mask */
#define DACC_ACR_IBCTLDACCORE(value)          (DACC_ACR_IBCTLDACCORE_Msk & (_UINT32_(value) << DACC_ACR_IBCTLDACCORE_Pos)) /* Assigment of value for IBCTLDACCORE in the DACC_ACR register */
#define DACC_ACR_Msk                          _UINT32_(0x0000033F)                                 /* (DACC_ACR) Register Mask  */


/* -------- DACC_WPMR : (DACC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define DACC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (DACC_WPMR) Write Protection Enable Position */
#define DACC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << DACC_WPMR_WPEN_Pos)                /* (DACC_WPMR) Write Protection Enable Mask */
#define DACC_WPMR_WPEN(value)                 (DACC_WPMR_WPEN_Msk & (_UINT32_(value) << DACC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the DACC_WPMR register */
#define DACC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (DACC_WPMR) Write Protection Key Position */
#define DACC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << DACC_WPMR_WPKEY_Pos)          /* (DACC_WPMR) Write Protection Key Mask */
#define DACC_WPMR_WPKEY(value)                (DACC_WPMR_WPKEY_Msk & (_UINT32_(value) << DACC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the DACC_WPMR register */
#define   DACC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x444143)                                   /* (DACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define DACC_WPMR_WPKEY_PASSWD                (DACC_WPMR_WPKEY_PASSWD_Val << DACC_WPMR_WPKEY_Pos)  /* (DACC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define DACC_WPMR_Msk                         _UINT32_(0xFFFFFF01)                                 /* (DACC_WPMR) Register Mask  */


/* -------- DACC_WPSR : (DACC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define DACC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (DACC_WPSR) Write Protection Violation Status Position */
#define DACC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << DACC_WPSR_WPVS_Pos)                /* (DACC_WPSR) Write Protection Violation Status Mask */
#define DACC_WPSR_WPVS(value)                 (DACC_WPSR_WPVS_Msk & (_UINT32_(value) << DACC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the DACC_WPSR register */
#define DACC_WPSR_WPVSRC_Pos                  _UINT32_(8)                                          /* (DACC_WPSR) Write Protection Violation Source Position */
#define DACC_WPSR_WPVSRC_Msk                  (_UINT32_(0xFF) << DACC_WPSR_WPVSRC_Pos)             /* (DACC_WPSR) Write Protection Violation Source Mask */
#define DACC_WPSR_WPVSRC(value)               (DACC_WPSR_WPVSRC_Msk & (_UINT32_(value) << DACC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the DACC_WPSR register */
#define DACC_WPSR_Msk                         _UINT32_(0x0000FF01)                                 /* (DACC_WPSR) Register Mask  */


/** \brief DACC register offsets definitions */
#define DACC_CR_REG_OFST               _UINT32_(0x00)      /* (DACC_CR) Control Register Offset */
#define DACC_MR_REG_OFST               _UINT32_(0x04)      /* (DACC_MR) Mode Register Offset */
#define DACC_CHER_REG_OFST             _UINT32_(0x10)      /* (DACC_CHER) Channel Enable Register Offset */
#define DACC_CHDR_REG_OFST             _UINT32_(0x14)      /* (DACC_CHDR) Channel Disable Register Offset */
#define DACC_CHSR_REG_OFST             _UINT32_(0x18)      /* (DACC_CHSR) Channel Status Register Offset */
#define DACC_CDR_REG_OFST              _UINT32_(0x20)      /* (DACC_CDR) Conversion Data Register Offset */
#define DACC_IER_REG_OFST              _UINT32_(0x24)      /* (DACC_IER) Interrupt Enable Register Offset */
#define DACC_IDR_REG_OFST              _UINT32_(0x28)      /* (DACC_IDR) Interrupt Disable Register Offset */
#define DACC_IMR_REG_OFST              _UINT32_(0x2C)      /* (DACC_IMR) Interrupt Mask Register Offset */
#define DACC_ISR_REG_OFST              _UINT32_(0x30)      /* (DACC_ISR) Interrupt Status Register Offset */
#define DACC_ACR_REG_OFST              _UINT32_(0x94)      /* (DACC_ACR) Analog Current Register Offset */
#define DACC_WPMR_REG_OFST             _UINT32_(0xE4)      /* (DACC_WPMR) Write Protection Mode Register Offset */
#define DACC_WPSR_REG_OFST             _UINT32_(0xE8)      /* (DACC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DACC register API structure */
typedef struct
{
  __O   uint32_t                       DACC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       DACC_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       DACC_CHER;          /**< Offset: 0x10 ( /W  32) Channel Enable Register */
  __O   uint32_t                       DACC_CHDR;          /**< Offset: 0x14 ( /W  32) Channel Disable Register */
  __I   uint32_t                       DACC_CHSR;          /**< Offset: 0x18 (R/   32) Channel Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __O   uint32_t                       DACC_CDR;           /**< Offset: 0x20 ( /W  32) Conversion Data Register */
  __O   uint32_t                       DACC_IER;           /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       DACC_IDR;           /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       DACC_IMR;           /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       DACC_ISR;           /**< Offset: 0x30 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved3[0x60];
  __IO  uint32_t                       DACC_ACR;           /**< Offset: 0x94 (R/W  32) Analog Current Register */
  __I   uint8_t                        Reserved4[0x4C];
  __IO  uint32_t                       DACC_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       DACC_WPSR;          /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} dacc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH707_DACC_COMPONENT_H_ */
