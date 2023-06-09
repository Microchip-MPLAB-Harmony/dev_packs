/*-------------------------------------------------------------------------
 * PIC32MM0064GPL020 processor header
 * Build date : Aug 27 2021
 *
 * Copyright (c) 2021, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when this file 
 *         is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#pragma once
#ifndef __32MM0064GPL020_H
#define __32MM0064GPL020_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RTCCON1 RTCCON1
extern volatile uint32_t   RTCCON1 __attribute__((section("sfrs"), address(0xBF800000)));
typedef struct {
  uint32_t :4;
  uint32_t OUTSEL:3;
  uint32_t RTCOE:1;
  uint32_t :3;
  uint32_t WRLOCK:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t ALMRPT:8;
  uint32_t AMASK:4;
  uint32_t :2;
  uint32_t CHIME:1;
  uint32_t ALRMEN:1;
} __RTCCON1bits_t;
extern volatile __RTCCON1bits_t RTCCON1bits __asm__ ("RTCCON1") __attribute__((section("sfrs"), address(0xBF800000)));
extern volatile uint32_t        RTCCON1CLR __attribute__((section("sfrs"),address(0xBF800004)));
extern volatile uint32_t        RTCCON1SET __attribute__((section("sfrs"),address(0xBF800008)));
extern volatile uint32_t        RTCCON1INV __attribute__((section("sfrs"),address(0xBF80000C)));
#define RTCCON2 RTCCON2
extern volatile uint32_t   RTCCON2 __attribute__((section("sfrs"), address(0xBF800010)));
typedef struct {
  uint32_t CLKSEL:2;
  uint32_t :9;
  uint32_t FDIV:5;
  uint32_t DIV:16;
} __RTCCON2bits_t;
extern volatile __RTCCON2bits_t RTCCON2bits __asm__ ("RTCCON2") __attribute__((section("sfrs"), address(0xBF800010)));
extern volatile uint32_t        RTCCON2CLR __attribute__((section("sfrs"),address(0xBF800014)));
extern volatile uint32_t        RTCCON2SET __attribute__((section("sfrs"),address(0xBF800018)));
extern volatile uint32_t        RTCCON2INV __attribute__((section("sfrs"),address(0xBF80001C)));
#define RTCSTAT RTCSTAT
extern volatile uint32_t   RTCSTAT __attribute__((section("sfrs"), address(0xBF800030)));
typedef struct {
  uint32_t HALFSEC:1;
  uint32_t ALMSYNC:1;
  uint32_t SYNC:1;
  uint32_t :2;
  uint32_t ALMEVT:1;
} __RTCSTATbits_t;
extern volatile __RTCSTATbits_t RTCSTATbits __asm__ ("RTCSTAT") __attribute__((section("sfrs"), address(0xBF800030)));
extern volatile uint32_t        RTCSTATCLR __attribute__((section("sfrs"),address(0xBF800034)));
extern volatile uint32_t        RTCSTATSET __attribute__((section("sfrs"),address(0xBF800038)));
extern volatile uint32_t        RTCSTATINV __attribute__((section("sfrs"),address(0xBF80003C)));
#define RTCTIME RTCTIME
extern volatile uint32_t   RTCTIME __attribute__((section("sfrs"), address(0xBF800040)));
typedef struct {
  uint32_t :8;
  uint32_t SECONE:4;
  uint32_t SECTEN:3;
  uint32_t :1;
  uint32_t MINONE:4;
  uint32_t MINTEN:3;
  uint32_t :1;
  uint32_t HRONE:4;
  uint32_t HRTEN:3;
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs"), address(0xBF800040)));
extern volatile uint32_t        RTCTIMECLR __attribute__((section("sfrs"),address(0xBF800044)));
extern volatile uint32_t        RTCTIMESET __attribute__((section("sfrs"),address(0xBF800048)));
extern volatile uint32_t        RTCTIMEINV __attribute__((section("sfrs"),address(0xBF80004C)));
#define RTCDATE RTCDATE
extern volatile uint32_t   RTCDATE __attribute__((section("sfrs"), address(0xBF800050)));
typedef struct {
  uint32_t WDAY:3;
  uint32_t :5;
  uint32_t DAYONE:4;
  uint32_t DAYTEN:2;
  uint32_t :2;
  uint32_t MTHONE:4;
  uint32_t MTHTEN:1;
  uint32_t :3;
  uint32_t YRONE:4;
  uint32_t YRTEN:4;
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs"), address(0xBF800050)));
extern volatile uint32_t        RTCDATECLR __attribute__((section("sfrs"),address(0xBF800054)));
extern volatile uint32_t        RTCDATESET __attribute__((section("sfrs"),address(0xBF800058)));
extern volatile uint32_t        RTCDATEINV __attribute__((section("sfrs"),address(0xBF80005C)));
#define ALMTIME ALMTIME
extern volatile uint32_t   ALMTIME __attribute__((section("sfrs"), address(0xBF800060)));
typedef struct {
  uint32_t :8;
  uint32_t SECONE:4;
  uint32_t SECTEN:3;
  uint32_t :1;
  uint32_t MINONE:4;
  uint32_t MINTEN:3;
  uint32_t :1;
  uint32_t HRONE:4;
  uint32_t HRTEN:3;
} __ALMTIMEbits_t;
extern volatile __ALMTIMEbits_t ALMTIMEbits __asm__ ("ALMTIME") __attribute__((section("sfrs"), address(0xBF800060)));
extern volatile uint32_t        ALMTIMECLR __attribute__((section("sfrs"),address(0xBF800064)));
extern volatile uint32_t        ALMTIMESET __attribute__((section("sfrs"),address(0xBF800068)));
extern volatile uint32_t        ALMTIMEINV __attribute__((section("sfrs"),address(0xBF80006C)));
#define ALMDATE ALMDATE
extern volatile uint32_t   ALMDATE __attribute__((section("sfrs"), address(0xBF800070)));
typedef struct {
  uint32_t WDAY:3;
  uint32_t :5;
  uint32_t DAYONE:4;
  uint32_t DAYTEN:2;
  uint32_t :2;
  uint32_t MTHONE:4;
  uint32_t MTHTEN:1;
} __ALMDATEbits_t;
extern volatile __ALMDATEbits_t ALMDATEbits __asm__ ("ALMDATE") __attribute__((section("sfrs"), address(0xBF800070)));
extern volatile uint32_t        ALMDATECLR __attribute__((section("sfrs"),address(0xBF800074)));
extern volatile uint32_t        ALMDATESET __attribute__((section("sfrs"),address(0xBF800078)));
extern volatile uint32_t        ALMDATEINV __attribute__((section("sfrs"),address(0xBF80007C)));
#define CCP1CON1 CCP1CON1
extern volatile uint32_t   CCP1CON1 __attribute__((section("sfrs"), address(0xBF800100)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP1CON1bits_t;
extern volatile __CCP1CON1bits_t CCP1CON1bits __asm__ ("CCP1CON1") __attribute__((section("sfrs"), address(0xBF800100)));
extern volatile uint32_t        CCP1CON1CLR __attribute__((section("sfrs"),address(0xBF800104)));
extern volatile uint32_t        CCP1CON1SET __attribute__((section("sfrs"),address(0xBF800108)));
extern volatile uint32_t        CCP1CON1INV __attribute__((section("sfrs"),address(0xBF80010C)));
#define CCP1CON2 CCP1CON2
extern volatile uint32_t   CCP1CON2 __attribute__((section("sfrs"), address(0xBF800110)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t OCBEN:1;
  uint32_t OCCEN:1;
  uint32_t OCDEN:1;
  uint32_t OCEEN:1;
  uint32_t OCFEN:1;
  uint32_t :1;
  uint32_t OENSYNC:1;
} __CCP1CON2bits_t;
extern volatile __CCP1CON2bits_t CCP1CON2bits __asm__ ("CCP1CON2") __attribute__((section("sfrs"), address(0xBF800110)));
extern volatile uint32_t        CCP1CON2CLR __attribute__((section("sfrs"),address(0xBF800114)));
extern volatile uint32_t        CCP1CON2SET __attribute__((section("sfrs"),address(0xBF800118)));
extern volatile uint32_t        CCP1CON2INV __attribute__((section("sfrs"),address(0xBF80011C)));
#define CCP1CON3 CCP1CON3
extern volatile uint32_t   CCP1CON3 __attribute__((section("sfrs"), address(0xBF800120)));
typedef struct {
  uint32_t DT:6;
  uint32_t :10;
  uint32_t PSSBDF:2;
  uint32_t PSSACE:2;
  uint32_t POLBDF:1;
  uint32_t POLACE:1;
  uint32_t :2;
  uint32_t OUTM:3;
  uint32_t :1;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP1CON3bits_t;
extern volatile __CCP1CON3bits_t CCP1CON3bits __asm__ ("CCP1CON3") __attribute__((section("sfrs"), address(0xBF800120)));
extern volatile uint32_t        CCP1CON3CLR __attribute__((section("sfrs"),address(0xBF800124)));
extern volatile uint32_t        CCP1CON3SET __attribute__((section("sfrs"),address(0xBF800128)));
extern volatile uint32_t        CCP1CON3INV __attribute__((section("sfrs"),address(0xBF80012C)));
#define CCP1STAT CCP1STAT
extern volatile uint32_t   CCP1STAT __attribute__((section("sfrs"), address(0xBF800130)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP1STATbits_t;
extern volatile __CCP1STATbits_t CCP1STATbits __asm__ ("CCP1STAT") __attribute__((section("sfrs"), address(0xBF800130)));
extern volatile uint32_t        CCP1STATCLR __attribute__((section("sfrs"),address(0xBF800134)));
extern volatile uint32_t        CCP1STATSET __attribute__((section("sfrs"),address(0xBF800138)));
extern volatile uint32_t        CCP1STATINV __attribute__((section("sfrs"),address(0xBF80013C)));
#define CCP1TMR CCP1TMR
extern volatile uint32_t   CCP1TMR __attribute__((section("sfrs"), address(0xBF800140)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP1TMRbits_t;
extern volatile __CCP1TMRbits_t CCP1TMRbits __asm__ ("CCP1TMR") __attribute__((section("sfrs"), address(0xBF800140)));
extern volatile uint32_t        CCP1TMRCLR __attribute__((section("sfrs"),address(0xBF800144)));
extern volatile uint32_t        CCP1TMRSET __attribute__((section("sfrs"),address(0xBF800148)));
extern volatile uint32_t        CCP1TMRINV __attribute__((section("sfrs"),address(0xBF80014C)));
#define CCP1PR CCP1PR
extern volatile uint32_t   CCP1PR __attribute__((section("sfrs"), address(0xBF800150)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP1PRbits_t;
extern volatile __CCP1PRbits_t CCP1PRbits __asm__ ("CCP1PR") __attribute__((section("sfrs"), address(0xBF800150)));
extern volatile uint32_t        CCP1PRCLR __attribute__((section("sfrs"),address(0xBF800154)));
extern volatile uint32_t        CCP1PRSET __attribute__((section("sfrs"),address(0xBF800158)));
extern volatile uint32_t        CCP1PRINV __attribute__((section("sfrs"),address(0xBF80015C)));
#define CCP1RA CCP1RA
extern volatile uint32_t   CCP1RA __attribute__((section("sfrs"), address(0xBF800160)));
typedef struct {
  uint32_t CMPA:16;
} __CCP1RAbits_t;
extern volatile __CCP1RAbits_t CCP1RAbits __asm__ ("CCP1RA") __attribute__((section("sfrs"), address(0xBF800160)));
extern volatile uint32_t        CCP1RACLR __attribute__((section("sfrs"),address(0xBF800164)));
extern volatile uint32_t        CCP1RASET __attribute__((section("sfrs"),address(0xBF800168)));
extern volatile uint32_t        CCP1RAINV __attribute__((section("sfrs"),address(0xBF80016C)));
#define CCP1RB CCP1RB
extern volatile uint32_t   CCP1RB __attribute__((section("sfrs"), address(0xBF800170)));
typedef struct {
  uint32_t CMPB:16;
} __CCP1RBbits_t;
extern volatile __CCP1RBbits_t CCP1RBbits __asm__ ("CCP1RB") __attribute__((section("sfrs"), address(0xBF800170)));
extern volatile uint32_t        CCP1RBCLR __attribute__((section("sfrs"),address(0xBF800174)));
extern volatile uint32_t        CCP1RBSET __attribute__((section("sfrs"),address(0xBF800178)));
extern volatile uint32_t        CCP1RBINV __attribute__((section("sfrs"),address(0xBF80017C)));
#define CCP1BUF CCP1BUF
extern volatile uint32_t   CCP1BUF __attribute__((section("sfrs"), address(0xBF800180)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP1BUFbits_t;
extern volatile __CCP1BUFbits_t CCP1BUFbits __asm__ ("CCP1BUF") __attribute__((section("sfrs"), address(0xBF800180)));
extern volatile uint32_t        CCP1BUFCLR __attribute__((section("sfrs"),address(0xBF800184)));
extern volatile uint32_t        CCP1BUFSET __attribute__((section("sfrs"),address(0xBF800188)));
extern volatile uint32_t        CCP1BUFINV __attribute__((section("sfrs"),address(0xBF80018C)));
#define CCP2CON1 CCP2CON1
extern volatile uint32_t   CCP2CON1 __attribute__((section("sfrs"), address(0xBF800200)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP2CON1bits_t;
extern volatile __CCP2CON1bits_t CCP2CON1bits __asm__ ("CCP2CON1") __attribute__((section("sfrs"), address(0xBF800200)));
extern volatile uint32_t        CCP2CON1CLR __attribute__((section("sfrs"),address(0xBF800204)));
extern volatile uint32_t        CCP2CON1SET __attribute__((section("sfrs"),address(0xBF800208)));
extern volatile uint32_t        CCP2CON1INV __attribute__((section("sfrs"),address(0xBF80020C)));
#define CCP2CON2 CCP2CON2
extern volatile uint32_t   CCP2CON2 __attribute__((section("sfrs"), address(0xBF800210)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP2CON2bits_t;
extern volatile __CCP2CON2bits_t CCP2CON2bits __asm__ ("CCP2CON2") __attribute__((section("sfrs"), address(0xBF800210)));
extern volatile uint32_t        CCP2CON2CLR __attribute__((section("sfrs"),address(0xBF800214)));
extern volatile uint32_t        CCP2CON2SET __attribute__((section("sfrs"),address(0xBF800218)));
extern volatile uint32_t        CCP2CON2INV __attribute__((section("sfrs"),address(0xBF80021C)));
#define CCP2CON3 CCP2CON3
extern volatile uint32_t   CCP2CON3 __attribute__((section("sfrs"), address(0xBF800220)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP2CON3bits_t;
extern volatile __CCP2CON3bits_t CCP2CON3bits __asm__ ("CCP2CON3") __attribute__((section("sfrs"), address(0xBF800220)));
extern volatile uint32_t        CCP2CON3CLR __attribute__((section("sfrs"),address(0xBF800224)));
extern volatile uint32_t        CCP2CON3SET __attribute__((section("sfrs"),address(0xBF800228)));
extern volatile uint32_t        CCP2CON3INV __attribute__((section("sfrs"),address(0xBF80022C)));
#define CCP2STAT CCP2STAT
extern volatile uint32_t   CCP2STAT __attribute__((section("sfrs"), address(0xBF800230)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP2STATbits_t;
extern volatile __CCP2STATbits_t CCP2STATbits __asm__ ("CCP2STAT") __attribute__((section("sfrs"), address(0xBF800230)));
extern volatile uint32_t        CCP2STATCLR __attribute__((section("sfrs"),address(0xBF800234)));
extern volatile uint32_t        CCP2STATSET __attribute__((section("sfrs"),address(0xBF800238)));
extern volatile uint32_t        CCP2STATINV __attribute__((section("sfrs"),address(0xBF80023C)));
#define CCP2TMR CCP2TMR
extern volatile uint32_t   CCP2TMR __attribute__((section("sfrs"), address(0xBF800240)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP2TMRbits_t;
extern volatile __CCP2TMRbits_t CCP2TMRbits __asm__ ("CCP2TMR") __attribute__((section("sfrs"), address(0xBF800240)));
extern volatile uint32_t        CCP2TMRCLR __attribute__((section("sfrs"),address(0xBF800244)));
extern volatile uint32_t        CCP2TMRSET __attribute__((section("sfrs"),address(0xBF800248)));
extern volatile uint32_t        CCP2TMRINV __attribute__((section("sfrs"),address(0xBF80024C)));
#define CCP2PR CCP2PR
extern volatile uint32_t   CCP2PR __attribute__((section("sfrs"), address(0xBF800250)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP2PRbits_t;
extern volatile __CCP2PRbits_t CCP2PRbits __asm__ ("CCP2PR") __attribute__((section("sfrs"), address(0xBF800250)));
extern volatile uint32_t        CCP2PRCLR __attribute__((section("sfrs"),address(0xBF800254)));
extern volatile uint32_t        CCP2PRSET __attribute__((section("sfrs"),address(0xBF800258)));
extern volatile uint32_t        CCP2PRINV __attribute__((section("sfrs"),address(0xBF80025C)));
#define CCP2RA CCP2RA
extern volatile uint32_t   CCP2RA __attribute__((section("sfrs"), address(0xBF800260)));
typedef struct {
  uint32_t CMPA:16;
} __CCP2RAbits_t;
extern volatile __CCP2RAbits_t CCP2RAbits __asm__ ("CCP2RA") __attribute__((section("sfrs"), address(0xBF800260)));
extern volatile uint32_t        CCP2RACLR __attribute__((section("sfrs"),address(0xBF800264)));
extern volatile uint32_t        CCP2RASET __attribute__((section("sfrs"),address(0xBF800268)));
extern volatile uint32_t        CCP2RAINV __attribute__((section("sfrs"),address(0xBF80026C)));
#define CCP2RB CCP2RB
extern volatile uint32_t   CCP2RB __attribute__((section("sfrs"), address(0xBF800270)));
typedef struct {
  uint32_t CMPB:16;
} __CCP2RBbits_t;
extern volatile __CCP2RBbits_t CCP2RBbits __asm__ ("CCP2RB") __attribute__((section("sfrs"), address(0xBF800270)));
extern volatile uint32_t        CCP2RBCLR __attribute__((section("sfrs"),address(0xBF800274)));
extern volatile uint32_t        CCP2RBSET __attribute__((section("sfrs"),address(0xBF800278)));
extern volatile uint32_t        CCP2RBINV __attribute__((section("sfrs"),address(0xBF80027C)));
#define CCP2BUF CCP2BUF
extern volatile uint32_t   CCP2BUF __attribute__((section("sfrs"), address(0xBF800280)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP2BUFbits_t;
extern volatile __CCP2BUFbits_t CCP2BUFbits __asm__ ("CCP2BUF") __attribute__((section("sfrs"), address(0xBF800280)));
extern volatile uint32_t        CCP2BUFCLR __attribute__((section("sfrs"),address(0xBF800284)));
extern volatile uint32_t        CCP2BUFSET __attribute__((section("sfrs"),address(0xBF800288)));
extern volatile uint32_t        CCP2BUFINV __attribute__((section("sfrs"),address(0xBF80028C)));
#define CCP3CON1 CCP3CON1
extern volatile uint32_t   CCP3CON1 __attribute__((section("sfrs"), address(0xBF800300)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP3CON1bits_t;
extern volatile __CCP3CON1bits_t CCP3CON1bits __asm__ ("CCP3CON1") __attribute__((section("sfrs"), address(0xBF800300)));
extern volatile uint32_t        CCP3CON1CLR __attribute__((section("sfrs"),address(0xBF800304)));
extern volatile uint32_t        CCP3CON1SET __attribute__((section("sfrs"),address(0xBF800308)));
extern volatile uint32_t        CCP3CON1INV __attribute__((section("sfrs"),address(0xBF80030C)));
#define CCP3CON2 CCP3CON2
extern volatile uint32_t   CCP3CON2 __attribute__((section("sfrs"), address(0xBF800310)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP3CON2bits_t;
extern volatile __CCP3CON2bits_t CCP3CON2bits __asm__ ("CCP3CON2") __attribute__((section("sfrs"), address(0xBF800310)));
extern volatile uint32_t        CCP3CON2CLR __attribute__((section("sfrs"),address(0xBF800314)));
extern volatile uint32_t        CCP3CON2SET __attribute__((section("sfrs"),address(0xBF800318)));
extern volatile uint32_t        CCP3CON2INV __attribute__((section("sfrs"),address(0xBF80031C)));
#define CCP3CON3 CCP3CON3
extern volatile uint32_t   CCP3CON3 __attribute__((section("sfrs"), address(0xBF800320)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP3CON3bits_t;
extern volatile __CCP3CON3bits_t CCP3CON3bits __asm__ ("CCP3CON3") __attribute__((section("sfrs"), address(0xBF800320)));
extern volatile uint32_t        CCP3CON3CLR __attribute__((section("sfrs"),address(0xBF800324)));
extern volatile uint32_t        CCP3CON3SET __attribute__((section("sfrs"),address(0xBF800328)));
extern volatile uint32_t        CCP3CON3INV __attribute__((section("sfrs"),address(0xBF80032C)));
#define CCP3STAT CCP3STAT
extern volatile uint32_t   CCP3STAT __attribute__((section("sfrs"), address(0xBF800330)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP3STATbits_t;
extern volatile __CCP3STATbits_t CCP3STATbits __asm__ ("CCP3STAT") __attribute__((section("sfrs"), address(0xBF800330)));
extern volatile uint32_t        CCP3STATCLR __attribute__((section("sfrs"),address(0xBF800334)));
extern volatile uint32_t        CCP3STATSET __attribute__((section("sfrs"),address(0xBF800338)));
extern volatile uint32_t        CCP3STATINV __attribute__((section("sfrs"),address(0xBF80033C)));
#define CCP3TMR CCP3TMR
extern volatile uint32_t   CCP3TMR __attribute__((section("sfrs"), address(0xBF800340)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP3TMRbits_t;
extern volatile __CCP3TMRbits_t CCP3TMRbits __asm__ ("CCP3TMR") __attribute__((section("sfrs"), address(0xBF800340)));
extern volatile uint32_t        CCP3TMRCLR __attribute__((section("sfrs"),address(0xBF800344)));
extern volatile uint32_t        CCP3TMRSET __attribute__((section("sfrs"),address(0xBF800348)));
extern volatile uint32_t        CCP3TMRINV __attribute__((section("sfrs"),address(0xBF80034C)));
#define CCP3PR CCP3PR
extern volatile uint32_t   CCP3PR __attribute__((section("sfrs"), address(0xBF800350)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP3PRbits_t;
extern volatile __CCP3PRbits_t CCP3PRbits __asm__ ("CCP3PR") __attribute__((section("sfrs"), address(0xBF800350)));
extern volatile uint32_t        CCP3PRCLR __attribute__((section("sfrs"),address(0xBF800354)));
extern volatile uint32_t        CCP3PRSET __attribute__((section("sfrs"),address(0xBF800358)));
extern volatile uint32_t        CCP3PRINV __attribute__((section("sfrs"),address(0xBF80035C)));
#define CCP3RA CCP3RA
extern volatile uint32_t   CCP3RA __attribute__((section("sfrs"), address(0xBF800360)));
typedef struct {
  uint32_t CMPA:16;
} __CCP3RAbits_t;
extern volatile __CCP3RAbits_t CCP3RAbits __asm__ ("CCP3RA") __attribute__((section("sfrs"), address(0xBF800360)));
extern volatile uint32_t        CCP3RACLR __attribute__((section("sfrs"),address(0xBF800364)));
extern volatile uint32_t        CCP3RASET __attribute__((section("sfrs"),address(0xBF800368)));
extern volatile uint32_t        CCP3RAINV __attribute__((section("sfrs"),address(0xBF80036C)));
#define CCP3RB CCP3RB
extern volatile uint32_t   CCP3RB __attribute__((section("sfrs"), address(0xBF800370)));
typedef struct {
  uint32_t CMPB:16;
} __CCP3RBbits_t;
extern volatile __CCP3RBbits_t CCP3RBbits __asm__ ("CCP3RB") __attribute__((section("sfrs"), address(0xBF800370)));
extern volatile uint32_t        CCP3RBCLR __attribute__((section("sfrs"),address(0xBF800374)));
extern volatile uint32_t        CCP3RBSET __attribute__((section("sfrs"),address(0xBF800378)));
extern volatile uint32_t        CCP3RBINV __attribute__((section("sfrs"),address(0xBF80037C)));
#define CCP3BUF CCP3BUF
extern volatile uint32_t   CCP3BUF __attribute__((section("sfrs"), address(0xBF800380)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP3BUFbits_t;
extern volatile __CCP3BUFbits_t CCP3BUFbits __asm__ ("CCP3BUF") __attribute__((section("sfrs"), address(0xBF800380)));
extern volatile uint32_t        CCP3BUFCLR __attribute__((section("sfrs"),address(0xBF800384)));
extern volatile uint32_t        CCP3BUFSET __attribute__((section("sfrs"),address(0xBF800388)));
extern volatile uint32_t        CCP3BUFINV __attribute__((section("sfrs"),address(0xBF80038C)));
#define U1MODE U1MODE
extern volatile uint32_t   U1MODE __attribute__((section("sfrs"), address(0xBF800600)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t OVFDIS:1;
    uint32_t CLKSEL:2;
    uint32_t :3;
    uint32_t ACTIVE:1;
    uint32_t SLPEN:1;
  };
  struct {
    uint32_t :16;
    uint32_t RUNOVF:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs"), address(0xBF800600)));
extern volatile uint32_t        U1MODECLR __attribute__((section("sfrs"),address(0xBF800604)));
extern volatile uint32_t        U1MODESET __attribute__((section("sfrs"),address(0xBF800608)));
extern volatile uint32_t        U1MODEINV __attribute__((section("sfrs"),address(0xBF80060C)));
#define U1STA U1STA
extern volatile uint32_t   U1STA __attribute__((section("sfrs"), address(0xBF800610)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t MASK:8;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs"), address(0xBF800610)));
extern volatile uint32_t        U1STACLR __attribute__((section("sfrs"),address(0xBF800614)));
extern volatile uint32_t        U1STASET __attribute__((section("sfrs"),address(0xBF800618)));
extern volatile uint32_t        U1STAINV __attribute__((section("sfrs"),address(0xBF80061C)));
#define U1TXREG U1TXREG
extern volatile uint32_t   U1TXREG __attribute__((section("sfrs"), address(0xBF800620)));
#define U1RXREG U1RXREG
extern volatile uint32_t   U1RXREG __attribute__((section("sfrs"), address(0xBF800630)));
#define U1BRG U1BRG
extern volatile uint32_t   U1BRG __attribute__((section("sfrs"), address(0xBF800640)));
typedef struct {
  uint32_t BRG:20;
} __U1BRGbits_t;
extern volatile __U1BRGbits_t U1BRGbits __asm__ ("U1BRG") __attribute__((section("sfrs"), address(0xBF800640)));
extern volatile uint32_t        U1BRGCLR __attribute__((section("sfrs"),address(0xBF800644)));
extern volatile uint32_t        U1BRGSET __attribute__((section("sfrs"),address(0xBF800648)));
extern volatile uint32_t        U1BRGINV __attribute__((section("sfrs"),address(0xBF80064C)));
#define U2MODE U2MODE
extern volatile uint32_t   U2MODE __attribute__((section("sfrs"), address(0xBF800680)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t OVFDIS:1;
    uint32_t CLKSEL:2;
    uint32_t :3;
    uint32_t ACTIVE:1;
    uint32_t SLPEN:1;
  };
  struct {
    uint32_t :16;
    uint32_t RUNOVF:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs"), address(0xBF800680)));
extern volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF800684)));
extern volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF800688)));
extern volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF80068C)));
#define U2STA U2STA
extern volatile uint32_t   U2STA __attribute__((section("sfrs"), address(0xBF800690)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t MASK:8;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs"), address(0xBF800690)));
extern volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF800694)));
extern volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF800698)));
extern volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF80069C)));
#define U2TXREG U2TXREG
extern volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF8006A0)));
#define U2RXREG U2RXREG
extern volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF8006B0)));
#define U2BRG U2BRG
extern volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF8006C0)));
typedef struct {
  uint32_t BRG:20;
} __U2BRGbits_t;
extern volatile __U2BRGbits_t U2BRGbits __asm__ ("U2BRG") __attribute__((section("sfrs"), address(0xBF8006C0)));
extern volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF8006C4)));
extern volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF8006C8)));
extern volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF8006CC)));
#define ADC1BUF0 ADC1BUF0
extern volatile uint32_t   ADC1BUF0 __attribute__((section("sfrs"), address(0xBF800700)));
extern volatile uint32_t        ADC1BUF0CLR __attribute__((section("sfrs"),address(0xBF800704)));
extern volatile uint32_t        ADC1BUF0SET __attribute__((section("sfrs"),address(0xBF800708)));
extern volatile uint32_t        ADC1BUF0INV __attribute__((section("sfrs"),address(0xBF80070C)));
#define ADC1BUF1 ADC1BUF1
extern volatile uint32_t   ADC1BUF1 __attribute__((section("sfrs"), address(0xBF800710)));
extern volatile uint32_t        ADC1BUF1CLR __attribute__((section("sfrs"),address(0xBF800714)));
extern volatile uint32_t        ADC1BUF1SET __attribute__((section("sfrs"),address(0xBF800718)));
extern volatile uint32_t        ADC1BUF1INV __attribute__((section("sfrs"),address(0xBF80071C)));
#define ADC1BUF2 ADC1BUF2
extern volatile uint32_t   ADC1BUF2 __attribute__((section("sfrs"), address(0xBF800720)));
extern volatile uint32_t        ADC1BUF2CLR __attribute__((section("sfrs"),address(0xBF800724)));
extern volatile uint32_t        ADC1BUF2SET __attribute__((section("sfrs"),address(0xBF800728)));
extern volatile uint32_t        ADC1BUF2INV __attribute__((section("sfrs"),address(0xBF80072C)));
#define ADC1BUF3 ADC1BUF3
extern volatile uint32_t   ADC1BUF3 __attribute__((section("sfrs"), address(0xBF800730)));
extern volatile uint32_t        ADC1BUF3CLR __attribute__((section("sfrs"),address(0xBF800734)));
extern volatile uint32_t        ADC1BUF3SET __attribute__((section("sfrs"),address(0xBF800738)));
extern volatile uint32_t        ADC1BUF3INV __attribute__((section("sfrs"),address(0xBF80073C)));
#define ADC1BUF4 ADC1BUF4
extern volatile uint32_t   ADC1BUF4 __attribute__((section("sfrs"), address(0xBF800740)));
extern volatile uint32_t        ADC1BUF4CLR __attribute__((section("sfrs"),address(0xBF800744)));
extern volatile uint32_t        ADC1BUF4SET __attribute__((section("sfrs"),address(0xBF800748)));
extern volatile uint32_t        ADC1BUF4INV __attribute__((section("sfrs"),address(0xBF80074C)));
#define ADC1BUF5 ADC1BUF5
extern volatile uint32_t   ADC1BUF5 __attribute__((section("sfrs"), address(0xBF800750)));
extern volatile uint32_t        ADC1BUF5CLR __attribute__((section("sfrs"),address(0xBF800754)));
extern volatile uint32_t        ADC1BUF5SET __attribute__((section("sfrs"),address(0xBF800758)));
extern volatile uint32_t        ADC1BUF5INV __attribute__((section("sfrs"),address(0xBF80075C)));
#define ADC1BUF6 ADC1BUF6
extern volatile uint32_t   ADC1BUF6 __attribute__((section("sfrs"), address(0xBF800760)));
extern volatile uint32_t        ADC1BUF6CLR __attribute__((section("sfrs"),address(0xBF800764)));
extern volatile uint32_t        ADC1BUF6SET __attribute__((section("sfrs"),address(0xBF800768)));
extern volatile uint32_t        ADC1BUF6INV __attribute__((section("sfrs"),address(0xBF80076C)));
#define ADC1BUF7 ADC1BUF7
extern volatile uint32_t   ADC1BUF7 __attribute__((section("sfrs"), address(0xBF800770)));
extern volatile uint32_t        ADC1BUF7CLR __attribute__((section("sfrs"),address(0xBF800774)));
extern volatile uint32_t        ADC1BUF7SET __attribute__((section("sfrs"),address(0xBF800778)));
extern volatile uint32_t        ADC1BUF7INV __attribute__((section("sfrs"),address(0xBF80077C)));
#define ADC1BUF8 ADC1BUF8
extern volatile uint32_t   ADC1BUF8 __attribute__((section("sfrs"), address(0xBF800780)));
extern volatile uint32_t        ADC1BUF8CLR __attribute__((section("sfrs"),address(0xBF800784)));
extern volatile uint32_t        ADC1BUF8SET __attribute__((section("sfrs"),address(0xBF800788)));
extern volatile uint32_t        ADC1BUF8INV __attribute__((section("sfrs"),address(0xBF80078C)));
#define ADC1BUF9 ADC1BUF9
extern volatile uint32_t   ADC1BUF9 __attribute__((section("sfrs"), address(0xBF800790)));
extern volatile uint32_t        ADC1BUF9CLR __attribute__((section("sfrs"),address(0xBF800794)));
extern volatile uint32_t        ADC1BUF9SET __attribute__((section("sfrs"),address(0xBF800798)));
extern volatile uint32_t        ADC1BUF9INV __attribute__((section("sfrs"),address(0xBF80079C)));
#define ADC1BUF10 ADC1BUF10
extern volatile uint32_t   ADC1BUF10 __attribute__((section("sfrs"), address(0xBF8007A0)));
extern volatile uint32_t        ADC1BUF10CLR __attribute__((section("sfrs"),address(0xBF8007A4)));
extern volatile uint32_t        ADC1BUF10SET __attribute__((section("sfrs"),address(0xBF8007A8)));
extern volatile uint32_t        ADC1BUF10INV __attribute__((section("sfrs"),address(0xBF8007AC)));
#define ADC1BUF11 ADC1BUF11
extern volatile uint32_t   ADC1BUF11 __attribute__((section("sfrs"), address(0xBF8007B0)));
extern volatile uint32_t        ADC1BUF11CLR __attribute__((section("sfrs"),address(0xBF8007B4)));
extern volatile uint32_t        ADC1BUF11SET __attribute__((section("sfrs"),address(0xBF8007B8)));
extern volatile uint32_t        ADC1BUF11INV __attribute__((section("sfrs"),address(0xBF8007BC)));
#define ADC1BUF12 ADC1BUF12
extern volatile uint32_t   ADC1BUF12 __attribute__((section("sfrs"), address(0xBF8007C0)));
extern volatile uint32_t        ADC1BUF12CLR __attribute__((section("sfrs"),address(0xBF8007C4)));
extern volatile uint32_t        ADC1BUF12SET __attribute__((section("sfrs"),address(0xBF8007C8)));
extern volatile uint32_t        ADC1BUF12INV __attribute__((section("sfrs"),address(0xBF8007CC)));
#define ADC1BUF13 ADC1BUF13
extern volatile uint32_t   ADC1BUF13 __attribute__((section("sfrs"), address(0xBF8007D0)));
extern volatile uint32_t        ADC1BUF13CLR __attribute__((section("sfrs"),address(0xBF8007D4)));
extern volatile uint32_t        ADC1BUF13SET __attribute__((section("sfrs"),address(0xBF8007D8)));
extern volatile uint32_t        ADC1BUF13INV __attribute__((section("sfrs"),address(0xBF8007DC)));
#define ADC1BUF14 ADC1BUF14
extern volatile uint32_t   ADC1BUF14 __attribute__((section("sfrs"), address(0xBF8007E0)));
extern volatile uint32_t        ADC1BUF14CLR __attribute__((section("sfrs"),address(0xBF8007E4)));
extern volatile uint32_t        ADC1BUF14SET __attribute__((section("sfrs"),address(0xBF8007E8)));
extern volatile uint32_t        ADC1BUF14INV __attribute__((section("sfrs"),address(0xBF8007EC)));
#define ADC1BUF15 ADC1BUF15
extern volatile uint32_t   ADC1BUF15 __attribute__((section("sfrs"), address(0xBF8007F0)));
extern volatile uint32_t        ADC1BUF15CLR __attribute__((section("sfrs"),address(0xBF8007F4)));
extern volatile uint32_t        ADC1BUF15SET __attribute__((section("sfrs"),address(0xBF8007F8)));
extern volatile uint32_t        ADC1BUF15INV __attribute__((section("sfrs"),address(0xBF8007FC)));
#define AD1CON1 AD1CON1
extern volatile uint32_t   AD1CON1 __attribute__((section("sfrs"), address(0xBF800800)));
typedef struct {
  uint32_t DONE:1;
  uint32_t SAMP:1;
  uint32_t ASAM:1;
  uint32_t MODE12:1;
  uint32_t SSRC:4;
  uint32_t FORM:3;
  uint32_t :2;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs"), address(0xBF800800)));
extern volatile uint32_t        AD1CON1CLR __attribute__((section("sfrs"),address(0xBF800804)));
extern volatile uint32_t        AD1CON1SET __attribute__((section("sfrs"),address(0xBF800808)));
extern volatile uint32_t        AD1CON1INV __attribute__((section("sfrs"),address(0xBF80080C)));
#define AD1CON2 AD1CON2
extern volatile uint32_t   AD1CON2 __attribute__((section("sfrs"), address(0xBF800810)));
typedef struct {
  uint32_t :1;
  uint32_t BUFM:1;
  uint32_t SMPI:5;
  uint32_t BUFS:1;
  uint32_t :2;
  uint32_t CSCNA:1;
  uint32_t BUFREGEN:1;
  uint32_t OFFCAL:1;
  uint32_t VCFG:3;
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2") __attribute__((section("sfrs"), address(0xBF800810)));
extern volatile uint32_t        AD1CON2CLR __attribute__((section("sfrs"),address(0xBF800814)));
extern volatile uint32_t        AD1CON2SET __attribute__((section("sfrs"),address(0xBF800818)));
extern volatile uint32_t        AD1CON2INV __attribute__((section("sfrs"),address(0xBF80081C)));
#define AD1CON3 AD1CON3
extern volatile uint32_t   AD1CON3 __attribute__((section("sfrs"), address(0xBF800820)));
typedef struct {
  uint32_t ADCS:8;
  uint32_t SAMC:5;
  uint32_t :1;
  uint32_t EXTSAM:1;
  uint32_t ADRC:1;
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3") __attribute__((section("sfrs"), address(0xBF800820)));
extern volatile uint32_t        AD1CON3CLR __attribute__((section("sfrs"),address(0xBF800824)));
extern volatile uint32_t        AD1CON3SET __attribute__((section("sfrs"),address(0xBF800828)));
extern volatile uint32_t        AD1CON3INV __attribute__((section("sfrs"),address(0xBF80082C)));
#define AD1CHS AD1CHS
extern volatile uint32_t   AD1CHS __attribute__((section("sfrs"), address(0xBF800830)));
typedef struct {
  uint32_t CH0SA:5;
  uint32_t CH0NA:3;
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS") __attribute__((section("sfrs"), address(0xBF800830)));
extern volatile uint32_t        AD1CHSCLR __attribute__((section("sfrs"),address(0xBF800834)));
extern volatile uint32_t        AD1CHSSET __attribute__((section("sfrs"),address(0xBF800838)));
extern volatile uint32_t        AD1CHSINV __attribute__((section("sfrs"),address(0xBF80083C)));
#define AD1CSS AD1CSS
extern volatile uint32_t   AD1CSS __attribute__((section("sfrs"), address(0xBF800840)));
typedef struct {
  uint32_t CSS0:1;
  uint32_t CSS1:1;
  uint32_t CSS2:1;
  uint32_t CSS3:1;
  uint32_t CSS4:1;
  uint32_t CSS5:1;
  uint32_t CSS6:1;
  uint32_t CSS7:1;
  uint32_t CSS8:1;
  uint32_t CSS9:1;
  uint32_t CSS10:1;
  uint32_t :17;
  uint32_t CSS28:1;
  uint32_t CSS29:1;
  uint32_t CSS30:1;
} __AD1CSSbits_t;
extern volatile __AD1CSSbits_t AD1CSSbits __asm__ ("AD1CSS") __attribute__((section("sfrs"), address(0xBF800840)));
extern volatile uint32_t        AD1CSSCLR __attribute__((section("sfrs"),address(0xBF800844)));
extern volatile uint32_t        AD1CSSSET __attribute__((section("sfrs"),address(0xBF800848)));
extern volatile uint32_t        AD1CSSINV __attribute__((section("sfrs"),address(0xBF80084C)));
#define AD1CON5 AD1CON5
extern volatile uint32_t   AD1CON5 __attribute__((section("sfrs"), address(0xBF800860)));
typedef struct {
  uint32_t CM:2;
  uint32_t WM:2;
  uint32_t :4;
  uint32_t ASINT:2;
  uint32_t :2;
  uint32_t BGREQ:1;
  uint32_t :1;
  uint32_t LPEN:1;
  uint32_t ASEN:1;
} __AD1CON5bits_t;
extern volatile __AD1CON5bits_t AD1CON5bits __asm__ ("AD1CON5") __attribute__((section("sfrs"), address(0xBF800860)));
extern volatile uint32_t        AD1CON5CLR __attribute__((section("sfrs"),address(0xBF800864)));
extern volatile uint32_t        AD1CON5SET __attribute__((section("sfrs"),address(0xBF800868)));
extern volatile uint32_t        AD1CON5INV __attribute__((section("sfrs"),address(0xBF80086C)));
#define AD1CHIT AD1CHIT
extern volatile uint32_t   AD1CHIT __attribute__((section("sfrs"), address(0xBF800870)));
typedef struct {
  uint32_t CHH0:1;
  uint32_t CHH1:1;
  uint32_t CHH2:1;
  uint32_t CHH3:1;
  uint32_t CHH4:1;
  uint32_t CHH5:1;
  uint32_t CHH6:1;
  uint32_t CHH7:1;
  uint32_t CHH8:1;
  uint32_t CHH9:1;
  uint32_t CHH10:1;
} __AD1CHITbits_t;
extern volatile __AD1CHITbits_t AD1CHITbits __asm__ ("AD1CHIT") __attribute__((section("sfrs"), address(0xBF800870)));
extern volatile uint32_t        AD1CHITCLR __attribute__((section("sfrs"),address(0xBF800874)));
extern volatile uint32_t        AD1CHITSET __attribute__((section("sfrs"),address(0xBF800878)));
extern volatile uint32_t        AD1CHITINV __attribute__((section("sfrs"),address(0xBF80087C)));
#define CMSTAT CMSTAT
extern volatile uint32_t   CMSTAT __attribute__((section("sfrs"), address(0xBF800900)));
typedef struct {
  uint32_t C1OUT:1;
  uint32_t C2OUT:1;
  uint32_t :6;
  uint32_t CVREFSEL:1;
  uint32_t :4;
  uint32_t SIDL:1;
  uint32_t :2;
  uint32_t C1EVT:1;
  uint32_t C2EVT:1;
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs"), address(0xBF800900)));
extern volatile uint32_t        CMSTATCLR __attribute__((section("sfrs"),address(0xBF800904)));
extern volatile uint32_t        CMSTATSET __attribute__((section("sfrs"),address(0xBF800908)));
extern volatile uint32_t        CMSTATINV __attribute__((section("sfrs"),address(0xBF80090C)));
#define CM1CON CM1CON
extern volatile uint32_t   CM1CON __attribute__((section("sfrs"), address(0xBF800910)));
typedef struct {
  uint32_t CCH:2;
  uint32_t :2;
  uint32_t CREF:1;
  uint32_t :1;
  uint32_t EVPOL:2;
  uint32_t COUT:1;
  uint32_t CEVT:1;
  uint32_t :3;
  uint32_t CPOL:1;
  uint32_t COE:1;
  uint32_t ON:1;
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs"), address(0xBF800910)));
extern volatile uint32_t        CM1CONCLR __attribute__((section("sfrs"),address(0xBF800914)));
extern volatile uint32_t        CM1CONSET __attribute__((section("sfrs"),address(0xBF800918)));
extern volatile uint32_t        CM1CONINV __attribute__((section("sfrs"),address(0xBF80091C)));
#define CM2CON CM2CON
extern volatile uint32_t   CM2CON __attribute__((section("sfrs"), address(0xBF800930)));
typedef struct {
  uint32_t CCH:2;
  uint32_t :2;
  uint32_t CREF:1;
  uint32_t :1;
  uint32_t EVPOL:2;
  uint32_t COUT:1;
  uint32_t CEVT:1;
  uint32_t :3;
  uint32_t CPOL:1;
  uint32_t COE:1;
  uint32_t ON:1;
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs"), address(0xBF800930)));
extern volatile uint32_t        CM2CONCLR __attribute__((section("sfrs"),address(0xBF800934)));
extern volatile uint32_t        CM2CONSET __attribute__((section("sfrs"),address(0xBF800938)));
extern volatile uint32_t        CM2CONINV __attribute__((section("sfrs"),address(0xBF80093C)));
#define DAC1CON DAC1CON
extern volatile uint32_t   DAC1CON __attribute__((section("sfrs"), address(0xBF800980)));
typedef struct {
  uint32_t REFSEL:2;
  uint32_t :6;
  uint32_t DACOE:1;
  uint32_t :6;
  uint32_t ON:1;
  uint32_t DACDAT:16;
} __DAC1CONbits_t;
extern volatile __DAC1CONbits_t DAC1CONbits __asm__ ("DAC1CON") __attribute__((section("sfrs"), address(0xBF800980)));
extern volatile uint32_t        DAC1CONCLR __attribute__((section("sfrs"),address(0xBF800984)));
extern volatile uint32_t        DAC1CONSET __attribute__((section("sfrs"),address(0xBF800988)));
extern volatile uint32_t        DAC1CONINV __attribute__((section("sfrs"),address(0xBF80098C)));
#define CRCCON CRCCON
extern volatile uint32_t   CRCCON __attribute__((section("sfrs"), address(0xBF800A00)));
typedef struct {
  uint32_t :2;
  uint32_t MOD:1;
  uint32_t LENDIAN:1;
  uint32_t CRCGO:1;
  uint32_t CRCISEL:1;
  uint32_t CRCMPT:1;
  uint32_t CRCFUL:1;
  uint32_t VWORD:5;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t PLEN:5;
  uint32_t :3;
  uint32_t DWIDTH:5;
} __CRCCONbits_t;
extern volatile __CRCCONbits_t CRCCONbits __asm__ ("CRCCON") __attribute__((section("sfrs"), address(0xBF800A00)));
extern volatile uint32_t        CRCCONCLR __attribute__((section("sfrs"),address(0xBF800A04)));
extern volatile uint32_t        CRCCONSET __attribute__((section("sfrs"),address(0xBF800A08)));
extern volatile uint32_t        CRCCONINV __attribute__((section("sfrs"),address(0xBF800A0C)));
#define CRCXOR CRCXOR
extern volatile uint32_t   CRCXOR __attribute__((section("sfrs"), address(0xBF800A10)));
typedef struct {
  uint32_t :1;
  uint32_t X1:1;
  uint32_t X2:1;
  uint32_t X3:1;
  uint32_t X4:1;
  uint32_t X5:1;
  uint32_t X6:1;
  uint32_t X7:1;
  uint32_t X8:1;
  uint32_t X9:1;
  uint32_t X10:1;
  uint32_t X11:1;
  uint32_t X12:1;
  uint32_t X13:1;
  uint32_t X14:1;
  uint32_t X15:1;
  uint32_t X16:1;
  uint32_t X17:1;
  uint32_t X18:1;
  uint32_t X19:1;
  uint32_t X20:1;
  uint32_t X21:1;
  uint32_t X22:1;
  uint32_t X23:1;
  uint32_t X24:1;
  uint32_t X25:1;
  uint32_t X26:1;
  uint32_t X27:1;
  uint32_t X28:1;
  uint32_t X29:1;
  uint32_t X30:1;
  uint32_t X31:1;
} __CRCXORbits_t;
extern volatile __CRCXORbits_t CRCXORbits __asm__ ("CRCXOR") __attribute__((section("sfrs"), address(0xBF800A10)));
extern volatile uint32_t        CRCXORCLR __attribute__((section("sfrs"),address(0xBF800A14)));
extern volatile uint32_t        CRCXORSET __attribute__((section("sfrs"),address(0xBF800A18)));
extern volatile uint32_t        CRCXORINV __attribute__((section("sfrs"),address(0xBF800A1C)));
#define CRCDAT CRCDAT
extern volatile uint32_t   CRCDAT __attribute__((section("sfrs"), address(0xBF800A20)));
typedef struct {
  uint32_t CRCDAT:32;
} __CRCDATbits_t;
extern volatile __CRCDATbits_t CRCDATbits __asm__ ("CRCDAT") __attribute__((section("sfrs"), address(0xBF800A20)));
extern volatile uint32_t        CRCDATCLR __attribute__((section("sfrs"),address(0xBF800A24)));
extern volatile uint32_t        CRCDATSET __attribute__((section("sfrs"),address(0xBF800A28)));
extern volatile uint32_t        CRCDATINV __attribute__((section("sfrs"),address(0xBF800A2C)));
#define CRCWDAT CRCWDAT
extern volatile uint32_t   CRCWDAT __attribute__((section("sfrs"), address(0xBF800A30)));
typedef struct {
  uint32_t CRCWDAT:32;
} __CRCWDATbits_t;
extern volatile __CRCWDATbits_t CRCWDATbits __asm__ ("CRCWDAT") __attribute__((section("sfrs"), address(0xBF800A30)));
extern volatile uint32_t        CRCWDATCLR __attribute__((section("sfrs"),address(0xBF800A34)));
extern volatile uint32_t        CRCWDATSET __attribute__((section("sfrs"),address(0xBF800A38)));
extern volatile uint32_t        CRCWDATINV __attribute__((section("sfrs"),address(0xBF800A3C)));
#define CLC1CON CLC1CON
extern volatile uint32_t   CLC1CON __attribute__((section("sfrs"), address(0xBF800A80)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC1CONbits_t;
extern volatile __CLC1CONbits_t CLC1CONbits __asm__ ("CLC1CON") __attribute__((section("sfrs"), address(0xBF800A80)));
extern volatile uint32_t        CLC1CONCLR __attribute__((section("sfrs"),address(0xBF800A84)));
extern volatile uint32_t        CLC1CONSET __attribute__((section("sfrs"),address(0xBF800A88)));
extern volatile uint32_t        CLC1CONINV __attribute__((section("sfrs"),address(0xBF800A8C)));
#define CLC1SEL CLC1SEL
extern volatile uint32_t   CLC1SEL __attribute__((section("sfrs"), address(0xBF800A90)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC1SELbits_t;
extern volatile __CLC1SELbits_t CLC1SELbits __asm__ ("CLC1SEL") __attribute__((section("sfrs"), address(0xBF800A90)));
extern volatile uint32_t        CLC1SELCLR __attribute__((section("sfrs"),address(0xBF800A94)));
extern volatile uint32_t        CLC1SELSET __attribute__((section("sfrs"),address(0xBF800A98)));
extern volatile uint32_t        CLC1SELINV __attribute__((section("sfrs"),address(0xBF800A9C)));
#define CLC1GLS CLC1GLS
extern volatile uint32_t   CLC1GLS __attribute__((section("sfrs"), address(0xBF800AA0)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC1GLSbits_t;
extern volatile __CLC1GLSbits_t CLC1GLSbits __asm__ ("CLC1GLS") __attribute__((section("sfrs"), address(0xBF800AA0)));
extern volatile uint32_t        CLC1GLSCLR __attribute__((section("sfrs"),address(0xBF800AA4)));
extern volatile uint32_t        CLC1GLSSET __attribute__((section("sfrs"),address(0xBF800AA8)));
extern volatile uint32_t        CLC1GLSINV __attribute__((section("sfrs"),address(0xBF800AAC)));
#define CLC2CON CLC2CON
extern volatile uint32_t   CLC2CON __attribute__((section("sfrs"), address(0xBF800B00)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC2CONbits_t;
extern volatile __CLC2CONbits_t CLC2CONbits __asm__ ("CLC2CON") __attribute__((section("sfrs"), address(0xBF800B00)));
extern volatile uint32_t        CLC2CONCLR __attribute__((section("sfrs"),address(0xBF800B04)));
extern volatile uint32_t        CLC2CONSET __attribute__((section("sfrs"),address(0xBF800B08)));
extern volatile uint32_t        CLC2CONINV __attribute__((section("sfrs"),address(0xBF800B0C)));
#define CLC2SEL CLC2SEL
extern volatile uint32_t   CLC2SEL __attribute__((section("sfrs"), address(0xBF800B10)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC2SELbits_t;
extern volatile __CLC2SELbits_t CLC2SELbits __asm__ ("CLC2SEL") __attribute__((section("sfrs"), address(0xBF800B10)));
extern volatile uint32_t        CLC2SELCLR __attribute__((section("sfrs"),address(0xBF800B14)));
extern volatile uint32_t        CLC2SELSET __attribute__((section("sfrs"),address(0xBF800B18)));
extern volatile uint32_t        CLC2SELINV __attribute__((section("sfrs"),address(0xBF800B1C)));
#define CLC2GLS CLC2GLS
extern volatile uint32_t   CLC2GLS __attribute__((section("sfrs"), address(0xBF800B20)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC2GLSbits_t;
extern volatile __CLC2GLSbits_t CLC2GLSbits __asm__ ("CLC2GLS") __attribute__((section("sfrs"), address(0xBF800B20)));
extern volatile uint32_t        CLC2GLSCLR __attribute__((section("sfrs"),address(0xBF800B24)));
extern volatile uint32_t        CLC2GLSSET __attribute__((section("sfrs"),address(0xBF800B28)));
extern volatile uint32_t        CLC2GLSINV __attribute__((section("sfrs"),address(0xBF800B2C)));
#define OSCCON OSCCON
extern volatile uint32_t   OSCCON __attribute__((section("sfrs"), address(0xBF802000)));
typedef struct {
  uint32_t OSWEN:1;
  uint32_t SOSCEN:1;
  uint32_t :1;
  uint32_t CF:1;
  uint32_t SLPEN:1;
  uint32_t :2;
  uint32_t CLKLOCK:1;
  uint32_t NOSC:3;
  uint32_t :1;
  uint32_t COSC:3;
  uint32_t :9;
  uint32_t FRCDIV:3;
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs"), address(0xBF802000)));
extern volatile uint32_t        OSCCONCLR __attribute__((section("sfrs"),address(0xBF802004)));
extern volatile uint32_t        OSCCONSET __attribute__((section("sfrs"),address(0xBF802008)));
extern volatile uint32_t        OSCCONINV __attribute__((section("sfrs"),address(0xBF80200C)));
#define SPLLCON SPLLCON
extern volatile uint32_t   SPLLCON __attribute__((section("sfrs"), address(0xBF802020)));
typedef struct {
  uint32_t :7;
  uint32_t PLLICLK:1;
  uint32_t :8;
  uint32_t PLLMULT:7;
  uint32_t :1;
  uint32_t PLLODIV:3;
} __SPLLCONbits_t;
extern volatile __SPLLCONbits_t SPLLCONbits __asm__ ("SPLLCON") __attribute__((section("sfrs"), address(0xBF802020)));
extern volatile uint32_t        SPLLCONCLR __attribute__((section("sfrs"),address(0xBF802024)));
extern volatile uint32_t        SPLLCONSET __attribute__((section("sfrs"),address(0xBF802028)));
extern volatile uint32_t        SPLLCONINV __attribute__((section("sfrs"),address(0xBF80202C)));
#define RCON RCON
extern volatile uint32_t   RCON __attribute__((section("sfrs"), address(0xBF802060)));
typedef struct {
  uint32_t POR:1;
  uint32_t BOR:1;
  uint32_t IDLE:1;
  uint32_t SLEEP:1;
  uint32_t WDTO:1;
  uint32_t :1;
  uint32_t SWR:1;
  uint32_t EXTR:1;
  uint32_t :1;
  uint32_t CMR:1;
  uint32_t :16;
  uint32_t BCFGFAIL:1;
  uint32_t BCFGERR:1;
  uint32_t :2;
  uint32_t PORCORE:1;
  uint32_t PORIO:1;
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs"), address(0xBF802060)));
extern volatile uint32_t        RCONCLR __attribute__((section("sfrs"),address(0xBF802064)));
extern volatile uint32_t        RCONSET __attribute__((section("sfrs"),address(0xBF802068)));
extern volatile uint32_t        RCONINV __attribute__((section("sfrs"),address(0xBF80206C)));
#define RSWRST RSWRST
extern volatile uint32_t   RSWRST __attribute__((section("sfrs"), address(0xBF802070)));
typedef struct {
  uint32_t SWRST:1;
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs"), address(0xBF802070)));
extern volatile uint32_t        RSWRSTCLR __attribute__((section("sfrs"),address(0xBF802074)));
extern volatile uint32_t        RSWRSTSET __attribute__((section("sfrs"),address(0xBF802078)));
extern volatile uint32_t        RSWRSTINV __attribute__((section("sfrs"),address(0xBF80207C)));
#define RNMICON RNMICON
extern volatile uint32_t   RNMICON __attribute__((section("sfrs"), address(0xBF802080)));
typedef union {
  struct {
    uint32_t NMICNT:16;
    uint32_t WDTS:1;
    uint32_t CF:1;
    uint32_t LVD:1;
    uint32_t GNMI:1;
    uint32_t :3;
    uint32_t SWNMI:1;
    uint32_t WDTO:1;
  };
  struct {
    uint32_t :24;
    uint32_t WDTR:1;
  };
} __RNMICONbits_t;
extern volatile __RNMICONbits_t RNMICONbits __asm__ ("RNMICON") __attribute__((section("sfrs"), address(0xBF802080)));
extern volatile uint32_t        RNMICONCLR __attribute__((section("sfrs"),address(0xBF802084)));
extern volatile uint32_t        RNMICONSET __attribute__((section("sfrs"),address(0xBF802088)));
extern volatile uint32_t        RNMICONINV __attribute__((section("sfrs"),address(0xBF80208C)));
#define PWRCON PWRCON
extern volatile uint32_t   PWRCON __attribute__((section("sfrs"), address(0xBF802090)));
typedef struct {
  uint32_t VREGS:1;
  uint32_t RETEN:1;
  uint32_t SBOREN:1;
} __PWRCONbits_t;
extern volatile __PWRCONbits_t PWRCONbits __asm__ ("PWRCON") __attribute__((section("sfrs"), address(0xBF802090)));
extern volatile uint32_t        PWRCONCLR __attribute__((section("sfrs"),address(0xBF802094)));
extern volatile uint32_t        PWRCONSET __attribute__((section("sfrs"),address(0xBF802098)));
extern volatile uint32_t        PWRCONINV __attribute__((section("sfrs"),address(0xBF80209C)));
#define REFO1CON REFO1CON
extern volatile uint32_t   REFO1CON __attribute__((section("sfrs"), address(0xBF8020A0)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO1CONbits_t;
extern volatile __REFO1CONbits_t REFO1CONbits __asm__ ("REFO1CON") __attribute__((section("sfrs"), address(0xBF8020A0)));
extern volatile uint32_t        REFO1CONCLR __attribute__((section("sfrs"),address(0xBF8020A4)));
extern volatile uint32_t        REFO1CONSET __attribute__((section("sfrs"),address(0xBF8020A8)));
extern volatile uint32_t        REFO1CONINV __attribute__((section("sfrs"),address(0xBF8020AC)));
#define REFO1TRIM REFO1TRIM
extern volatile uint32_t   REFO1TRIM __attribute__((section("sfrs"), address(0xBF8020B0)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO1TRIMbits_t;
extern volatile __REFO1TRIMbits_t REFO1TRIMbits __asm__ ("REFO1TRIM") __attribute__((section("sfrs"), address(0xBF8020B0)));
extern volatile uint32_t        REFO1TRIMCLR __attribute__((section("sfrs"),address(0xBF8020B4)));
extern volatile uint32_t        REFO1TRIMSET __attribute__((section("sfrs"),address(0xBF8020B8)));
extern volatile uint32_t        REFO1TRIMINV __attribute__((section("sfrs"),address(0xBF8020BC)));
#define CLKSTAT CLKSTAT
extern volatile uint32_t   CLKSTAT __attribute__((section("sfrs"), address(0xBF8020F0)));
typedef union {
  struct {
    uint32_t FRCRDY:1;
    uint32_t SPDIVRDY:1;
    uint32_t POSCRDY:1;
    uint32_t :1;
    uint32_t SOSCRDY:1;
    uint32_t LPRCRDY:1;
    uint32_t :1;
    uint32_t SPLLRDY:1;
  };
  struct {
    uint32_t :1;
    uint32_t DIVSPLLRDY:1;
  };
} __CLKSTATbits_t;
extern volatile __CLKSTATbits_t CLKSTATbits __asm__ ("CLKSTAT") __attribute__((section("sfrs"), address(0xBF8020F0)));
extern volatile uint32_t        CLKSTATCLR __attribute__((section("sfrs"),address(0xBF8020F4)));
extern volatile uint32_t        CLKSTATSET __attribute__((section("sfrs"),address(0xBF8020F8)));
extern volatile uint32_t        CLKSTATINV __attribute__((section("sfrs"),address(0xBF8020FC)));
#define OSCTUN OSCTUN
extern volatile uint32_t   OSCTUN __attribute__((section("sfrs"), address(0xBF802200)));
typedef struct {
  uint32_t TUN:6;
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs"), address(0xBF802200)));
extern volatile uint32_t        OSCTUNCLR __attribute__((section("sfrs"),address(0xBF802204)));
extern volatile uint32_t        OSCTUNSET __attribute__((section("sfrs"),address(0xBF802208)));
extern volatile uint32_t        OSCTUNINV __attribute__((section("sfrs"),address(0xBF80220C)));
#define ANCFG ANCFG
extern volatile uint32_t   ANCFG __attribute__((section("sfrs"), address(0xBF802300)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t VBGCMP:1;
    uint32_t VBGADC:1;
  };
  struct {
    uint32_t :1;
    uint32_t BGCMP:1;
    uint32_t BGADC:1;
  };
} __ANCFGbits_t;
extern volatile __ANCFGbits_t ANCFGbits __asm__ ("ANCFG") __attribute__((section("sfrs"), address(0xBF802300)));
extern volatile uint32_t        ANCFGCLR __attribute__((section("sfrs"),address(0xBF802304)));
extern volatile uint32_t        ANCFGSET __attribute__((section("sfrs"),address(0xBF802308)));
extern volatile uint32_t        ANCFGINV __attribute__((section("sfrs"),address(0xBF80230C)));
#define HLVDCON HLVDCON
extern volatile uint32_t   HLVDCON __attribute__((section("sfrs"), address(0xBF802310)));
typedef struct {
  uint32_t HLVDL:4;
  uint32_t :4;
  uint32_t HLEVT:1;
  uint32_t IRVST:1;
  uint32_t BGVST:1;
  uint32_t VDIR:1;
  uint32_t :1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
} __HLVDCONbits_t;
extern volatile __HLVDCONbits_t HLVDCONbits __asm__ ("HLVDCON") __attribute__((section("sfrs"), address(0xBF802310)));
extern volatile uint32_t        HLVDCONCLR __attribute__((section("sfrs"),address(0xBF802314)));
extern volatile uint32_t        HLVDCONSET __attribute__((section("sfrs"),address(0xBF802318)));
extern volatile uint32_t        HLVDCONINV __attribute__((section("sfrs"),address(0xBF80231C)));
#define NVMCON NVMCON
extern volatile uint32_t   NVMCON __attribute__((section("sfrs"), address(0xBF802380)));
typedef struct {
  uint32_t NVMOP:4;
  uint32_t :8;
  uint32_t LVDERR:1;
  uint32_t WRERR:1;
  uint32_t WREN:1;
  uint32_t WR:1;
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs"), address(0xBF802380)));
extern volatile uint32_t        NVMCONCLR __attribute__((section("sfrs"),address(0xBF802384)));
extern volatile uint32_t        NVMCONSET __attribute__((section("sfrs"),address(0xBF802388)));
extern volatile uint32_t        NVMCONINV __attribute__((section("sfrs"),address(0xBF80238C)));
#define NVMKEY NVMKEY
extern volatile uint32_t   NVMKEY __attribute__((section("sfrs"), address(0xBF802390)));
typedef struct {
  uint32_t NVMKEY:32;
} __NVMKEYbits_t;
extern volatile __NVMKEYbits_t NVMKEYbits __asm__ ("NVMKEY") __attribute__((section("sfrs"), address(0xBF802390)));
extern volatile uint32_t        NVMKEYCLR __attribute__((section("sfrs"),address(0xBF802394)));
extern volatile uint32_t        NVMKEYSET __attribute__((section("sfrs"),address(0xBF802398)));
extern volatile uint32_t        NVMKEYINV __attribute__((section("sfrs"),address(0xBF80239C)));
#define NVMADDR NVMADDR
extern volatile uint32_t   NVMADDR __attribute__((section("sfrs"), address(0xBF8023A0)));
typedef struct {
  uint32_t NVMADDR:32;
} __NVMADDRbits_t;
extern volatile __NVMADDRbits_t NVMADDRbits __asm__ ("NVMADDR") __attribute__((section("sfrs"), address(0xBF8023A0)));
extern volatile uint32_t        NVMADDRCLR __attribute__((section("sfrs"),address(0xBF8023A4)));
extern volatile uint32_t        NVMADDRSET __attribute__((section("sfrs"),address(0xBF8023A8)));
extern volatile uint32_t        NVMADDRINV __attribute__((section("sfrs"),address(0xBF8023AC)));
#define NVMDATA0 NVMDATA0
extern volatile uint32_t   NVMDATA0 __attribute__((section("sfrs"), address(0xBF8023B0)));
typedef struct {
  uint32_t NVMDATA0:32;
} __NVMDATA0bits_t;
extern volatile __NVMDATA0bits_t NVMDATA0bits __asm__ ("NVMDATA0") __attribute__((section("sfrs"), address(0xBF8023B0)));
extern volatile uint32_t        NVMDATA0CLR __attribute__((section("sfrs"),address(0xBF8023B4)));
extern volatile uint32_t        NVMDATA0SET __attribute__((section("sfrs"),address(0xBF8023B8)));
extern volatile uint32_t        NVMDATA0INV __attribute__((section("sfrs"),address(0xBF8023BC)));
#define NVMDATA1 NVMDATA1
extern volatile uint32_t   NVMDATA1 __attribute__((section("sfrs"), address(0xBF8023C0)));
typedef struct {
  uint32_t NVMDATA1:32;
} __NVMDATA1bits_t;
extern volatile __NVMDATA1bits_t NVMDATA1bits __asm__ ("NVMDATA1") __attribute__((section("sfrs"), address(0xBF8023C0)));
extern volatile uint32_t        NVMDATA1CLR __attribute__((section("sfrs"),address(0xBF8023C4)));
extern volatile uint32_t        NVMDATA1SET __attribute__((section("sfrs"),address(0xBF8023C8)));
extern volatile uint32_t        NVMDATA1INV __attribute__((section("sfrs"),address(0xBF8023CC)));
#define NVMSRCADDR NVMSRCADDR
extern volatile uint32_t   NVMSRCADDR __attribute__((section("sfrs"), address(0xBF8023D0)));
typedef struct {
  uint32_t NVMSRCADDR:32;
} __NVMSRCADDRbits_t;
extern volatile __NVMSRCADDRbits_t NVMSRCADDRbits __asm__ ("NVMSRCADDR") __attribute__((section("sfrs"), address(0xBF8023D0)));
extern volatile uint32_t        NVMSRCADDRCLR __attribute__((section("sfrs"),address(0xBF8023D4)));
extern volatile uint32_t        NVMSRCADDRSET __attribute__((section("sfrs"),address(0xBF8023D8)));
extern volatile uint32_t        NVMSRCADDRINV __attribute__((section("sfrs"),address(0xBF8023DC)));
#define NVMPWP NVMPWP
extern volatile uint32_t   NVMPWP __attribute__((section("sfrs"), address(0xBF8023E0)));
typedef struct {
  uint32_t PWP:24;
  uint32_t :7;
  uint32_t PWPULOCK:1;
} __NVMPWPbits_t;
extern volatile __NVMPWPbits_t NVMPWPbits __asm__ ("NVMPWP") __attribute__((section("sfrs"), address(0xBF8023E0)));
extern volatile uint32_t        NVMPWPCLR __attribute__((section("sfrs"),address(0xBF8023E4)));
extern volatile uint32_t        NVMPWPSET __attribute__((section("sfrs"),address(0xBF8023E8)));
extern volatile uint32_t        NVMPWPINV __attribute__((section("sfrs"),address(0xBF8023EC)));
#define NVMBWP NVMBWP
extern volatile uint32_t   NVMBWP __attribute__((section("sfrs"), address(0xBF8023F0)));
typedef struct {
  uint32_t :8;
  uint32_t BWP0:1;
  uint32_t BWP1:1;
  uint32_t BWP2:1;
  uint32_t :4;
  uint32_t BWPULOCK:1;
} __NVMBWPbits_t;
extern volatile __NVMBWPbits_t NVMBWPbits __asm__ ("NVMBWP") __attribute__((section("sfrs"), address(0xBF8023F0)));
extern volatile uint32_t        NVMBWPCLR __attribute__((section("sfrs"),address(0xBF8023F4)));
extern volatile uint32_t        NVMBWPSET __attribute__((section("sfrs"),address(0xBF8023F8)));
extern volatile uint32_t        NVMBWPINV __attribute__((section("sfrs"),address(0xBF8023FC)));
#define RPCON RPCON
extern volatile uint32_t   RPCON __attribute__((section("sfrs"), address(0xBF802480)));
typedef struct {
  uint32_t :11;
  uint32_t IOLOCK:1;
} __RPCONbits_t;
extern volatile __RPCONbits_t RPCONbits __asm__ ("RPCON") __attribute__((section("sfrs"), address(0xBF802480)));
extern volatile uint32_t        RPCONCLR __attribute__((section("sfrs"),address(0xBF802484)));
extern volatile uint32_t        RPCONSET __attribute__((section("sfrs"),address(0xBF802488)));
extern volatile uint32_t        RPCONINV __attribute__((section("sfrs"),address(0xBF80248C)));
#define RPINR1 RPINR1
extern volatile uint32_t   RPINR1 __attribute__((section("sfrs"), address(0xBF8024A0)));
typedef struct {
  uint32_t INT4R:5;
} __RPINR1bits_t;
extern volatile __RPINR1bits_t RPINR1bits __asm__ ("RPINR1") __attribute__((section("sfrs"), address(0xBF8024A0)));
extern volatile uint32_t        RPINR1CLR __attribute__((section("sfrs"),address(0xBF8024A4)));
extern volatile uint32_t        RPINR1SET __attribute__((section("sfrs"),address(0xBF8024A8)));
extern volatile uint32_t        RPINR1INV __attribute__((section("sfrs"),address(0xBF8024AC)));
#define RPINR2 RPINR2
extern volatile uint32_t   RPINR2 __attribute__((section("sfrs"), address(0xBF8024B0)));
typedef struct {
  uint32_t :16;
  uint32_t ICM1R:5;
  uint32_t :3;
  uint32_t ICM2R:5;
} __RPINR2bits_t;
extern volatile __RPINR2bits_t RPINR2bits __asm__ ("RPINR2") __attribute__((section("sfrs"), address(0xBF8024B0)));
extern volatile uint32_t        RPINR2CLR __attribute__((section("sfrs"),address(0xBF8024B4)));
extern volatile uint32_t        RPINR2SET __attribute__((section("sfrs"),address(0xBF8024B8)));
extern volatile uint32_t        RPINR2INV __attribute__((section("sfrs"),address(0xBF8024BC)));
#define RPINR3 RPINR3
extern volatile uint32_t   RPINR3 __attribute__((section("sfrs"), address(0xBF8024C0)));
typedef struct {
  uint32_t ICM3R:5;
} __RPINR3bits_t;
extern volatile __RPINR3bits_t RPINR3bits __asm__ ("RPINR3") __attribute__((section("sfrs"), address(0xBF8024C0)));
extern volatile uint32_t        RPINR3CLR __attribute__((section("sfrs"),address(0xBF8024C4)));
extern volatile uint32_t        RPINR3SET __attribute__((section("sfrs"),address(0xBF8024C8)));
extern volatile uint32_t        RPINR3INV __attribute__((section("sfrs"),address(0xBF8024CC)));
#define RPINR5 RPINR5
extern volatile uint32_t   RPINR5 __attribute__((section("sfrs"), address(0xBF8024E0)));
typedef struct {
  uint32_t :16;
  uint32_t OCFAR:5;
  uint32_t :3;
  uint32_t OCFBR:5;
} __RPINR5bits_t;
extern volatile __RPINR5bits_t RPINR5bits __asm__ ("RPINR5") __attribute__((section("sfrs"), address(0xBF8024E0)));
extern volatile uint32_t        RPINR5CLR __attribute__((section("sfrs"),address(0xBF8024E4)));
extern volatile uint32_t        RPINR5SET __attribute__((section("sfrs"),address(0xBF8024E8)));
extern volatile uint32_t        RPINR5INV __attribute__((section("sfrs"),address(0xBF8024EC)));
#define RPINR6 RPINR6
extern volatile uint32_t   RPINR6 __attribute__((section("sfrs"), address(0xBF8024F0)));
typedef struct {
  uint32_t TCKIAR:5;
  uint32_t :3;
  uint32_t TCKIBR:5;
} __RPINR6bits_t;
extern volatile __RPINR6bits_t RPINR6bits __asm__ ("RPINR6") __attribute__((section("sfrs"), address(0xBF8024F0)));
extern volatile uint32_t        RPINR6CLR __attribute__((section("sfrs"),address(0xBF8024F4)));
extern volatile uint32_t        RPINR6SET __attribute__((section("sfrs"),address(0xBF8024F8)));
extern volatile uint32_t        RPINR6INV __attribute__((section("sfrs"),address(0xBF8024FC)));
#define RPINR9 RPINR9
extern volatile uint32_t   RPINR9 __attribute__((section("sfrs"), address(0xBF802520)));
typedef struct {
  uint32_t :16;
  uint32_t U2RXR:5;
  uint32_t :3;
  uint32_t U2CTSR:5;
} __RPINR9bits_t;
extern volatile __RPINR9bits_t RPINR9bits __asm__ ("RPINR9") __attribute__((section("sfrs"), address(0xBF802520)));
extern volatile uint32_t        RPINR9CLR __attribute__((section("sfrs"),address(0xBF802524)));
extern volatile uint32_t        RPINR9SET __attribute__((section("sfrs"),address(0xBF802528)));
extern volatile uint32_t        RPINR9INV __attribute__((section("sfrs"),address(0xBF80252C)));
#define RPINR11 RPINR11
extern volatile uint32_t   RPINR11 __attribute__((section("sfrs"), address(0xBF802540)));
typedef struct {
  uint32_t SDI2R:5;
  uint32_t :3;
  uint32_t SCK2INR:5;
  uint32_t :3;
  uint32_t SS2INR:5;
} __RPINR11bits_t;
extern volatile __RPINR11bits_t RPINR11bits __asm__ ("RPINR11") __attribute__((section("sfrs"), address(0xBF802540)));
extern volatile uint32_t        RPINR11CLR __attribute__((section("sfrs"),address(0xBF802544)));
extern volatile uint32_t        RPINR11SET __attribute__((section("sfrs"),address(0xBF802548)));
extern volatile uint32_t        RPINR11INV __attribute__((section("sfrs"),address(0xBF80254C)));
#define RPINR12 RPINR12
extern volatile uint32_t   RPINR12 __attribute__((section("sfrs"), address(0xBF802550)));
typedef struct {
  uint32_t :16;
  uint32_t CLCINAR:5;
  uint32_t :3;
  uint32_t CLCINBR:5;
} __RPINR12bits_t;
extern volatile __RPINR12bits_t RPINR12bits __asm__ ("RPINR12") __attribute__((section("sfrs"), address(0xBF802550)));
extern volatile uint32_t        RPINR12CLR __attribute__((section("sfrs"),address(0xBF802554)));
extern volatile uint32_t        RPINR12SET __attribute__((section("sfrs"),address(0xBF802558)));
extern volatile uint32_t        RPINR12INV __attribute__((section("sfrs"),address(0xBF80255C)));
#define RPOR0 RPOR0
extern volatile uint32_t   RPOR0 __attribute__((section("sfrs"), address(0xBF802590)));
typedef struct {
  uint32_t RP1R:4;
  uint32_t :4;
  uint32_t RP2R:4;
  uint32_t :4;
  uint32_t RP3R:4;
  uint32_t :4;
  uint32_t RP4R:4;
} __RPOR0bits_t;
extern volatile __RPOR0bits_t RPOR0bits __asm__ ("RPOR0") __attribute__((section("sfrs"), address(0xBF802590)));
extern volatile uint32_t        RPOR0CLR __attribute__((section("sfrs"),address(0xBF802594)));
extern volatile uint32_t        RPOR0SET __attribute__((section("sfrs"),address(0xBF802598)));
extern volatile uint32_t        RPOR0INV __attribute__((section("sfrs"),address(0xBF80259C)));
#define RPOR1 RPOR1
extern volatile uint32_t   RPOR1 __attribute__((section("sfrs"), address(0xBF8025A0)));
typedef struct {
  uint32_t RP5R:4;
  uint32_t :4;
  uint32_t RP6R:4;
  uint32_t :4;
  uint32_t RP7R:4;
  uint32_t :4;
  uint32_t RP8R:4;
} __RPOR1bits_t;
extern volatile __RPOR1bits_t RPOR1bits __asm__ ("RPOR1") __attribute__((section("sfrs"), address(0xBF8025A0)));
extern volatile uint32_t        RPOR1CLR __attribute__((section("sfrs"),address(0xBF8025A4)));
extern volatile uint32_t        RPOR1SET __attribute__((section("sfrs"),address(0xBF8025A8)));
extern volatile uint32_t        RPOR1INV __attribute__((section("sfrs"),address(0xBF8025AC)));
#define RPOR2 RPOR2
extern volatile uint32_t   RPOR2 __attribute__((section("sfrs"), address(0xBF8025B0)));
typedef struct {
  uint32_t RP9R:4;
  uint32_t :4;
  uint32_t RP10R:4;
  uint32_t :4;
  uint32_t RP11R:4;
  uint32_t :4;
  uint32_t RP12R:4;
} __RPOR2bits_t;
extern volatile __RPOR2bits_t RPOR2bits __asm__ ("RPOR2") __attribute__((section("sfrs"), address(0xBF8025B0)));
extern volatile uint32_t        RPOR2CLR __attribute__((section("sfrs"),address(0xBF8025B4)));
extern volatile uint32_t        RPOR2SET __attribute__((section("sfrs"),address(0xBF8025B8)));
extern volatile uint32_t        RPOR2INV __attribute__((section("sfrs"),address(0xBF8025BC)));
#define RPOR3 RPOR3
extern volatile uint32_t   RPOR3 __attribute__((section("sfrs"), address(0xBF8025C0)));
typedef struct {
  uint32_t RP13R:4;
  uint32_t :4;
  uint32_t RP14R:4;
  uint32_t :4;
  uint32_t RP15R:4;
  uint32_t :4;
  uint32_t RP16R:4;
} __RPOR3bits_t;
extern volatile __RPOR3bits_t RPOR3bits __asm__ ("RPOR3") __attribute__((section("sfrs"), address(0xBF8025C0)));
extern volatile uint32_t        RPOR3CLR __attribute__((section("sfrs"),address(0xBF8025C4)));
extern volatile uint32_t        RPOR3SET __attribute__((section("sfrs"),address(0xBF8025C8)));
extern volatile uint32_t        RPOR3INV __attribute__((section("sfrs"),address(0xBF8025CC)));
#define RPOR4 RPOR4
extern volatile uint32_t   RPOR4 __attribute__((section("sfrs"), address(0xBF8025D0)));
typedef struct {
  uint32_t RP17R:4;
  uint32_t :4;
  uint32_t RP18R:4;
  uint32_t :4;
  uint32_t RP19R:4;
  uint32_t :4;
  uint32_t RP20R:4;
} __RPOR4bits_t;
extern volatile __RPOR4bits_t RPOR4bits __asm__ ("RPOR4") __attribute__((section("sfrs"), address(0xBF8025D0)));
extern volatile uint32_t        RPOR4CLR __attribute__((section("sfrs"),address(0xBF8025D4)));
extern volatile uint32_t        RPOR4SET __attribute__((section("sfrs"),address(0xBF8025D8)));
extern volatile uint32_t        RPOR4INV __attribute__((section("sfrs"),address(0xBF8025DC)));
#define ANSELA ANSELA
extern volatile uint32_t   ANSELA __attribute__((section("sfrs"), address(0xBF802600)));
typedef struct {
  uint32_t ANSA0:1;
  uint32_t ANSA1:1;
  uint32_t ANSA2:1;
  uint32_t ANSA3:1;
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs"), address(0xBF802600)));
extern volatile uint32_t        ANSELACLR __attribute__((section("sfrs"),address(0xBF802604)));
extern volatile uint32_t        ANSELASET __attribute__((section("sfrs"),address(0xBF802608)));
extern volatile uint32_t        ANSELAINV __attribute__((section("sfrs"),address(0xBF80260C)));
#define TRISA TRISA
extern volatile uint32_t   TRISA __attribute__((section("sfrs"), address(0xBF802610)));
typedef struct {
  uint32_t TRISA0:1;
  uint32_t TRISA1:1;
  uint32_t TRISA2:1;
  uint32_t TRISA3:1;
  uint32_t TRISA4:1;
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs"), address(0xBF802610)));
extern volatile uint32_t        TRISACLR __attribute__((section("sfrs"),address(0xBF802614)));
extern volatile uint32_t        TRISASET __attribute__((section("sfrs"),address(0xBF802618)));
extern volatile uint32_t        TRISAINV __attribute__((section("sfrs"),address(0xBF80261C)));
#define PORTA PORTA
extern volatile uint32_t   PORTA __attribute__((section("sfrs"), address(0xBF802620)));
typedef struct {
  uint32_t RA0:1;
  uint32_t RA1:1;
  uint32_t RA2:1;
  uint32_t RA3:1;
  uint32_t RA4:1;
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs"), address(0xBF802620)));
extern volatile uint32_t        PORTACLR __attribute__((section("sfrs"),address(0xBF802624)));
extern volatile uint32_t        PORTASET __attribute__((section("sfrs"),address(0xBF802628)));
extern volatile uint32_t        PORTAINV __attribute__((section("sfrs"),address(0xBF80262C)));
#define LATA LATA
extern volatile uint32_t   LATA __attribute__((section("sfrs"), address(0xBF802630)));
typedef struct {
  uint32_t LATA0:1;
  uint32_t LATA1:1;
  uint32_t LATA2:1;
  uint32_t LATA3:1;
  uint32_t LATA4:1;
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs"), address(0xBF802630)));
extern volatile uint32_t        LATACLR __attribute__((section("sfrs"),address(0xBF802634)));
extern volatile uint32_t        LATASET __attribute__((section("sfrs"),address(0xBF802638)));
extern volatile uint32_t        LATAINV __attribute__((section("sfrs"),address(0xBF80263C)));
#define ODCA ODCA
extern volatile uint32_t   ODCA __attribute__((section("sfrs"), address(0xBF802640)));
typedef struct {
  uint32_t ODCA0:1;
  uint32_t ODCA1:1;
  uint32_t ODCA2:1;
  uint32_t ODCA3:1;
  uint32_t ODCA4:1;
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs"), address(0xBF802640)));
extern volatile uint32_t        ODCACLR __attribute__((section("sfrs"),address(0xBF802644)));
extern volatile uint32_t        ODCASET __attribute__((section("sfrs"),address(0xBF802648)));
extern volatile uint32_t        ODCAINV __attribute__((section("sfrs"),address(0xBF80264C)));
#define CNPUA CNPUA
extern volatile uint32_t   CNPUA __attribute__((section("sfrs"), address(0xBF802650)));
typedef struct {
  uint32_t CNPUA0:1;
  uint32_t CNPUA1:1;
  uint32_t CNPUA2:1;
  uint32_t CNPUA3:1;
  uint32_t CNPUA4:1;
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs"), address(0xBF802650)));
extern volatile uint32_t        CNPUACLR __attribute__((section("sfrs"),address(0xBF802654)));
extern volatile uint32_t        CNPUASET __attribute__((section("sfrs"),address(0xBF802658)));
extern volatile uint32_t        CNPUAINV __attribute__((section("sfrs"),address(0xBF80265C)));
#define CNPDA CNPDA
extern volatile uint32_t   CNPDA __attribute__((section("sfrs"), address(0xBF802660)));
typedef struct {
  uint32_t CNPDA0:1;
  uint32_t CNPDA1:1;
  uint32_t CNPDA2:1;
  uint32_t CNPDA3:1;
  uint32_t CNPDA4:1;
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs"), address(0xBF802660)));
extern volatile uint32_t        CNPDACLR __attribute__((section("sfrs"),address(0xBF802664)));
extern volatile uint32_t        CNPDASET __attribute__((section("sfrs"),address(0xBF802668)));
extern volatile uint32_t        CNPDAINV __attribute__((section("sfrs"),address(0xBF80266C)));
#define CNCONA CNCONA
extern volatile uint32_t   CNCONA __attribute__((section("sfrs"), address(0xBF802670)));
typedef struct {
  uint32_t :11;
  uint32_t CNSTYLE:1;
  uint32_t :3;
  uint32_t ON:1;
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs"), address(0xBF802670)));
extern volatile uint32_t        CNCONACLR __attribute__((section("sfrs"),address(0xBF802674)));
extern volatile uint32_t        CNCONASET __attribute__((section("sfrs"),address(0xBF802678)));
extern volatile uint32_t        CNCONAINV __attribute__((section("sfrs"),address(0xBF80267C)));
#define CNEN0A CNEN0A
extern volatile uint32_t   CNEN0A __attribute__((section("sfrs"), address(0xBF802680)));
typedef struct {
  uint32_t CNIE0A0:1;
  uint32_t CNIE0A1:1;
  uint32_t CNIE0A2:1;
  uint32_t CNIE0A3:1;
  uint32_t CNIE0A4:1;
} __CNEN0Abits_t;
extern volatile __CNEN0Abits_t CNEN0Abits __asm__ ("CNEN0A") __attribute__((section("sfrs"), address(0xBF802680)));
extern volatile uint32_t        CNEN0ACLR __attribute__((section("sfrs"),address(0xBF802684)));
extern volatile uint32_t        CNEN0ASET __attribute__((section("sfrs"),address(0xBF802688)));
extern volatile uint32_t        CNEN0AINV __attribute__((section("sfrs"),address(0xBF80268C)));
#define CNSTATA CNSTATA
extern volatile uint32_t   CNSTATA __attribute__((section("sfrs"), address(0xBF802690)));
typedef struct {
  uint32_t CNSTATA0:1;
  uint32_t CNSTATA1:1;
  uint32_t CNSTATA2:1;
  uint32_t CNSTATA3:1;
  uint32_t CNSTATA4:1;
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs"), address(0xBF802690)));
extern volatile uint32_t        CNSTATACLR __attribute__((section("sfrs"),address(0xBF802694)));
extern volatile uint32_t        CNSTATASET __attribute__((section("sfrs"),address(0xBF802698)));
extern volatile uint32_t        CNSTATAINV __attribute__((section("sfrs"),address(0xBF80269C)));
#define CNEN1A CNEN1A
extern volatile uint32_t   CNEN1A __attribute__((section("sfrs"), address(0xBF8026A0)));
typedef struct {
  uint32_t CNIE1A0:1;
  uint32_t CNIE1A1:1;
  uint32_t CNIE1A2:1;
  uint32_t CNIE1A3:1;
  uint32_t CNIE1A4:1;
} __CNEN1Abits_t;
extern volatile __CNEN1Abits_t CNEN1Abits __asm__ ("CNEN1A") __attribute__((section("sfrs"), address(0xBF8026A0)));
extern volatile uint32_t        CNEN1ACLR __attribute__((section("sfrs"),address(0xBF8026A4)));
extern volatile uint32_t        CNEN1ASET __attribute__((section("sfrs"),address(0xBF8026A8)));
extern volatile uint32_t        CNEN1AINV __attribute__((section("sfrs"),address(0xBF8026AC)));
#define CNFA CNFA
extern volatile uint32_t   CNFA __attribute__((section("sfrs"), address(0xBF8026B0)));
typedef struct {
  uint32_t CNFA0:1;
  uint32_t CNFA1:1;
  uint32_t CNFA2:1;
  uint32_t CNFA3:1;
  uint32_t CNFA4:1;
} __CNFAbits_t;
extern volatile __CNFAbits_t CNFAbits __asm__ ("CNFA") __attribute__((section("sfrs"), address(0xBF8026B0)));
extern volatile uint32_t        CNFACLR __attribute__((section("sfrs"),address(0xBF8026B4)));
extern volatile uint32_t        CNFASET __attribute__((section("sfrs"),address(0xBF8026B8)));
extern volatile uint32_t        CNFAINV __attribute__((section("sfrs"),address(0xBF8026BC)));
#define ANSELB ANSELB
extern volatile uint32_t   ANSELB __attribute__((section("sfrs"), address(0xBF802700)));
typedef struct {
  uint32_t ANSB0:1;
  uint32_t ANSB1:1;
  uint32_t ANSB2:1;
  uint32_t :9;
  uint32_t ANSB12:1;
  uint32_t ANSB13:1;
  uint32_t ANSB14:1;
  uint32_t ANSB15:1;
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs"), address(0xBF802700)));
extern volatile uint32_t        ANSELBCLR __attribute__((section("sfrs"),address(0xBF802704)));
extern volatile uint32_t        ANSELBSET __attribute__((section("sfrs"),address(0xBF802708)));
extern volatile uint32_t        ANSELBINV __attribute__((section("sfrs"),address(0xBF80270C)));
#define TRISB TRISB
extern volatile uint32_t   TRISB __attribute__((section("sfrs"), address(0xBF802710)));
typedef struct {
  uint32_t TRISB0:1;
  uint32_t TRISB1:1;
  uint32_t TRISB2:1;
  uint32_t :1;
  uint32_t TRISB4:1;
  uint32_t :2;
  uint32_t TRISB7:1;
  uint32_t TRISB8:1;
  uint32_t TRISB9:1;
  uint32_t :2;
  uint32_t TRISB12:1;
  uint32_t TRISB13:1;
  uint32_t TRISB14:1;
  uint32_t TRISB15:1;
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs"), address(0xBF802710)));
extern volatile uint32_t        TRISBCLR __attribute__((section("sfrs"),address(0xBF802714)));
extern volatile uint32_t        TRISBSET __attribute__((section("sfrs"),address(0xBF802718)));
extern volatile uint32_t        TRISBINV __attribute__((section("sfrs"),address(0xBF80271C)));
#define PORTB PORTB
extern volatile uint32_t   PORTB __attribute__((section("sfrs"), address(0xBF802720)));
typedef struct {
  uint32_t RB0:1;
  uint32_t RB1:1;
  uint32_t RB2:1;
  uint32_t :1;
  uint32_t RB4:1;
  uint32_t :2;
  uint32_t RB7:1;
  uint32_t RB8:1;
  uint32_t RB9:1;
  uint32_t :2;
  uint32_t RB12:1;
  uint32_t RB13:1;
  uint32_t RB14:1;
  uint32_t RB15:1;
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs"), address(0xBF802720)));
extern volatile uint32_t        PORTBCLR __attribute__((section("sfrs"),address(0xBF802724)));
extern volatile uint32_t        PORTBSET __attribute__((section("sfrs"),address(0xBF802728)));
extern volatile uint32_t        PORTBINV __attribute__((section("sfrs"),address(0xBF80272C)));
#define LATB LATB
extern volatile uint32_t   LATB __attribute__((section("sfrs"), address(0xBF802730)));
typedef struct {
  uint32_t LATB0:1;
  uint32_t LATB1:1;
  uint32_t LATB2:1;
  uint32_t :1;
  uint32_t LATB4:1;
  uint32_t :2;
  uint32_t LATB7:1;
  uint32_t LATB8:1;
  uint32_t LATB9:1;
  uint32_t :2;
  uint32_t LATB12:1;
  uint32_t LATB13:1;
  uint32_t LATB14:1;
  uint32_t LATB15:1;
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs"), address(0xBF802730)));
extern volatile uint32_t        LATBCLR __attribute__((section("sfrs"),address(0xBF802734)));
extern volatile uint32_t        LATBSET __attribute__((section("sfrs"),address(0xBF802738)));
extern volatile uint32_t        LATBINV __attribute__((section("sfrs"),address(0xBF80273C)));
#define ODCB ODCB
extern volatile uint32_t   ODCB __attribute__((section("sfrs"), address(0xBF802740)));
typedef struct {
  uint32_t ODCB0:1;
  uint32_t ODCB1:1;
  uint32_t ODCB2:1;
  uint32_t :1;
  uint32_t ODCB4:1;
  uint32_t :2;
  uint32_t ODCB7:1;
  uint32_t ODCB8:1;
  uint32_t ODCB9:1;
  uint32_t :2;
  uint32_t ODCB12:1;
  uint32_t ODCB13:1;
  uint32_t ODCB14:1;
  uint32_t ODCB15:1;
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs"), address(0xBF802740)));
extern volatile uint32_t        ODCBCLR __attribute__((section("sfrs"),address(0xBF802744)));
extern volatile uint32_t        ODCBSET __attribute__((section("sfrs"),address(0xBF802748)));
extern volatile uint32_t        ODCBINV __attribute__((section("sfrs"),address(0xBF80274C)));
#define CNPUB CNPUB
extern volatile uint32_t   CNPUB __attribute__((section("sfrs"), address(0xBF802750)));
typedef struct {
  uint32_t CNPUB0:1;
  uint32_t CNPUB1:1;
  uint32_t CNPUB2:1;
  uint32_t :1;
  uint32_t CNPUB4:1;
  uint32_t :2;
  uint32_t CNPUB7:1;
  uint32_t CNPUB8:1;
  uint32_t CNPUB9:1;
  uint32_t :2;
  uint32_t CNPUB12:1;
  uint32_t CNPUB13:1;
  uint32_t CNPUB14:1;
  uint32_t CNPUB15:1;
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs"), address(0xBF802750)));
extern volatile uint32_t        CNPUBCLR __attribute__((section("sfrs"),address(0xBF802754)));
extern volatile uint32_t        CNPUBSET __attribute__((section("sfrs"),address(0xBF802758)));
extern volatile uint32_t        CNPUBINV __attribute__((section("sfrs"),address(0xBF80275C)));
#define CNPDB CNPDB
extern volatile uint32_t   CNPDB __attribute__((section("sfrs"), address(0xBF802760)));
typedef struct {
  uint32_t CNPDB0:1;
  uint32_t CNPDB1:1;
  uint32_t CNPDB2:1;
  uint32_t :1;
  uint32_t CNPDB4:1;
  uint32_t :2;
  uint32_t CNPDB7:1;
  uint32_t CNPDB8:1;
  uint32_t CNPDB9:1;
  uint32_t :2;
  uint32_t CNPDB12:1;
  uint32_t CNPDB13:1;
  uint32_t CNPDB14:1;
  uint32_t CNPDB15:1;
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs"), address(0xBF802760)));
extern volatile uint32_t        CNPDBCLR __attribute__((section("sfrs"),address(0xBF802764)));
extern volatile uint32_t        CNPDBSET __attribute__((section("sfrs"),address(0xBF802768)));
extern volatile uint32_t        CNPDBINV __attribute__((section("sfrs"),address(0xBF80276C)));
#define CNCONB CNCONB
extern volatile uint32_t   CNCONB __attribute__((section("sfrs"), address(0xBF802770)));
typedef struct {
  uint32_t :11;
  uint32_t CNSTYLE:1;
  uint32_t :3;
  uint32_t ON:1;
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs"), address(0xBF802770)));
extern volatile uint32_t        CNCONBCLR __attribute__((section("sfrs"),address(0xBF802774)));
extern volatile uint32_t        CNCONBSET __attribute__((section("sfrs"),address(0xBF802778)));
extern volatile uint32_t        CNCONBINV __attribute__((section("sfrs"),address(0xBF80277C)));
#define CNEN0B CNEN0B
extern volatile uint32_t   CNEN0B __attribute__((section("sfrs"), address(0xBF802780)));
typedef struct {
  uint32_t CNIE0B0:1;
  uint32_t CNIE0B1:1;
  uint32_t CNIE0B2:1;
  uint32_t :1;
  uint32_t CNIE0B4:1;
  uint32_t :2;
  uint32_t CNIE0B7:1;
  uint32_t CNIE0B8:1;
  uint32_t CNIE0B9:1;
  uint32_t :2;
  uint32_t CNIE0B12:1;
  uint32_t CNIE0B13:1;
  uint32_t CNIE0B14:1;
  uint32_t CNIE0B15:1;
} __CNEN0Bbits_t;
extern volatile __CNEN0Bbits_t CNEN0Bbits __asm__ ("CNEN0B") __attribute__((section("sfrs"), address(0xBF802780)));
extern volatile uint32_t        CNEN0BCLR __attribute__((section("sfrs"),address(0xBF802784)));
extern volatile uint32_t        CNEN0BSET __attribute__((section("sfrs"),address(0xBF802788)));
extern volatile uint32_t        CNEN0BINV __attribute__((section("sfrs"),address(0xBF80278C)));
#define CNSTATB CNSTATB
extern volatile uint32_t   CNSTATB __attribute__((section("sfrs"), address(0xBF802790)));
typedef struct {
  uint32_t CNSTATB0:1;
  uint32_t CNSTATB1:1;
  uint32_t CNSTATB2:1;
  uint32_t :1;
  uint32_t CNSTATB4:1;
  uint32_t :2;
  uint32_t CNSTATB7:1;
  uint32_t CNSTATB8:1;
  uint32_t CNSTATB9:1;
  uint32_t :2;
  uint32_t CNSTATB12:1;
  uint32_t CNSTATB13:1;
  uint32_t CNSTATB14:1;
  uint32_t CNSTATB15:1;
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs"), address(0xBF802790)));
extern volatile uint32_t        CNSTATBCLR __attribute__((section("sfrs"),address(0xBF802794)));
extern volatile uint32_t        CNSTATBSET __attribute__((section("sfrs"),address(0xBF802798)));
extern volatile uint32_t        CNSTATBINV __attribute__((section("sfrs"),address(0xBF80279C)));
#define CNEN1B CNEN1B
extern volatile uint32_t   CNEN1B __attribute__((section("sfrs"), address(0xBF8027A0)));
typedef struct {
  uint32_t CNIE1B0:1;
  uint32_t CNIE1B1:1;
  uint32_t CNIE1B2:1;
  uint32_t :1;
  uint32_t CNIE1B4:1;
  uint32_t :2;
  uint32_t CNIE1B7:1;
  uint32_t CNIE1B8:1;
  uint32_t CNIE1B9:1;
  uint32_t :2;
  uint32_t CNIE1B12:1;
  uint32_t CNIE1B13:1;
  uint32_t CNIE1B14:1;
  uint32_t CNIE1B15:1;
} __CNEN1Bbits_t;
extern volatile __CNEN1Bbits_t CNEN1Bbits __asm__ ("CNEN1B") __attribute__((section("sfrs"), address(0xBF8027A0)));
extern volatile uint32_t        CNEN1BCLR __attribute__((section("sfrs"),address(0xBF8027A4)));
extern volatile uint32_t        CNEN1BSET __attribute__((section("sfrs"),address(0xBF8027A8)));
extern volatile uint32_t        CNEN1BINV __attribute__((section("sfrs"),address(0xBF8027AC)));
#define CNFB CNFB
extern volatile uint32_t   CNFB __attribute__((section("sfrs"), address(0xBF8027B0)));
typedef struct {
  uint32_t CNFB0:1;
  uint32_t CNFB1:1;
  uint32_t CNFB2:1;
  uint32_t :1;
  uint32_t CNFB4:1;
  uint32_t :2;
  uint32_t CNFB7:1;
  uint32_t CNFB8:1;
  uint32_t CNFB9:1;
  uint32_t :2;
  uint32_t CNFB12:1;
  uint32_t CNFB13:1;
  uint32_t CNFB14:1;
  uint32_t CNFB15:1;
} __CNFBbits_t;
extern volatile __CNFBbits_t CNFBbits __asm__ ("CNFB") __attribute__((section("sfrs"), address(0xBF8027B0)));
extern volatile uint32_t        CNFBCLR __attribute__((section("sfrs"),address(0xBF8027B4)));
extern volatile uint32_t        CNFBSET __attribute__((section("sfrs"),address(0xBF8027B8)));
extern volatile uint32_t        CNFBINV __attribute__((section("sfrs"),address(0xBF8027BC)));
#define PMDCON PMDCON
extern volatile uint32_t   PMDCON __attribute__((section("sfrs"), address(0xBF802C00)));
typedef struct {
  uint32_t :11;
  uint32_t PMDLOCK:1;
} __PMDCONbits_t;
extern volatile __PMDCONbits_t PMDCONbits __asm__ ("PMDCON") __attribute__((section("sfrs"), address(0xBF802C00)));
extern volatile uint32_t        PMDCONCLR __attribute__((section("sfrs"),address(0xBF802C04)));
extern volatile uint32_t        PMDCONSET __attribute__((section("sfrs"),address(0xBF802C08)));
extern volatile uint32_t        PMDCONINV __attribute__((section("sfrs"),address(0xBF802C0C)));
#define PMD1 PMD1
extern volatile uint32_t   PMD1 __attribute__((section("sfrs"), address(0xBF802C10)));
typedef struct {
  uint32_t ADCMD:1;
  uint32_t :11;
  uint32_t VREFMD:1;
  uint32_t :7;
  uint32_t HLVDMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs"), address(0xBF802C10)));
extern volatile uint32_t        PMD1CLR __attribute__((section("sfrs"),address(0xBF802C14)));
extern volatile uint32_t        PMD1SET __attribute__((section("sfrs"),address(0xBF802C18)));
extern volatile uint32_t        PMD1INV __attribute__((section("sfrs"),address(0xBF802C1C)));
#define PMD2 PMD2
extern volatile uint32_t   PMD2 __attribute__((section("sfrs"), address(0xBF802C20)));
typedef struct {
  uint32_t CMP1MD:1;
  uint32_t CMP2MD:1;
  uint32_t :22;
  uint32_t CLC1MD:1;
  uint32_t CLC2MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs"), address(0xBF802C20)));
extern volatile uint32_t        PMD2CLR __attribute__((section("sfrs"),address(0xBF802C24)));
extern volatile uint32_t        PMD2SET __attribute__((section("sfrs"),address(0xBF802C28)));
extern volatile uint32_t        PMD2INV __attribute__((section("sfrs"),address(0xBF802C2C)));
#define PMD3 PMD3
extern volatile uint32_t   PMD3 __attribute__((section("sfrs"), address(0xBF802C30)));
typedef struct {
  uint32_t :8;
  uint32_t CCP1MD:1;
  uint32_t CCP2MD:1;
  uint32_t CCP3MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs"), address(0xBF802C30)));
extern volatile uint32_t        PMD3CLR __attribute__((section("sfrs"),address(0xBF802C34)));
extern volatile uint32_t        PMD3SET __attribute__((section("sfrs"),address(0xBF802C38)));
extern volatile uint32_t        PMD3INV __attribute__((section("sfrs"),address(0xBF802C3C)));
#define PMD4 PMD4
extern volatile uint32_t   PMD4 __attribute__((section("sfrs"), address(0xBF802C40)));
typedef struct {
  uint32_t T1MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs"), address(0xBF802C40)));
extern volatile uint32_t        PMD4CLR __attribute__((section("sfrs"),address(0xBF802C44)));
extern volatile uint32_t        PMD4SET __attribute__((section("sfrs"),address(0xBF802C48)));
extern volatile uint32_t        PMD4INV __attribute__((section("sfrs"),address(0xBF802C4C)));
#define PMD5 PMD5
extern volatile uint32_t   PMD5 __attribute__((section("sfrs"), address(0xBF802C50)));
typedef struct {
  uint32_t U1MD:1;
  uint32_t U2MD:1;
  uint32_t :6;
  uint32_t SPI1MD:1;
  uint32_t SPI2MD:1;
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs"), address(0xBF802C50)));
extern volatile uint32_t        PMD5CLR __attribute__((section("sfrs"),address(0xBF802C54)));
extern volatile uint32_t        PMD5SET __attribute__((section("sfrs"),address(0xBF802C58)));
extern volatile uint32_t        PMD5INV __attribute__((section("sfrs"),address(0xBF802C5C)));
#define PMD6 PMD6
extern volatile uint32_t   PMD6 __attribute__((section("sfrs"), address(0xBF802C60)));
typedef struct {
  uint32_t RTCCMD:1;
  uint32_t :7;
  uint32_t REFOMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs"), address(0xBF802C60)));
extern volatile uint32_t        PMD6CLR __attribute__((section("sfrs"),address(0xBF802C64)));
extern volatile uint32_t        PMD6SET __attribute__((section("sfrs"),address(0xBF802C68)));
extern volatile uint32_t        PMD6INV __attribute__((section("sfrs"),address(0xBF802C6C)));
#define PMD7 PMD7
extern volatile uint32_t   PMD7 __attribute__((section("sfrs"), address(0xBF802C70)));
typedef struct {
  uint32_t :3;
  uint32_t CRCMD:1;
} __PMD7bits_t;
extern volatile __PMD7bits_t PMD7bits __asm__ ("PMD7") __attribute__((section("sfrs"), address(0xBF802C70)));
extern volatile uint32_t        PMD7CLR __attribute__((section("sfrs"),address(0xBF802C74)));
extern volatile uint32_t        PMD7SET __attribute__((section("sfrs"),address(0xBF802C78)));
extern volatile uint32_t        PMD7INV __attribute__((section("sfrs"),address(0xBF802C7C)));
#define CFGCON CFGCON
extern volatile uint32_t   CFGCON __attribute__((section("sfrs"), address(0xBF803B00)));
typedef struct {
  uint32_t :3;
  uint32_t JTAGEN:1;
  uint32_t :12;
  uint32_t EXECADDR:8;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs"), address(0xBF803B00)));
extern volatile uint32_t        CFGCONCLR __attribute__((section("sfrs"),address(0xBF803B04)));
extern volatile uint32_t        CFGCONSET __attribute__((section("sfrs"),address(0xBF803B08)));
extern volatile uint32_t        CFGCONINV __attribute__((section("sfrs"),address(0xBF803B0C)));
#define DEVID DEVID
extern volatile uint32_t   DEVID __attribute__((section("sfrs"), address(0xBF803B20)));
typedef struct {
  uint32_t MAINID:12;
  uint32_t PN:16;
  uint32_t VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs"), address(0xBF803B20)));
extern volatile uint32_t        DEVIDCLR __attribute__((section("sfrs"),address(0xBF803B24)));
extern volatile uint32_t        DEVIDSET __attribute__((section("sfrs"),address(0xBF803B28)));
extern volatile uint32_t        DEVIDINV __attribute__((section("sfrs"),address(0xBF803B2C)));
#define SYSKEY SYSKEY
extern volatile uint32_t   SYSKEY __attribute__((section("sfrs"), address(0xBF803B30)));
typedef struct {
  uint32_t SYSKEY:32;
} __SYSKEYbits_t;
extern volatile __SYSKEYbits_t SYSKEYbits __asm__ ("SYSKEY") __attribute__((section("sfrs"), address(0xBF803B30)));
extern volatile uint32_t        SYSKEYCLR __attribute__((section("sfrs"),address(0xBF803B34)));
extern volatile uint32_t        SYSKEYSET __attribute__((section("sfrs"),address(0xBF803B38)));
extern volatile uint32_t        SYSKEYINV __attribute__((section("sfrs"),address(0xBF803B3C)));
#define WDTCON WDTCON
extern volatile uint32_t   WDTCON __attribute__((section("sfrs"), address(0xBF803E80)));
typedef struct {
  uint32_t WDTWINEN:1;
  uint32_t SLPDIV:5;
  uint32_t CLKSEL:2;
  uint32_t RUNDIV:5;
  uint32_t :2;
  uint32_t ON:1;
  uint32_t WDTCLRKEY:16;
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs"), address(0xBF803E80)));
extern volatile uint32_t        WDTCONCLR __attribute__((section("sfrs"),address(0xBF803E84)));
extern volatile uint32_t        WDTCONSET __attribute__((section("sfrs"),address(0xBF803E88)));
extern volatile uint32_t        WDTCONINV __attribute__((section("sfrs"),address(0xBF803E8C)));
#define T1CON T1CON
extern volatile uint32_t   T1CON __attribute__((section("sfrs"), address(0xBF808000)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t TSYNC:1;
    uint32_t :1;
    uint32_t TCKPS:2;
    uint32_t :1;
    uint32_t TGATE:1;
    uint32_t TECS:2;
    uint32_t :1;
    uint32_t TWIP:1;
    uint32_t TWDIS:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t :2;
    uint32_t TECS0:1;
    uint32_t TECS1:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs"), address(0xBF808000)));
extern volatile uint32_t        T1CONCLR __attribute__((section("sfrs"),address(0xBF808004)));
extern volatile uint32_t        T1CONSET __attribute__((section("sfrs"),address(0xBF808008)));
extern volatile uint32_t        T1CONINV __attribute__((section("sfrs"),address(0xBF80800C)));
#define TMR1 TMR1
extern volatile uint32_t   TMR1 __attribute__((section("sfrs"), address(0xBF808010)));
extern volatile uint32_t        TMR1CLR __attribute__((section("sfrs"),address(0xBF808014)));
extern volatile uint32_t        TMR1SET __attribute__((section("sfrs"),address(0xBF808018)));
extern volatile uint32_t        TMR1INV __attribute__((section("sfrs"),address(0xBF80801C)));
#define PR1 PR1
extern volatile uint32_t   PR1 __attribute__((section("sfrs"), address(0xBF808020)));
extern volatile uint32_t        PR1CLR __attribute__((section("sfrs"),address(0xBF808024)));
extern volatile uint32_t        PR1SET __attribute__((section("sfrs"),address(0xBF808028)));
extern volatile uint32_t        PR1INV __attribute__((section("sfrs"),address(0xBF80802C)));
#define SPI1CON SPI1CON
extern volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF808080)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs"), address(0xBF808080)));
extern volatile uint32_t        SPI1CONCLR __attribute__((section("sfrs"),address(0xBF808084)));
extern volatile uint32_t        SPI1CONSET __attribute__((section("sfrs"),address(0xBF808088)));
extern volatile uint32_t        SPI1CONINV __attribute__((section("sfrs"),address(0xBF80808C)));
#define SPI1STAT SPI1STAT
extern volatile uint32_t   SPI1STAT __attribute__((section("sfrs"), address(0xBF808090)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs"), address(0xBF808090)));
extern volatile uint32_t        SPI1STATCLR __attribute__((section("sfrs"),address(0xBF808094)));
extern volatile uint32_t        SPI1STATSET __attribute__((section("sfrs"),address(0xBF808098)));
extern volatile uint32_t        SPI1STATINV __attribute__((section("sfrs"),address(0xBF80809C)));
#define SPI1BUF SPI1BUF
extern volatile uint32_t   SPI1BUF __attribute__((section("sfrs"), address(0xBF8080A0)));
#define SPI1BRG SPI1BRG
extern volatile uint32_t   SPI1BRG __attribute__((section("sfrs"), address(0xBF8080B0)));
extern volatile uint32_t        SPI1BRGCLR __attribute__((section("sfrs"),address(0xBF8080B4)));
extern volatile uint32_t        SPI1BRGSET __attribute__((section("sfrs"),address(0xBF8080B8)));
extern volatile uint32_t        SPI1BRGINV __attribute__((section("sfrs"),address(0xBF8080BC)));
#define SPI1CON2 SPI1CON2
extern volatile uint32_t   SPI1CON2 __attribute__((section("sfrs"), address(0xBF8080C0)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs"), address(0xBF8080C0)));
extern volatile uint32_t        SPI1CON2CLR __attribute__((section("sfrs"),address(0xBF8080C4)));
extern volatile uint32_t        SPI1CON2SET __attribute__((section("sfrs"),address(0xBF8080C8)));
extern volatile uint32_t        SPI1CON2INV __attribute__((section("sfrs"),address(0xBF8080CC)));
#define SPI2CON SPI2CON
extern volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF808100)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs"), address(0xBF808100)));
extern volatile uint32_t        SPI2CONCLR __attribute__((section("sfrs"),address(0xBF808104)));
extern volatile uint32_t        SPI2CONSET __attribute__((section("sfrs"),address(0xBF808108)));
extern volatile uint32_t        SPI2CONINV __attribute__((section("sfrs"),address(0xBF80810C)));
#define SPI2STAT SPI2STAT
extern volatile uint32_t   SPI2STAT __attribute__((section("sfrs"), address(0xBF808110)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs"), address(0xBF808110)));
extern volatile uint32_t        SPI2STATCLR __attribute__((section("sfrs"),address(0xBF808114)));
extern volatile uint32_t        SPI2STATSET __attribute__((section("sfrs"),address(0xBF808118)));
extern volatile uint32_t        SPI2STATINV __attribute__((section("sfrs"),address(0xBF80811C)));
#define SPI2BUF SPI2BUF
extern volatile uint32_t   SPI2BUF __attribute__((section("sfrs"), address(0xBF808120)));
#define SPI2BRG SPI2BRG
extern volatile uint32_t   SPI2BRG __attribute__((section("sfrs"), address(0xBF808130)));
extern volatile uint32_t        SPI2BRGCLR __attribute__((section("sfrs"),address(0xBF808134)));
extern volatile uint32_t        SPI2BRGSET __attribute__((section("sfrs"),address(0xBF808138)));
extern volatile uint32_t        SPI2BRGINV __attribute__((section("sfrs"),address(0xBF80813C)));
#define SPI2CON2 SPI2CON2
extern volatile uint32_t   SPI2CON2 __attribute__((section("sfrs"), address(0xBF808140)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs"), address(0xBF808140)));
extern volatile uint32_t        SPI2CON2CLR __attribute__((section("sfrs"),address(0xBF808144)));
extern volatile uint32_t        SPI2CON2SET __attribute__((section("sfrs"),address(0xBF808148)));
extern volatile uint32_t        SPI2CON2INV __attribute__((section("sfrs"),address(0xBF80814C)));
#define INTCON INTCON
extern volatile uint32_t   INTCON __attribute__((section("sfrs"), address(0xBF80F000)));
typedef struct {
  uint32_t INT0EP:1;
  uint32_t INT1EP:1;
  uint32_t INT2EP:1;
  uint32_t INT3EP:1;
  uint32_t INT4EP:1;
  uint32_t :3;
  uint32_t TPC:3;
  uint32_t :1;
  uint32_t MVEC:1;
  uint32_t :3;
  uint32_t VS:7;
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs"), address(0xBF80F000)));
extern volatile uint32_t        INTCONCLR __attribute__((section("sfrs"),address(0xBF80F004)));
extern volatile uint32_t        INTCONSET __attribute__((section("sfrs"),address(0xBF80F008)));
extern volatile uint32_t        INTCONINV __attribute__((section("sfrs"),address(0xBF80F00C)));
#define PRISS PRISS
extern volatile uint32_t   PRISS __attribute__((section("sfrs"), address(0xBF80F010)));
typedef struct {
  uint32_t SS0:1;
  uint32_t :3;
  uint32_t PRI1SS:4;
  uint32_t PRI2SS:4;
  uint32_t PRI3SS:4;
  uint32_t PRI4SS:4;
  uint32_t PRI5SS:4;
  uint32_t PRI6SS:4;
  uint32_t PRI7SS:4;
} __PRISSbits_t;
extern volatile __PRISSbits_t PRISSbits __asm__ ("PRISS") __attribute__((section("sfrs"), address(0xBF80F010)));
extern volatile uint32_t        PRISSCLR __attribute__((section("sfrs"),address(0xBF80F014)));
extern volatile uint32_t        PRISSSET __attribute__((section("sfrs"),address(0xBF80F018)));
extern volatile uint32_t        PRISSINV __attribute__((section("sfrs"),address(0xBF80F01C)));
#define INTSTAT INTSTAT
extern volatile uint32_t   INTSTAT __attribute__((section("sfrs"), address(0xBF80F020)));
typedef struct {
  uint32_t SIRQ:8;
  uint32_t SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs"), address(0xBF80F020)));
extern volatile uint32_t        INTSTATCLR __attribute__((section("sfrs"),address(0xBF80F024)));
extern volatile uint32_t        INTSTATSET __attribute__((section("sfrs"),address(0xBF80F028)));
extern volatile uint32_t        INTSTATINV __attribute__((section("sfrs"),address(0xBF80F02C)));
#define IPTMR IPTMR
extern volatile uint32_t   IPTMR __attribute__((section("sfrs"), address(0xBF80F030)));
typedef struct {
  uint32_t IPTMR:32;
} __IPTMRbits_t;
extern volatile __IPTMRbits_t IPTMRbits __asm__ ("IPTMR") __attribute__((section("sfrs"), address(0xBF80F030)));
extern volatile uint32_t        IPTMRCLR __attribute__((section("sfrs"),address(0xBF80F034)));
extern volatile uint32_t        IPTMRSET __attribute__((section("sfrs"),address(0xBF80F038)));
extern volatile uint32_t        IPTMRINV __attribute__((section("sfrs"),address(0xBF80F03C)));
#define IFS0 IFS0
extern volatile uint32_t   IFS0 __attribute__((section("sfrs"), address(0xBF80F040)));
typedef struct {
  uint32_t CTIF:1;
  uint32_t CS0IF:1;
  uint32_t CS1IF:1;
  uint32_t INT0IF:1;
  uint32_t INT1IF:1;
  uint32_t INT2IF:1;
  uint32_t INT3IF:1;
  uint32_t INT4IF:1;
  uint32_t CNAIF:1;
  uint32_t CNBIF:1;
  uint32_t :1;
  uint32_t T1IF:1;
  uint32_t CMP1IF:1;
  uint32_t CMP2IF:1;
  uint32_t RTCCIF:1;
  uint32_t AD1IF:1;
  uint32_t CRCIF:1;
  uint32_t LVDIF:1;
  uint32_t CLC1IF:1;
  uint32_t CLC2IF:1;
  uint32_t SPI1EIF:1;
  uint32_t SPI1TXIF:1;
  uint32_t SPI1RXIF:1;
  uint32_t U1RXIF:1;
  uint32_t U1TXIF:1;
  uint32_t U1EIF:1;
  uint32_t :3;
  uint32_t CCP1IF:1;
  uint32_t CCT1IF:1;
  uint32_t CCP2IF:1;
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs"), address(0xBF80F040)));
extern volatile uint32_t        IFS0CLR __attribute__((section("sfrs"),address(0xBF80F044)));
extern volatile uint32_t        IFS0SET __attribute__((section("sfrs"),address(0xBF80F048)));
extern volatile uint32_t        IFS0INV __attribute__((section("sfrs"),address(0xBF80F04C)));
#define IFS1 IFS1
extern volatile uint32_t   IFS1 __attribute__((section("sfrs"), address(0xBF80F050)));
typedef struct {
  uint32_t CCT2IF:1;
  uint32_t CCP3IF:1;
  uint32_t CCT3IF:1;
  uint32_t :2;
  uint32_t SPI2EIF:1;
  uint32_t SPI2TXIF:1;
  uint32_t SPI2RXIF:1;
  uint32_t U2RXIF:1;
  uint32_t U2TXIF:1;
  uint32_t U2EIF:1;
  uint32_t :3;
  uint32_t NVMIF:1;
  uint32_t CPCIF:1;
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF80F050)));
extern volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF80F054)));
extern volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF80F058)));
extern volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF80F05C)));
#define IEC0 IEC0
extern volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF80F0C0)));
typedef struct {
  uint32_t CTIE:1;
  uint32_t CS0IE:1;
  uint32_t CS1IE:1;
  uint32_t INT0IE:1;
  uint32_t INT1IE:1;
  uint32_t INT2IE:1;
  uint32_t INT3IE:1;
  uint32_t INT4IE:1;
  uint32_t CNAIE:1;
  uint32_t CNBIE:1;
  uint32_t :1;
  uint32_t T1IE:1;
  uint32_t CMP1IE:1;
  uint32_t CMP2IE:1;
  uint32_t RTCCIE:1;
  uint32_t AD1IE:1;
  uint32_t CRCIE:1;
  uint32_t LVDIE:1;
  uint32_t CLC1IE:1;
  uint32_t CLC2IE:1;
  uint32_t SPI1EIE:1;
  uint32_t SPI1TXIE:1;
  uint32_t SPI1RXIE:1;
  uint32_t U1RXIE:1;
  uint32_t U1TXIE:1;
  uint32_t U1EIE:1;
  uint32_t :3;
  uint32_t CCP1IE:1;
  uint32_t CCT1IE:1;
  uint32_t CCP2IE:1;
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs"), address(0xBF80F0C0)));
extern volatile uint32_t        IEC0CLR __attribute__((section("sfrs"),address(0xBF80F0C4)));
extern volatile uint32_t        IEC0SET __attribute__((section("sfrs"),address(0xBF80F0C8)));
extern volatile uint32_t        IEC0INV __attribute__((section("sfrs"),address(0xBF80F0CC)));
#define IEC1 IEC1
extern volatile uint32_t   IEC1 __attribute__((section("sfrs"), address(0xBF80F0D0)));
typedef struct {
  uint32_t CCT2IE:1;
  uint32_t CCP3IE:1;
  uint32_t CCT3IE:1;
  uint32_t :2;
  uint32_t SPI2EIE:1;
  uint32_t SPI2TXIE:1;
  uint32_t SPI2RXIE:1;
  uint32_t U2RXIE:1;
  uint32_t U2TXIE:1;
  uint32_t U2EIE:1;
  uint32_t :3;
  uint32_t NVMIE:1;
  uint32_t CPCIE:1;
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF80F0D0)));
extern volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF80F0D4)));
extern volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF80F0D8)));
extern volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF80F0DC)));
#define IPC0 IPC0
extern volatile uint32_t   IPC0 __attribute__((section("sfrs"), address(0xBF80F140)));
typedef struct {
  uint32_t CTIS:2;
  uint32_t CTIP:3;
  uint32_t :3;
  uint32_t CS0IS:2;
  uint32_t CS0IP:3;
  uint32_t :3;
  uint32_t CS1IS:2;
  uint32_t CS1IP:3;
  uint32_t :3;
  uint32_t INT0IS:2;
  uint32_t INT0IP:3;
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs"), address(0xBF80F140)));
extern volatile uint32_t        IPC0CLR __attribute__((section("sfrs"),address(0xBF80F144)));
extern volatile uint32_t        IPC0SET __attribute__((section("sfrs"),address(0xBF80F148)));
extern volatile uint32_t        IPC0INV __attribute__((section("sfrs"),address(0xBF80F14C)));
#define IPC1 IPC1
extern volatile uint32_t   IPC1 __attribute__((section("sfrs"), address(0xBF80F150)));
typedef struct {
  uint32_t INT1IS:2;
  uint32_t INT1IP:3;
  uint32_t :3;
  uint32_t INT2IS:2;
  uint32_t INT2IP:3;
  uint32_t :3;
  uint32_t INT3IS:2;
  uint32_t INT3IP:3;
  uint32_t :3;
  uint32_t INT4IS:2;
  uint32_t INT4IP:3;
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs"), address(0xBF80F150)));
extern volatile uint32_t        IPC1CLR __attribute__((section("sfrs"),address(0xBF80F154)));
extern volatile uint32_t        IPC1SET __attribute__((section("sfrs"),address(0xBF80F158)));
extern volatile uint32_t        IPC1INV __attribute__((section("sfrs"),address(0xBF80F15C)));
#define IPC2 IPC2
extern volatile uint32_t   IPC2 __attribute__((section("sfrs"), address(0xBF80F160)));
typedef struct {
  uint32_t CNAIS:2;
  uint32_t CNAIP:3;
  uint32_t :3;
  uint32_t CNBIS:2;
  uint32_t CNBIP:3;
  uint32_t :11;
  uint32_t T1IS:2;
  uint32_t T1IP:3;
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs"), address(0xBF80F160)));
extern volatile uint32_t        IPC2CLR __attribute__((section("sfrs"),address(0xBF80F164)));
extern volatile uint32_t        IPC2SET __attribute__((section("sfrs"),address(0xBF80F168)));
extern volatile uint32_t        IPC2INV __attribute__((section("sfrs"),address(0xBF80F16C)));
#define IPC3 IPC3
extern volatile uint32_t   IPC3 __attribute__((section("sfrs"), address(0xBF80F170)));
typedef struct {
  uint32_t CMP1IS:2;
  uint32_t CMP1IP:3;
  uint32_t :3;
  uint32_t CMP2IS:2;
  uint32_t CMP2IP:3;
  uint32_t :3;
  uint32_t RTCCIS:2;
  uint32_t RTCCIP:3;
  uint32_t :3;
  uint32_t AD1IS:2;
  uint32_t AD1IP:3;
} __IPC3bits_t;
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs"), address(0xBF80F170)));
extern volatile uint32_t        IPC3CLR __attribute__((section("sfrs"),address(0xBF80F174)));
extern volatile uint32_t        IPC3SET __attribute__((section("sfrs"),address(0xBF80F178)));
extern volatile uint32_t        IPC3INV __attribute__((section("sfrs"),address(0xBF80F17C)));
#define IPC4 IPC4
extern volatile uint32_t   IPC4 __attribute__((section("sfrs"), address(0xBF80F180)));
typedef struct {
  uint32_t CRCIS:2;
  uint32_t CRCIP:3;
  uint32_t :3;
  uint32_t LVDIS:2;
  uint32_t LVDIP:3;
  uint32_t :3;
  uint32_t CLC1IS:2;
  uint32_t CLC1IP:3;
  uint32_t :3;
  uint32_t CLC2IS:2;
  uint32_t CLC2IP:3;
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs"), address(0xBF80F180)));
extern volatile uint32_t        IPC4CLR __attribute__((section("sfrs"),address(0xBF80F184)));
extern volatile uint32_t        IPC4SET __attribute__((section("sfrs"),address(0xBF80F188)));
extern volatile uint32_t        IPC4INV __attribute__((section("sfrs"),address(0xBF80F18C)));
#define IPC5 IPC5
extern volatile uint32_t   IPC5 __attribute__((section("sfrs"), address(0xBF80F190)));
typedef struct {
  uint32_t SPI1EIS:2;
  uint32_t SPI1EIP:3;
  uint32_t :3;
  uint32_t SPI1TXIS:2;
  uint32_t SPI1TXIP:3;
  uint32_t :3;
  uint32_t SPI1RXIS:2;
  uint32_t SPI1RXIP:3;
  uint32_t :3;
  uint32_t U1RXIS:2;
  uint32_t U1RXIP:3;
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs"), address(0xBF80F190)));
extern volatile uint32_t        IPC5CLR __attribute__((section("sfrs"),address(0xBF80F194)));
extern volatile uint32_t        IPC5SET __attribute__((section("sfrs"),address(0xBF80F198)));
extern volatile uint32_t        IPC5INV __attribute__((section("sfrs"),address(0xBF80F19C)));
#define IPC6 IPC6
extern volatile uint32_t   IPC6 __attribute__((section("sfrs"), address(0xBF80F1A0)));
typedef struct {
  uint32_t U1TXIS:2;
  uint32_t U1TXIP:3;
  uint32_t :3;
  uint32_t U1EIS:2;
  uint32_t U1EIP:3;
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs"), address(0xBF80F1A0)));
extern volatile uint32_t        IPC6CLR __attribute__((section("sfrs"),address(0xBF80F1A4)));
extern volatile uint32_t        IPC6SET __attribute__((section("sfrs"),address(0xBF80F1A8)));
extern volatile uint32_t        IPC6INV __attribute__((section("sfrs"),address(0xBF80F1AC)));
#define IPC7 IPC7
extern volatile uint32_t   IPC7 __attribute__((section("sfrs"), address(0xBF80F1B0)));
typedef struct {
  uint32_t :8;
  uint32_t CCP1IS:2;
  uint32_t CCP1IP:3;
  uint32_t :3;
  uint32_t CCT1IS:2;
  uint32_t CCT1IP:3;
  uint32_t :3;
  uint32_t CCP2IS:2;
  uint32_t CCP2IP:3;
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs"), address(0xBF80F1B0)));
extern volatile uint32_t        IPC7CLR __attribute__((section("sfrs"),address(0xBF80F1B4)));
extern volatile uint32_t        IPC7SET __attribute__((section("sfrs"),address(0xBF80F1B8)));
extern volatile uint32_t        IPC7INV __attribute__((section("sfrs"),address(0xBF80F1BC)));
#define IPC8 IPC8
extern volatile uint32_t   IPC8 __attribute__((section("sfrs"), address(0xBF80F1C0)));
typedef struct {
  uint32_t CCT2IS:2;
  uint32_t CCT2IP:3;
  uint32_t :3;
  uint32_t CCP3IS:2;
  uint32_t CCP3IP:3;
  uint32_t :3;
  uint32_t CCT3IS:2;
  uint32_t CCT3IP:3;
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs"), address(0xBF80F1C0)));
extern volatile uint32_t        IPC8CLR __attribute__((section("sfrs"),address(0xBF80F1C4)));
extern volatile uint32_t        IPC8SET __attribute__((section("sfrs"),address(0xBF80F1C8)));
extern volatile uint32_t        IPC8INV __attribute__((section("sfrs"),address(0xBF80F1CC)));
#define IPC9 IPC9
extern volatile uint32_t   IPC9 __attribute__((section("sfrs"), address(0xBF80F1D0)));
typedef struct {
  uint32_t :8;
  uint32_t SPI2EIS:2;
  uint32_t SPI2EIP:3;
  uint32_t :3;
  uint32_t SPI2TXIS:2;
  uint32_t SPI2TXIP:3;
  uint32_t :3;
  uint32_t SPI2RXIS:2;
  uint32_t SPI2RXIP:3;
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs"), address(0xBF80F1D0)));
extern volatile uint32_t        IPC9CLR __attribute__((section("sfrs"),address(0xBF80F1D4)));
extern volatile uint32_t        IPC9SET __attribute__((section("sfrs"),address(0xBF80F1D8)));
extern volatile uint32_t        IPC9INV __attribute__((section("sfrs"),address(0xBF80F1DC)));
#define IPC10 IPC10
extern volatile uint32_t   IPC10 __attribute__((section("sfrs"), address(0xBF80F1E0)));
typedef struct {
  uint32_t U2RXIS:2;
  uint32_t U2RXIP:3;
  uint32_t :3;
  uint32_t U2TXIS:2;
  uint32_t U2TXIP:3;
  uint32_t :3;
  uint32_t U2EIS:2;
  uint32_t U2EIP:3;
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs"), address(0xBF80F1E0)));
extern volatile uint32_t        IPC10CLR __attribute__((section("sfrs"),address(0xBF80F1E4)));
extern volatile uint32_t        IPC10SET __attribute__((section("sfrs"),address(0xBF80F1E8)));
extern volatile uint32_t        IPC10INV __attribute__((section("sfrs"),address(0xBF80F1EC)));
#define IPC11 IPC11
extern volatile uint32_t   IPC11 __attribute__((section("sfrs"), address(0xBF80F1F0)));
typedef struct {
  uint32_t :16;
  uint32_t NVMIS:2;
  uint32_t NVMIP:3;
  uint32_t :3;
  uint32_t CPCIS:2;
  uint32_t CPCIP:3;
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs"), address(0xBF80F1F0)));
extern volatile uint32_t        IPC11CLR __attribute__((section("sfrs"),address(0xBF80F1F4)));
extern volatile uint32_t        IPC11SET __attribute__((section("sfrs"),address(0xBF80F1F8)));
extern volatile uint32_t        IPC11INV __attribute__((section("sfrs"),address(0xBF80F1FC)));
#define UDID1 UDID1
extern volatile uint32_t   UDID1 __attribute__((section("sfrs"), address(0xBFC41840)));
#define UDID2 UDID2
extern volatile uint32_t   UDID2 __attribute__((section("sfrs"), address(0xBFC41844)));
#define UDID3 UDID3
extern volatile uint32_t   UDID3 __attribute__((section("sfrs"), address(0xBFC41848)));
#define UDID4 UDID4
extern volatile uint32_t   UDID4 __attribute__((section("sfrs"), address(0xBFC4184C)));
#define UDID5 UDID5
extern volatile uint32_t   UDID5 __attribute__((section("sfrs"), address(0xBFC41850)));
#define FDEVOPT FDEVOPT
extern volatile uint32_t   FDEVOPT __attribute__((section("sfrs"), address(0xBFC017C4)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t SOSCHP:1;
    uint32_t :12;
    uint32_t USERID:16;
  };
  struct {
    uint32_t w:32;
  };
} __FDEVOPTbits_t;
extern volatile __FDEVOPTbits_t FDEVOPTbits __asm__ ("FDEVOPT") __attribute__((section("sfrs"), address(0xBFC017C4)));
#define FICD FICD
extern volatile uint32_t   FICD __attribute__((section("sfrs"), address(0xBFC017C8)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t JTAGEN:1;
    uint32_t ICS:2;
  };
  struct {
    uint32_t w:32;
  };
} __FICDbits_t;
extern volatile __FICDbits_t FICDbits __asm__ ("FICD") __attribute__((section("sfrs"), address(0xBFC017C8)));
#define FPOR FPOR
extern volatile uint32_t   FPOR __attribute__((section("sfrs"), address(0xBFC017CC)));
typedef union {
  struct {
    uint32_t BOREN:2;
    uint32_t RETVR:1;
    uint32_t LPBOREN:1;
  };
  struct {
    uint32_t w:32;
  };
} __FPORbits_t;
extern volatile __FPORbits_t FPORbits __asm__ ("FPOR") __attribute__((section("sfrs"), address(0xBFC017CC)));
#define FWDT FWDT
extern volatile uint32_t   FWDT __attribute__((section("sfrs"), address(0xBFC017D0)));
typedef union {
  struct {
    uint32_t SWDTPS:5;
    uint32_t FWDTWINSZ:2;
    uint32_t WINDIS:1;
    uint32_t RWDTPS:5;
    uint32_t RCLKSEL:2;
    uint32_t FWDTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __FWDTbits_t;
extern volatile __FWDTbits_t FWDTbits __asm__ ("FWDT") __attribute__((section("sfrs"), address(0xBFC017D0)));
#define FOSCSEL FOSCSEL
extern volatile uint32_t   FOSCSEL __attribute__((section("sfrs"), address(0xBFC017D4)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t :1;
    uint32_t PLLSRC:1;
    uint32_t :1;
    uint32_t SOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :1;
    uint32_t SOSCSEL:1;
    uint32_t :1;
    uint32_t FCKSM:2;
  };
  struct {
    uint32_t w:32;
  };
} __FOSCSELbits_t;
extern volatile __FOSCSELbits_t FOSCSELbits __asm__ ("FOSCSEL") __attribute__((section("sfrs"), address(0xBFC017D4)));
#define FSEC FSEC
extern volatile uint32_t   FSEC __attribute__((section("sfrs"), address(0xBFC017D8)));
typedef union {
  struct {
    uint32_t :31;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __FSECbits_t;
extern volatile __FSECbits_t FSECbits __asm__ ("FSEC") __attribute__((section("sfrs"), address(0xBFC017D8)));
#define AFDEVOPT AFDEVOPT
extern volatile uint32_t   AFDEVOPT __attribute__((section("sfrs"), address(0xBFC01744)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t SOSCHP:1;
    uint32_t :12;
    uint32_t USERID:16;
  };
  struct {
    uint32_t w:32;
  };
} __AFDEVOPTbits_t;
extern volatile __AFDEVOPTbits_t AFDEVOPTbits __asm__ ("AFDEVOPT") __attribute__((section("sfrs"), address(0xBFC01744)));
#define AFICD AFICD
extern volatile uint32_t   AFICD __attribute__((section("sfrs"), address(0xBFC01748)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t JTAGEN:1;
    uint32_t ICS:2;
  };
  struct {
    uint32_t w:32;
  };
} __AFICDbits_t;
extern volatile __AFICDbits_t AFICDbits __asm__ ("AFICD") __attribute__((section("sfrs"), address(0xBFC01748)));
#define AFPOR AFPOR
extern volatile uint32_t   AFPOR __attribute__((section("sfrs"), address(0xBFC0174C)));
typedef union {
  struct {
    uint32_t BOREN:2;
    uint32_t RETVR:1;
    uint32_t LPBOREN:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFPORbits_t;
extern volatile __AFPORbits_t AFPORbits __asm__ ("AFPOR") __attribute__((section("sfrs"), address(0xBFC0174C)));
#define AFWDT AFWDT
extern volatile uint32_t   AFWDT __attribute__((section("sfrs"), address(0xBFC01750)));
typedef union {
  struct {
    uint32_t SWDTPS:5;
    uint32_t FWDTWINSZ:2;
    uint32_t WINDIS:1;
    uint32_t RWDTPS:5;
    uint32_t RCLKSEL:2;
    uint32_t FWDTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFWDTbits_t;
extern volatile __AFWDTbits_t AFWDTbits __asm__ ("AFWDT") __attribute__((section("sfrs"), address(0xBFC01750)));
#define AFOSCSEL AFOSCSEL
extern volatile uint32_t   AFOSCSEL __attribute__((section("sfrs"), address(0xBFC01754)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t :1;
    uint32_t PLLSRC:1;
    uint32_t :1;
    uint32_t SOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :1;
    uint32_t SOSCSEL:1;
    uint32_t :1;
    uint32_t FCKSM:2;
  };
  struct {
    uint32_t w:32;
  };
} __AFOSCSELbits_t;
extern volatile __AFOSCSELbits_t AFOSCSELbits __asm__ ("AFOSCSEL") __attribute__((section("sfrs"), address(0xBFC01754)));
#define AFSEC AFSEC
extern volatile uint32_t   AFSEC __attribute__((section("sfrs"), address(0xBFC01758)));
typedef union {
  struct {
    uint32_t :31;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFSECbits_t;
extern volatile __AFSECbits_t AFSECbits __asm__ ("AFSEC") __attribute__((section("sfrs"), address(0xBFC01758)));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern RTCCON1          /* 0xBF800000 */
  .extern RTCCON1CLR       /* 0xBF800004 */
  .extern RTCCON1SET       /* 0xBF800008 */
  .extern RTCCON1INV       /* 0xBF80000C */
  .extern RTCCON2          /* 0xBF800010 */
  .extern RTCCON2CLR       /* 0xBF800014 */
  .extern RTCCON2SET       /* 0xBF800018 */
  .extern RTCCON2INV       /* 0xBF80001C */
  .extern RTCSTAT          /* 0xBF800030 */
  .extern RTCSTATCLR       /* 0xBF800034 */
  .extern RTCSTATSET       /* 0xBF800038 */
  .extern RTCSTATINV       /* 0xBF80003C */
  .extern RTCTIME          /* 0xBF800040 */
  .extern RTCTIMECLR       /* 0xBF800044 */
  .extern RTCTIMESET       /* 0xBF800048 */
  .extern RTCTIMEINV       /* 0xBF80004C */
  .extern RTCDATE          /* 0xBF800050 */
  .extern RTCDATECLR       /* 0xBF800054 */
  .extern RTCDATESET       /* 0xBF800058 */
  .extern RTCDATEINV       /* 0xBF80005C */
  .extern ALMTIME          /* 0xBF800060 */
  .extern ALMTIMECLR       /* 0xBF800064 */
  .extern ALMTIMESET       /* 0xBF800068 */
  .extern ALMTIMEINV       /* 0xBF80006C */
  .extern ALMDATE          /* 0xBF800070 */
  .extern ALMDATECLR       /* 0xBF800074 */
  .extern ALMDATESET       /* 0xBF800078 */
  .extern ALMDATEINV       /* 0xBF80007C */
  .extern CCP1CON1         /* 0xBF800100 */
  .extern CCP1CON1CLR      /* 0xBF800104 */
  .extern CCP1CON1SET      /* 0xBF800108 */
  .extern CCP1CON1INV      /* 0xBF80010C */
  .extern CCP1CON2         /* 0xBF800110 */
  .extern CCP1CON2CLR      /* 0xBF800114 */
  .extern CCP1CON2SET      /* 0xBF800118 */
  .extern CCP1CON2INV      /* 0xBF80011C */
  .extern CCP1CON3         /* 0xBF800120 */
  .extern CCP1CON3CLR      /* 0xBF800124 */
  .extern CCP1CON3SET      /* 0xBF800128 */
  .extern CCP1CON3INV      /* 0xBF80012C */
  .extern CCP1STAT         /* 0xBF800130 */
  .extern CCP1STATCLR      /* 0xBF800134 */
  .extern CCP1STATSET      /* 0xBF800138 */
  .extern CCP1STATINV      /* 0xBF80013C */
  .extern CCP1TMR          /* 0xBF800140 */
  .extern CCP1TMRCLR       /* 0xBF800144 */
  .extern CCP1TMRSET       /* 0xBF800148 */
  .extern CCP1TMRINV       /* 0xBF80014C */
  .extern CCP1PR           /* 0xBF800150 */
  .extern CCP1PRCLR        /* 0xBF800154 */
  .extern CCP1PRSET        /* 0xBF800158 */
  .extern CCP1PRINV        /* 0xBF80015C */
  .extern CCP1RA           /* 0xBF800160 */
  .extern CCP1RACLR        /* 0xBF800164 */
  .extern CCP1RASET        /* 0xBF800168 */
  .extern CCP1RAINV        /* 0xBF80016C */
  .extern CCP1RB           /* 0xBF800170 */
  .extern CCP1RBCLR        /* 0xBF800174 */
  .extern CCP1RBSET        /* 0xBF800178 */
  .extern CCP1RBINV        /* 0xBF80017C */
  .extern CCP1BUF          /* 0xBF800180 */
  .extern CCP1BUFCLR       /* 0xBF800184 */
  .extern CCP1BUFSET       /* 0xBF800188 */
  .extern CCP1BUFINV       /* 0xBF80018C */
  .extern CCP2CON1         /* 0xBF800200 */
  .extern CCP2CON1CLR      /* 0xBF800204 */
  .extern CCP2CON1SET      /* 0xBF800208 */
  .extern CCP2CON1INV      /* 0xBF80020C */
  .extern CCP2CON2         /* 0xBF800210 */
  .extern CCP2CON2CLR      /* 0xBF800214 */
  .extern CCP2CON2SET      /* 0xBF800218 */
  .extern CCP2CON2INV      /* 0xBF80021C */
  .extern CCP2CON3         /* 0xBF800220 */
  .extern CCP2CON3CLR      /* 0xBF800224 */
  .extern CCP2CON3SET      /* 0xBF800228 */
  .extern CCP2CON3INV      /* 0xBF80022C */
  .extern CCP2STAT         /* 0xBF800230 */
  .extern CCP2STATCLR      /* 0xBF800234 */
  .extern CCP2STATSET      /* 0xBF800238 */
  .extern CCP2STATINV      /* 0xBF80023C */
  .extern CCP2TMR          /* 0xBF800240 */
  .extern CCP2TMRCLR       /* 0xBF800244 */
  .extern CCP2TMRSET       /* 0xBF800248 */
  .extern CCP2TMRINV       /* 0xBF80024C */
  .extern CCP2PR           /* 0xBF800250 */
  .extern CCP2PRCLR        /* 0xBF800254 */
  .extern CCP2PRSET        /* 0xBF800258 */
  .extern CCP2PRINV        /* 0xBF80025C */
  .extern CCP2RA           /* 0xBF800260 */
  .extern CCP2RACLR        /* 0xBF800264 */
  .extern CCP2RASET        /* 0xBF800268 */
  .extern CCP2RAINV        /* 0xBF80026C */
  .extern CCP2RB           /* 0xBF800270 */
  .extern CCP2RBCLR        /* 0xBF800274 */
  .extern CCP2RBSET        /* 0xBF800278 */
  .extern CCP2RBINV        /* 0xBF80027C */
  .extern CCP2BUF          /* 0xBF800280 */
  .extern CCP2BUFCLR       /* 0xBF800284 */
  .extern CCP2BUFSET       /* 0xBF800288 */
  .extern CCP2BUFINV       /* 0xBF80028C */
  .extern CCP3CON1         /* 0xBF800300 */
  .extern CCP3CON1CLR      /* 0xBF800304 */
  .extern CCP3CON1SET      /* 0xBF800308 */
  .extern CCP3CON1INV      /* 0xBF80030C */
  .extern CCP3CON2         /* 0xBF800310 */
  .extern CCP3CON2CLR      /* 0xBF800314 */
  .extern CCP3CON2SET      /* 0xBF800318 */
  .extern CCP3CON2INV      /* 0xBF80031C */
  .extern CCP3CON3         /* 0xBF800320 */
  .extern CCP3CON3CLR      /* 0xBF800324 */
  .extern CCP3CON3SET      /* 0xBF800328 */
  .extern CCP3CON3INV      /* 0xBF80032C */
  .extern CCP3STAT         /* 0xBF800330 */
  .extern CCP3STATCLR      /* 0xBF800334 */
  .extern CCP3STATSET      /* 0xBF800338 */
  .extern CCP3STATINV      /* 0xBF80033C */
  .extern CCP3TMR          /* 0xBF800340 */
  .extern CCP3TMRCLR       /* 0xBF800344 */
  .extern CCP3TMRSET       /* 0xBF800348 */
  .extern CCP3TMRINV       /* 0xBF80034C */
  .extern CCP3PR           /* 0xBF800350 */
  .extern CCP3PRCLR        /* 0xBF800354 */
  .extern CCP3PRSET        /* 0xBF800358 */
  .extern CCP3PRINV        /* 0xBF80035C */
  .extern CCP3RA           /* 0xBF800360 */
  .extern CCP3RACLR        /* 0xBF800364 */
  .extern CCP3RASET        /* 0xBF800368 */
  .extern CCP3RAINV        /* 0xBF80036C */
  .extern CCP3RB           /* 0xBF800370 */
  .extern CCP3RBCLR        /* 0xBF800374 */
  .extern CCP3RBSET        /* 0xBF800378 */
  .extern CCP3RBINV        /* 0xBF80037C */
  .extern CCP3BUF          /* 0xBF800380 */
  .extern CCP3BUFCLR       /* 0xBF800384 */
  .extern CCP3BUFSET       /* 0xBF800388 */
  .extern CCP3BUFINV       /* 0xBF80038C */
  .extern U1MODE           /* 0xBF800600 */
  .extern U1MODECLR        /* 0xBF800604 */
  .extern U1MODESET        /* 0xBF800608 */
  .extern U1MODEINV        /* 0xBF80060C */
  .extern U1STA            /* 0xBF800610 */
  .extern U1STACLR         /* 0xBF800614 */
  .extern U1STASET         /* 0xBF800618 */
  .extern U1STAINV         /* 0xBF80061C */
  .extern U1TXREG          /* 0xBF800620 */
  .extern U1RXREG          /* 0xBF800630 */
  .extern U1BRG            /* 0xBF800640 */
  .extern U1BRGCLR         /* 0xBF800644 */
  .extern U1BRGSET         /* 0xBF800648 */
  .extern U1BRGINV         /* 0xBF80064C */
  .extern U2MODE           /* 0xBF800680 */
  .extern U2MODECLR        /* 0xBF800684 */
  .extern U2MODESET        /* 0xBF800688 */
  .extern U2MODEINV        /* 0xBF80068C */
  .extern U2STA            /* 0xBF800690 */
  .extern U2STACLR         /* 0xBF800694 */
  .extern U2STASET         /* 0xBF800698 */
  .extern U2STAINV         /* 0xBF80069C */
  .extern U2TXREG          /* 0xBF8006A0 */
  .extern U2RXREG          /* 0xBF8006B0 */
  .extern U2BRG            /* 0xBF8006C0 */
  .extern U2BRGCLR         /* 0xBF8006C4 */
  .extern U2BRGSET         /* 0xBF8006C8 */
  .extern U2BRGINV         /* 0xBF8006CC */
  .extern ADC1BUF0         /* 0xBF800700 */
  .extern ADC1BUF0CLR      /* 0xBF800704 */
  .extern ADC1BUF0SET      /* 0xBF800708 */
  .extern ADC1BUF0INV      /* 0xBF80070C */
  .extern ADC1BUF1         /* 0xBF800710 */
  .extern ADC1BUF1CLR      /* 0xBF800714 */
  .extern ADC1BUF1SET      /* 0xBF800718 */
  .extern ADC1BUF1INV      /* 0xBF80071C */
  .extern ADC1BUF2         /* 0xBF800720 */
  .extern ADC1BUF2CLR      /* 0xBF800724 */
  .extern ADC1BUF2SET      /* 0xBF800728 */
  .extern ADC1BUF2INV      /* 0xBF80072C */
  .extern ADC1BUF3         /* 0xBF800730 */
  .extern ADC1BUF3CLR      /* 0xBF800734 */
  .extern ADC1BUF3SET      /* 0xBF800738 */
  .extern ADC1BUF3INV      /* 0xBF80073C */
  .extern ADC1BUF4         /* 0xBF800740 */
  .extern ADC1BUF4CLR      /* 0xBF800744 */
  .extern ADC1BUF4SET      /* 0xBF800748 */
  .extern ADC1BUF4INV      /* 0xBF80074C */
  .extern ADC1BUF5         /* 0xBF800750 */
  .extern ADC1BUF5CLR      /* 0xBF800754 */
  .extern ADC1BUF5SET      /* 0xBF800758 */
  .extern ADC1BUF5INV      /* 0xBF80075C */
  .extern ADC1BUF6         /* 0xBF800760 */
  .extern ADC1BUF6CLR      /* 0xBF800764 */
  .extern ADC1BUF6SET      /* 0xBF800768 */
  .extern ADC1BUF6INV      /* 0xBF80076C */
  .extern ADC1BUF7         /* 0xBF800770 */
  .extern ADC1BUF7CLR      /* 0xBF800774 */
  .extern ADC1BUF7SET      /* 0xBF800778 */
  .extern ADC1BUF7INV      /* 0xBF80077C */
  .extern ADC1BUF8         /* 0xBF800780 */
  .extern ADC1BUF8CLR      /* 0xBF800784 */
  .extern ADC1BUF8SET      /* 0xBF800788 */
  .extern ADC1BUF8INV      /* 0xBF80078C */
  .extern ADC1BUF9         /* 0xBF800790 */
  .extern ADC1BUF9CLR      /* 0xBF800794 */
  .extern ADC1BUF9SET      /* 0xBF800798 */
  .extern ADC1BUF9INV      /* 0xBF80079C */
  .extern ADC1BUF10        /* 0xBF8007A0 */
  .extern ADC1BUF10CLR     /* 0xBF8007A4 */
  .extern ADC1BUF10SET     /* 0xBF8007A8 */
  .extern ADC1BUF10INV     /* 0xBF8007AC */
  .extern ADC1BUF11        /* 0xBF8007B0 */
  .extern ADC1BUF11CLR     /* 0xBF8007B4 */
  .extern ADC1BUF11SET     /* 0xBF8007B8 */
  .extern ADC1BUF11INV     /* 0xBF8007BC */
  .extern ADC1BUF12        /* 0xBF8007C0 */
  .extern ADC1BUF12CLR     /* 0xBF8007C4 */
  .extern ADC1BUF12SET     /* 0xBF8007C8 */
  .extern ADC1BUF12INV     /* 0xBF8007CC */
  .extern ADC1BUF13        /* 0xBF8007D0 */
  .extern ADC1BUF13CLR     /* 0xBF8007D4 */
  .extern ADC1BUF13SET     /* 0xBF8007D8 */
  .extern ADC1BUF13INV     /* 0xBF8007DC */
  .extern ADC1BUF14        /* 0xBF8007E0 */
  .extern ADC1BUF14CLR     /* 0xBF8007E4 */
  .extern ADC1BUF14SET     /* 0xBF8007E8 */
  .extern ADC1BUF14INV     /* 0xBF8007EC */
  .extern ADC1BUF15        /* 0xBF8007F0 */
  .extern ADC1BUF15CLR     /* 0xBF8007F4 */
  .extern ADC1BUF15SET     /* 0xBF8007F8 */
  .extern ADC1BUF15INV     /* 0xBF8007FC */
  .extern AD1CON1          /* 0xBF800800 */
  .extern AD1CON1CLR       /* 0xBF800804 */
  .extern AD1CON1SET       /* 0xBF800808 */
  .extern AD1CON1INV       /* 0xBF80080C */
  .extern AD1CON2          /* 0xBF800810 */
  .extern AD1CON2CLR       /* 0xBF800814 */
  .extern AD1CON2SET       /* 0xBF800818 */
  .extern AD1CON2INV       /* 0xBF80081C */
  .extern AD1CON3          /* 0xBF800820 */
  .extern AD1CON3CLR       /* 0xBF800824 */
  .extern AD1CON3SET       /* 0xBF800828 */
  .extern AD1CON3INV       /* 0xBF80082C */
  .extern AD1CHS           /* 0xBF800830 */
  .extern AD1CHSCLR        /* 0xBF800834 */
  .extern AD1CHSSET        /* 0xBF800838 */
  .extern AD1CHSINV        /* 0xBF80083C */
  .extern AD1CSS           /* 0xBF800840 */
  .extern AD1CSSCLR        /* 0xBF800844 */
  .extern AD1CSSSET        /* 0xBF800848 */
  .extern AD1CSSINV        /* 0xBF80084C */
  .extern AD1CON5          /* 0xBF800860 */
  .extern AD1CON5CLR       /* 0xBF800864 */
  .extern AD1CON5SET       /* 0xBF800868 */
  .extern AD1CON5INV       /* 0xBF80086C */
  .extern AD1CHIT          /* 0xBF800870 */
  .extern AD1CHITCLR       /* 0xBF800874 */
  .extern AD1CHITSET       /* 0xBF800878 */
  .extern AD1CHITINV       /* 0xBF80087C */
  .extern CMSTAT           /* 0xBF800900 */
  .extern CMSTATCLR        /* 0xBF800904 */
  .extern CMSTATSET        /* 0xBF800908 */
  .extern CMSTATINV        /* 0xBF80090C */
  .extern CM1CON           /* 0xBF800910 */
  .extern CM1CONCLR        /* 0xBF800914 */
  .extern CM1CONSET        /* 0xBF800918 */
  .extern CM1CONINV        /* 0xBF80091C */
  .extern CM2CON           /* 0xBF800930 */
  .extern CM2CONCLR        /* 0xBF800934 */
  .extern CM2CONSET        /* 0xBF800938 */
  .extern CM2CONINV        /* 0xBF80093C */
  .extern DAC1CON          /* 0xBF800980 */
  .extern DAC1CONCLR       /* 0xBF800984 */
  .extern DAC1CONSET       /* 0xBF800988 */
  .extern DAC1CONINV       /* 0xBF80098C */
  .extern CRCCON           /* 0xBF800A00 */
  .extern CRCCONCLR        /* 0xBF800A04 */
  .extern CRCCONSET        /* 0xBF800A08 */
  .extern CRCCONINV        /* 0xBF800A0C */
  .extern CRCXOR           /* 0xBF800A10 */
  .extern CRCXORCLR        /* 0xBF800A14 */
  .extern CRCXORSET        /* 0xBF800A18 */
  .extern CRCXORINV        /* 0xBF800A1C */
  .extern CRCDAT           /* 0xBF800A20 */
  .extern CRCDATCLR        /* 0xBF800A24 */
  .extern CRCDATSET        /* 0xBF800A28 */
  .extern CRCDATINV        /* 0xBF800A2C */
  .extern CRCWDAT          /* 0xBF800A30 */
  .extern CRCWDATCLR       /* 0xBF800A34 */
  .extern CRCWDATSET       /* 0xBF800A38 */
  .extern CRCWDATINV       /* 0xBF800A3C */
  .extern CLC1CON          /* 0xBF800A80 */
  .extern CLC1CONCLR       /* 0xBF800A84 */
  .extern CLC1CONSET       /* 0xBF800A88 */
  .extern CLC1CONINV       /* 0xBF800A8C */
  .extern CLC1SEL          /* 0xBF800A90 */
  .extern CLC1SELCLR       /* 0xBF800A94 */
  .extern CLC1SELSET       /* 0xBF800A98 */
  .extern CLC1SELINV       /* 0xBF800A9C */
  .extern CLC1GLS          /* 0xBF800AA0 */
  .extern CLC1GLSCLR       /* 0xBF800AA4 */
  .extern CLC1GLSSET       /* 0xBF800AA8 */
  .extern CLC1GLSINV       /* 0xBF800AAC */
  .extern CLC2CON          /* 0xBF800B00 */
  .extern CLC2CONCLR       /* 0xBF800B04 */
  .extern CLC2CONSET       /* 0xBF800B08 */
  .extern CLC2CONINV       /* 0xBF800B0C */
  .extern CLC2SEL          /* 0xBF800B10 */
  .extern CLC2SELCLR       /* 0xBF800B14 */
  .extern CLC2SELSET       /* 0xBF800B18 */
  .extern CLC2SELINV       /* 0xBF800B1C */
  .extern CLC2GLS          /* 0xBF800B20 */
  .extern CLC2GLSCLR       /* 0xBF800B24 */
  .extern CLC2GLSSET       /* 0xBF800B28 */
  .extern CLC2GLSINV       /* 0xBF800B2C */
  .extern OSCCON           /* 0xBF802000 */
  .extern OSCCONCLR        /* 0xBF802004 */
  .extern OSCCONSET        /* 0xBF802008 */
  .extern OSCCONINV        /* 0xBF80200C */
  .extern SPLLCON          /* 0xBF802020 */
  .extern SPLLCONCLR       /* 0xBF802024 */
  .extern SPLLCONSET       /* 0xBF802028 */
  .extern SPLLCONINV       /* 0xBF80202C */
  .extern RCON             /* 0xBF802060 */
  .extern RCONCLR          /* 0xBF802064 */
  .extern RCONSET          /* 0xBF802068 */
  .extern RCONINV          /* 0xBF80206C */
  .extern RSWRST           /* 0xBF802070 */
  .extern RSWRSTCLR        /* 0xBF802074 */
  .extern RSWRSTSET        /* 0xBF802078 */
  .extern RSWRSTINV        /* 0xBF80207C */
  .extern RNMICON          /* 0xBF802080 */
  .extern RNMICONCLR       /* 0xBF802084 */
  .extern RNMICONSET       /* 0xBF802088 */
  .extern RNMICONINV       /* 0xBF80208C */
  .extern PWRCON           /* 0xBF802090 */
  .extern PWRCONCLR        /* 0xBF802094 */
  .extern PWRCONSET        /* 0xBF802098 */
  .extern PWRCONINV        /* 0xBF80209C */
  .extern REFO1CON         /* 0xBF8020A0 */
  .extern REFO1CONCLR      /* 0xBF8020A4 */
  .extern REFO1CONSET      /* 0xBF8020A8 */
  .extern REFO1CONINV      /* 0xBF8020AC */
  .extern REFO1TRIM        /* 0xBF8020B0 */
  .extern REFO1TRIMCLR     /* 0xBF8020B4 */
  .extern REFO1TRIMSET     /* 0xBF8020B8 */
  .extern REFO1TRIMINV     /* 0xBF8020BC */
  .extern CLKSTAT          /* 0xBF8020F0 */
  .extern CLKSTATCLR       /* 0xBF8020F4 */
  .extern CLKSTATSET       /* 0xBF8020F8 */
  .extern CLKSTATINV       /* 0xBF8020FC */
  .extern OSCTUN           /* 0xBF802200 */
  .extern OSCTUNCLR        /* 0xBF802204 */
  .extern OSCTUNSET        /* 0xBF802208 */
  .extern OSCTUNINV        /* 0xBF80220C */
  .extern ANCFG            /* 0xBF802300 */
  .extern ANCFGCLR         /* 0xBF802304 */
  .extern ANCFGSET         /* 0xBF802308 */
  .extern ANCFGINV         /* 0xBF80230C */
  .extern HLVDCON          /* 0xBF802310 */
  .extern HLVDCONCLR       /* 0xBF802314 */
  .extern HLVDCONSET       /* 0xBF802318 */
  .extern HLVDCONINV       /* 0xBF80231C */
  .extern NVMCON           /* 0xBF802380 */
  .extern NVMCONCLR        /* 0xBF802384 */
  .extern NVMCONSET        /* 0xBF802388 */
  .extern NVMCONINV        /* 0xBF80238C */
  .extern NVMKEY           /* 0xBF802390 */
  .extern NVMKEYCLR        /* 0xBF802394 */
  .extern NVMKEYSET        /* 0xBF802398 */
  .extern NVMKEYINV        /* 0xBF80239C */
  .extern NVMADDR          /* 0xBF8023A0 */
  .extern NVMADDRCLR       /* 0xBF8023A4 */
  .extern NVMADDRSET       /* 0xBF8023A8 */
  .extern NVMADDRINV       /* 0xBF8023AC */
  .extern NVMDATA0         /* 0xBF8023B0 */
  .extern NVMDATA0CLR      /* 0xBF8023B4 */
  .extern NVMDATA0SET      /* 0xBF8023B8 */
  .extern NVMDATA0INV      /* 0xBF8023BC */
  .extern NVMDATA1         /* 0xBF8023C0 */
  .extern NVMDATA1CLR      /* 0xBF8023C4 */
  .extern NVMDATA1SET      /* 0xBF8023C8 */
  .extern NVMDATA1INV      /* 0xBF8023CC */
  .extern NVMSRCADDR       /* 0xBF8023D0 */
  .extern NVMSRCADDRCLR    /* 0xBF8023D4 */
  .extern NVMSRCADDRSET    /* 0xBF8023D8 */
  .extern NVMSRCADDRINV    /* 0xBF8023DC */
  .extern NVMPWP           /* 0xBF8023E0 */
  .extern NVMPWPCLR        /* 0xBF8023E4 */
  .extern NVMPWPSET        /* 0xBF8023E8 */
  .extern NVMPWPINV        /* 0xBF8023EC */
  .extern NVMBWP           /* 0xBF8023F0 */
  .extern NVMBWPCLR        /* 0xBF8023F4 */
  .extern NVMBWPSET        /* 0xBF8023F8 */
  .extern NVMBWPINV        /* 0xBF8023FC */
  .extern RPCON            /* 0xBF802480 */
  .extern RPCONCLR         /* 0xBF802484 */
  .extern RPCONSET         /* 0xBF802488 */
  .extern RPCONINV         /* 0xBF80248C */
  .extern RPINR1           /* 0xBF8024A0 */
  .extern RPINR1CLR        /* 0xBF8024A4 */
  .extern RPINR1SET        /* 0xBF8024A8 */
  .extern RPINR1INV        /* 0xBF8024AC */
  .extern RPINR2           /* 0xBF8024B0 */
  .extern RPINR2CLR        /* 0xBF8024B4 */
  .extern RPINR2SET        /* 0xBF8024B8 */
  .extern RPINR2INV        /* 0xBF8024BC */
  .extern RPINR3           /* 0xBF8024C0 */
  .extern RPINR3CLR        /* 0xBF8024C4 */
  .extern RPINR3SET        /* 0xBF8024C8 */
  .extern RPINR3INV        /* 0xBF8024CC */
  .extern RPINR5           /* 0xBF8024E0 */
  .extern RPINR5CLR        /* 0xBF8024E4 */
  .extern RPINR5SET        /* 0xBF8024E8 */
  .extern RPINR5INV        /* 0xBF8024EC */
  .extern RPINR6           /* 0xBF8024F0 */
  .extern RPINR6CLR        /* 0xBF8024F4 */
  .extern RPINR6SET        /* 0xBF8024F8 */
  .extern RPINR6INV        /* 0xBF8024FC */
  .extern RPINR9           /* 0xBF802520 */
  .extern RPINR9CLR        /* 0xBF802524 */
  .extern RPINR9SET        /* 0xBF802528 */
  .extern RPINR9INV        /* 0xBF80252C */
  .extern RPINR11          /* 0xBF802540 */
  .extern RPINR11CLR       /* 0xBF802544 */
  .extern RPINR11SET       /* 0xBF802548 */
  .extern RPINR11INV       /* 0xBF80254C */
  .extern RPINR12          /* 0xBF802550 */
  .extern RPINR12CLR       /* 0xBF802554 */
  .extern RPINR12SET       /* 0xBF802558 */
  .extern RPINR12INV       /* 0xBF80255C */
  .extern RPOR0            /* 0xBF802590 */
  .extern RPOR0CLR         /* 0xBF802594 */
  .extern RPOR0SET         /* 0xBF802598 */
  .extern RPOR0INV         /* 0xBF80259C */
  .extern RPOR1            /* 0xBF8025A0 */
  .extern RPOR1CLR         /* 0xBF8025A4 */
  .extern RPOR1SET         /* 0xBF8025A8 */
  .extern RPOR1INV         /* 0xBF8025AC */
  .extern RPOR2            /* 0xBF8025B0 */
  .extern RPOR2CLR         /* 0xBF8025B4 */
  .extern RPOR2SET         /* 0xBF8025B8 */
  .extern RPOR2INV         /* 0xBF8025BC */
  .extern RPOR3            /* 0xBF8025C0 */
  .extern RPOR3CLR         /* 0xBF8025C4 */
  .extern RPOR3SET         /* 0xBF8025C8 */
  .extern RPOR3INV         /* 0xBF8025CC */
  .extern RPOR4            /* 0xBF8025D0 */
  .extern RPOR4CLR         /* 0xBF8025D4 */
  .extern RPOR4SET         /* 0xBF8025D8 */
  .extern RPOR4INV         /* 0xBF8025DC */
  .extern ANSELA           /* 0xBF802600 */
  .extern ANSELACLR        /* 0xBF802604 */
  .extern ANSELASET        /* 0xBF802608 */
  .extern ANSELAINV        /* 0xBF80260C */
  .extern TRISA            /* 0xBF802610 */
  .extern TRISACLR         /* 0xBF802614 */
  .extern TRISASET         /* 0xBF802618 */
  .extern TRISAINV         /* 0xBF80261C */
  .extern PORTA            /* 0xBF802620 */
  .extern PORTACLR         /* 0xBF802624 */
  .extern PORTASET         /* 0xBF802628 */
  .extern PORTAINV         /* 0xBF80262C */
  .extern LATA             /* 0xBF802630 */
  .extern LATACLR          /* 0xBF802634 */
  .extern LATASET          /* 0xBF802638 */
  .extern LATAINV          /* 0xBF80263C */
  .extern ODCA             /* 0xBF802640 */
  .extern ODCACLR          /* 0xBF802644 */
  .extern ODCASET          /* 0xBF802648 */
  .extern ODCAINV          /* 0xBF80264C */
  .extern CNPUA            /* 0xBF802650 */
  .extern CNPUACLR         /* 0xBF802654 */
  .extern CNPUASET         /* 0xBF802658 */
  .extern CNPUAINV         /* 0xBF80265C */
  .extern CNPDA            /* 0xBF802660 */
  .extern CNPDACLR         /* 0xBF802664 */
  .extern CNPDASET         /* 0xBF802668 */
  .extern CNPDAINV         /* 0xBF80266C */
  .extern CNCONA           /* 0xBF802670 */
  .extern CNCONACLR        /* 0xBF802674 */
  .extern CNCONASET        /* 0xBF802678 */
  .extern CNCONAINV        /* 0xBF80267C */
  .extern CNEN0A           /* 0xBF802680 */
  .extern CNEN0ACLR        /* 0xBF802684 */
  .extern CNEN0ASET        /* 0xBF802688 */
  .extern CNEN0AINV        /* 0xBF80268C */
  .extern CNSTATA          /* 0xBF802690 */
  .extern CNSTATACLR       /* 0xBF802694 */
  .extern CNSTATASET       /* 0xBF802698 */
  .extern CNSTATAINV       /* 0xBF80269C */
  .extern CNEN1A           /* 0xBF8026A0 */
  .extern CNEN1ACLR        /* 0xBF8026A4 */
  .extern CNEN1ASET        /* 0xBF8026A8 */
  .extern CNEN1AINV        /* 0xBF8026AC */
  .extern CNFA             /* 0xBF8026B0 */
  .extern CNFACLR          /* 0xBF8026B4 */
  .extern CNFASET          /* 0xBF8026B8 */
  .extern CNFAINV          /* 0xBF8026BC */
  .extern ANSELB           /* 0xBF802700 */
  .extern ANSELBCLR        /* 0xBF802704 */
  .extern ANSELBSET        /* 0xBF802708 */
  .extern ANSELBINV        /* 0xBF80270C */
  .extern TRISB            /* 0xBF802710 */
  .extern TRISBCLR         /* 0xBF802714 */
  .extern TRISBSET         /* 0xBF802718 */
  .extern TRISBINV         /* 0xBF80271C */
  .extern PORTB            /* 0xBF802720 */
  .extern PORTBCLR         /* 0xBF802724 */
  .extern PORTBSET         /* 0xBF802728 */
  .extern PORTBINV         /* 0xBF80272C */
  .extern LATB             /* 0xBF802730 */
  .extern LATBCLR          /* 0xBF802734 */
  .extern LATBSET          /* 0xBF802738 */
  .extern LATBINV          /* 0xBF80273C */
  .extern ODCB             /* 0xBF802740 */
  .extern ODCBCLR          /* 0xBF802744 */
  .extern ODCBSET          /* 0xBF802748 */
  .extern ODCBINV          /* 0xBF80274C */
  .extern CNPUB            /* 0xBF802750 */
  .extern CNPUBCLR         /* 0xBF802754 */
  .extern CNPUBSET         /* 0xBF802758 */
  .extern CNPUBINV         /* 0xBF80275C */
  .extern CNPDB            /* 0xBF802760 */
  .extern CNPDBCLR         /* 0xBF802764 */
  .extern CNPDBSET         /* 0xBF802768 */
  .extern CNPDBINV         /* 0xBF80276C */
  .extern CNCONB           /* 0xBF802770 */
  .extern CNCONBCLR        /* 0xBF802774 */
  .extern CNCONBSET        /* 0xBF802778 */
  .extern CNCONBINV        /* 0xBF80277C */
  .extern CNEN0B           /* 0xBF802780 */
  .extern CNEN0BCLR        /* 0xBF802784 */
  .extern CNEN0BSET        /* 0xBF802788 */
  .extern CNEN0BINV        /* 0xBF80278C */
  .extern CNSTATB          /* 0xBF802790 */
  .extern CNSTATBCLR       /* 0xBF802794 */
  .extern CNSTATBSET       /* 0xBF802798 */
  .extern CNSTATBINV       /* 0xBF80279C */
  .extern CNEN1B           /* 0xBF8027A0 */
  .extern CNEN1BCLR        /* 0xBF8027A4 */
  .extern CNEN1BSET        /* 0xBF8027A8 */
  .extern CNEN1BINV        /* 0xBF8027AC */
  .extern CNFB             /* 0xBF8027B0 */
  .extern CNFBCLR          /* 0xBF8027B4 */
  .extern CNFBSET          /* 0xBF8027B8 */
  .extern CNFBINV          /* 0xBF8027BC */
  .extern PMDCON           /* 0xBF802C00 */
  .extern PMDCONCLR        /* 0xBF802C04 */
  .extern PMDCONSET        /* 0xBF802C08 */
  .extern PMDCONINV        /* 0xBF802C0C */
  .extern PMD1             /* 0xBF802C10 */
  .extern PMD1CLR          /* 0xBF802C14 */
  .extern PMD1SET          /* 0xBF802C18 */
  .extern PMD1INV          /* 0xBF802C1C */
  .extern PMD2             /* 0xBF802C20 */
  .extern PMD2CLR          /* 0xBF802C24 */
  .extern PMD2SET          /* 0xBF802C28 */
  .extern PMD2INV          /* 0xBF802C2C */
  .extern PMD3             /* 0xBF802C30 */
  .extern PMD3CLR          /* 0xBF802C34 */
  .extern PMD3SET          /* 0xBF802C38 */
  .extern PMD3INV          /* 0xBF802C3C */
  .extern PMD4             /* 0xBF802C40 */
  .extern PMD4CLR          /* 0xBF802C44 */
  .extern PMD4SET          /* 0xBF802C48 */
  .extern PMD4INV          /* 0xBF802C4C */
  .extern PMD5             /* 0xBF802C50 */
  .extern PMD5CLR          /* 0xBF802C54 */
  .extern PMD5SET          /* 0xBF802C58 */
  .extern PMD5INV          /* 0xBF802C5C */
  .extern PMD6             /* 0xBF802C60 */
  .extern PMD6CLR          /* 0xBF802C64 */
  .extern PMD6SET          /* 0xBF802C68 */
  .extern PMD6INV          /* 0xBF802C6C */
  .extern PMD7             /* 0xBF802C70 */
  .extern PMD7CLR          /* 0xBF802C74 */
  .extern PMD7SET          /* 0xBF802C78 */
  .extern PMD7INV          /* 0xBF802C7C */
  .extern CFGCON           /* 0xBF803B00 */
  .extern CFGCONCLR        /* 0xBF803B04 */
  .extern CFGCONSET        /* 0xBF803B08 */
  .extern CFGCONINV        /* 0xBF803B0C */
  .extern DEVID            /* 0xBF803B20 */
  .extern DEVIDCLR         /* 0xBF803B24 */
  .extern DEVIDSET         /* 0xBF803B28 */
  .extern DEVIDINV         /* 0xBF803B2C */
  .extern SYSKEY           /* 0xBF803B30 */
  .extern SYSKEYCLR        /* 0xBF803B34 */
  .extern SYSKEYSET        /* 0xBF803B38 */
  .extern SYSKEYINV        /* 0xBF803B3C */
  .extern WDTCON           /* 0xBF803E80 */
  .extern WDTCONCLR        /* 0xBF803E84 */
  .extern WDTCONSET        /* 0xBF803E88 */
  .extern WDTCONINV        /* 0xBF803E8C */
  .extern T1CON            /* 0xBF808000 */
  .extern T1CONCLR         /* 0xBF808004 */
  .extern T1CONSET         /* 0xBF808008 */
  .extern T1CONINV         /* 0xBF80800C */
  .extern TMR1             /* 0xBF808010 */
  .extern TMR1CLR          /* 0xBF808014 */
  .extern TMR1SET          /* 0xBF808018 */
  .extern TMR1INV          /* 0xBF80801C */
  .extern PR1              /* 0xBF808020 */
  .extern PR1CLR           /* 0xBF808024 */
  .extern PR1SET           /* 0xBF808028 */
  .extern PR1INV           /* 0xBF80802C */
  .extern SPI1CON          /* 0xBF808080 */
  .extern SPI1CONCLR       /* 0xBF808084 */
  .extern SPI1CONSET       /* 0xBF808088 */
  .extern SPI1CONINV       /* 0xBF80808C */
  .extern SPI1STAT         /* 0xBF808090 */
  .extern SPI1STATCLR      /* 0xBF808094 */
  .extern SPI1STATSET      /* 0xBF808098 */
  .extern SPI1STATINV      /* 0xBF80809C */
  .extern SPI1BUF          /* 0xBF8080A0 */
  .extern SPI1BRG          /* 0xBF8080B0 */
  .extern SPI1BRGCLR       /* 0xBF8080B4 */
  .extern SPI1BRGSET       /* 0xBF8080B8 */
  .extern SPI1BRGINV       /* 0xBF8080BC */
  .extern SPI1CON2         /* 0xBF8080C0 */
  .extern SPI1CON2CLR      /* 0xBF8080C4 */
  .extern SPI1CON2SET      /* 0xBF8080C8 */
  .extern SPI1CON2INV      /* 0xBF8080CC */
  .extern SPI2CON          /* 0xBF808100 */
  .extern SPI2CONCLR       /* 0xBF808104 */
  .extern SPI2CONSET       /* 0xBF808108 */
  .extern SPI2CONINV       /* 0xBF80810C */
  .extern SPI2STAT         /* 0xBF808110 */
  .extern SPI2STATCLR      /* 0xBF808114 */
  .extern SPI2STATSET      /* 0xBF808118 */
  .extern SPI2STATINV      /* 0xBF80811C */
  .extern SPI2BUF          /* 0xBF808120 */
  .extern SPI2BRG          /* 0xBF808130 */
  .extern SPI2BRGCLR       /* 0xBF808134 */
  .extern SPI2BRGSET       /* 0xBF808138 */
  .extern SPI2BRGINV       /* 0xBF80813C */
  .extern SPI2CON2         /* 0xBF808140 */
  .extern SPI2CON2CLR      /* 0xBF808144 */
  .extern SPI2CON2SET      /* 0xBF808148 */
  .extern SPI2CON2INV      /* 0xBF80814C */
  .extern INTCON           /* 0xBF80F000 */
  .extern INTCONCLR        /* 0xBF80F004 */
  .extern INTCONSET        /* 0xBF80F008 */
  .extern INTCONINV        /* 0xBF80F00C */
  .extern PRISS            /* 0xBF80F010 */
  .extern PRISSCLR         /* 0xBF80F014 */
  .extern PRISSSET         /* 0xBF80F018 */
  .extern PRISSINV         /* 0xBF80F01C */
  .extern INTSTAT          /* 0xBF80F020 */
  .extern INTSTATCLR       /* 0xBF80F024 */
  .extern INTSTATSET       /* 0xBF80F028 */
  .extern INTSTATINV       /* 0xBF80F02C */
  .extern IPTMR            /* 0xBF80F030 */
  .extern IPTMRCLR         /* 0xBF80F034 */
  .extern IPTMRSET         /* 0xBF80F038 */
  .extern IPTMRINV         /* 0xBF80F03C */
  .extern IFS0             /* 0xBF80F040 */
  .extern IFS0CLR          /* 0xBF80F044 */
  .extern IFS0SET          /* 0xBF80F048 */
  .extern IFS0INV          /* 0xBF80F04C */
  .extern IFS1             /* 0xBF80F050 */
  .extern IFS1CLR          /* 0xBF80F054 */
  .extern IFS1SET          /* 0xBF80F058 */
  .extern IFS1INV          /* 0xBF80F05C */
  .extern IEC0             /* 0xBF80F0C0 */
  .extern IEC0CLR          /* 0xBF80F0C4 */
  .extern IEC0SET          /* 0xBF80F0C8 */
  .extern IEC0INV          /* 0xBF80F0CC */
  .extern IEC1             /* 0xBF80F0D0 */
  .extern IEC1CLR          /* 0xBF80F0D4 */
  .extern IEC1SET          /* 0xBF80F0D8 */
  .extern IEC1INV          /* 0xBF80F0DC */
  .extern IPC0             /* 0xBF80F140 */
  .extern IPC0CLR          /* 0xBF80F144 */
  .extern IPC0SET          /* 0xBF80F148 */
  .extern IPC0INV          /* 0xBF80F14C */
  .extern IPC1             /* 0xBF80F150 */
  .extern IPC1CLR          /* 0xBF80F154 */
  .extern IPC1SET          /* 0xBF80F158 */
  .extern IPC1INV          /* 0xBF80F15C */
  .extern IPC2             /* 0xBF80F160 */
  .extern IPC2CLR          /* 0xBF80F164 */
  .extern IPC2SET          /* 0xBF80F168 */
  .extern IPC2INV          /* 0xBF80F16C */
  .extern IPC3             /* 0xBF80F170 */
  .extern IPC3CLR          /* 0xBF80F174 */
  .extern IPC3SET          /* 0xBF80F178 */
  .extern IPC3INV          /* 0xBF80F17C */
  .extern IPC4             /* 0xBF80F180 */
  .extern IPC4CLR          /* 0xBF80F184 */
  .extern IPC4SET          /* 0xBF80F188 */
  .extern IPC4INV          /* 0xBF80F18C */
  .extern IPC5             /* 0xBF80F190 */
  .extern IPC5CLR          /* 0xBF80F194 */
  .extern IPC5SET          /* 0xBF80F198 */
  .extern IPC5INV          /* 0xBF80F19C */
  .extern IPC6             /* 0xBF80F1A0 */
  .extern IPC6CLR          /* 0xBF80F1A4 */
  .extern IPC6SET          /* 0xBF80F1A8 */
  .extern IPC6INV          /* 0xBF80F1AC */
  .extern IPC7             /* 0xBF80F1B0 */
  .extern IPC7CLR          /* 0xBF80F1B4 */
  .extern IPC7SET          /* 0xBF80F1B8 */
  .extern IPC7INV          /* 0xBF80F1BC */
  .extern IPC8             /* 0xBF80F1C0 */
  .extern IPC8CLR          /* 0xBF80F1C4 */
  .extern IPC8SET          /* 0xBF80F1C8 */
  .extern IPC8INV          /* 0xBF80F1CC */
  .extern IPC9             /* 0xBF80F1D0 */
  .extern IPC9CLR          /* 0xBF80F1D4 */
  .extern IPC9SET          /* 0xBF80F1D8 */
  .extern IPC9INV          /* 0xBF80F1DC */
  .extern IPC10            /* 0xBF80F1E0 */
  .extern IPC10CLR         /* 0xBF80F1E4 */
  .extern IPC10SET         /* 0xBF80F1E8 */
  .extern IPC10INV         /* 0xBF80F1EC */
  .extern IPC11            /* 0xBF80F1F0 */
  .extern IPC11CLR         /* 0xBF80F1F4 */
  .extern IPC11SET         /* 0xBF80F1F8 */
  .extern IPC11INV         /* 0xBF80F1FC */
  .extern UDID1            /* 0xBFC41840 */
  .extern UDID2            /* 0xBFC41844 */
  .extern UDID3            /* 0xBFC41848 */
  .extern UDID4            /* 0xBFC4184C */
  .extern UDID5            /* 0xBFC41850 */
  .extern FDEVOPT          /* 0xBFC017C4 */
  .extern FICD             /* 0xBFC017C8 */
  .extern FPOR             /* 0xBFC017CC */
  .extern FWDT             /* 0xBFC017D0 */
  .extern FOSCSEL          /* 0xBFC017D4 */
  .extern FSEC             /* 0xBFC017D8 */
  .extern AFDEVOPT         /* 0xBFC01744 */
  .extern AFICD            /* 0xBFC01748 */
  .extern AFPOR            /* 0xBFC0174C */
  .extern AFWDT            /* 0xBFC01750 */
  .extern AFOSCSEL         /* 0xBFC01754 */
  .extern AFSEC            /* 0xBFC01758 */
#else
#error Unknown language!
#endif

#define _RTCCON1_OUTSEL_POSITION                 0x00000004
#define _RTCCON1_OUTSEL_MASK                     0x00000070
#define _RTCCON1_OUTSEL_LENGTH                   0x00000003

#define _RTCCON1_RTCOE_POSITION                  0x00000007
#define _RTCCON1_RTCOE_MASK                      0x00000080
#define _RTCCON1_RTCOE_LENGTH                    0x00000001

#define _RTCCON1_WRLOCK_POSITION                 0x0000000B
#define _RTCCON1_WRLOCK_MASK                     0x00000800
#define _RTCCON1_WRLOCK_LENGTH                   0x00000001

#define _RTCCON1_ON_POSITION                     0x0000000F
#define _RTCCON1_ON_MASK                         0x00008000
#define _RTCCON1_ON_LENGTH                       0x00000001

#define _RTCCON1_ALMRPT_POSITION                 0x00000010
#define _RTCCON1_ALMRPT_MASK                     0x00FF0000
#define _RTCCON1_ALMRPT_LENGTH                   0x00000008

#define _RTCCON1_AMASK_POSITION                  0x00000018
#define _RTCCON1_AMASK_MASK                      0x0F000000
#define _RTCCON1_AMASK_LENGTH                    0x00000004

#define _RTCCON1_CHIME_POSITION                  0x0000001E
#define _RTCCON1_CHIME_MASK                      0x40000000
#define _RTCCON1_CHIME_LENGTH                    0x00000001

#define _RTCCON1_ALRMEN_POSITION                 0x0000001F
#define _RTCCON1_ALRMEN_MASK                     0x80000000
#define _RTCCON1_ALRMEN_LENGTH                   0x00000001

#define _RTCCON2_CLKSEL_POSITION                 0x00000000
#define _RTCCON2_CLKSEL_MASK                     0x00000003
#define _RTCCON2_CLKSEL_LENGTH                   0x00000002

#define _RTCCON2_FDIV_POSITION                   0x0000000B
#define _RTCCON2_FDIV_MASK                       0x0000F800
#define _RTCCON2_FDIV_LENGTH                     0x00000005

#define _RTCCON2_DIV_POSITION                    0x00000010
#define _RTCCON2_DIV_MASK                        0xFFFF0000
#define _RTCCON2_DIV_LENGTH                      0x00000010

#define _RTCSTAT_HALFSEC_POSITION                0x00000000
#define _RTCSTAT_HALFSEC_MASK                    0x00000001
#define _RTCSTAT_HALFSEC_LENGTH                  0x00000001

#define _RTCSTAT_ALMSYNC_POSITION                0x00000001
#define _RTCSTAT_ALMSYNC_MASK                    0x00000002
#define _RTCSTAT_ALMSYNC_LENGTH                  0x00000001

#define _RTCSTAT_SYNC_POSITION                   0x00000002
#define _RTCSTAT_SYNC_MASK                       0x00000004
#define _RTCSTAT_SYNC_LENGTH                     0x00000001

#define _RTCSTAT_ALMEVT_POSITION                 0x00000005
#define _RTCSTAT_ALMEVT_MASK                     0x00000020
#define _RTCSTAT_ALMEVT_LENGTH                   0x00000001

#define _RTCTIME_SECONE_POSITION                 0x00000008
#define _RTCTIME_SECONE_MASK                     0x00000F00
#define _RTCTIME_SECONE_LENGTH                   0x00000004

#define _RTCTIME_SECTEN_POSITION                 0x0000000C
#define _RTCTIME_SECTEN_MASK                     0x00007000
#define _RTCTIME_SECTEN_LENGTH                   0x00000003

#define _RTCTIME_MINONE_POSITION                 0x00000010
#define _RTCTIME_MINONE_MASK                     0x000F0000
#define _RTCTIME_MINONE_LENGTH                   0x00000004

#define _RTCTIME_MINTEN_POSITION                 0x00000014
#define _RTCTIME_MINTEN_MASK                     0x00700000
#define _RTCTIME_MINTEN_LENGTH                   0x00000003

#define _RTCTIME_HRONE_POSITION                  0x00000018
#define _RTCTIME_HRONE_MASK                      0x0F000000
#define _RTCTIME_HRONE_LENGTH                    0x00000004

#define _RTCTIME_HRTEN_POSITION                  0x0000001C
#define _RTCTIME_HRTEN_MASK                      0x70000000
#define _RTCTIME_HRTEN_LENGTH                    0x00000003

#define _RTCDATE_WDAY_POSITION                   0x00000000
#define _RTCDATE_WDAY_MASK                       0x00000007
#define _RTCDATE_WDAY_LENGTH                     0x00000003

#define _RTCDATE_DAYONE_POSITION                 0x00000008
#define _RTCDATE_DAYONE_MASK                     0x00000F00
#define _RTCDATE_DAYONE_LENGTH                   0x00000004

#define _RTCDATE_DAYTEN_POSITION                 0x0000000C
#define _RTCDATE_DAYTEN_MASK                     0x00003000
#define _RTCDATE_DAYTEN_LENGTH                   0x00000002

#define _RTCDATE_MTHONE_POSITION                 0x00000010
#define _RTCDATE_MTHONE_MASK                     0x000F0000
#define _RTCDATE_MTHONE_LENGTH                   0x00000004

#define _RTCDATE_MTHTEN_POSITION                 0x00000014
#define _RTCDATE_MTHTEN_MASK                     0x00100000
#define _RTCDATE_MTHTEN_LENGTH                   0x00000001

#define _RTCDATE_YRONE_POSITION                  0x00000018
#define _RTCDATE_YRONE_MASK                      0x0F000000
#define _RTCDATE_YRONE_LENGTH                    0x00000004

#define _RTCDATE_YRTEN_POSITION                  0x0000001C
#define _RTCDATE_YRTEN_MASK                      0xF0000000
#define _RTCDATE_YRTEN_LENGTH                    0x00000004

#define _ALMTIME_SECONE_POSITION                 0x00000008
#define _ALMTIME_SECONE_MASK                     0x00000F00
#define _ALMTIME_SECONE_LENGTH                   0x00000004

#define _ALMTIME_SECTEN_POSITION                 0x0000000C
#define _ALMTIME_SECTEN_MASK                     0x00007000
#define _ALMTIME_SECTEN_LENGTH                   0x00000003

#define _ALMTIME_MINONE_POSITION                 0x00000010
#define _ALMTIME_MINONE_MASK                     0x000F0000
#define _ALMTIME_MINONE_LENGTH                   0x00000004

#define _ALMTIME_MINTEN_POSITION                 0x00000014
#define _ALMTIME_MINTEN_MASK                     0x00700000
#define _ALMTIME_MINTEN_LENGTH                   0x00000003

#define _ALMTIME_HRONE_POSITION                  0x00000018
#define _ALMTIME_HRONE_MASK                      0x0F000000
#define _ALMTIME_HRONE_LENGTH                    0x00000004

#define _ALMTIME_HRTEN_POSITION                  0x0000001C
#define _ALMTIME_HRTEN_MASK                      0x70000000
#define _ALMTIME_HRTEN_LENGTH                    0x00000003

#define _ALMDATE_WDAY_POSITION                   0x00000000
#define _ALMDATE_WDAY_MASK                       0x00000007
#define _ALMDATE_WDAY_LENGTH                     0x00000003

#define _ALMDATE_DAYONE_POSITION                 0x00000008
#define _ALMDATE_DAYONE_MASK                     0x00000F00
#define _ALMDATE_DAYONE_LENGTH                   0x00000004

#define _ALMDATE_DAYTEN_POSITION                 0x0000000C
#define _ALMDATE_DAYTEN_MASK                     0x00003000
#define _ALMDATE_DAYTEN_LENGTH                   0x00000002

#define _ALMDATE_MTHONE_POSITION                 0x00000010
#define _ALMDATE_MTHONE_MASK                     0x000F0000
#define _ALMDATE_MTHONE_LENGTH                   0x00000004

#define _ALMDATE_MTHTEN_POSITION                 0x00000014
#define _ALMDATE_MTHTEN_MASK                     0x00100000
#define _ALMDATE_MTHTEN_LENGTH                   0x00000001

#define _CCP1CON1_MOD_POSITION                   0x00000000
#define _CCP1CON1_MOD_MASK                       0x0000000F
#define _CCP1CON1_MOD_LENGTH                     0x00000004

#define _CCP1CON1_CCSEL_POSITION                 0x00000004
#define _CCP1CON1_CCSEL_MASK                     0x00000010
#define _CCP1CON1_CCSEL_LENGTH                   0x00000001

#define _CCP1CON1_T32_POSITION                   0x00000005
#define _CCP1CON1_T32_MASK                       0x00000020
#define _CCP1CON1_T32_LENGTH                     0x00000001

#define _CCP1CON1_TMRPS_POSITION                 0x00000006
#define _CCP1CON1_TMRPS_MASK                     0x000000C0
#define _CCP1CON1_TMRPS_LENGTH                   0x00000002

#define _CCP1CON1_CLKSEL_POSITION                0x00000008
#define _CCP1CON1_CLKSEL_MASK                    0x00000700
#define _CCP1CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP1CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP1CON1_TMRSYNC_MASK                   0x00000800
#define _CCP1CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP1CON1_CCPSLP_POSITION                0x0000000C
#define _CCP1CON1_CCPSLP_MASK                    0x00001000
#define _CCP1CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP1CON1_SIDL_POSITION                  0x0000000D
#define _CCP1CON1_SIDL_MASK                      0x00002000
#define _CCP1CON1_SIDL_LENGTH                    0x00000001

#define _CCP1CON1_ON_POSITION                    0x0000000F
#define _CCP1CON1_ON_MASK                        0x00008000
#define _CCP1CON1_ON_LENGTH                      0x00000001

#define _CCP1CON1_SYNC_POSITION                  0x00000010
#define _CCP1CON1_SYNC_MASK                      0x001F0000
#define _CCP1CON1_SYNC_LENGTH                    0x00000005

#define _CCP1CON1_ALTSYNC_POSITION               0x00000015
#define _CCP1CON1_ALTSYNC_MASK                   0x00200000
#define _CCP1CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP1CON1_ONESHOT_POSITION               0x00000016
#define _CCP1CON1_ONESHOT_MASK                   0x00400000
#define _CCP1CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP1CON1_TRIGEN_POSITION                0x00000017
#define _CCP1CON1_TRIGEN_MASK                    0x00800000
#define _CCP1CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPS_POSITION                   0x00000018
#define _CCP1CON1_OPS_MASK                       0x0F000000
#define _CCP1CON1_OPS_LENGTH                     0x00000004

#define _CCP1CON1_RTRGEN_POSITION                0x0000001E
#define _CCP1CON1_RTRGEN_MASK                    0x40000000
#define _CCP1CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPSSRC_POSITION                0x0000001F
#define _CCP1CON1_OPSSRC_MASK                    0x80000000
#define _CCP1CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP1CON2_ASDG_POSITION                  0x00000000
#define _CCP1CON2_ASDG_MASK                      0x000000FF
#define _CCP1CON2_ASDG_LENGTH                    0x00000008

#define _CCP1CON2_SSDG_POSITION                  0x0000000C
#define _CCP1CON2_SSDG_MASK                      0x00001000
#define _CCP1CON2_SSDG_LENGTH                    0x00000001

#define _CCP1CON2_ASDGM_POSITION                 0x0000000E
#define _CCP1CON2_ASDGM_MASK                     0x00004000
#define _CCP1CON2_ASDGM_LENGTH                   0x00000001

#define _CCP1CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP1CON2_PWMRSEN_MASK                   0x00008000
#define _CCP1CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP1CON2_ICS_POSITION                   0x00000010
#define _CCP1CON2_ICS_MASK                       0x00070000
#define _CCP1CON2_ICS_LENGTH                     0x00000003

#define _CCP1CON2_AUXOUT_POSITION                0x00000013
#define _CCP1CON2_AUXOUT_MASK                    0x00180000
#define _CCP1CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP1CON2_ICGSM_POSITION                 0x00000016
#define _CCP1CON2_ICGSM_MASK                     0x00C00000
#define _CCP1CON2_ICGSM_LENGTH                   0x00000002

#define _CCP1CON2_OCAEN_POSITION                 0x00000018
#define _CCP1CON2_OCAEN_MASK                     0x01000000
#define _CCP1CON2_OCAEN_LENGTH                   0x00000001

#define _CCP1CON2_OCBEN_POSITION                 0x00000019
#define _CCP1CON2_OCBEN_MASK                     0x02000000
#define _CCP1CON2_OCBEN_LENGTH                   0x00000001

#define _CCP1CON2_OCCEN_POSITION                 0x0000001A
#define _CCP1CON2_OCCEN_MASK                     0x04000000
#define _CCP1CON2_OCCEN_LENGTH                   0x00000001

#define _CCP1CON2_OCDEN_POSITION                 0x0000001B
#define _CCP1CON2_OCDEN_MASK                     0x08000000
#define _CCP1CON2_OCDEN_LENGTH                   0x00000001

#define _CCP1CON2_OCEEN_POSITION                 0x0000001C
#define _CCP1CON2_OCEEN_MASK                     0x10000000
#define _CCP1CON2_OCEEN_LENGTH                   0x00000001

#define _CCP1CON2_OCFEN_POSITION                 0x0000001D
#define _CCP1CON2_OCFEN_MASK                     0x20000000
#define _CCP1CON2_OCFEN_LENGTH                   0x00000001

#define _CCP1CON2_OENSYNC_POSITION               0x0000001F
#define _CCP1CON2_OENSYNC_MASK                   0x80000000
#define _CCP1CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP1CON3_DT_POSITION                    0x00000000
#define _CCP1CON3_DT_MASK                        0x0000003F
#define _CCP1CON3_DT_LENGTH                      0x00000006

#define _CCP1CON3_PSSBDF_POSITION                0x00000010
#define _CCP1CON3_PSSBDF_MASK                    0x00030000
#define _CCP1CON3_PSSBDF_LENGTH                  0x00000002

#define _CCP1CON3_PSSACE_POSITION                0x00000012
#define _CCP1CON3_PSSACE_MASK                    0x000C0000
#define _CCP1CON3_PSSACE_LENGTH                  0x00000002

#define _CCP1CON3_POLBDF_POSITION                0x00000014
#define _CCP1CON3_POLBDF_MASK                    0x00100000
#define _CCP1CON3_POLBDF_LENGTH                  0x00000001

#define _CCP1CON3_POLACE_POSITION                0x00000015
#define _CCP1CON3_POLACE_MASK                    0x00200000
#define _CCP1CON3_POLACE_LENGTH                  0x00000001

#define _CCP1CON3_OUTM_POSITION                  0x00000018
#define _CCP1CON3_OUTM_MASK                      0x07000000
#define _CCP1CON3_OUTM_LENGTH                    0x00000003

#define _CCP1CON3_OSCNT_POSITION                 0x0000001C
#define _CCP1CON3_OSCNT_MASK                     0x70000000
#define _CCP1CON3_OSCNT_LENGTH                   0x00000003

#define _CCP1CON3_OETRIG_POSITION                0x0000001F
#define _CCP1CON3_OETRIG_MASK                    0x80000000
#define _CCP1CON3_OETRIG_LENGTH                  0x00000001

#define _CCP1STAT_ICBNE_POSITION                 0x00000000
#define _CCP1STAT_ICBNE_MASK                     0x00000001
#define _CCP1STAT_ICBNE_LENGTH                   0x00000001

#define _CCP1STAT_ICOV_POSITION                  0x00000001
#define _CCP1STAT_ICOV_MASK                      0x00000002
#define _CCP1STAT_ICOV_LENGTH                    0x00000001

#define _CCP1STAT_ICDIS_POSITION                 0x00000002
#define _CCP1STAT_ICDIS_MASK                     0x00000004
#define _CCP1STAT_ICDIS_LENGTH                   0x00000001

#define _CCP1STAT_SCEVT_POSITION                 0x00000003
#define _CCP1STAT_SCEVT_MASK                     0x00000008
#define _CCP1STAT_SCEVT_LENGTH                   0x00000001

#define _CCP1STAT_ASEVT_POSITION                 0x00000004
#define _CCP1STAT_ASEVT_MASK                     0x00000010
#define _CCP1STAT_ASEVT_LENGTH                   0x00000001

#define _CCP1STAT_TRCLR_POSITION                 0x00000005
#define _CCP1STAT_TRCLR_MASK                     0x00000020
#define _CCP1STAT_TRCLR_LENGTH                   0x00000001

#define _CCP1STAT_TRSET_POSITION                 0x00000006
#define _CCP1STAT_TRSET_MASK                     0x00000040
#define _CCP1STAT_TRSET_LENGTH                   0x00000001

#define _CCP1STAT_CCPTRIG_POSITION               0x00000007
#define _CCP1STAT_CCPTRIG_MASK                   0x00000080
#define _CCP1STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP1STAT_ICGARM_POSITION                0x0000000A
#define _CCP1STAT_ICGARM_MASK                    0x00000400
#define _CCP1STAT_ICGARM_LENGTH                  0x00000001

#define _CCP1STAT_RAWIP_POSITION                 0x00000010
#define _CCP1STAT_RAWIP_MASK                     0x00010000
#define _CCP1STAT_RAWIP_LENGTH                   0x00000001

#define _CCP1STAT_RBWIP_POSITION                 0x00000011
#define _CCP1STAT_RBWIP_MASK                     0x00020000
#define _CCP1STAT_RBWIP_LENGTH                   0x00000001

#define _CCP1STAT_TMRLWIP_POSITION               0x00000012
#define _CCP1STAT_TMRLWIP_MASK                   0x00040000
#define _CCP1STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP1STAT_TMRHWIP_POSITION               0x00000013
#define _CCP1STAT_TMRHWIP_MASK                   0x00080000
#define _CCP1STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP1STAT_PRLWIP_POSITION                0x00000014
#define _CCP1STAT_PRLWIP_MASK                    0x00100000
#define _CCP1STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP1TMR_TMRL_POSITION                   0x00000000
#define _CCP1TMR_TMRL_MASK                       0x0000FFFF
#define _CCP1TMR_TMRL_LENGTH                     0x00000010

#define _CCP1TMR_TMRH_POSITION                   0x00000010
#define _CCP1TMR_TMRH_MASK                       0xFFFF0000
#define _CCP1TMR_TMRH_LENGTH                     0x00000010

#define _CCP1TMR_TMR_POSITION                    0x00000000
#define _CCP1TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP1TMR_TMR_LENGTH                      0x00000020

#define _CCP1PR_PRL_POSITION                     0x00000000
#define _CCP1PR_PRL_MASK                         0x0000FFFF
#define _CCP1PR_PRL_LENGTH                       0x00000010

#define _CCP1PR_PRH_POSITION                     0x00000010
#define _CCP1PR_PRH_MASK                         0xFFFF0000
#define _CCP1PR_PRH_LENGTH                       0x00000010

#define _CCP1PR_PR_POSITION                      0x00000000
#define _CCP1PR_PR_MASK                          0xFFFFFFFF
#define _CCP1PR_PR_LENGTH                        0x00000020

#define _CCP1RA_CMPA_POSITION                    0x00000000
#define _CCP1RA_CMPA_MASK                        0x0000FFFF
#define _CCP1RA_CMPA_LENGTH                      0x00000010

#define _CCP1RB_CMPB_POSITION                    0x00000000
#define _CCP1RB_CMPB_MASK                        0x0000FFFF
#define _CCP1RB_CMPB_LENGTH                      0x00000010

#define _CCP1BUF_BUFL_POSITION                   0x00000000
#define _CCP1BUF_BUFL_MASK                       0x0000FFFF
#define _CCP1BUF_BUFL_LENGTH                     0x00000010

#define _CCP1BUF_BUFH_POSITION                   0x00000010
#define _CCP1BUF_BUFH_MASK                       0xFFFF0000
#define _CCP1BUF_BUFH_LENGTH                     0x00000010

#define _CCP1BUF_BUF_POSITION                    0x00000000
#define _CCP1BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP1BUF_BUF_LENGTH                      0x00000020

#define _CCP2CON1_MOD_POSITION                   0x00000000
#define _CCP2CON1_MOD_MASK                       0x0000000F
#define _CCP2CON1_MOD_LENGTH                     0x00000004

#define _CCP2CON1_CCSEL_POSITION                 0x00000004
#define _CCP2CON1_CCSEL_MASK                     0x00000010
#define _CCP2CON1_CCSEL_LENGTH                   0x00000001

#define _CCP2CON1_T32_POSITION                   0x00000005
#define _CCP2CON1_T32_MASK                       0x00000020
#define _CCP2CON1_T32_LENGTH                     0x00000001

#define _CCP2CON1_TMRPS_POSITION                 0x00000006
#define _CCP2CON1_TMRPS_MASK                     0x000000C0
#define _CCP2CON1_TMRPS_LENGTH                   0x00000002

#define _CCP2CON1_CLKSEL_POSITION                0x00000008
#define _CCP2CON1_CLKSEL_MASK                    0x00000700
#define _CCP2CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP2CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP2CON1_TMRSYNC_MASK                   0x00000800
#define _CCP2CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP2CON1_CCPSLP_POSITION                0x0000000C
#define _CCP2CON1_CCPSLP_MASK                    0x00001000
#define _CCP2CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP2CON1_SIDL_POSITION                  0x0000000D
#define _CCP2CON1_SIDL_MASK                      0x00002000
#define _CCP2CON1_SIDL_LENGTH                    0x00000001

#define _CCP2CON1_ON_POSITION                    0x0000000F
#define _CCP2CON1_ON_MASK                        0x00008000
#define _CCP2CON1_ON_LENGTH                      0x00000001

#define _CCP2CON1_SYNC_POSITION                  0x00000010
#define _CCP2CON1_SYNC_MASK                      0x001F0000
#define _CCP2CON1_SYNC_LENGTH                    0x00000005

#define _CCP2CON1_ALTSYNC_POSITION               0x00000015
#define _CCP2CON1_ALTSYNC_MASK                   0x00200000
#define _CCP2CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP2CON1_ONESHOT_POSITION               0x00000016
#define _CCP2CON1_ONESHOT_MASK                   0x00400000
#define _CCP2CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP2CON1_TRIGEN_POSITION                0x00000017
#define _CCP2CON1_TRIGEN_MASK                    0x00800000
#define _CCP2CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPS_POSITION                   0x00000018
#define _CCP2CON1_OPS_MASK                       0x0F000000
#define _CCP2CON1_OPS_LENGTH                     0x00000004

#define _CCP2CON1_RTRGEN_POSITION                0x0000001E
#define _CCP2CON1_RTRGEN_MASK                    0x40000000
#define _CCP2CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPSSRC_POSITION                0x0000001F
#define _CCP2CON1_OPSSRC_MASK                    0x80000000
#define _CCP2CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP2CON2_ASDG_POSITION                  0x00000000
#define _CCP2CON2_ASDG_MASK                      0x000000FF
#define _CCP2CON2_ASDG_LENGTH                    0x00000008

#define _CCP2CON2_SSDG_POSITION                  0x0000000C
#define _CCP2CON2_SSDG_MASK                      0x00001000
#define _CCP2CON2_SSDG_LENGTH                    0x00000001

#define _CCP2CON2_ASDGM_POSITION                 0x0000000E
#define _CCP2CON2_ASDGM_MASK                     0x00004000
#define _CCP2CON2_ASDGM_LENGTH                   0x00000001

#define _CCP2CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP2CON2_PWMRSEN_MASK                   0x00008000
#define _CCP2CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP2CON2_ICS_POSITION                   0x00000010
#define _CCP2CON2_ICS_MASK                       0x00070000
#define _CCP2CON2_ICS_LENGTH                     0x00000003

#define _CCP2CON2_AUXOUT_POSITION                0x00000013
#define _CCP2CON2_AUXOUT_MASK                    0x00180000
#define _CCP2CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP2CON2_ICGSM_POSITION                 0x00000016
#define _CCP2CON2_ICGSM_MASK                     0x00C00000
#define _CCP2CON2_ICGSM_LENGTH                   0x00000002

#define _CCP2CON2_OCAEN_POSITION                 0x00000018
#define _CCP2CON2_OCAEN_MASK                     0x01000000
#define _CCP2CON2_OCAEN_LENGTH                   0x00000001

#define _CCP2CON2_OENSYNC_POSITION               0x0000001F
#define _CCP2CON2_OENSYNC_MASK                   0x80000000
#define _CCP2CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP2CON3_PSSACE_POSITION                0x00000012
#define _CCP2CON3_PSSACE_MASK                    0x000C0000
#define _CCP2CON3_PSSACE_LENGTH                  0x00000002

#define _CCP2CON3_POLACE_POSITION                0x00000015
#define _CCP2CON3_POLACE_MASK                    0x00200000
#define _CCP2CON3_POLACE_LENGTH                  0x00000001

#define _CCP2CON3_OSCNT_POSITION                 0x0000001C
#define _CCP2CON3_OSCNT_MASK                     0x70000000
#define _CCP2CON3_OSCNT_LENGTH                   0x00000003

#define _CCP2CON3_OETRIG_POSITION                0x0000001F
#define _CCP2CON3_OETRIG_MASK                    0x80000000
#define _CCP2CON3_OETRIG_LENGTH                  0x00000001

#define _CCP2STAT_ICBNE_POSITION                 0x00000000
#define _CCP2STAT_ICBNE_MASK                     0x00000001
#define _CCP2STAT_ICBNE_LENGTH                   0x00000001

#define _CCP2STAT_ICOV_POSITION                  0x00000001
#define _CCP2STAT_ICOV_MASK                      0x00000002
#define _CCP2STAT_ICOV_LENGTH                    0x00000001

#define _CCP2STAT_ICDIS_POSITION                 0x00000002
#define _CCP2STAT_ICDIS_MASK                     0x00000004
#define _CCP2STAT_ICDIS_LENGTH                   0x00000001

#define _CCP2STAT_SCEVT_POSITION                 0x00000003
#define _CCP2STAT_SCEVT_MASK                     0x00000008
#define _CCP2STAT_SCEVT_LENGTH                   0x00000001

#define _CCP2STAT_ASEVT_POSITION                 0x00000004
#define _CCP2STAT_ASEVT_MASK                     0x00000010
#define _CCP2STAT_ASEVT_LENGTH                   0x00000001

#define _CCP2STAT_TRCLR_POSITION                 0x00000005
#define _CCP2STAT_TRCLR_MASK                     0x00000020
#define _CCP2STAT_TRCLR_LENGTH                   0x00000001

#define _CCP2STAT_TRSET_POSITION                 0x00000006
#define _CCP2STAT_TRSET_MASK                     0x00000040
#define _CCP2STAT_TRSET_LENGTH                   0x00000001

#define _CCP2STAT_CCPTRIG_POSITION               0x00000007
#define _CCP2STAT_CCPTRIG_MASK                   0x00000080
#define _CCP2STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP2STAT_ICGARM_POSITION                0x0000000A
#define _CCP2STAT_ICGARM_MASK                    0x00000400
#define _CCP2STAT_ICGARM_LENGTH                  0x00000001

#define _CCP2STAT_RAWIP_POSITION                 0x00000010
#define _CCP2STAT_RAWIP_MASK                     0x00010000
#define _CCP2STAT_RAWIP_LENGTH                   0x00000001

#define _CCP2STAT_RBWIP_POSITION                 0x00000011
#define _CCP2STAT_RBWIP_MASK                     0x00020000
#define _CCP2STAT_RBWIP_LENGTH                   0x00000001

#define _CCP2STAT_TMRLWIP_POSITION               0x00000012
#define _CCP2STAT_TMRLWIP_MASK                   0x00040000
#define _CCP2STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP2STAT_TMRHWIP_POSITION               0x00000013
#define _CCP2STAT_TMRHWIP_MASK                   0x00080000
#define _CCP2STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP2STAT_PRLWIP_POSITION                0x00000014
#define _CCP2STAT_PRLWIP_MASK                    0x00100000
#define _CCP2STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP2TMR_TMRL_POSITION                   0x00000000
#define _CCP2TMR_TMRL_MASK                       0x0000FFFF
#define _CCP2TMR_TMRL_LENGTH                     0x00000010

#define _CCP2TMR_TMRH_POSITION                   0x00000010
#define _CCP2TMR_TMRH_MASK                       0xFFFF0000
#define _CCP2TMR_TMRH_LENGTH                     0x00000010

#define _CCP2TMR_TMR_POSITION                    0x00000000
#define _CCP2TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP2TMR_TMR_LENGTH                      0x00000020

#define _CCP2PR_PRL_POSITION                     0x00000000
#define _CCP2PR_PRL_MASK                         0x0000FFFF
#define _CCP2PR_PRL_LENGTH                       0x00000010

#define _CCP2PR_PRH_POSITION                     0x00000010
#define _CCP2PR_PRH_MASK                         0xFFFF0000
#define _CCP2PR_PRH_LENGTH                       0x00000010

#define _CCP2PR_PR_POSITION                      0x00000000
#define _CCP2PR_PR_MASK                          0xFFFFFFFF
#define _CCP2PR_PR_LENGTH                        0x00000020

#define _CCP2RA_CMPA_POSITION                    0x00000000
#define _CCP2RA_CMPA_MASK                        0x0000FFFF
#define _CCP2RA_CMPA_LENGTH                      0x00000010

#define _CCP2RB_CMPB_POSITION                    0x00000000
#define _CCP2RB_CMPB_MASK                        0x0000FFFF
#define _CCP2RB_CMPB_LENGTH                      0x00000010

#define _CCP2BUF_BUFL_POSITION                   0x00000000
#define _CCP2BUF_BUFL_MASK                       0x0000FFFF
#define _CCP2BUF_BUFL_LENGTH                     0x00000010

#define _CCP2BUF_BUFH_POSITION                   0x00000010
#define _CCP2BUF_BUFH_MASK                       0xFFFF0000
#define _CCP2BUF_BUFH_LENGTH                     0x00000010

#define _CCP2BUF_BUF_POSITION                    0x00000000
#define _CCP2BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP2BUF_BUF_LENGTH                      0x00000020

#define _CCP3CON1_MOD_POSITION                   0x00000000
#define _CCP3CON1_MOD_MASK                       0x0000000F
#define _CCP3CON1_MOD_LENGTH                     0x00000004

#define _CCP3CON1_CCSEL_POSITION                 0x00000004
#define _CCP3CON1_CCSEL_MASK                     0x00000010
#define _CCP3CON1_CCSEL_LENGTH                   0x00000001

#define _CCP3CON1_T32_POSITION                   0x00000005
#define _CCP3CON1_T32_MASK                       0x00000020
#define _CCP3CON1_T32_LENGTH                     0x00000001

#define _CCP3CON1_TMRPS_POSITION                 0x00000006
#define _CCP3CON1_TMRPS_MASK                     0x000000C0
#define _CCP3CON1_TMRPS_LENGTH                   0x00000002

#define _CCP3CON1_CLKSEL_POSITION                0x00000008
#define _CCP3CON1_CLKSEL_MASK                    0x00000700
#define _CCP3CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP3CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP3CON1_TMRSYNC_MASK                   0x00000800
#define _CCP3CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP3CON1_CCPSLP_POSITION                0x0000000C
#define _CCP3CON1_CCPSLP_MASK                    0x00001000
#define _CCP3CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP3CON1_SIDL_POSITION                  0x0000000D
#define _CCP3CON1_SIDL_MASK                      0x00002000
#define _CCP3CON1_SIDL_LENGTH                    0x00000001

#define _CCP3CON1_ON_POSITION                    0x0000000F
#define _CCP3CON1_ON_MASK                        0x00008000
#define _CCP3CON1_ON_LENGTH                      0x00000001

#define _CCP3CON1_SYNC_POSITION                  0x00000010
#define _CCP3CON1_SYNC_MASK                      0x001F0000
#define _CCP3CON1_SYNC_LENGTH                    0x00000005

#define _CCP3CON1_ALTSYNC_POSITION               0x00000015
#define _CCP3CON1_ALTSYNC_MASK                   0x00200000
#define _CCP3CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP3CON1_ONESHOT_POSITION               0x00000016
#define _CCP3CON1_ONESHOT_MASK                   0x00400000
#define _CCP3CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP3CON1_TRIGEN_POSITION                0x00000017
#define _CCP3CON1_TRIGEN_MASK                    0x00800000
#define _CCP3CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPS_POSITION                   0x00000018
#define _CCP3CON1_OPS_MASK                       0x0F000000
#define _CCP3CON1_OPS_LENGTH                     0x00000004

#define _CCP3CON1_RTRGEN_POSITION                0x0000001E
#define _CCP3CON1_RTRGEN_MASK                    0x40000000
#define _CCP3CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPSSRC_POSITION                0x0000001F
#define _CCP3CON1_OPSSRC_MASK                    0x80000000
#define _CCP3CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP3CON2_ASDG_POSITION                  0x00000000
#define _CCP3CON2_ASDG_MASK                      0x000000FF
#define _CCP3CON2_ASDG_LENGTH                    0x00000008

#define _CCP3CON2_SSDG_POSITION                  0x0000000C
#define _CCP3CON2_SSDG_MASK                      0x00001000
#define _CCP3CON2_SSDG_LENGTH                    0x00000001

#define _CCP3CON2_ASDGM_POSITION                 0x0000000E
#define _CCP3CON2_ASDGM_MASK                     0x00004000
#define _CCP3CON2_ASDGM_LENGTH                   0x00000001

#define _CCP3CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP3CON2_PWMRSEN_MASK                   0x00008000
#define _CCP3CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP3CON2_ICS_POSITION                   0x00000010
#define _CCP3CON2_ICS_MASK                       0x00070000
#define _CCP3CON2_ICS_LENGTH                     0x00000003

#define _CCP3CON2_AUXOUT_POSITION                0x00000013
#define _CCP3CON2_AUXOUT_MASK                    0x00180000
#define _CCP3CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP3CON2_ICGSM_POSITION                 0x00000016
#define _CCP3CON2_ICGSM_MASK                     0x00C00000
#define _CCP3CON2_ICGSM_LENGTH                   0x00000002

#define _CCP3CON2_OCAEN_POSITION                 0x00000018
#define _CCP3CON2_OCAEN_MASK                     0x01000000
#define _CCP3CON2_OCAEN_LENGTH                   0x00000001

#define _CCP3CON2_OENSYNC_POSITION               0x0000001F
#define _CCP3CON2_OENSYNC_MASK                   0x80000000
#define _CCP3CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP3CON3_PSSACE_POSITION                0x00000012
#define _CCP3CON3_PSSACE_MASK                    0x000C0000
#define _CCP3CON3_PSSACE_LENGTH                  0x00000002

#define _CCP3CON3_POLACE_POSITION                0x00000015
#define _CCP3CON3_POLACE_MASK                    0x00200000
#define _CCP3CON3_POLACE_LENGTH                  0x00000001

#define _CCP3CON3_OSCNT_POSITION                 0x0000001C
#define _CCP3CON3_OSCNT_MASK                     0x70000000
#define _CCP3CON3_OSCNT_LENGTH                   0x00000003

#define _CCP3CON3_OETRIG_POSITION                0x0000001F
#define _CCP3CON3_OETRIG_MASK                    0x80000000
#define _CCP3CON3_OETRIG_LENGTH                  0x00000001

#define _CCP3STAT_ICBNE_POSITION                 0x00000000
#define _CCP3STAT_ICBNE_MASK                     0x00000001
#define _CCP3STAT_ICBNE_LENGTH                   0x00000001

#define _CCP3STAT_ICOV_POSITION                  0x00000001
#define _CCP3STAT_ICOV_MASK                      0x00000002
#define _CCP3STAT_ICOV_LENGTH                    0x00000001

#define _CCP3STAT_ICDIS_POSITION                 0x00000002
#define _CCP3STAT_ICDIS_MASK                     0x00000004
#define _CCP3STAT_ICDIS_LENGTH                   0x00000001

#define _CCP3STAT_SCEVT_POSITION                 0x00000003
#define _CCP3STAT_SCEVT_MASK                     0x00000008
#define _CCP3STAT_SCEVT_LENGTH                   0x00000001

#define _CCP3STAT_ASEVT_POSITION                 0x00000004
#define _CCP3STAT_ASEVT_MASK                     0x00000010
#define _CCP3STAT_ASEVT_LENGTH                   0x00000001

#define _CCP3STAT_TRCLR_POSITION                 0x00000005
#define _CCP3STAT_TRCLR_MASK                     0x00000020
#define _CCP3STAT_TRCLR_LENGTH                   0x00000001

#define _CCP3STAT_TRSET_POSITION                 0x00000006
#define _CCP3STAT_TRSET_MASK                     0x00000040
#define _CCP3STAT_TRSET_LENGTH                   0x00000001

#define _CCP3STAT_CCPTRIG_POSITION               0x00000007
#define _CCP3STAT_CCPTRIG_MASK                   0x00000080
#define _CCP3STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP3STAT_ICGARM_POSITION                0x0000000A
#define _CCP3STAT_ICGARM_MASK                    0x00000400
#define _CCP3STAT_ICGARM_LENGTH                  0x00000001

#define _CCP3STAT_RAWIP_POSITION                 0x00000010
#define _CCP3STAT_RAWIP_MASK                     0x00010000
#define _CCP3STAT_RAWIP_LENGTH                   0x00000001

#define _CCP3STAT_RBWIP_POSITION                 0x00000011
#define _CCP3STAT_RBWIP_MASK                     0x00020000
#define _CCP3STAT_RBWIP_LENGTH                   0x00000001

#define _CCP3STAT_TMRLWIP_POSITION               0x00000012
#define _CCP3STAT_TMRLWIP_MASK                   0x00040000
#define _CCP3STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP3STAT_TMRHWIP_POSITION               0x00000013
#define _CCP3STAT_TMRHWIP_MASK                   0x00080000
#define _CCP3STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP3STAT_PRLWIP_POSITION                0x00000014
#define _CCP3STAT_PRLWIP_MASK                    0x00100000
#define _CCP3STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP3TMR_TMRL_POSITION                   0x00000000
#define _CCP3TMR_TMRL_MASK                       0x0000FFFF
#define _CCP3TMR_TMRL_LENGTH                     0x00000010

#define _CCP3TMR_TMRH_POSITION                   0x00000010
#define _CCP3TMR_TMRH_MASK                       0xFFFF0000
#define _CCP3TMR_TMRH_LENGTH                     0x00000010

#define _CCP3TMR_TMR_POSITION                    0x00000000
#define _CCP3TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP3TMR_TMR_LENGTH                      0x00000020

#define _CCP3PR_PRL_POSITION                     0x00000000
#define _CCP3PR_PRL_MASK                         0x0000FFFF
#define _CCP3PR_PRL_LENGTH                       0x00000010

#define _CCP3PR_PRH_POSITION                     0x00000010
#define _CCP3PR_PRH_MASK                         0xFFFF0000
#define _CCP3PR_PRH_LENGTH                       0x00000010

#define _CCP3PR_PR_POSITION                      0x00000000
#define _CCP3PR_PR_MASK                          0xFFFFFFFF
#define _CCP3PR_PR_LENGTH                        0x00000020

#define _CCP3RA_CMPA_POSITION                    0x00000000
#define _CCP3RA_CMPA_MASK                        0x0000FFFF
#define _CCP3RA_CMPA_LENGTH                      0x00000010

#define _CCP3RB_CMPB_POSITION                    0x00000000
#define _CCP3RB_CMPB_MASK                        0x0000FFFF
#define _CCP3RB_CMPB_LENGTH                      0x00000010

#define _CCP3BUF_BUFL_POSITION                   0x00000000
#define _CCP3BUF_BUFL_MASK                       0x0000FFFF
#define _CCP3BUF_BUFL_LENGTH                     0x00000010

#define _CCP3BUF_BUFH_POSITION                   0x00000010
#define _CCP3BUF_BUFH_MASK                       0xFFFF0000
#define _CCP3BUF_BUFH_LENGTH                     0x00000010

#define _CCP3BUF_BUF_POSITION                    0x00000000
#define _CCP3BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP3BUF_BUF_LENGTH                      0x00000020

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_SIDL_POSITION                    0x0000000D
#define _U1MODE_SIDL_MASK                        0x00002000
#define _U1MODE_SIDL_LENGTH                      0x00000001

#define _U1MODE_ON_POSITION                      0x0000000F
#define _U1MODE_ON_MASK                          0x00008000
#define _U1MODE_ON_LENGTH                        0x00000001

#define _U1MODE_OVFDIS_POSITION                  0x00000010
#define _U1MODE_OVFDIS_MASK                      0x00010000
#define _U1MODE_OVFDIS_LENGTH                    0x00000001

#define _U1MODE_CLKSEL_POSITION                  0x00000011
#define _U1MODE_CLKSEL_MASK                      0x00060000
#define _U1MODE_CLKSEL_LENGTH                    0x00000002

#define _U1MODE_ACTIVE_POSITION                  0x00000016
#define _U1MODE_ACTIVE_MASK                      0x00400000
#define _U1MODE_ACTIVE_LENGTH                    0x00000001

#define _U1MODE_SLPEN_POSITION                   0x00000017
#define _U1MODE_SLPEN_MASK                       0x00800000
#define _U1MODE_SLPEN_LENGTH                     0x00000001

#define _U1MODE_RUNOVF_POSITION                  0x00000010
#define _U1MODE_RUNOVF_MASK                      0x00010000
#define _U1MODE_RUNOVF_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_w_POSITION                       0x00000000
#define _U1MODE_w_MASK                           0xFFFFFFFF
#define _U1MODE_w_LENGTH                         0x00000020

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_URXEN_POSITION                    0x0000000C
#define _U1STA_URXEN_MASK                        0x00001000
#define _U1STA_URXEN_LENGTH                      0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000D
#define _U1STA_UTXINV_MASK                       0x00002000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000E
#define _U1STA_UTXISEL_MASK                      0x0000C000
#define _U1STA_UTXISEL_LENGTH                    0x00000002

#define _U1STA_ADDR_POSITION                     0x00000010
#define _U1STA_ADDR_MASK                         0x00FF0000
#define _U1STA_ADDR_LENGTH                       0x00000008

#define _U1STA_MASK_POSITION                     0x00000018
#define _U1STA_MASK_MASK                         0xFF000000
#define _U1STA_MASK_LENGTH                       0x00000008

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000E
#define _U1STA_UTXISEL0_MASK                     0x00004000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXSEL_POSITION                   0x0000000E
#define _U1STA_UTXSEL_MASK                       0x0000C000
#define _U1STA_UTXSEL_LENGTH                     0x00000002

#define _U1STA_w_POSITION                        0x00000000
#define _U1STA_w_MASK                            0xFFFFFFFF
#define _U1STA_w_LENGTH                          0x00000020

#define _U1BRG_BRG_POSITION                      0x00000000
#define _U1BRG_BRG_MASK                          0x000FFFFF
#define _U1BRG_BRG_LENGTH                        0x00000014

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_SIDL_POSITION                    0x0000000D
#define _U2MODE_SIDL_MASK                        0x00002000
#define _U2MODE_SIDL_LENGTH                      0x00000001

#define _U2MODE_ON_POSITION                      0x0000000F
#define _U2MODE_ON_MASK                          0x00008000
#define _U2MODE_ON_LENGTH                        0x00000001

#define _U2MODE_OVFDIS_POSITION                  0x00000010
#define _U2MODE_OVFDIS_MASK                      0x00010000
#define _U2MODE_OVFDIS_LENGTH                    0x00000001

#define _U2MODE_CLKSEL_POSITION                  0x00000011
#define _U2MODE_CLKSEL_MASK                      0x00060000
#define _U2MODE_CLKSEL_LENGTH                    0x00000002

#define _U2MODE_ACTIVE_POSITION                  0x00000016
#define _U2MODE_ACTIVE_MASK                      0x00400000
#define _U2MODE_ACTIVE_LENGTH                    0x00000001

#define _U2MODE_SLPEN_POSITION                   0x00000017
#define _U2MODE_SLPEN_MASK                       0x00800000
#define _U2MODE_SLPEN_LENGTH                     0x00000001

#define _U2MODE_RUNOVF_POSITION                  0x00000010
#define _U2MODE_RUNOVF_MASK                      0x00010000
#define _U2MODE_RUNOVF_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_w_POSITION                       0x00000000
#define _U2MODE_w_MASK                           0xFFFFFFFF
#define _U2MODE_w_LENGTH                         0x00000020

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_URXEN_POSITION                    0x0000000C
#define _U2STA_URXEN_MASK                        0x00001000
#define _U2STA_URXEN_LENGTH                      0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000D
#define _U2STA_UTXINV_MASK                       0x00002000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL_POSITION                  0x0000000E
#define _U2STA_UTXISEL_MASK                      0x0000C000
#define _U2STA_UTXISEL_LENGTH                    0x00000002

#define _U2STA_ADDR_POSITION                     0x00000010
#define _U2STA_ADDR_MASK                         0x00FF0000
#define _U2STA_ADDR_LENGTH                       0x00000008

#define _U2STA_MASK_POSITION                     0x00000018
#define _U2STA_MASK_MASK                         0xFF000000
#define _U2STA_MASK_LENGTH                       0x00000008

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000E
#define _U2STA_UTXISEL0_MASK                     0x00004000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXSEL_POSITION                   0x0000000E
#define _U2STA_UTXSEL_MASK                       0x0000C000
#define _U2STA_UTXSEL_LENGTH                     0x00000002

#define _U2STA_w_POSITION                        0x00000000
#define _U2STA_w_MASK                            0xFFFFFFFF
#define _U2STA_w_LENGTH                          0x00000020

#define _U2BRG_BRG_POSITION                      0x00000000
#define _U2BRG_BRG_MASK                          0x000FFFFF
#define _U2BRG_BRG_LENGTH                        0x00000014

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_MODE12_POSITION                 0x00000003
#define _AD1CON1_MODE12_MASK                     0x00000008
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000700
#define _AD1CON1_FORM_LENGTH                     0x00000003

#define _AD1CON1_SIDL_POSITION                   0x0000000D
#define _AD1CON1_SIDL_MASK                       0x00002000
#define _AD1CON1_SIDL_LENGTH                     0x00000001

#define _AD1CON1_ON_POSITION                     0x0000000F
#define _AD1CON1_ON_MASK                         0x00008000
#define _AD1CON1_ON_LENGTH                       0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CSS_CSS0_POSITION                    0x00000000
#define _AD1CSS_CSS0_MASK                        0x00000001
#define _AD1CSS_CSS0_LENGTH                      0x00000001

#define _AD1CSS_CSS1_POSITION                    0x00000001
#define _AD1CSS_CSS1_MASK                        0x00000002
#define _AD1CSS_CSS1_LENGTH                      0x00000001

#define _AD1CSS_CSS2_POSITION                    0x00000002
#define _AD1CSS_CSS2_MASK                        0x00000004
#define _AD1CSS_CSS2_LENGTH                      0x00000001

#define _AD1CSS_CSS3_POSITION                    0x00000003
#define _AD1CSS_CSS3_MASK                        0x00000008
#define _AD1CSS_CSS3_LENGTH                      0x00000001

#define _AD1CSS_CSS4_POSITION                    0x00000004
#define _AD1CSS_CSS4_MASK                        0x00000010
#define _AD1CSS_CSS4_LENGTH                      0x00000001

#define _AD1CSS_CSS5_POSITION                    0x00000005
#define _AD1CSS_CSS5_MASK                        0x00000020
#define _AD1CSS_CSS5_LENGTH                      0x00000001

#define _AD1CSS_CSS6_POSITION                    0x00000006
#define _AD1CSS_CSS6_MASK                        0x00000040
#define _AD1CSS_CSS6_LENGTH                      0x00000001

#define _AD1CSS_CSS7_POSITION                    0x00000007
#define _AD1CSS_CSS7_MASK                        0x00000080
#define _AD1CSS_CSS7_LENGTH                      0x00000001

#define _AD1CSS_CSS8_POSITION                    0x00000008
#define _AD1CSS_CSS8_MASK                        0x00000100
#define _AD1CSS_CSS8_LENGTH                      0x00000001

#define _AD1CSS_CSS9_POSITION                    0x00000009
#define _AD1CSS_CSS9_MASK                        0x00000200
#define _AD1CSS_CSS9_LENGTH                      0x00000001

#define _AD1CSS_CSS10_POSITION                   0x0000000A
#define _AD1CSS_CSS10_MASK                       0x00000400
#define _AD1CSS_CSS10_LENGTH                     0x00000001

#define _AD1CSS_CSS28_POSITION                   0x0000001C
#define _AD1CSS_CSS28_MASK                       0x10000000
#define _AD1CSS_CSS28_LENGTH                     0x00000001

#define _AD1CSS_CSS29_POSITION                   0x0000001D
#define _AD1CSS_CSS29_MASK                       0x20000000
#define _AD1CSS_CSS29_LENGTH                     0x00000001

#define _AD1CSS_CSS30_POSITION                   0x0000001E
#define _AD1CSS_CSS30_MASK                       0x40000000
#define _AD1CSS_CSS30_LENGTH                     0x00000001

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CHIT_CHH0_POSITION                   0x00000000
#define _AD1CHIT_CHH0_MASK                       0x00000001
#define _AD1CHIT_CHH0_LENGTH                     0x00000001

#define _AD1CHIT_CHH1_POSITION                   0x00000001
#define _AD1CHIT_CHH1_MASK                       0x00000002
#define _AD1CHIT_CHH1_LENGTH                     0x00000001

#define _AD1CHIT_CHH2_POSITION                   0x00000002
#define _AD1CHIT_CHH2_MASK                       0x00000004
#define _AD1CHIT_CHH2_LENGTH                     0x00000001

#define _AD1CHIT_CHH3_POSITION                   0x00000003
#define _AD1CHIT_CHH3_MASK                       0x00000008
#define _AD1CHIT_CHH3_LENGTH                     0x00000001

#define _AD1CHIT_CHH4_POSITION                   0x00000004
#define _AD1CHIT_CHH4_MASK                       0x00000010
#define _AD1CHIT_CHH4_LENGTH                     0x00000001

#define _AD1CHIT_CHH5_POSITION                   0x00000005
#define _AD1CHIT_CHH5_MASK                       0x00000020
#define _AD1CHIT_CHH5_LENGTH                     0x00000001

#define _AD1CHIT_CHH6_POSITION                   0x00000006
#define _AD1CHIT_CHH6_MASK                       0x00000040
#define _AD1CHIT_CHH6_LENGTH                     0x00000001

#define _AD1CHIT_CHH7_POSITION                   0x00000007
#define _AD1CHIT_CHH7_MASK                       0x00000080
#define _AD1CHIT_CHH7_LENGTH                     0x00000001

#define _AD1CHIT_CHH8_POSITION                   0x00000008
#define _AD1CHIT_CHH8_MASK                       0x00000100
#define _AD1CHIT_CHH8_LENGTH                     0x00000001

#define _AD1CHIT_CHH9_POSITION                   0x00000009
#define _AD1CHIT_CHH9_MASK                       0x00000200
#define _AD1CHIT_CHH9_LENGTH                     0x00000001

#define _AD1CHIT_CHH10_POSITION                  0x0000000A
#define _AD1CHIT_CHH10_MASK                      0x00000400
#define _AD1CHIT_CHH10_LENGTH                    0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_CVREFSEL_POSITION                0x00000008
#define _CMSTAT_CVREFSEL_MASK                    0x00000100
#define _CMSTAT_CVREFSEL_LENGTH                  0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000010
#define _CMSTAT_C1EVT_MASK                       0x00010000
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000011
#define _CMSTAT_C2EVT_MASK                       0x00020000
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_ON_POSITION                      0x0000000F
#define _CM1CON_ON_MASK                          0x00008000
#define _CM1CON_ON_LENGTH                        0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_ON_POSITION                      0x0000000F
#define _CM2CON_ON_MASK                          0x00008000
#define _CM2CON_ON_LENGTH                        0x00000001

#define _DAC1CON_REFSEL_POSITION                 0x00000000
#define _DAC1CON_REFSEL_MASK                     0x00000003
#define _DAC1CON_REFSEL_LENGTH                   0x00000002

#define _DAC1CON_DACOE_POSITION                  0x00000008
#define _DAC1CON_DACOE_MASK                      0x00000100
#define _DAC1CON_DACOE_LENGTH                    0x00000001

#define _DAC1CON_ON_POSITION                     0x0000000F
#define _DAC1CON_ON_MASK                         0x00008000
#define _DAC1CON_ON_LENGTH                       0x00000001

#define _DAC1CON_DACDAT_POSITION                 0x00000010
#define _DAC1CON_DACDAT_MASK                     0xFFFF0000
#define _DAC1CON_DACDAT_LENGTH                   0x00000010

#define _CRCCON_MOD_POSITION                     0x00000002
#define _CRCCON_MOD_MASK                         0x00000004
#define _CRCCON_MOD_LENGTH                       0x00000001

#define _CRCCON_LENDIAN_POSITION                 0x00000003
#define _CRCCON_LENDIAN_MASK                     0x00000008
#define _CRCCON_LENDIAN_LENGTH                   0x00000001

#define _CRCCON_CRCGO_POSITION                   0x00000004
#define _CRCCON_CRCGO_MASK                       0x00000010
#define _CRCCON_CRCGO_LENGTH                     0x00000001

#define _CRCCON_CRCISEL_POSITION                 0x00000005
#define _CRCCON_CRCISEL_MASK                     0x00000020
#define _CRCCON_CRCISEL_LENGTH                   0x00000001

#define _CRCCON_CRCMPT_POSITION                  0x00000006
#define _CRCCON_CRCMPT_MASK                      0x00000040
#define _CRCCON_CRCMPT_LENGTH                    0x00000001

#define _CRCCON_CRCFUL_POSITION                  0x00000007
#define _CRCCON_CRCFUL_MASK                      0x00000080
#define _CRCCON_CRCFUL_LENGTH                    0x00000001

#define _CRCCON_VWORD_POSITION                   0x00000008
#define _CRCCON_VWORD_MASK                       0x00001F00
#define _CRCCON_VWORD_LENGTH                     0x00000005

#define _CRCCON_SIDL_POSITION                    0x0000000D
#define _CRCCON_SIDL_MASK                        0x00002000
#define _CRCCON_SIDL_LENGTH                      0x00000001

#define _CRCCON_ON_POSITION                      0x0000000F
#define _CRCCON_ON_MASK                          0x00008000
#define _CRCCON_ON_LENGTH                        0x00000001

#define _CRCCON_PLEN_POSITION                    0x00000010
#define _CRCCON_PLEN_MASK                        0x001F0000
#define _CRCCON_PLEN_LENGTH                      0x00000005

#define _CRCCON_DWIDTH_POSITION                  0x00000018
#define _CRCCON_DWIDTH_MASK                      0x1F000000
#define _CRCCON_DWIDTH_LENGTH                    0x00000005

#define _CRCXOR_X1_POSITION                      0x00000001
#define _CRCXOR_X1_MASK                          0x00000002
#define _CRCXOR_X1_LENGTH                        0x00000001

#define _CRCXOR_X2_POSITION                      0x00000002
#define _CRCXOR_X2_MASK                          0x00000004
#define _CRCXOR_X2_LENGTH                        0x00000001

#define _CRCXOR_X3_POSITION                      0x00000003
#define _CRCXOR_X3_MASK                          0x00000008
#define _CRCXOR_X3_LENGTH                        0x00000001

#define _CRCXOR_X4_POSITION                      0x00000004
#define _CRCXOR_X4_MASK                          0x00000010
#define _CRCXOR_X4_LENGTH                        0x00000001

#define _CRCXOR_X5_POSITION                      0x00000005
#define _CRCXOR_X5_MASK                          0x00000020
#define _CRCXOR_X5_LENGTH                        0x00000001

#define _CRCXOR_X6_POSITION                      0x00000006
#define _CRCXOR_X6_MASK                          0x00000040
#define _CRCXOR_X6_LENGTH                        0x00000001

#define _CRCXOR_X7_POSITION                      0x00000007
#define _CRCXOR_X7_MASK                          0x00000080
#define _CRCXOR_X7_LENGTH                        0x00000001

#define _CRCXOR_X8_POSITION                      0x00000008
#define _CRCXOR_X8_MASK                          0x00000100
#define _CRCXOR_X8_LENGTH                        0x00000001

#define _CRCXOR_X9_POSITION                      0x00000009
#define _CRCXOR_X9_MASK                          0x00000200
#define _CRCXOR_X9_LENGTH                        0x00000001

#define _CRCXOR_X10_POSITION                     0x0000000A
#define _CRCXOR_X10_MASK                         0x00000400
#define _CRCXOR_X10_LENGTH                       0x00000001

#define _CRCXOR_X11_POSITION                     0x0000000B
#define _CRCXOR_X11_MASK                         0x00000800
#define _CRCXOR_X11_LENGTH                       0x00000001

#define _CRCXOR_X12_POSITION                     0x0000000C
#define _CRCXOR_X12_MASK                         0x00001000
#define _CRCXOR_X12_LENGTH                       0x00000001

#define _CRCXOR_X13_POSITION                     0x0000000D
#define _CRCXOR_X13_MASK                         0x00002000
#define _CRCXOR_X13_LENGTH                       0x00000001

#define _CRCXOR_X14_POSITION                     0x0000000E
#define _CRCXOR_X14_MASK                         0x00004000
#define _CRCXOR_X14_LENGTH                       0x00000001

#define _CRCXOR_X15_POSITION                     0x0000000F
#define _CRCXOR_X15_MASK                         0x00008000
#define _CRCXOR_X15_LENGTH                       0x00000001

#define _CRCXOR_X16_POSITION                     0x00000010
#define _CRCXOR_X16_MASK                         0x00010000
#define _CRCXOR_X16_LENGTH                       0x00000001

#define _CRCXOR_X17_POSITION                     0x00000011
#define _CRCXOR_X17_MASK                         0x00020000
#define _CRCXOR_X17_LENGTH                       0x00000001

#define _CRCXOR_X18_POSITION                     0x00000012
#define _CRCXOR_X18_MASK                         0x00040000
#define _CRCXOR_X18_LENGTH                       0x00000001

#define _CRCXOR_X19_POSITION                     0x00000013
#define _CRCXOR_X19_MASK                         0x00080000
#define _CRCXOR_X19_LENGTH                       0x00000001

#define _CRCXOR_X20_POSITION                     0x00000014
#define _CRCXOR_X20_MASK                         0x00100000
#define _CRCXOR_X20_LENGTH                       0x00000001

#define _CRCXOR_X21_POSITION                     0x00000015
#define _CRCXOR_X21_MASK                         0x00200000
#define _CRCXOR_X21_LENGTH                       0x00000001

#define _CRCXOR_X22_POSITION                     0x00000016
#define _CRCXOR_X22_MASK                         0x00400000
#define _CRCXOR_X22_LENGTH                       0x00000001

#define _CRCXOR_X23_POSITION                     0x00000017
#define _CRCXOR_X23_MASK                         0x00800000
#define _CRCXOR_X23_LENGTH                       0x00000001

#define _CRCXOR_X24_POSITION                     0x00000018
#define _CRCXOR_X24_MASK                         0x01000000
#define _CRCXOR_X24_LENGTH                       0x00000001

#define _CRCXOR_X25_POSITION                     0x00000019
#define _CRCXOR_X25_MASK                         0x02000000
#define _CRCXOR_X25_LENGTH                       0x00000001

#define _CRCXOR_X26_POSITION                     0x0000001A
#define _CRCXOR_X26_MASK                         0x04000000
#define _CRCXOR_X26_LENGTH                       0x00000001

#define _CRCXOR_X27_POSITION                     0x0000001B
#define _CRCXOR_X27_MASK                         0x08000000
#define _CRCXOR_X27_LENGTH                       0x00000001

#define _CRCXOR_X28_POSITION                     0x0000001C
#define _CRCXOR_X28_MASK                         0x10000000
#define _CRCXOR_X28_LENGTH                       0x00000001

#define _CRCXOR_X29_POSITION                     0x0000001D
#define _CRCXOR_X29_MASK                         0x20000000
#define _CRCXOR_X29_LENGTH                       0x00000001

#define _CRCXOR_X30_POSITION                     0x0000001E
#define _CRCXOR_X30_MASK                         0x40000000
#define _CRCXOR_X30_LENGTH                       0x00000001

#define _CRCXOR_X31_POSITION                     0x0000001F
#define _CRCXOR_X31_MASK                         0x80000000
#define _CRCXOR_X31_LENGTH                       0x00000001

#define _CRCDAT_CRCDAT_POSITION                  0x00000000
#define _CRCDAT_CRCDAT_MASK                      0xFFFFFFFF
#define _CRCDAT_CRCDAT_LENGTH                    0x00000020

#define _CRCWDAT_CRCWDAT_POSITION                0x00000000
#define _CRCWDAT_CRCWDAT_MASK                    0xFFFFFFFF
#define _CRCWDAT_CRCWDAT_LENGTH                  0x00000020

#define _CLC1CON_MODE_POSITION                   0x00000000
#define _CLC1CON_MODE_MASK                       0x00000007
#define _CLC1CON_MODE_LENGTH                     0x00000003

#define _CLC1CON_LCPOL_POSITION                  0x00000005
#define _CLC1CON_LCPOL_MASK                      0x00000020
#define _CLC1CON_LCPOL_LENGTH                    0x00000001

#define _CLC1CON_LCOUT_POSITION                  0x00000006
#define _CLC1CON_LCOUT_MASK                      0x00000040
#define _CLC1CON_LCOUT_LENGTH                    0x00000001

#define _CLC1CON_LCOE_POSITION                   0x00000007
#define _CLC1CON_LCOE_MASK                       0x00000080
#define _CLC1CON_LCOE_LENGTH                     0x00000001

#define _CLC1CON_INTN_POSITION                   0x0000000A
#define _CLC1CON_INTN_MASK                       0x00000400
#define _CLC1CON_INTN_LENGTH                     0x00000001

#define _CLC1CON_INTP_POSITION                   0x0000000B
#define _CLC1CON_INTP_MASK                       0x00000800
#define _CLC1CON_INTP_LENGTH                     0x00000001

#define _CLC1CON_ON_POSITION                     0x0000000F
#define _CLC1CON_ON_MASK                         0x00008000
#define _CLC1CON_ON_LENGTH                       0x00000001

#define _CLC1CON_G1POL_POSITION                  0x00000010
#define _CLC1CON_G1POL_MASK                      0x00010000
#define _CLC1CON_G1POL_LENGTH                    0x00000001

#define _CLC1CON_G2POL_POSITION                  0x00000011
#define _CLC1CON_G2POL_MASK                      0x00020000
#define _CLC1CON_G2POL_LENGTH                    0x00000001

#define _CLC1CON_G3POL_POSITION                  0x00000012
#define _CLC1CON_G3POL_MASK                      0x00040000
#define _CLC1CON_G3POL_LENGTH                    0x00000001

#define _CLC1CON_G4POL_POSITION                  0x00000013
#define _CLC1CON_G4POL_MASK                      0x00080000
#define _CLC1CON_G4POL_LENGTH                    0x00000001

#define _CLC1SEL_DS1_POSITION                    0x00000000
#define _CLC1SEL_DS1_MASK                        0x00000007
#define _CLC1SEL_DS1_LENGTH                      0x00000003

#define _CLC1SEL_DS2_POSITION                    0x00000004
#define _CLC1SEL_DS2_MASK                        0x00000070
#define _CLC1SEL_DS2_LENGTH                      0x00000003

#define _CLC1SEL_DS3_POSITION                    0x00000008
#define _CLC1SEL_DS3_MASK                        0x00000700
#define _CLC1SEL_DS3_LENGTH                      0x00000003

#define _CLC1SEL_DS4_POSITION                    0x0000000C
#define _CLC1SEL_DS4_MASK                        0x00007000
#define _CLC1SEL_DS4_LENGTH                      0x00000003

#define _CLC1GLS_G1D1N_POSITION                  0x00000000
#define _CLC1GLS_G1D1N_MASK                      0x00000001
#define _CLC1GLS_G1D1N_LENGTH                    0x00000001

#define _CLC1GLS_G1D1T_POSITION                  0x00000001
#define _CLC1GLS_G1D1T_MASK                      0x00000002
#define _CLC1GLS_G1D1T_LENGTH                    0x00000001

#define _CLC1GLS_G1D2N_POSITION                  0x00000002
#define _CLC1GLS_G1D2N_MASK                      0x00000004
#define _CLC1GLS_G1D2N_LENGTH                    0x00000001

#define _CLC1GLS_G1D2T_POSITION                  0x00000003
#define _CLC1GLS_G1D2T_MASK                      0x00000008
#define _CLC1GLS_G1D2T_LENGTH                    0x00000001

#define _CLC1GLS_G1D3N_POSITION                  0x00000004
#define _CLC1GLS_G1D3N_MASK                      0x00000010
#define _CLC1GLS_G1D3N_LENGTH                    0x00000001

#define _CLC1GLS_G1D3T_POSITION                  0x00000005
#define _CLC1GLS_G1D3T_MASK                      0x00000020
#define _CLC1GLS_G1D3T_LENGTH                    0x00000001

#define _CLC1GLS_G1D4N_POSITION                  0x00000006
#define _CLC1GLS_G1D4N_MASK                      0x00000040
#define _CLC1GLS_G1D4N_LENGTH                    0x00000001

#define _CLC1GLS_G1D4T_POSITION                  0x00000007
#define _CLC1GLS_G1D4T_MASK                      0x00000080
#define _CLC1GLS_G1D4T_LENGTH                    0x00000001

#define _CLC1GLS_G2D1N_POSITION                  0x00000008
#define _CLC1GLS_G2D1N_MASK                      0x00000100
#define _CLC1GLS_G2D1N_LENGTH                    0x00000001

#define _CLC1GLS_G2D1T_POSITION                  0x00000009
#define _CLC1GLS_G2D1T_MASK                      0x00000200
#define _CLC1GLS_G2D1T_LENGTH                    0x00000001

#define _CLC1GLS_G2D2N_POSITION                  0x0000000A
#define _CLC1GLS_G2D2N_MASK                      0x00000400
#define _CLC1GLS_G2D2N_LENGTH                    0x00000001

#define _CLC1GLS_G2D2T_POSITION                  0x0000000B
#define _CLC1GLS_G2D2T_MASK                      0x00000800
#define _CLC1GLS_G2D2T_LENGTH                    0x00000001

#define _CLC1GLS_G2D3N_POSITION                  0x0000000C
#define _CLC1GLS_G2D3N_MASK                      0x00001000
#define _CLC1GLS_G2D3N_LENGTH                    0x00000001

#define _CLC1GLS_G2D3T_POSITION                  0x0000000D
#define _CLC1GLS_G2D3T_MASK                      0x00002000
#define _CLC1GLS_G2D3T_LENGTH                    0x00000001

#define _CLC1GLS_G2D4N_POSITION                  0x0000000E
#define _CLC1GLS_G2D4N_MASK                      0x00004000
#define _CLC1GLS_G2D4N_LENGTH                    0x00000001

#define _CLC1GLS_G2D4T_POSITION                  0x0000000F
#define _CLC1GLS_G2D4T_MASK                      0x00008000
#define _CLC1GLS_G2D4T_LENGTH                    0x00000001

#define _CLC1GLS_G3D1N_POSITION                  0x00000010
#define _CLC1GLS_G3D1N_MASK                      0x00010000
#define _CLC1GLS_G3D1N_LENGTH                    0x00000001

#define _CLC1GLS_G3D1T_POSITION                  0x00000011
#define _CLC1GLS_G3D1T_MASK                      0x00020000
#define _CLC1GLS_G3D1T_LENGTH                    0x00000001

#define _CLC1GLS_G3D2N_POSITION                  0x00000012
#define _CLC1GLS_G3D2N_MASK                      0x00040000
#define _CLC1GLS_G3D2N_LENGTH                    0x00000001

#define _CLC1GLS_G3D2T_POSITION                  0x00000013
#define _CLC1GLS_G3D2T_MASK                      0x00080000
#define _CLC1GLS_G3D2T_LENGTH                    0x00000001

#define _CLC1GLS_G3D3N_POSITION                  0x00000014
#define _CLC1GLS_G3D3N_MASK                      0x00100000
#define _CLC1GLS_G3D3N_LENGTH                    0x00000001

#define _CLC1GLS_G3D3T_POSITION                  0x00000015
#define _CLC1GLS_G3D3T_MASK                      0x00200000
#define _CLC1GLS_G3D3T_LENGTH                    0x00000001

#define _CLC1GLS_G3D4N_POSITION                  0x00000016
#define _CLC1GLS_G3D4N_MASK                      0x00400000
#define _CLC1GLS_G3D4N_LENGTH                    0x00000001

#define _CLC1GLS_G3D4T_POSITION                  0x00000017
#define _CLC1GLS_G3D4T_MASK                      0x00800000
#define _CLC1GLS_G3D4T_LENGTH                    0x00000001

#define _CLC1GLS_G4D1N_POSITION                  0x00000018
#define _CLC1GLS_G4D1N_MASK                      0x01000000
#define _CLC1GLS_G4D1N_LENGTH                    0x00000001

#define _CLC1GLS_G4D1T_POSITION                  0x00000019
#define _CLC1GLS_G4D1T_MASK                      0x02000000
#define _CLC1GLS_G4D1T_LENGTH                    0x00000001

#define _CLC1GLS_G4D2N_POSITION                  0x0000001A
#define _CLC1GLS_G4D2N_MASK                      0x04000000
#define _CLC1GLS_G4D2N_LENGTH                    0x00000001

#define _CLC1GLS_G4D2T_POSITION                  0x0000001B
#define _CLC1GLS_G4D2T_MASK                      0x08000000
#define _CLC1GLS_G4D2T_LENGTH                    0x00000001

#define _CLC1GLS_G4D3N_POSITION                  0x0000001C
#define _CLC1GLS_G4D3N_MASK                      0x10000000
#define _CLC1GLS_G4D3N_LENGTH                    0x00000001

#define _CLC1GLS_G4D3T_POSITION                  0x0000001D
#define _CLC1GLS_G4D3T_MASK                      0x20000000
#define _CLC1GLS_G4D3T_LENGTH                    0x00000001

#define _CLC1GLS_G4D4N_POSITION                  0x0000001E
#define _CLC1GLS_G4D4N_MASK                      0x40000000
#define _CLC1GLS_G4D4N_LENGTH                    0x00000001

#define _CLC1GLS_G4D4T_POSITION                  0x0000001F
#define _CLC1GLS_G4D4T_MASK                      0x80000000
#define _CLC1GLS_G4D4T_LENGTH                    0x00000001

#define _CLC2CON_MODE_POSITION                   0x00000000
#define _CLC2CON_MODE_MASK                       0x00000007
#define _CLC2CON_MODE_LENGTH                     0x00000003

#define _CLC2CON_LCPOL_POSITION                  0x00000005
#define _CLC2CON_LCPOL_MASK                      0x00000020
#define _CLC2CON_LCPOL_LENGTH                    0x00000001

#define _CLC2CON_LCOUT_POSITION                  0x00000006
#define _CLC2CON_LCOUT_MASK                      0x00000040
#define _CLC2CON_LCOUT_LENGTH                    0x00000001

#define _CLC2CON_LCOE_POSITION                   0x00000007
#define _CLC2CON_LCOE_MASK                       0x00000080
#define _CLC2CON_LCOE_LENGTH                     0x00000001

#define _CLC2CON_INTN_POSITION                   0x0000000A
#define _CLC2CON_INTN_MASK                       0x00000400
#define _CLC2CON_INTN_LENGTH                     0x00000001

#define _CLC2CON_INTP_POSITION                   0x0000000B
#define _CLC2CON_INTP_MASK                       0x00000800
#define _CLC2CON_INTP_LENGTH                     0x00000001

#define _CLC2CON_ON_POSITION                     0x0000000F
#define _CLC2CON_ON_MASK                         0x00008000
#define _CLC2CON_ON_LENGTH                       0x00000001

#define _CLC2CON_G1POL_POSITION                  0x00000010
#define _CLC2CON_G1POL_MASK                      0x00010000
#define _CLC2CON_G1POL_LENGTH                    0x00000001

#define _CLC2CON_G2POL_POSITION                  0x00000011
#define _CLC2CON_G2POL_MASK                      0x00020000
#define _CLC2CON_G2POL_LENGTH                    0x00000001

#define _CLC2CON_G3POL_POSITION                  0x00000012
#define _CLC2CON_G3POL_MASK                      0x00040000
#define _CLC2CON_G3POL_LENGTH                    0x00000001

#define _CLC2CON_G4POL_POSITION                  0x00000013
#define _CLC2CON_G4POL_MASK                      0x00080000
#define _CLC2CON_G4POL_LENGTH                    0x00000001

#define _CLC2SEL_DS1_POSITION                    0x00000000
#define _CLC2SEL_DS1_MASK                        0x00000007
#define _CLC2SEL_DS1_LENGTH                      0x00000003

#define _CLC2SEL_DS2_POSITION                    0x00000004
#define _CLC2SEL_DS2_MASK                        0x00000070
#define _CLC2SEL_DS2_LENGTH                      0x00000003

#define _CLC2SEL_DS3_POSITION                    0x00000008
#define _CLC2SEL_DS3_MASK                        0x00000700
#define _CLC2SEL_DS3_LENGTH                      0x00000003

#define _CLC2SEL_DS4_POSITION                    0x0000000C
#define _CLC2SEL_DS4_MASK                        0x00007000
#define _CLC2SEL_DS4_LENGTH                      0x00000003

#define _CLC2GLS_G1D1N_POSITION                  0x00000000
#define _CLC2GLS_G1D1N_MASK                      0x00000001
#define _CLC2GLS_G1D1N_LENGTH                    0x00000001

#define _CLC2GLS_G1D1T_POSITION                  0x00000001
#define _CLC2GLS_G1D1T_MASK                      0x00000002
#define _CLC2GLS_G1D1T_LENGTH                    0x00000001

#define _CLC2GLS_G1D2N_POSITION                  0x00000002
#define _CLC2GLS_G1D2N_MASK                      0x00000004
#define _CLC2GLS_G1D2N_LENGTH                    0x00000001

#define _CLC2GLS_G1D2T_POSITION                  0x00000003
#define _CLC2GLS_G1D2T_MASK                      0x00000008
#define _CLC2GLS_G1D2T_LENGTH                    0x00000001

#define _CLC2GLS_G1D3N_POSITION                  0x00000004
#define _CLC2GLS_G1D3N_MASK                      0x00000010
#define _CLC2GLS_G1D3N_LENGTH                    0x00000001

#define _CLC2GLS_G1D3T_POSITION                  0x00000005
#define _CLC2GLS_G1D3T_MASK                      0x00000020
#define _CLC2GLS_G1D3T_LENGTH                    0x00000001

#define _CLC2GLS_G1D4N_POSITION                  0x00000006
#define _CLC2GLS_G1D4N_MASK                      0x00000040
#define _CLC2GLS_G1D4N_LENGTH                    0x00000001

#define _CLC2GLS_G1D4T_POSITION                  0x00000007
#define _CLC2GLS_G1D4T_MASK                      0x00000080
#define _CLC2GLS_G1D4T_LENGTH                    0x00000001

#define _CLC2GLS_G2D1N_POSITION                  0x00000008
#define _CLC2GLS_G2D1N_MASK                      0x00000100
#define _CLC2GLS_G2D1N_LENGTH                    0x00000001

#define _CLC2GLS_G2D1T_POSITION                  0x00000009
#define _CLC2GLS_G2D1T_MASK                      0x00000200
#define _CLC2GLS_G2D1T_LENGTH                    0x00000001

#define _CLC2GLS_G2D2N_POSITION                  0x0000000A
#define _CLC2GLS_G2D2N_MASK                      0x00000400
#define _CLC2GLS_G2D2N_LENGTH                    0x00000001

#define _CLC2GLS_G2D2T_POSITION                  0x0000000B
#define _CLC2GLS_G2D2T_MASK                      0x00000800
#define _CLC2GLS_G2D2T_LENGTH                    0x00000001

#define _CLC2GLS_G2D3N_POSITION                  0x0000000C
#define _CLC2GLS_G2D3N_MASK                      0x00001000
#define _CLC2GLS_G2D3N_LENGTH                    0x00000001

#define _CLC2GLS_G2D3T_POSITION                  0x0000000D
#define _CLC2GLS_G2D3T_MASK                      0x00002000
#define _CLC2GLS_G2D3T_LENGTH                    0x00000001

#define _CLC2GLS_G2D4N_POSITION                  0x0000000E
#define _CLC2GLS_G2D4N_MASK                      0x00004000
#define _CLC2GLS_G2D4N_LENGTH                    0x00000001

#define _CLC2GLS_G2D4T_POSITION                  0x0000000F
#define _CLC2GLS_G2D4T_MASK                      0x00008000
#define _CLC2GLS_G2D4T_LENGTH                    0x00000001

#define _CLC2GLS_G3D1N_POSITION                  0x00000010
#define _CLC2GLS_G3D1N_MASK                      0x00010000
#define _CLC2GLS_G3D1N_LENGTH                    0x00000001

#define _CLC2GLS_G3D1T_POSITION                  0x00000011
#define _CLC2GLS_G3D1T_MASK                      0x00020000
#define _CLC2GLS_G3D1T_LENGTH                    0x00000001

#define _CLC2GLS_G3D2N_POSITION                  0x00000012
#define _CLC2GLS_G3D2N_MASK                      0x00040000
#define _CLC2GLS_G3D2N_LENGTH                    0x00000001

#define _CLC2GLS_G3D2T_POSITION                  0x00000013
#define _CLC2GLS_G3D2T_MASK                      0x00080000
#define _CLC2GLS_G3D2T_LENGTH                    0x00000001

#define _CLC2GLS_G3D3N_POSITION                  0x00000014
#define _CLC2GLS_G3D3N_MASK                      0x00100000
#define _CLC2GLS_G3D3N_LENGTH                    0x00000001

#define _CLC2GLS_G3D3T_POSITION                  0x00000015
#define _CLC2GLS_G3D3T_MASK                      0x00200000
#define _CLC2GLS_G3D3T_LENGTH                    0x00000001

#define _CLC2GLS_G3D4N_POSITION                  0x00000016
#define _CLC2GLS_G3D4N_MASK                      0x00400000
#define _CLC2GLS_G3D4N_LENGTH                    0x00000001

#define _CLC2GLS_G3D4T_POSITION                  0x00000017
#define _CLC2GLS_G3D4T_MASK                      0x00800000
#define _CLC2GLS_G3D4T_LENGTH                    0x00000001

#define _CLC2GLS_G4D1N_POSITION                  0x00000018
#define _CLC2GLS_G4D1N_MASK                      0x01000000
#define _CLC2GLS_G4D1N_LENGTH                    0x00000001

#define _CLC2GLS_G4D1T_POSITION                  0x00000019
#define _CLC2GLS_G4D1T_MASK                      0x02000000
#define _CLC2GLS_G4D1T_LENGTH                    0x00000001

#define _CLC2GLS_G4D2N_POSITION                  0x0000001A
#define _CLC2GLS_G4D2N_MASK                      0x04000000
#define _CLC2GLS_G4D2N_LENGTH                    0x00000001

#define _CLC2GLS_G4D2T_POSITION                  0x0000001B
#define _CLC2GLS_G4D2T_MASK                      0x08000000
#define _CLC2GLS_G4D2T_LENGTH                    0x00000001

#define _CLC2GLS_G4D3N_POSITION                  0x0000001C
#define _CLC2GLS_G4D3N_MASK                      0x10000000
#define _CLC2GLS_G4D3N_LENGTH                    0x00000001

#define _CLC2GLS_G4D3T_POSITION                  0x0000001D
#define _CLC2GLS_G4D3T_MASK                      0x20000000
#define _CLC2GLS_G4D3T_LENGTH                    0x00000001

#define _CLC2GLS_G4D4N_POSITION                  0x0000001E
#define _CLC2GLS_G4D4N_MASK                      0x40000000
#define _CLC2GLS_G4D4N_LENGTH                    0x00000001

#define _CLC2GLS_G4D4T_POSITION                  0x0000001F
#define _CLC2GLS_G4D4T_MASK                      0x80000000
#define _CLC2GLS_G4D4T_LENGTH                    0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _SPLLCON_PLLICLK_POSITION                0x00000007
#define _SPLLCON_PLLICLK_MASK                    0x00000080
#define _SPLLCON_PLLICLK_LENGTH                  0x00000001

#define _SPLLCON_PLLMULT_POSITION                0x00000010
#define _SPLLCON_PLLMULT_MASK                    0x007F0000
#define _SPLLCON_PLLMULT_LENGTH                  0x00000007

#define _SPLLCON_PLLODIV_POSITION                0x00000018
#define _SPLLCON_PLLODIV_MASK                    0x07000000
#define _SPLLCON_PLLODIV_LENGTH                  0x00000003

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_BCFGFAIL_POSITION                  0x0000001A
#define _RCON_BCFGFAIL_MASK                      0x04000000
#define _RCON_BCFGFAIL_LENGTH                    0x00000001

#define _RCON_BCFGERR_POSITION                   0x0000001B
#define _RCON_BCFGERR_MASK                       0x08000000
#define _RCON_BCFGERR_LENGTH                     0x00000001

#define _RCON_PORCORE_POSITION                   0x0000001E
#define _RCON_PORCORE_MASK                       0x40000000
#define _RCON_PORCORE_LENGTH                     0x00000001

#define _RCON_PORIO_POSITION                     0x0000001F
#define _RCON_PORIO_MASK                         0x80000000
#define _RCON_PORIO_LENGTH                       0x00000001

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RNMICON_NMICNT_POSITION                 0x00000000
#define _RNMICON_NMICNT_MASK                     0x0000FFFF
#define _RNMICON_NMICNT_LENGTH                   0x00000010

#define _RNMICON_WDTS_POSITION                   0x00000010
#define _RNMICON_WDTS_MASK                       0x00010000
#define _RNMICON_WDTS_LENGTH                     0x00000001

#define _RNMICON_CF_POSITION                     0x00000011
#define _RNMICON_CF_MASK                         0x00020000
#define _RNMICON_CF_LENGTH                       0x00000001

#define _RNMICON_LVD_POSITION                    0x00000012
#define _RNMICON_LVD_MASK                        0x00040000
#define _RNMICON_LVD_LENGTH                      0x00000001

#define _RNMICON_GNMI_POSITION                   0x00000013
#define _RNMICON_GNMI_MASK                       0x00080000
#define _RNMICON_GNMI_LENGTH                     0x00000001

#define _RNMICON_SWNMI_POSITION                  0x00000017
#define _RNMICON_SWNMI_MASK                      0x00800000
#define _RNMICON_SWNMI_LENGTH                    0x00000001

#define _RNMICON_WDTO_POSITION                   0x00000018
#define _RNMICON_WDTO_MASK                       0x01000000
#define _RNMICON_WDTO_LENGTH                     0x00000001

#define _RNMICON_WDTR_POSITION                   0x00000018
#define _RNMICON_WDTR_MASK                       0x01000000
#define _RNMICON_WDTR_LENGTH                     0x00000001

#define _PWRCON_VREGS_POSITION                   0x00000000
#define _PWRCON_VREGS_MASK                       0x00000001
#define _PWRCON_VREGS_LENGTH                     0x00000001

#define _PWRCON_RETEN_POSITION                   0x00000001
#define _PWRCON_RETEN_MASK                       0x00000002
#define _PWRCON_RETEN_LENGTH                     0x00000001

#define _PWRCON_SBOREN_POSITION                  0x00000002
#define _PWRCON_SBOREN_MASK                      0x00000004
#define _PWRCON_SBOREN_LENGTH                    0x00000001

#define _REFO1CON_ROSEL_POSITION                 0x00000000
#define _REFO1CON_ROSEL_MASK                     0x0000000F
#define _REFO1CON_ROSEL_LENGTH                   0x00000004

#define _REFO1CON_ACTIVE_POSITION                0x00000008
#define _REFO1CON_ACTIVE_MASK                    0x00000100
#define _REFO1CON_ACTIVE_LENGTH                  0x00000001

#define _REFO1CON_DIVSWEN_POSITION               0x00000009
#define _REFO1CON_DIVSWEN_MASK                   0x00000200
#define _REFO1CON_DIVSWEN_LENGTH                 0x00000001

#define _REFO1CON_RSLP_POSITION                  0x0000000B
#define _REFO1CON_RSLP_MASK                      0x00000800
#define _REFO1CON_RSLP_LENGTH                    0x00000001

#define _REFO1CON_OE_POSITION                    0x0000000C
#define _REFO1CON_OE_MASK                        0x00001000
#define _REFO1CON_OE_LENGTH                      0x00000001

#define _REFO1CON_SIDL_POSITION                  0x0000000D
#define _REFO1CON_SIDL_MASK                      0x00002000
#define _REFO1CON_SIDL_LENGTH                    0x00000001

#define _REFO1CON_ON_POSITION                    0x0000000F
#define _REFO1CON_ON_MASK                        0x00008000
#define _REFO1CON_ON_LENGTH                      0x00000001

#define _REFO1CON_RODIV_POSITION                 0x00000010
#define _REFO1CON_RODIV_MASK                     0x7FFF0000
#define _REFO1CON_RODIV_LENGTH                   0x0000000F

#define _REFO1TRIM_ROTRIM_POSITION               0x00000017
#define _REFO1TRIM_ROTRIM_MASK                   0xFF800000
#define _REFO1TRIM_ROTRIM_LENGTH                 0x00000009

#define _CLKSTAT_FRCRDY_POSITION                 0x00000000
#define _CLKSTAT_FRCRDY_MASK                     0x00000001
#define _CLKSTAT_FRCRDY_LENGTH                   0x00000001

#define _CLKSTAT_SPDIVRDY_POSITION               0x00000001
#define _CLKSTAT_SPDIVRDY_MASK                   0x00000002
#define _CLKSTAT_SPDIVRDY_LENGTH                 0x00000001

#define _CLKSTAT_POSCRDY_POSITION                0x00000002
#define _CLKSTAT_POSCRDY_MASK                    0x00000004
#define _CLKSTAT_POSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_SOSCRDY_POSITION                0x00000004
#define _CLKSTAT_SOSCRDY_MASK                    0x00000010
#define _CLKSTAT_SOSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_LPRCRDY_POSITION                0x00000005
#define _CLKSTAT_LPRCRDY_MASK                    0x00000020
#define _CLKSTAT_LPRCRDY_LENGTH                  0x00000001

#define _CLKSTAT_SPLLRDY_POSITION                0x00000007
#define _CLKSTAT_SPLLRDY_MASK                    0x00000080
#define _CLKSTAT_SPLLRDY_LENGTH                  0x00000001

#define _CLKSTAT_DIVSPLLRDY_POSITION             0x00000001
#define _CLKSTAT_DIVSPLLRDY_MASK                 0x00000002
#define _CLKSTAT_DIVSPLLRDY_LENGTH               0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _ANCFG_VBGCMP_POSITION                   0x00000001
#define _ANCFG_VBGCMP_MASK                       0x00000002
#define _ANCFG_VBGCMP_LENGTH                     0x00000001

#define _ANCFG_VBGADC_POSITION                   0x00000002
#define _ANCFG_VBGADC_MASK                       0x00000004
#define _ANCFG_VBGADC_LENGTH                     0x00000001

#define _ANCFG_BGCMP_POSITION                    0x00000001
#define _ANCFG_BGCMP_MASK                        0x00000002
#define _ANCFG_BGCMP_LENGTH                      0x00000001

#define _ANCFG_BGADC_POSITION                    0x00000002
#define _ANCFG_BGADC_MASK                        0x00000004
#define _ANCFG_BGADC_LENGTH                      0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_HLEVT_POSITION                  0x00000008
#define _HLVDCON_HLEVT_MASK                      0x00000100
#define _HLVDCON_HLEVT_LENGTH                    0x00000001

#define _HLVDCON_IRVST_POSITION                  0x00000009
#define _HLVDCON_IRVST_MASK                      0x00000200
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x0000000A
#define _HLVDCON_BGVST_MASK                      0x00000400
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x0000000B
#define _HLVDCON_VDIR_MASK                       0x00000800
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_SIDL_POSITION                   0x0000000D
#define _HLVDCON_SIDL_MASK                       0x00002000
#define _HLVDCON_SIDL_LENGTH                     0x00000001

#define _HLVDCON_ON_POSITION                     0x0000000F
#define _HLVDCON_ON_MASK                         0x00008000
#define _HLVDCON_ON_LENGTH                       0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDERR_POSITION                  0x0000000C
#define _NVMCON_LVDERR_MASK                      0x00001000
#define _NVMCON_LVDERR_LENGTH                    0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMKEY_NVMKEY_POSITION                  0x00000000
#define _NVMKEY_NVMKEY_MASK                      0xFFFFFFFF
#define _NVMKEY_NVMKEY_LENGTH                    0x00000020

#define _NVMADDR_NVMADDR_POSITION                0x00000000
#define _NVMADDR_NVMADDR_MASK                    0xFFFFFFFF
#define _NVMADDR_NVMADDR_LENGTH                  0x00000020

#define _NVMDATA0_NVMDATA0_POSITION              0x00000000
#define _NVMDATA0_NVMDATA0_MASK                  0xFFFFFFFF
#define _NVMDATA0_NVMDATA0_LENGTH                0x00000020

#define _NVMDATA1_NVMDATA1_POSITION              0x00000000
#define _NVMDATA1_NVMDATA1_MASK                  0xFFFFFFFF
#define _NVMDATA1_NVMDATA1_LENGTH                0x00000020

#define _NVMSRCADDR_NVMSRCADDR_POSITION          0x00000000
#define _NVMSRCADDR_NVMSRCADDR_MASK              0xFFFFFFFF
#define _NVMSRCADDR_NVMSRCADDR_LENGTH            0x00000020

#define _NVMPWP_PWP_POSITION                     0x00000000
#define _NVMPWP_PWP_MASK                         0x00FFFFFF
#define _NVMPWP_PWP_LENGTH                       0x00000018

#define _NVMPWP_PWPULOCK_POSITION                0x0000001F
#define _NVMPWP_PWPULOCK_MASK                    0x80000000
#define _NVMPWP_PWPULOCK_LENGTH                  0x00000001

#define _NVMBWP_BWP0_POSITION                    0x00000008
#define _NVMBWP_BWP0_MASK                        0x00000100
#define _NVMBWP_BWP0_LENGTH                      0x00000001

#define _NVMBWP_BWP1_POSITION                    0x00000009
#define _NVMBWP_BWP1_MASK                        0x00000200
#define _NVMBWP_BWP1_LENGTH                      0x00000001

#define _NVMBWP_BWP2_POSITION                    0x0000000A
#define _NVMBWP_BWP2_MASK                        0x00000400
#define _NVMBWP_BWP2_LENGTH                      0x00000001

#define _NVMBWP_BWPULOCK_POSITION                0x0000000F
#define _NVMBWP_BWPULOCK_MASK                    0x00008000
#define _NVMBWP_BWPULOCK_LENGTH                  0x00000001

#define _RPCON_IOLOCK_POSITION                   0x0000000B
#define _RPCON_IOLOCK_MASK                       0x00000800
#define _RPCON_IOLOCK_LENGTH                     0x00000001

#define _RPINR1_INT4R_POSITION                   0x00000000
#define _RPINR1_INT4R_MASK                       0x0000001F
#define _RPINR1_INT4R_LENGTH                     0x00000005

#define _RPINR2_ICM1R_POSITION                   0x00000010
#define _RPINR2_ICM1R_MASK                       0x001F0000
#define _RPINR2_ICM1R_LENGTH                     0x00000005

#define _RPINR2_ICM2R_POSITION                   0x00000018
#define _RPINR2_ICM2R_MASK                       0x1F000000
#define _RPINR2_ICM2R_LENGTH                     0x00000005

#define _RPINR3_ICM3R_POSITION                   0x00000000
#define _RPINR3_ICM3R_MASK                       0x0000001F
#define _RPINR3_ICM3R_LENGTH                     0x00000005

#define _RPINR5_OCFAR_POSITION                   0x00000010
#define _RPINR5_OCFAR_MASK                       0x001F0000
#define _RPINR5_OCFAR_LENGTH                     0x00000005

#define _RPINR5_OCFBR_POSITION                   0x00000018
#define _RPINR5_OCFBR_MASK                       0x1F000000
#define _RPINR5_OCFBR_LENGTH                     0x00000005

#define _RPINR6_TCKIAR_POSITION                  0x00000000
#define _RPINR6_TCKIAR_MASK                      0x0000001F
#define _RPINR6_TCKIAR_LENGTH                    0x00000005

#define _RPINR6_TCKIBR_POSITION                  0x00000008
#define _RPINR6_TCKIBR_MASK                      0x00001F00
#define _RPINR6_TCKIBR_LENGTH                    0x00000005

#define _RPINR9_U2RXR_POSITION                   0x00000010
#define _RPINR9_U2RXR_MASK                       0x001F0000
#define _RPINR9_U2RXR_LENGTH                     0x00000005

#define _RPINR9_U2CTSR_POSITION                  0x00000018
#define _RPINR9_U2CTSR_MASK                      0x1F000000
#define _RPINR9_U2CTSR_LENGTH                    0x00000005

#define _RPINR11_SDI2R_POSITION                  0x00000000
#define _RPINR11_SDI2R_MASK                      0x0000001F
#define _RPINR11_SDI2R_LENGTH                    0x00000005

#define _RPINR11_SCK2INR_POSITION                0x00000008
#define _RPINR11_SCK2INR_MASK                    0x00001F00
#define _RPINR11_SCK2INR_LENGTH                  0x00000005

#define _RPINR11_SS2INR_POSITION                 0x00000010
#define _RPINR11_SS2INR_MASK                     0x001F0000
#define _RPINR11_SS2INR_LENGTH                   0x00000005

#define _RPINR12_CLCINAR_POSITION                0x00000010
#define _RPINR12_CLCINAR_MASK                    0x001F0000
#define _RPINR12_CLCINAR_LENGTH                  0x00000005

#define _RPINR12_CLCINBR_POSITION                0x00000018
#define _RPINR12_CLCINBR_MASK                    0x1F000000
#define _RPINR12_CLCINBR_LENGTH                  0x00000005

#define _RPOR0_RP1R_POSITION                     0x00000000
#define _RPOR0_RP1R_MASK                         0x0000000F
#define _RPOR0_RP1R_LENGTH                       0x00000004

#define _RPOR0_RP2R_POSITION                     0x00000008
#define _RPOR0_RP2R_MASK                         0x00000F00
#define _RPOR0_RP2R_LENGTH                       0x00000004

#define _RPOR0_RP3R_POSITION                     0x00000010
#define _RPOR0_RP3R_MASK                         0x000F0000
#define _RPOR0_RP3R_LENGTH                       0x00000004

#define _RPOR0_RP4R_POSITION                     0x00000018
#define _RPOR0_RP4R_MASK                         0x0F000000
#define _RPOR0_RP4R_LENGTH                       0x00000004

#define _RPOR1_RP5R_POSITION                     0x00000000
#define _RPOR1_RP5R_MASK                         0x0000000F
#define _RPOR1_RP5R_LENGTH                       0x00000004

#define _RPOR1_RP6R_POSITION                     0x00000008
#define _RPOR1_RP6R_MASK                         0x00000F00
#define _RPOR1_RP6R_LENGTH                       0x00000004

#define _RPOR1_RP7R_POSITION                     0x00000010
#define _RPOR1_RP7R_MASK                         0x000F0000
#define _RPOR1_RP7R_LENGTH                       0x00000004

#define _RPOR1_RP8R_POSITION                     0x00000018
#define _RPOR1_RP8R_MASK                         0x0F000000
#define _RPOR1_RP8R_LENGTH                       0x00000004

#define _RPOR2_RP9R_POSITION                     0x00000000
#define _RPOR2_RP9R_MASK                         0x0000000F
#define _RPOR2_RP9R_LENGTH                       0x00000004

#define _RPOR2_RP10R_POSITION                    0x00000008
#define _RPOR2_RP10R_MASK                        0x00000F00
#define _RPOR2_RP10R_LENGTH                      0x00000004

#define _RPOR2_RP11R_POSITION                    0x00000010
#define _RPOR2_RP11R_MASK                        0x000F0000
#define _RPOR2_RP11R_LENGTH                      0x00000004

#define _RPOR2_RP12R_POSITION                    0x00000018
#define _RPOR2_RP12R_MASK                        0x0F000000
#define _RPOR2_RP12R_LENGTH                      0x00000004

#define _RPOR3_RP13R_POSITION                    0x00000000
#define _RPOR3_RP13R_MASK                        0x0000000F
#define _RPOR3_RP13R_LENGTH                      0x00000004

#define _RPOR3_RP14R_POSITION                    0x00000008
#define _RPOR3_RP14R_MASK                        0x00000F00
#define _RPOR3_RP14R_LENGTH                      0x00000004

#define _RPOR3_RP15R_POSITION                    0x00000010
#define _RPOR3_RP15R_MASK                        0x000F0000
#define _RPOR3_RP15R_LENGTH                      0x00000004

#define _RPOR3_RP16R_POSITION                    0x00000018
#define _RPOR3_RP16R_MASK                        0x0F000000
#define _RPOR3_RP16R_LENGTH                      0x00000004

#define _RPOR4_RP17R_POSITION                    0x00000000
#define _RPOR4_RP17R_MASK                        0x0000000F
#define _RPOR4_RP17R_LENGTH                      0x00000004

#define _RPOR4_RP18R_POSITION                    0x00000008
#define _RPOR4_RP18R_MASK                        0x00000F00
#define _RPOR4_RP18R_LENGTH                      0x00000004

#define _RPOR4_RP19R_POSITION                    0x00000010
#define _RPOR4_RP19R_MASK                        0x000F0000
#define _RPOR4_RP19R_LENGTH                      0x00000004

#define _RPOR4_RP20R_POSITION                    0x00000018
#define _RPOR4_RP20R_MASK                        0x0F000000
#define _RPOR4_RP20R_LENGTH                      0x00000004

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _ANSELA_ANSA3_POSITION                   0x00000003
#define _ANSELA_ANSA3_MASK                       0x00000008
#define _ANSELA_ANSA3_LENGTH                     0x00000001

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _CNCONA_CNSTYLE_POSITION                 0x0000000B
#define _CNCONA_CNSTYLE_MASK                     0x00000800
#define _CNCONA_CNSTYLE_LENGTH                   0x00000001

#define _CNCONA_ON_POSITION                      0x0000000F
#define _CNCONA_ON_MASK                          0x00008000
#define _CNCONA_ON_LENGTH                        0x00000001

#define _CNEN0A_CNIE0A0_POSITION                 0x00000000
#define _CNEN0A_CNIE0A0_MASK                     0x00000001
#define _CNEN0A_CNIE0A0_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A1_POSITION                 0x00000001
#define _CNEN0A_CNIE0A1_MASK                     0x00000002
#define _CNEN0A_CNIE0A1_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A2_POSITION                 0x00000002
#define _CNEN0A_CNIE0A2_MASK                     0x00000004
#define _CNEN0A_CNIE0A2_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A3_POSITION                 0x00000003
#define _CNEN0A_CNIE0A3_MASK                     0x00000008
#define _CNEN0A_CNIE0A3_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A4_POSITION                 0x00000004
#define _CNEN0A_CNIE0A4_MASK                     0x00000010
#define _CNEN0A_CNIE0A4_LENGTH                   0x00000001

#define _CNSTATA_CNSTATA0_POSITION               0x00000000
#define _CNSTATA_CNSTATA0_MASK                   0x00000001
#define _CNSTATA_CNSTATA0_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA1_POSITION               0x00000001
#define _CNSTATA_CNSTATA1_MASK                   0x00000002
#define _CNSTATA_CNSTATA1_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA2_POSITION               0x00000002
#define _CNSTATA_CNSTATA2_MASK                   0x00000004
#define _CNSTATA_CNSTATA2_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA3_POSITION               0x00000003
#define _CNSTATA_CNSTATA3_MASK                   0x00000008
#define _CNSTATA_CNSTATA3_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA4_POSITION               0x00000004
#define _CNSTATA_CNSTATA4_MASK                   0x00000010
#define _CNSTATA_CNSTATA4_LENGTH                 0x00000001

#define _CNEN1A_CNIE1A0_POSITION                 0x00000000
#define _CNEN1A_CNIE1A0_MASK                     0x00000001
#define _CNEN1A_CNIE1A0_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A1_POSITION                 0x00000001
#define _CNEN1A_CNIE1A1_MASK                     0x00000002
#define _CNEN1A_CNIE1A1_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A2_POSITION                 0x00000002
#define _CNEN1A_CNIE1A2_MASK                     0x00000004
#define _CNEN1A_CNIE1A2_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A3_POSITION                 0x00000003
#define _CNEN1A_CNIE1A3_MASK                     0x00000008
#define _CNEN1A_CNIE1A3_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A4_POSITION                 0x00000004
#define _CNEN1A_CNIE1A4_MASK                     0x00000010
#define _CNEN1A_CNIE1A4_LENGTH                   0x00000001

#define _CNFA_CNFA0_POSITION                     0x00000000
#define _CNFA_CNFA0_MASK                         0x00000001
#define _CNFA_CNFA0_LENGTH                       0x00000001

#define _CNFA_CNFA1_POSITION                     0x00000001
#define _CNFA_CNFA1_MASK                         0x00000002
#define _CNFA_CNFA1_LENGTH                       0x00000001

#define _CNFA_CNFA2_POSITION                     0x00000002
#define _CNFA_CNFA2_MASK                         0x00000004
#define _CNFA_CNFA2_LENGTH                       0x00000001

#define _CNFA_CNFA3_POSITION                     0x00000003
#define _CNFA_CNFA3_MASK                         0x00000008
#define _CNFA_CNFA3_LENGTH                       0x00000001

#define _CNFA_CNFA4_POSITION                     0x00000004
#define _CNFA_CNFA4_MASK                         0x00000010
#define _CNFA_CNFA4_LENGTH                       0x00000001

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB12_POSITION                  0x0000000C
#define _CNPUB_CNPUB12_MASK                      0x00001000
#define _CNPUB_CNPUB12_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB12_POSITION                  0x0000000C
#define _CNPDB_CNPDB12_MASK                      0x00001000
#define _CNPDB_CNPDB12_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _CNCONB_CNSTYLE_POSITION                 0x0000000B
#define _CNCONB_CNSTYLE_MASK                     0x00000800
#define _CNCONB_CNSTYLE_LENGTH                   0x00000001

#define _CNCONB_ON_POSITION                      0x0000000F
#define _CNCONB_ON_MASK                          0x00008000
#define _CNCONB_ON_LENGTH                        0x00000001

#define _CNEN0B_CNIE0B0_POSITION                 0x00000000
#define _CNEN0B_CNIE0B0_MASK                     0x00000001
#define _CNEN0B_CNIE0B0_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B1_POSITION                 0x00000001
#define _CNEN0B_CNIE0B1_MASK                     0x00000002
#define _CNEN0B_CNIE0B1_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B2_POSITION                 0x00000002
#define _CNEN0B_CNIE0B2_MASK                     0x00000004
#define _CNEN0B_CNIE0B2_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B4_POSITION                 0x00000004
#define _CNEN0B_CNIE0B4_MASK                     0x00000010
#define _CNEN0B_CNIE0B4_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B7_POSITION                 0x00000007
#define _CNEN0B_CNIE0B7_MASK                     0x00000080
#define _CNEN0B_CNIE0B7_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B8_POSITION                 0x00000008
#define _CNEN0B_CNIE0B8_MASK                     0x00000100
#define _CNEN0B_CNIE0B8_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B9_POSITION                 0x00000009
#define _CNEN0B_CNIE0B9_MASK                     0x00000200
#define _CNEN0B_CNIE0B9_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B12_POSITION                0x0000000C
#define _CNEN0B_CNIE0B12_MASK                    0x00001000
#define _CNEN0B_CNIE0B12_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B13_POSITION                0x0000000D
#define _CNEN0B_CNIE0B13_MASK                    0x00002000
#define _CNEN0B_CNIE0B13_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B14_POSITION                0x0000000E
#define _CNEN0B_CNIE0B14_MASK                    0x00004000
#define _CNEN0B_CNIE0B14_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B15_POSITION                0x0000000F
#define _CNEN0B_CNIE0B15_MASK                    0x00008000
#define _CNEN0B_CNIE0B15_LENGTH                  0x00000001

#define _CNSTATB_CNSTATB0_POSITION               0x00000000
#define _CNSTATB_CNSTATB0_MASK                   0x00000001
#define _CNSTATB_CNSTATB0_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB1_POSITION               0x00000001
#define _CNSTATB_CNSTATB1_MASK                   0x00000002
#define _CNSTATB_CNSTATB1_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB2_POSITION               0x00000002
#define _CNSTATB_CNSTATB2_MASK                   0x00000004
#define _CNSTATB_CNSTATB2_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB4_POSITION               0x00000004
#define _CNSTATB_CNSTATB4_MASK                   0x00000010
#define _CNSTATB_CNSTATB4_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB7_POSITION               0x00000007
#define _CNSTATB_CNSTATB7_MASK                   0x00000080
#define _CNSTATB_CNSTATB7_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB8_POSITION               0x00000008
#define _CNSTATB_CNSTATB8_MASK                   0x00000100
#define _CNSTATB_CNSTATB8_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB9_POSITION               0x00000009
#define _CNSTATB_CNSTATB9_MASK                   0x00000200
#define _CNSTATB_CNSTATB9_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB12_POSITION              0x0000000C
#define _CNSTATB_CNSTATB12_MASK                  0x00001000
#define _CNSTATB_CNSTATB12_LENGTH                0x00000001

#define _CNSTATB_CNSTATB13_POSITION              0x0000000D
#define _CNSTATB_CNSTATB13_MASK                  0x00002000
#define _CNSTATB_CNSTATB13_LENGTH                0x00000001

#define _CNSTATB_CNSTATB14_POSITION              0x0000000E
#define _CNSTATB_CNSTATB14_MASK                  0x00004000
#define _CNSTATB_CNSTATB14_LENGTH                0x00000001

#define _CNSTATB_CNSTATB15_POSITION              0x0000000F
#define _CNSTATB_CNSTATB15_MASK                  0x00008000
#define _CNSTATB_CNSTATB15_LENGTH                0x00000001

#define _CNEN1B_CNIE1B0_POSITION                 0x00000000
#define _CNEN1B_CNIE1B0_MASK                     0x00000001
#define _CNEN1B_CNIE1B0_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B1_POSITION                 0x00000001
#define _CNEN1B_CNIE1B1_MASK                     0x00000002
#define _CNEN1B_CNIE1B1_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B2_POSITION                 0x00000002
#define _CNEN1B_CNIE1B2_MASK                     0x00000004
#define _CNEN1B_CNIE1B2_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B4_POSITION                 0x00000004
#define _CNEN1B_CNIE1B4_MASK                     0x00000010
#define _CNEN1B_CNIE1B4_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B7_POSITION                 0x00000007
#define _CNEN1B_CNIE1B7_MASK                     0x00000080
#define _CNEN1B_CNIE1B7_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B8_POSITION                 0x00000008
#define _CNEN1B_CNIE1B8_MASK                     0x00000100
#define _CNEN1B_CNIE1B8_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B9_POSITION                 0x00000009
#define _CNEN1B_CNIE1B9_MASK                     0x00000200
#define _CNEN1B_CNIE1B9_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B12_POSITION                0x0000000C
#define _CNEN1B_CNIE1B12_MASK                    0x00001000
#define _CNEN1B_CNIE1B12_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B13_POSITION                0x0000000D
#define _CNEN1B_CNIE1B13_MASK                    0x00002000
#define _CNEN1B_CNIE1B13_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B14_POSITION                0x0000000E
#define _CNEN1B_CNIE1B14_MASK                    0x00004000
#define _CNEN1B_CNIE1B14_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B15_POSITION                0x0000000F
#define _CNEN1B_CNIE1B15_MASK                    0x00008000
#define _CNEN1B_CNIE1B15_LENGTH                  0x00000001

#define _CNFB_CNFB0_POSITION                     0x00000000
#define _CNFB_CNFB0_MASK                         0x00000001
#define _CNFB_CNFB0_LENGTH                       0x00000001

#define _CNFB_CNFB1_POSITION                     0x00000001
#define _CNFB_CNFB1_MASK                         0x00000002
#define _CNFB_CNFB1_LENGTH                       0x00000001

#define _CNFB_CNFB2_POSITION                     0x00000002
#define _CNFB_CNFB2_MASK                         0x00000004
#define _CNFB_CNFB2_LENGTH                       0x00000001

#define _CNFB_CNFB4_POSITION                     0x00000004
#define _CNFB_CNFB4_MASK                         0x00000010
#define _CNFB_CNFB4_LENGTH                       0x00000001

#define _CNFB_CNFB7_POSITION                     0x00000007
#define _CNFB_CNFB7_MASK                         0x00000080
#define _CNFB_CNFB7_LENGTH                       0x00000001

#define _CNFB_CNFB8_POSITION                     0x00000008
#define _CNFB_CNFB8_MASK                         0x00000100
#define _CNFB_CNFB8_LENGTH                       0x00000001

#define _CNFB_CNFB9_POSITION                     0x00000009
#define _CNFB_CNFB9_MASK                         0x00000200
#define _CNFB_CNFB9_LENGTH                       0x00000001

#define _CNFB_CNFB12_POSITION                    0x0000000C
#define _CNFB_CNFB12_MASK                        0x00001000
#define _CNFB_CNFB12_LENGTH                      0x00000001

#define _CNFB_CNFB13_POSITION                    0x0000000D
#define _CNFB_CNFB13_MASK                        0x00002000
#define _CNFB_CNFB13_LENGTH                      0x00000001

#define _CNFB_CNFB14_POSITION                    0x0000000E
#define _CNFB_CNFB14_MASK                        0x00004000
#define _CNFB_CNFB14_LENGTH                      0x00000001

#define _CNFB_CNFB15_POSITION                    0x0000000F
#define _CNFB_CNFB15_MASK                        0x00008000
#define _CNFB_CNFB15_LENGTH                      0x00000001

#define _PMDCON_PMDLOCK_POSITION                 0x0000000B
#define _PMDCON_PMDLOCK_MASK                     0x00000800
#define _PMDCON_PMDLOCK_LENGTH                   0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_VREFMD_POSITION                    0x0000000C
#define _PMD1_VREFMD_MASK                        0x00001000
#define _PMD1_VREFMD_LENGTH                      0x00000001

#define _PMD1_HLVDMD_POSITION                    0x00000014
#define _PMD1_HLVDMD_MASK                        0x00100000
#define _PMD1_HLVDMD_LENGTH                      0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD2_CLC1MD_POSITION                    0x00000018
#define _PMD2_CLC1MD_MASK                        0x01000000
#define _PMD2_CLC1MD_LENGTH                      0x00000001

#define _PMD2_CLC2MD_POSITION                    0x00000019
#define _PMD2_CLC2MD_MASK                        0x02000000
#define _PMD2_CLC2MD_LENGTH                      0x00000001

#define _PMD3_CCP1MD_POSITION                    0x00000008
#define _PMD3_CCP1MD_MASK                        0x00000100
#define _PMD3_CCP1MD_LENGTH                      0x00000001

#define _PMD3_CCP2MD_POSITION                    0x00000009
#define _PMD3_CCP2MD_MASK                        0x00000200
#define _PMD3_CCP2MD_LENGTH                      0x00000001

#define _PMD3_CCP3MD_POSITION                    0x0000000A
#define _PMD3_CCP3MD_MASK                        0x00000400
#define _PMD3_CCP3MD_LENGTH                      0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

#define _PMD5_U2MD_POSITION                      0x00000001
#define _PMD5_U2MD_MASK                          0x00000002
#define _PMD5_U2MD_LENGTH                        0x00000001

#define _PMD5_SPI1MD_POSITION                    0x00000008
#define _PMD5_SPI1MD_MASK                        0x00000100
#define _PMD5_SPI1MD_LENGTH                      0x00000001

#define _PMD5_SPI2MD_POSITION                    0x00000009
#define _PMD5_SPI2MD_MASK                        0x00000200
#define _PMD5_SPI2MD_LENGTH                      0x00000001

#define _PMD6_RTCCMD_POSITION                    0x00000000
#define _PMD6_RTCCMD_MASK                        0x00000001
#define _PMD6_RTCCMD_LENGTH                      0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000008
#define _PMD6_REFOMD_MASK                        0x00000100
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _PMD7_CRCMD_POSITION                     0x00000003
#define _PMD7_CRCMD_MASK                         0x00000008
#define _PMD7_CRCMD_LENGTH                       0x00000001

#define _CFGCON_JTAGEN_POSITION                  0x00000003
#define _CFGCON_JTAGEN_MASK                      0x00000008
#define _CFGCON_JTAGEN_LENGTH                    0x00000001

#define _CFGCON_EXECADDR_POSITION                0x00000010
#define _CFGCON_EXECADDR_MASK                    0x00FF0000
#define _CFGCON_EXECADDR_LENGTH                  0x00000008

#define _DEVID_MAINID_POSITION                   0x00000000
#define _DEVID_MAINID_MASK                       0x00000FFF
#define _DEVID_MAINID_LENGTH                     0x0000000C

#define _DEVID_PN_POSITION                       0x0000000C
#define _DEVID_PN_MASK                           0x0FFFF000
#define _DEVID_PN_LENGTH                         0x00000010

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _SYSKEY_SYSKEY_POSITION                  0x00000000
#define _SYSKEY_SYSKEY_MASK                      0xFFFFFFFF
#define _SYSKEY_SYSKEY_LENGTH                    0x00000020

#define _WDTCON_WDTWINEN_POSITION                0x00000000
#define _WDTCON_WDTWINEN_MASK                    0x00000001
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SLPDIV_POSITION                  0x00000001
#define _WDTCON_SLPDIV_MASK                      0x0000003E
#define _WDTCON_SLPDIV_LENGTH                    0x00000005

#define _WDTCON_CLKSEL_POSITION                  0x00000006
#define _WDTCON_CLKSEL_MASK                      0x000000C0
#define _WDTCON_CLKSEL_LENGTH                    0x00000002

#define _WDTCON_RUNDIV_POSITION                  0x00000008
#define _WDTCON_RUNDIV_MASK                      0x00001F00
#define _WDTCON_RUNDIV_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_WDTCLRKEY_POSITION               0x00000010
#define _WDTCON_WDTCLRKEY_MASK                   0xFFFF0000
#define _WDTCON_WDTCLRKEY_LENGTH                 0x00000010

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000007
#define _T1CON_TGATE_MASK                        0x00000080
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

#define _T1CON_TWIP_POSITION                     0x0000000B
#define _T1CON_TWIP_MASK                         0x00000800
#define _T1CON_TWIP_LENGTH                       0x00000001

#define _T1CON_TWDIS_POSITION                    0x0000000C
#define _T1CON_TWDIS_MASK                        0x00001000
#define _T1CON_TWDIS_LENGTH                      0x00000001

#define _T1CON_SIDL_POSITION                     0x0000000D
#define _T1CON_SIDL_MASK                         0x00002000
#define _T1CON_SIDL_LENGTH                       0x00000001

#define _T1CON_ON_POSITION                       0x0000000F
#define _T1CON_ON_MASK                           0x00008000
#define _T1CON_ON_LENGTH                         0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

#define _SPI1CON_DISSDI_POSITION                 0x00000004
#define _SPI1CON_DISSDI_MASK                     0x00000010
#define _SPI1CON_DISSDI_LENGTH                   0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_MODE32_POSITION                 0x0000000B
#define _SPI1CON_MODE32_MASK                     0x00000800
#define _SPI1CON_MODE32_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000C
#define _SPI1CON_DISSDO_MASK                     0x00001000
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SIDL_POSITION                   0x0000000D
#define _SPI1CON_SIDL_MASK                       0x00002000
#define _SPI1CON_SIDL_LENGTH                     0x00000001

#define _SPI1CON_ON_POSITION                     0x0000000F
#define _SPI1CON_ON_MASK                         0x00008000
#define _SPI1CON_ON_LENGTH                       0x00000001

#define _SPI1CON_ENHBUF_POSITION                 0x00000010
#define _SPI1CON_ENHBUF_MASK                     0x00010000
#define _SPI1CON_ENHBUF_LENGTH                   0x00000001

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

#define _SPI1CON_MCLKSEL_POSITION                0x00000017
#define _SPI1CON_MCLKSEL_MASK                    0x00800000
#define _SPI1CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI1CON_FRMCNT_POSITION                 0x00000018
#define _SPI1CON_FRMCNT_MASK                     0x07000000
#define _SPI1CON_FRMCNT_LENGTH                   0x00000003

#define _SPI1CON_FRMSYPW_POSITION                0x0000001B
#define _SPI1CON_FRMSYPW_MASK                    0x08000000
#define _SPI1CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI1CON_MSSEN_POSITION                  0x0000001C
#define _SPI1CON_MSSEN_MASK                      0x10000000
#define _SPI1CON_MSSEN_LENGTH                    0x00000001

#define _SPI1CON_FRMPOL_POSITION                 0x0000001D
#define _SPI1CON_FRMPOL_MASK                     0x20000000
#define _SPI1CON_FRMPOL_LENGTH                   0x00000001

#define _SPI1CON_FRMSYNC_POSITION                0x0000001E
#define _SPI1CON_FRMSYNC_MASK                    0x40000000
#define _SPI1CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000001F
#define _SPI1CON_FRMEN_MASK                      0x80000000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_w_POSITION                      0x00000000
#define _SPI1CON_w_MASK                          0xFFFFFFFF
#define _SPI1CON_w_LENGTH                        0x00000020

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBE_POSITION                0x00000005
#define _SPI1STAT_SPIRBE_MASK                    0x00000020
#define _SPI1STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMT_POSITION                  0x00000007
#define _SPI1STAT_SRMT_MASK                      0x00000080
#define _SPI1STAT_SRMT_LENGTH                    0x00000001

#define _SPI1STAT_SPITUR_POSITION                0x00000008
#define _SPI1STAT_SPITUR_MASK                    0x00000100
#define _SPI1STAT_SPITUR_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_FRMERR_POSITION                0x0000000C
#define _SPI1STAT_FRMERR_MASK                    0x00001000
#define _SPI1STAT_FRMERR_LENGTH                  0x00000001

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

#define _SPI1CON2_AUDMOD_POSITION                0x00000000
#define _SPI1CON2_AUDMOD_MASK                    0x00000003
#define _SPI1CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI1CON2_AUDMONO_POSITION               0x00000003
#define _SPI1CON2_AUDMONO_MASK                   0x00000008
#define _SPI1CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI1CON2_AUDEN_POSITION                 0x00000007
#define _SPI1CON2_AUDEN_MASK                     0x00000080
#define _SPI1CON2_AUDEN_LENGTH                   0x00000001

#define _SPI1CON2_IGNTUR_POSITION                0x00000008
#define _SPI1CON2_IGNTUR_MASK                    0x00000100
#define _SPI1CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI1CON2_IGNROV_POSITION                0x00000009
#define _SPI1CON2_IGNROV_MASK                    0x00000200
#define _SPI1CON2_IGNROV_LENGTH                  0x00000001

#define _SPI1CON2_SPITUREN_POSITION              0x0000000A
#define _SPI1CON2_SPITUREN_MASK                  0x00000400
#define _SPI1CON2_SPITUREN_LENGTH                0x00000001

#define _SPI1CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI1CON2_SPIROVEN_MASK                  0x00000800
#define _SPI1CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI1CON2_FRMERREN_POSITION              0x0000000C
#define _SPI1CON2_FRMERREN_MASK                  0x00001000
#define _SPI1CON2_FRMERREN_LENGTH                0x00000001

#define _SPI1CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI1CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI1CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI1CON2_AUDMOD0_POSITION               0x00000000
#define _SPI1CON2_AUDMOD0_MASK                   0x00000001
#define _SPI1CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI1CON2_AUDMOD1_POSITION               0x00000001
#define _SPI1CON2_AUDMOD1_MASK                   0x00000002
#define _SPI1CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI1CON2_w_POSITION                     0x00000000
#define _SPI1CON2_w_MASK                         0xFFFFFFFF
#define _SPI1CON2_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

#define _SPI2CON_DISSDI_POSITION                 0x00000004
#define _SPI2CON_DISSDI_MASK                     0x00000010
#define _SPI2CON_DISSDI_LENGTH                   0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_MODE32_POSITION                 0x0000000B
#define _SPI2CON_MODE32_MASK                     0x00000800
#define _SPI2CON_MODE32_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000C
#define _SPI2CON_DISSDO_MASK                     0x00001000
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SIDL_POSITION                   0x0000000D
#define _SPI2CON_SIDL_MASK                       0x00002000
#define _SPI2CON_SIDL_LENGTH                     0x00000001

#define _SPI2CON_ON_POSITION                     0x0000000F
#define _SPI2CON_ON_MASK                         0x00008000
#define _SPI2CON_ON_LENGTH                       0x00000001

#define _SPI2CON_ENHBUF_POSITION                 0x00000010
#define _SPI2CON_ENHBUF_MASK                     0x00010000
#define _SPI2CON_ENHBUF_LENGTH                   0x00000001

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

#define _SPI2CON_MCLKSEL_POSITION                0x00000017
#define _SPI2CON_MCLKSEL_MASK                    0x00800000
#define _SPI2CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI2CON_FRMCNT_POSITION                 0x00000018
#define _SPI2CON_FRMCNT_MASK                     0x07000000
#define _SPI2CON_FRMCNT_LENGTH                   0x00000003

#define _SPI2CON_FRMSYPW_POSITION                0x0000001B
#define _SPI2CON_FRMSYPW_MASK                    0x08000000
#define _SPI2CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI2CON_MSSEN_POSITION                  0x0000001C
#define _SPI2CON_MSSEN_MASK                      0x10000000
#define _SPI2CON_MSSEN_LENGTH                    0x00000001

#define _SPI2CON_FRMPOL_POSITION                 0x0000001D
#define _SPI2CON_FRMPOL_MASK                     0x20000000
#define _SPI2CON_FRMPOL_LENGTH                   0x00000001

#define _SPI2CON_FRMSYNC_POSITION                0x0000001E
#define _SPI2CON_FRMSYNC_MASK                    0x40000000
#define _SPI2CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000001F
#define _SPI2CON_FRMEN_MASK                      0x80000000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_w_POSITION                      0x00000000
#define _SPI2CON_w_MASK                          0xFFFFFFFF
#define _SPI2CON_w_LENGTH                        0x00000020

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBE_POSITION                0x00000005
#define _SPI2STAT_SPIRBE_MASK                    0x00000020
#define _SPI2STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMT_POSITION                  0x00000007
#define _SPI2STAT_SRMT_MASK                      0x00000080
#define _SPI2STAT_SRMT_LENGTH                    0x00000001

#define _SPI2STAT_SPITUR_POSITION                0x00000008
#define _SPI2STAT_SPITUR_MASK                    0x00000100
#define _SPI2STAT_SPITUR_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_FRMERR_POSITION                0x0000000C
#define _SPI2STAT_FRMERR_MASK                    0x00001000
#define _SPI2STAT_FRMERR_LENGTH                  0x00000001

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI2CON2_AUDMOD_POSITION                0x00000000
#define _SPI2CON2_AUDMOD_MASK                    0x00000003
#define _SPI2CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI2CON2_AUDMONO_POSITION               0x00000003
#define _SPI2CON2_AUDMONO_MASK                   0x00000008
#define _SPI2CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI2CON2_AUDEN_POSITION                 0x00000007
#define _SPI2CON2_AUDEN_MASK                     0x00000080
#define _SPI2CON2_AUDEN_LENGTH                   0x00000001

#define _SPI2CON2_IGNTUR_POSITION                0x00000008
#define _SPI2CON2_IGNTUR_MASK                    0x00000100
#define _SPI2CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI2CON2_IGNROV_POSITION                0x00000009
#define _SPI2CON2_IGNROV_MASK                    0x00000200
#define _SPI2CON2_IGNROV_LENGTH                  0x00000001

#define _SPI2CON2_SPITUREN_POSITION              0x0000000A
#define _SPI2CON2_SPITUREN_MASK                  0x00000400
#define _SPI2CON2_SPITUREN_LENGTH                0x00000001

#define _SPI2CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI2CON2_SPIROVEN_MASK                  0x00000800
#define _SPI2CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI2CON2_FRMERREN_POSITION              0x0000000C
#define _SPI2CON2_FRMERREN_MASK                  0x00001000
#define _SPI2CON2_FRMERREN_LENGTH                0x00000001

#define _SPI2CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI2CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI2CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI2CON2_AUDMOD0_POSITION               0x00000000
#define _SPI2CON2_AUDMOD0_MASK                   0x00000001
#define _SPI2CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI2CON2_AUDMOD1_POSITION               0x00000001
#define _SPI2CON2_AUDMOD1_MASK                   0x00000002
#define _SPI2CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI2CON2_w_POSITION                     0x00000000
#define _SPI2CON2_w_MASK                         0xFFFFFFFF
#define _SPI2CON2_w_LENGTH                       0x00000020

#define _INTCON_INT0EP_POSITION                  0x00000000
#define _INTCON_INT0EP_MASK                      0x00000001
#define _INTCON_INT0EP_LENGTH                    0x00000001

#define _INTCON_INT1EP_POSITION                  0x00000001
#define _INTCON_INT1EP_MASK                      0x00000002
#define _INTCON_INT1EP_LENGTH                    0x00000001

#define _INTCON_INT2EP_POSITION                  0x00000002
#define _INTCON_INT2EP_MASK                      0x00000004
#define _INTCON_INT2EP_LENGTH                    0x00000001

#define _INTCON_INT3EP_POSITION                  0x00000003
#define _INTCON_INT3EP_MASK                      0x00000008
#define _INTCON_INT3EP_LENGTH                    0x00000001

#define _INTCON_INT4EP_POSITION                  0x00000004
#define _INTCON_INT4EP_MASK                      0x00000010
#define _INTCON_INT4EP_LENGTH                    0x00000001

#define _INTCON_TPC_POSITION                     0x00000008
#define _INTCON_TPC_MASK                         0x00000700
#define _INTCON_TPC_LENGTH                       0x00000003

#define _INTCON_MVEC_POSITION                    0x0000000C
#define _INTCON_MVEC_MASK                        0x00001000
#define _INTCON_MVEC_LENGTH                      0x00000001

#define _INTCON_VS_POSITION                      0x00000010
#define _INTCON_VS_MASK                          0x007F0000
#define _INTCON_VS_LENGTH                        0x00000007

#define _PRISS_SS0_POSITION                      0x00000000
#define _PRISS_SS0_MASK                          0x00000001
#define _PRISS_SS0_LENGTH                        0x00000001

#define _PRISS_PRI1SS_POSITION                   0x00000004
#define _PRISS_PRI1SS_MASK                       0x000000F0
#define _PRISS_PRI1SS_LENGTH                     0x00000004

#define _PRISS_PRI2SS_POSITION                   0x00000008
#define _PRISS_PRI2SS_MASK                       0x00000F00
#define _PRISS_PRI2SS_LENGTH                     0x00000004

#define _PRISS_PRI3SS_POSITION                   0x0000000C
#define _PRISS_PRI3SS_MASK                       0x0000F000
#define _PRISS_PRI3SS_LENGTH                     0x00000004

#define _PRISS_PRI4SS_POSITION                   0x00000010
#define _PRISS_PRI4SS_MASK                       0x000F0000
#define _PRISS_PRI4SS_LENGTH                     0x00000004

#define _PRISS_PRI5SS_POSITION                   0x00000014
#define _PRISS_PRI5SS_MASK                       0x00F00000
#define _PRISS_PRI5SS_LENGTH                     0x00000004

#define _PRISS_PRI6SS_POSITION                   0x00000018
#define _PRISS_PRI6SS_MASK                       0x0F000000
#define _PRISS_PRI6SS_LENGTH                     0x00000004

#define _PRISS_PRI7SS_POSITION                   0x0000001C
#define _PRISS_PRI7SS_MASK                       0xF0000000
#define _PRISS_PRI7SS_LENGTH                     0x00000004

#define _INTSTAT_SIRQ_POSITION                   0x00000000
#define _INTSTAT_SIRQ_MASK                       0x000000FF
#define _INTSTAT_SIRQ_LENGTH                     0x00000008

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

#define _IPTMR_IPTMR_POSITION                    0x00000000
#define _IPTMR_IPTMR_MASK                        0xFFFFFFFF
#define _IPTMR_IPTMR_LENGTH                      0x00000020

#define _IFS0_CTIF_POSITION                      0x00000000
#define _IFS0_CTIF_MASK                          0x00000001
#define _IFS0_CTIF_LENGTH                        0x00000001

#define _IFS0_CS0IF_POSITION                     0x00000001
#define _IFS0_CS0IF_MASK                         0x00000002
#define _IFS0_CS0IF_LENGTH                       0x00000001

#define _IFS0_CS1IF_POSITION                     0x00000002
#define _IFS0_CS1IF_MASK                         0x00000004
#define _IFS0_CS1IF_LENGTH                       0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000003
#define _IFS0_INT0IF_MASK                        0x00000008
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000004
#define _IFS0_INT1IF_MASK                        0x00000010
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_INT2IF_POSITION                    0x00000005
#define _IFS0_INT2IF_MASK                        0x00000020
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000006
#define _IFS0_INT3IF_MASK                        0x00000040
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000007
#define _IFS0_INT4IF_MASK                        0x00000080
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_CNAIF_POSITION                     0x00000008
#define _IFS0_CNAIF_MASK                         0x00000100
#define _IFS0_CNAIF_LENGTH                       0x00000001

#define _IFS0_CNBIF_POSITION                     0x00000009
#define _IFS0_CNBIF_MASK                         0x00000200
#define _IFS0_CNBIF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x0000000B
#define _IFS0_T1IF_MASK                          0x00000800
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CMP1IF_POSITION                    0x0000000C
#define _IFS0_CMP1IF_MASK                        0x00001000
#define _IFS0_CMP1IF_LENGTH                      0x00000001

#define _IFS0_CMP2IF_POSITION                    0x0000000D
#define _IFS0_CMP2IF_MASK                        0x00002000
#define _IFS0_CMP2IF_LENGTH                      0x00000001

#define _IFS0_RTCCIF_POSITION                    0x0000000E
#define _IFS0_RTCCIF_MASK                        0x00004000
#define _IFS0_RTCCIF_LENGTH                      0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000000F
#define _IFS0_AD1IF_MASK                         0x00008000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_CRCIF_POSITION                     0x00000010
#define _IFS0_CRCIF_MASK                         0x00010000
#define _IFS0_CRCIF_LENGTH                       0x00000001

#define _IFS0_LVDIF_POSITION                     0x00000011
#define _IFS0_LVDIF_MASK                         0x00020000
#define _IFS0_LVDIF_LENGTH                       0x00000001

#define _IFS0_CLC1IF_POSITION                    0x00000012
#define _IFS0_CLC1IF_MASK                        0x00040000
#define _IFS0_CLC1IF_LENGTH                      0x00000001

#define _IFS0_CLC2IF_POSITION                    0x00000013
#define _IFS0_CLC2IF_MASK                        0x00080000
#define _IFS0_CLC2IF_LENGTH                      0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000014
#define _IFS0_SPI1EIF_MASK                       0x00100000
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1TXIF_POSITION                  0x00000015
#define _IFS0_SPI1TXIF_MASK                      0x00200000
#define _IFS0_SPI1TXIF_LENGTH                    0x00000001

#define _IFS0_SPI1RXIF_POSITION                  0x00000016
#define _IFS0_SPI1RXIF_MASK                      0x00400000
#define _IFS0_SPI1RXIF_LENGTH                    0x00000001

#define _IFS0_U1RXIF_POSITION                    0x00000017
#define _IFS0_U1RXIF_MASK                        0x00800000
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x00000018
#define _IFS0_U1TXIF_MASK                        0x01000000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_U1EIF_POSITION                     0x00000019
#define _IFS0_U1EIF_MASK                         0x02000000
#define _IFS0_U1EIF_LENGTH                       0x00000001

#define _IFS0_CCP1IF_POSITION                    0x0000001D
#define _IFS0_CCP1IF_MASK                        0x20000000
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_CCT1IF_POSITION                    0x0000001E
#define _IFS0_CCT1IF_MASK                        0x40000000
#define _IFS0_CCT1IF_LENGTH                      0x00000001

#define _IFS0_CCP2IF_POSITION                    0x0000001F
#define _IFS0_CCP2IF_MASK                        0x80000000
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS1_CCT2IF_POSITION                    0x00000000
#define _IFS1_CCT2IF_MASK                        0x00000001
#define _IFS1_CCT2IF_LENGTH                      0x00000001

#define _IFS1_CCP3IF_POSITION                    0x00000001
#define _IFS1_CCP3IF_MASK                        0x00000002
#define _IFS1_CCP3IF_LENGTH                      0x00000001

#define _IFS1_CCT3IF_POSITION                    0x00000002
#define _IFS1_CCT3IF_MASK                        0x00000004
#define _IFS1_CCT3IF_LENGTH                      0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000005
#define _IFS1_SPI2EIF_MASK                       0x00000020
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000006
#define _IFS1_SPI2TXIF_MASK                      0x00000040
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000007
#define _IFS1_SPI2RXIF_MASK                      0x00000080
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000008
#define _IFS1_U2RXIF_MASK                        0x00000100
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x00000009
#define _IFS1_U2TXIF_MASK                        0x00000200
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_U2EIF_POSITION                     0x0000000A
#define _IFS1_U2EIF_MASK                         0x00000400
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_NVMIF_POSITION                     0x0000000E
#define _IFS1_NVMIF_MASK                         0x00004000
#define _IFS1_NVMIF_LENGTH                       0x00000001

#define _IFS1_CPCIF_POSITION                     0x0000000F
#define _IFS1_CPCIF_MASK                         0x00008000
#define _IFS1_CPCIF_LENGTH                       0x00000001

#define _IEC0_CTIE_POSITION                      0x00000000
#define _IEC0_CTIE_MASK                          0x00000001
#define _IEC0_CTIE_LENGTH                        0x00000001

#define _IEC0_CS0IE_POSITION                     0x00000001
#define _IEC0_CS0IE_MASK                         0x00000002
#define _IEC0_CS0IE_LENGTH                       0x00000001

#define _IEC0_CS1IE_POSITION                     0x00000002
#define _IEC0_CS1IE_MASK                         0x00000004
#define _IEC0_CS1IE_LENGTH                       0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000003
#define _IEC0_INT0IE_MASK                        0x00000008
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000004
#define _IEC0_INT1IE_MASK                        0x00000010
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_INT2IE_POSITION                    0x00000005
#define _IEC0_INT2IE_MASK                        0x00000020
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000006
#define _IEC0_INT3IE_MASK                        0x00000040
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000007
#define _IEC0_INT4IE_MASK                        0x00000080
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_CNAIE_POSITION                     0x00000008
#define _IEC0_CNAIE_MASK                         0x00000100
#define _IEC0_CNAIE_LENGTH                       0x00000001

#define _IEC0_CNBIE_POSITION                     0x00000009
#define _IEC0_CNBIE_MASK                         0x00000200
#define _IEC0_CNBIE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x0000000B
#define _IEC0_T1IE_MASK                          0x00000800
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CMP1IE_POSITION                    0x0000000C
#define _IEC0_CMP1IE_MASK                        0x00001000
#define _IEC0_CMP1IE_LENGTH                      0x00000001

#define _IEC0_CMP2IE_POSITION                    0x0000000D
#define _IEC0_CMP2IE_MASK                        0x00002000
#define _IEC0_CMP2IE_LENGTH                      0x00000001

#define _IEC0_RTCCIE_POSITION                    0x0000000E
#define _IEC0_RTCCIE_MASK                        0x00004000
#define _IEC0_RTCCIE_LENGTH                      0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000000F
#define _IEC0_AD1IE_MASK                         0x00008000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_CRCIE_POSITION                     0x00000010
#define _IEC0_CRCIE_MASK                         0x00010000
#define _IEC0_CRCIE_LENGTH                       0x00000001

#define _IEC0_LVDIE_POSITION                     0x00000011
#define _IEC0_LVDIE_MASK                         0x00020000
#define _IEC0_LVDIE_LENGTH                       0x00000001

#define _IEC0_CLC1IE_POSITION                    0x00000012
#define _IEC0_CLC1IE_MASK                        0x00040000
#define _IEC0_CLC1IE_LENGTH                      0x00000001

#define _IEC0_CLC2IE_POSITION                    0x00000013
#define _IEC0_CLC2IE_MASK                        0x00080000
#define _IEC0_CLC2IE_LENGTH                      0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000014
#define _IEC0_SPI1EIE_MASK                       0x00100000
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1TXIE_POSITION                  0x00000015
#define _IEC0_SPI1TXIE_MASK                      0x00200000
#define _IEC0_SPI1TXIE_LENGTH                    0x00000001

#define _IEC0_SPI1RXIE_POSITION                  0x00000016
#define _IEC0_SPI1RXIE_MASK                      0x00400000
#define _IEC0_SPI1RXIE_LENGTH                    0x00000001

#define _IEC0_U1RXIE_POSITION                    0x00000017
#define _IEC0_U1RXIE_MASK                        0x00800000
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x00000018
#define _IEC0_U1TXIE_MASK                        0x01000000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_U1EIE_POSITION                     0x00000019
#define _IEC0_U1EIE_MASK                         0x02000000
#define _IEC0_U1EIE_LENGTH                       0x00000001

#define _IEC0_CCP1IE_POSITION                    0x0000001D
#define _IEC0_CCP1IE_MASK                        0x20000000
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_CCT1IE_POSITION                    0x0000001E
#define _IEC0_CCT1IE_MASK                        0x40000000
#define _IEC0_CCT1IE_LENGTH                      0x00000001

#define _IEC0_CCP2IE_POSITION                    0x0000001F
#define _IEC0_CCP2IE_MASK                        0x80000000
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC1_CCT2IE_POSITION                    0x00000000
#define _IEC1_CCT2IE_MASK                        0x00000001
#define _IEC1_CCT2IE_LENGTH                      0x00000001

#define _IEC1_CCP3IE_POSITION                    0x00000001
#define _IEC1_CCP3IE_MASK                        0x00000002
#define _IEC1_CCP3IE_LENGTH                      0x00000001

#define _IEC1_CCT3IE_POSITION                    0x00000002
#define _IEC1_CCT3IE_MASK                        0x00000004
#define _IEC1_CCT3IE_LENGTH                      0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000005
#define _IEC1_SPI2EIE_MASK                       0x00000020
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000006
#define _IEC1_SPI2TXIE_MASK                      0x00000040
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000007
#define _IEC1_SPI2RXIE_MASK                      0x00000080
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000008
#define _IEC1_U2RXIE_MASK                        0x00000100
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x00000009
#define _IEC1_U2TXIE_MASK                        0x00000200
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_U2EIE_POSITION                     0x0000000A
#define _IEC1_U2EIE_MASK                         0x00000400
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_NVMIE_POSITION                     0x0000000E
#define _IEC1_NVMIE_MASK                         0x00004000
#define _IEC1_NVMIE_LENGTH                       0x00000001

#define _IEC1_CPCIE_POSITION                     0x0000000F
#define _IEC1_CPCIE_MASK                         0x00008000
#define _IEC1_CPCIE_LENGTH                       0x00000001

#define _IPC0_CTIS_POSITION                      0x00000000
#define _IPC0_CTIS_MASK                          0x00000003
#define _IPC0_CTIS_LENGTH                        0x00000002

#define _IPC0_CTIP_POSITION                      0x00000002
#define _IPC0_CTIP_MASK                          0x0000001C
#define _IPC0_CTIP_LENGTH                        0x00000003

#define _IPC0_CS0IS_POSITION                     0x00000008
#define _IPC0_CS0IS_MASK                         0x00000300
#define _IPC0_CS0IS_LENGTH                       0x00000002

#define _IPC0_CS0IP_POSITION                     0x0000000A
#define _IPC0_CS0IP_MASK                         0x00001C00
#define _IPC0_CS0IP_LENGTH                       0x00000003

#define _IPC0_CS1IS_POSITION                     0x00000010
#define _IPC0_CS1IS_MASK                         0x00030000
#define _IPC0_CS1IS_LENGTH                       0x00000002

#define _IPC0_CS1IP_POSITION                     0x00000012
#define _IPC0_CS1IP_MASK                         0x001C0000
#define _IPC0_CS1IP_LENGTH                       0x00000003

#define _IPC0_INT0IS_POSITION                    0x00000018
#define _IPC0_INT0IS_MASK                        0x03000000
#define _IPC0_INT0IS_LENGTH                      0x00000002

#define _IPC0_INT0IP_POSITION                    0x0000001A
#define _IPC0_INT0IP_MASK                        0x1C000000
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC1_INT1IS_POSITION                    0x00000000
#define _IPC1_INT1IS_MASK                        0x00000003
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x00000002
#define _IPC1_INT1IP_MASK                        0x0000001C
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_INT2IS_POSITION                    0x00000008
#define _IPC1_INT2IS_MASK                        0x00000300
#define _IPC1_INT2IS_LENGTH                      0x00000002

#define _IPC1_INT2IP_POSITION                    0x0000000A
#define _IPC1_INT2IP_MASK                        0x00001C00
#define _IPC1_INT2IP_LENGTH                      0x00000003

#define _IPC1_INT3IS_POSITION                    0x00000010
#define _IPC1_INT3IS_MASK                        0x00030000
#define _IPC1_INT3IS_LENGTH                      0x00000002

#define _IPC1_INT3IP_POSITION                    0x00000012
#define _IPC1_INT3IP_MASK                        0x001C0000
#define _IPC1_INT3IP_LENGTH                      0x00000003

#define _IPC1_INT4IS_POSITION                    0x00000018
#define _IPC1_INT4IS_MASK                        0x03000000
#define _IPC1_INT4IS_LENGTH                      0x00000002

#define _IPC1_INT4IP_POSITION                    0x0000001A
#define _IPC1_INT4IP_MASK                        0x1C000000
#define _IPC1_INT4IP_LENGTH                      0x00000003

#define _IPC2_CNAIS_POSITION                     0x00000000
#define _IPC2_CNAIS_MASK                         0x00000003
#define _IPC2_CNAIS_LENGTH                       0x00000002

#define _IPC2_CNAIP_POSITION                     0x00000002
#define _IPC2_CNAIP_MASK                         0x0000001C
#define _IPC2_CNAIP_LENGTH                       0x00000003

#define _IPC2_CNBIS_POSITION                     0x00000008
#define _IPC2_CNBIS_MASK                         0x00000300
#define _IPC2_CNBIS_LENGTH                       0x00000002

#define _IPC2_CNBIP_POSITION                     0x0000000A
#define _IPC2_CNBIP_MASK                         0x00001C00
#define _IPC2_CNBIP_LENGTH                       0x00000003

#define _IPC2_T1IS_POSITION                      0x00000018
#define _IPC2_T1IS_MASK                          0x03000000
#define _IPC2_T1IS_LENGTH                        0x00000002

#define _IPC2_T1IP_POSITION                      0x0000001A
#define _IPC2_T1IP_MASK                          0x1C000000
#define _IPC2_T1IP_LENGTH                        0x00000003

#define _IPC3_CMP1IS_POSITION                    0x00000000
#define _IPC3_CMP1IS_MASK                        0x00000003
#define _IPC3_CMP1IS_LENGTH                      0x00000002

#define _IPC3_CMP1IP_POSITION                    0x00000002
#define _IPC3_CMP1IP_MASK                        0x0000001C
#define _IPC3_CMP1IP_LENGTH                      0x00000003

#define _IPC3_CMP2IS_POSITION                    0x00000008
#define _IPC3_CMP2IS_MASK                        0x00000300
#define _IPC3_CMP2IS_LENGTH                      0x00000002

#define _IPC3_CMP2IP_POSITION                    0x0000000A
#define _IPC3_CMP2IP_MASK                        0x00001C00
#define _IPC3_CMP2IP_LENGTH                      0x00000003

#define _IPC3_RTCCIS_POSITION                    0x00000010
#define _IPC3_RTCCIS_MASK                        0x00030000
#define _IPC3_RTCCIS_LENGTH                      0x00000002

#define _IPC3_RTCCIP_POSITION                    0x00000012
#define _IPC3_RTCCIP_MASK                        0x001C0000
#define _IPC3_RTCCIP_LENGTH                      0x00000003

#define _IPC3_AD1IS_POSITION                     0x00000018
#define _IPC3_AD1IS_MASK                         0x03000000
#define _IPC3_AD1IS_LENGTH                       0x00000002

#define _IPC3_AD1IP_POSITION                     0x0000001A
#define _IPC3_AD1IP_MASK                         0x1C000000
#define _IPC3_AD1IP_LENGTH                       0x00000003

#define _IPC4_CRCIS_POSITION                     0x00000000
#define _IPC4_CRCIS_MASK                         0x00000003
#define _IPC4_CRCIS_LENGTH                       0x00000002

#define _IPC4_CRCIP_POSITION                     0x00000002
#define _IPC4_CRCIP_MASK                         0x0000001C
#define _IPC4_CRCIP_LENGTH                       0x00000003

#define _IPC4_LVDIS_POSITION                     0x00000008
#define _IPC4_LVDIS_MASK                         0x00000300
#define _IPC4_LVDIS_LENGTH                       0x00000002

#define _IPC4_LVDIP_POSITION                     0x0000000A
#define _IPC4_LVDIP_MASK                         0x00001C00
#define _IPC4_LVDIP_LENGTH                       0x00000003

#define _IPC4_CLC1IS_POSITION                    0x00000010
#define _IPC4_CLC1IS_MASK                        0x00030000
#define _IPC4_CLC1IS_LENGTH                      0x00000002

#define _IPC4_CLC1IP_POSITION                    0x00000012
#define _IPC4_CLC1IP_MASK                        0x001C0000
#define _IPC4_CLC1IP_LENGTH                      0x00000003

#define _IPC4_CLC2IS_POSITION                    0x00000018
#define _IPC4_CLC2IS_MASK                        0x03000000
#define _IPC4_CLC2IS_LENGTH                      0x00000002

#define _IPC4_CLC2IP_POSITION                    0x0000001A
#define _IPC4_CLC2IP_MASK                        0x1C000000
#define _IPC4_CLC2IP_LENGTH                      0x00000003

#define _IPC5_SPI1EIS_POSITION                   0x00000000
#define _IPC5_SPI1EIS_MASK                       0x00000003
#define _IPC5_SPI1EIS_LENGTH                     0x00000002

#define _IPC5_SPI1EIP_POSITION                   0x00000002
#define _IPC5_SPI1EIP_MASK                       0x0000001C
#define _IPC5_SPI1EIP_LENGTH                     0x00000003

#define _IPC5_SPI1TXIS_POSITION                  0x00000008
#define _IPC5_SPI1TXIS_MASK                      0x00000300
#define _IPC5_SPI1TXIS_LENGTH                    0x00000002

#define _IPC5_SPI1TXIP_POSITION                  0x0000000A
#define _IPC5_SPI1TXIP_MASK                      0x00001C00
#define _IPC5_SPI1TXIP_LENGTH                    0x00000003

#define _IPC5_SPI1RXIS_POSITION                  0x00000010
#define _IPC5_SPI1RXIS_MASK                      0x00030000
#define _IPC5_SPI1RXIS_LENGTH                    0x00000002

#define _IPC5_SPI1RXIP_POSITION                  0x00000012
#define _IPC5_SPI1RXIP_MASK                      0x001C0000
#define _IPC5_SPI1RXIP_LENGTH                    0x00000003

#define _IPC5_U1RXIS_POSITION                    0x00000018
#define _IPC5_U1RXIS_MASK                        0x03000000
#define _IPC5_U1RXIS_LENGTH                      0x00000002

#define _IPC5_U1RXIP_POSITION                    0x0000001A
#define _IPC5_U1RXIP_MASK                        0x1C000000
#define _IPC5_U1RXIP_LENGTH                      0x00000003

#define _IPC6_U1TXIS_POSITION                    0x00000000
#define _IPC6_U1TXIS_MASK                        0x00000003
#define _IPC6_U1TXIS_LENGTH                      0x00000002

#define _IPC6_U1TXIP_POSITION                    0x00000002
#define _IPC6_U1TXIP_MASK                        0x0000001C
#define _IPC6_U1TXIP_LENGTH                      0x00000003

#define _IPC6_U1EIS_POSITION                     0x00000008
#define _IPC6_U1EIS_MASK                         0x00000300
#define _IPC6_U1EIS_LENGTH                       0x00000002

#define _IPC6_U1EIP_POSITION                     0x0000000A
#define _IPC6_U1EIP_MASK                         0x00001C00
#define _IPC6_U1EIP_LENGTH                       0x00000003

#define _IPC7_CCP1IS_POSITION                    0x00000008
#define _IPC7_CCP1IS_MASK                        0x00000300
#define _IPC7_CCP1IS_LENGTH                      0x00000002

#define _IPC7_CCP1IP_POSITION                    0x0000000A
#define _IPC7_CCP1IP_MASK                        0x00001C00
#define _IPC7_CCP1IP_LENGTH                      0x00000003

#define _IPC7_CCT1IS_POSITION                    0x00000010
#define _IPC7_CCT1IS_MASK                        0x00030000
#define _IPC7_CCT1IS_LENGTH                      0x00000002

#define _IPC7_CCT1IP_POSITION                    0x00000012
#define _IPC7_CCT1IP_MASK                        0x001C0000
#define _IPC7_CCT1IP_LENGTH                      0x00000003

#define _IPC7_CCP2IS_POSITION                    0x00000018
#define _IPC7_CCP2IS_MASK                        0x03000000
#define _IPC7_CCP2IS_LENGTH                      0x00000002

#define _IPC7_CCP2IP_POSITION                    0x0000001A
#define _IPC7_CCP2IP_MASK                        0x1C000000
#define _IPC7_CCP2IP_LENGTH                      0x00000003

#define _IPC8_CCT2IS_POSITION                    0x00000000
#define _IPC8_CCT2IS_MASK                        0x00000003
#define _IPC8_CCT2IS_LENGTH                      0x00000002

#define _IPC8_CCT2IP_POSITION                    0x00000002
#define _IPC8_CCT2IP_MASK                        0x0000001C
#define _IPC8_CCT2IP_LENGTH                      0x00000003

#define _IPC8_CCP3IS_POSITION                    0x00000008
#define _IPC8_CCP3IS_MASK                        0x00000300
#define _IPC8_CCP3IS_LENGTH                      0x00000002

#define _IPC8_CCP3IP_POSITION                    0x0000000A
#define _IPC8_CCP3IP_MASK                        0x00001C00
#define _IPC8_CCP3IP_LENGTH                      0x00000003

#define _IPC8_CCT3IS_POSITION                    0x00000010
#define _IPC8_CCT3IS_MASK                        0x00030000
#define _IPC8_CCT3IS_LENGTH                      0x00000002

#define _IPC8_CCT3IP_POSITION                    0x00000012
#define _IPC8_CCT3IP_MASK                        0x001C0000
#define _IPC8_CCT3IP_LENGTH                      0x00000003

#define _IPC9_SPI2EIS_POSITION                   0x00000008
#define _IPC9_SPI2EIS_MASK                       0x00000300
#define _IPC9_SPI2EIS_LENGTH                     0x00000002

#define _IPC9_SPI2EIP_POSITION                   0x0000000A
#define _IPC9_SPI2EIP_MASK                       0x00001C00
#define _IPC9_SPI2EIP_LENGTH                     0x00000003

#define _IPC9_SPI2TXIS_POSITION                  0x00000010
#define _IPC9_SPI2TXIS_MASK                      0x00030000
#define _IPC9_SPI2TXIS_LENGTH                    0x00000002

#define _IPC9_SPI2TXIP_POSITION                  0x00000012
#define _IPC9_SPI2TXIP_MASK                      0x001C0000
#define _IPC9_SPI2TXIP_LENGTH                    0x00000003

#define _IPC9_SPI2RXIS_POSITION                  0x00000018
#define _IPC9_SPI2RXIS_MASK                      0x03000000
#define _IPC9_SPI2RXIS_LENGTH                    0x00000002

#define _IPC9_SPI2RXIP_POSITION                  0x0000001A
#define _IPC9_SPI2RXIP_MASK                      0x1C000000
#define _IPC9_SPI2RXIP_LENGTH                    0x00000003

#define _IPC10_U2RXIS_POSITION                   0x00000000
#define _IPC10_U2RXIS_MASK                       0x00000003
#define _IPC10_U2RXIS_LENGTH                     0x00000002

#define _IPC10_U2RXIP_POSITION                   0x00000002
#define _IPC10_U2RXIP_MASK                       0x0000001C
#define _IPC10_U2RXIP_LENGTH                     0x00000003

#define _IPC10_U2TXIS_POSITION                   0x00000008
#define _IPC10_U2TXIS_MASK                       0x00000300
#define _IPC10_U2TXIS_LENGTH                     0x00000002

#define _IPC10_U2TXIP_POSITION                   0x0000000A
#define _IPC10_U2TXIP_MASK                       0x00001C00
#define _IPC10_U2TXIP_LENGTH                     0x00000003

#define _IPC10_U2EIS_POSITION                    0x00000010
#define _IPC10_U2EIS_MASK                        0x00030000
#define _IPC10_U2EIS_LENGTH                      0x00000002

#define _IPC10_U2EIP_POSITION                    0x00000012
#define _IPC10_U2EIP_MASK                        0x001C0000
#define _IPC10_U2EIP_LENGTH                      0x00000003

#define _IPC11_NVMIS_POSITION                    0x00000010
#define _IPC11_NVMIS_MASK                        0x00030000
#define _IPC11_NVMIS_LENGTH                      0x00000002

#define _IPC11_NVMIP_POSITION                    0x00000012
#define _IPC11_NVMIP_MASK                        0x001C0000
#define _IPC11_NVMIP_LENGTH                      0x00000003

#define _IPC11_CPCIS_POSITION                    0x00000018
#define _IPC11_CPCIS_MASK                        0x03000000
#define _IPC11_CPCIS_LENGTH                      0x00000002

#define _IPC11_CPCIP_POSITION                    0x0000001A
#define _IPC11_CPCIP_MASK                        0x1C000000
#define _IPC11_CPCIP_LENGTH                      0x00000003

#define _FDEVOPT_SOSCHP_POSITION                 0x00000003
#define _FDEVOPT_SOSCHP_MASK                     0x00000008
#define _FDEVOPT_SOSCHP_LENGTH                   0x00000001

#define _FDEVOPT_USERID_POSITION                 0x00000010
#define _FDEVOPT_USERID_MASK                     0xFFFF0000
#define _FDEVOPT_USERID_LENGTH                   0x00000010

#define _FDEVOPT_w_POSITION                      0x00000000
#define _FDEVOPT_w_MASK                          0xFFFFFFFF
#define _FDEVOPT_w_LENGTH                        0x00000020

#define _FICD_JTAGEN_POSITION                    0x00000002
#define _FICD_JTAGEN_MASK                        0x00000004
#define _FICD_JTAGEN_LENGTH                      0x00000001

#define _FICD_ICS_POSITION                       0x00000003
#define _FICD_ICS_MASK                           0x00000018
#define _FICD_ICS_LENGTH                         0x00000002

#define _FICD_w_POSITION                         0x00000000
#define _FICD_w_MASK                             0xFFFFFFFF
#define _FICD_w_LENGTH                           0x00000020

#define _FPOR_BOREN_POSITION                     0x00000000
#define _FPOR_BOREN_MASK                         0x00000003
#define _FPOR_BOREN_LENGTH                       0x00000002

#define _FPOR_RETVR_POSITION                     0x00000002
#define _FPOR_RETVR_MASK                         0x00000004
#define _FPOR_RETVR_LENGTH                       0x00000001

#define _FPOR_LPBOREN_POSITION                   0x00000003
#define _FPOR_LPBOREN_MASK                       0x00000008
#define _FPOR_LPBOREN_LENGTH                     0x00000001

#define _FPOR_w_POSITION                         0x00000000
#define _FPOR_w_MASK                             0xFFFFFFFF
#define _FPOR_w_LENGTH                           0x00000020

#define _FWDT_SWDTPS_POSITION                    0x00000000
#define _FWDT_SWDTPS_MASK                        0x0000001F
#define _FWDT_SWDTPS_LENGTH                      0x00000005

#define _FWDT_FWDTWINSZ_POSITION                 0x00000005
#define _FWDT_FWDTWINSZ_MASK                     0x00000060
#define _FWDT_FWDTWINSZ_LENGTH                   0x00000002

#define _FWDT_WINDIS_POSITION                    0x00000007
#define _FWDT_WINDIS_MASK                        0x00000080
#define _FWDT_WINDIS_LENGTH                      0x00000001

#define _FWDT_RWDTPS_POSITION                    0x00000008
#define _FWDT_RWDTPS_MASK                        0x00001F00
#define _FWDT_RWDTPS_LENGTH                      0x00000005

#define _FWDT_RCLKSEL_POSITION                   0x0000000D
#define _FWDT_RCLKSEL_MASK                       0x00006000
#define _FWDT_RCLKSEL_LENGTH                     0x00000002

#define _FWDT_FWDTEN_POSITION                    0x0000000F
#define _FWDT_FWDTEN_MASK                        0x00008000
#define _FWDT_FWDTEN_LENGTH                      0x00000001

#define _FWDT_w_POSITION                         0x00000000
#define _FWDT_w_MASK                             0xFFFFFFFF
#define _FWDT_w_LENGTH                           0x00000020

#define _FOSCSEL_FNOSC_POSITION                  0x00000000
#define _FOSCSEL_FNOSC_MASK                      0x00000007
#define _FOSCSEL_FNOSC_LENGTH                    0x00000003

#define _FOSCSEL_PLLSRC_POSITION                 0x00000004
#define _FOSCSEL_PLLSRC_MASK                     0x00000010
#define _FOSCSEL_PLLSRC_LENGTH                   0x00000001

#define _FOSCSEL_SOSCEN_POSITION                 0x00000006
#define _FOSCSEL_SOSCEN_MASK                     0x00000040
#define _FOSCSEL_SOSCEN_LENGTH                   0x00000001

#define _FOSCSEL_IESO_POSITION                   0x00000007
#define _FOSCSEL_IESO_MASK                       0x00000080
#define _FOSCSEL_IESO_LENGTH                     0x00000001

#define _FOSCSEL_POSCMOD_POSITION                0x00000008
#define _FOSCSEL_POSCMOD_MASK                    0x00000300
#define _FOSCSEL_POSCMOD_LENGTH                  0x00000002

#define _FOSCSEL_OSCIOFNC_POSITION               0x0000000A
#define _FOSCSEL_OSCIOFNC_MASK                   0x00000400
#define _FOSCSEL_OSCIOFNC_LENGTH                 0x00000001

#define _FOSCSEL_SOSCSEL_POSITION                0x0000000C
#define _FOSCSEL_SOSCSEL_MASK                    0x00001000
#define _FOSCSEL_SOSCSEL_LENGTH                  0x00000001

#define _FOSCSEL_FCKSM_POSITION                  0x0000000E
#define _FOSCSEL_FCKSM_MASK                      0x0000C000
#define _FOSCSEL_FCKSM_LENGTH                    0x00000002

#define _FOSCSEL_w_POSITION                      0x00000000
#define _FOSCSEL_w_MASK                          0xFFFFFFFF
#define _FOSCSEL_w_LENGTH                        0x00000020

#define _FSEC_CP_POSITION                        0x0000001F
#define _FSEC_CP_MASK                            0x80000000
#define _FSEC_CP_LENGTH                          0x00000001

#define _FSEC_w_POSITION                         0x00000000
#define _FSEC_w_MASK                             0xFFFFFFFF
#define _FSEC_w_LENGTH                           0x00000020

#define _AFDEVOPT_SOSCHP_POSITION                0x00000003
#define _AFDEVOPT_SOSCHP_MASK                    0x00000008
#define _AFDEVOPT_SOSCHP_LENGTH                  0x00000001

#define _AFDEVOPT_USERID_POSITION                0x00000010
#define _AFDEVOPT_USERID_MASK                    0xFFFF0000
#define _AFDEVOPT_USERID_LENGTH                  0x00000010

#define _AFDEVOPT_w_POSITION                     0x00000000
#define _AFDEVOPT_w_MASK                         0xFFFFFFFF
#define _AFDEVOPT_w_LENGTH                       0x00000020

#define _AFICD_JTAGEN_POSITION                   0x00000002
#define _AFICD_JTAGEN_MASK                       0x00000004
#define _AFICD_JTAGEN_LENGTH                     0x00000001

#define _AFICD_ICS_POSITION                      0x00000003
#define _AFICD_ICS_MASK                          0x00000018
#define _AFICD_ICS_LENGTH                        0x00000002

#define _AFICD_w_POSITION                        0x00000000
#define _AFICD_w_MASK                            0xFFFFFFFF
#define _AFICD_w_LENGTH                          0x00000020

#define _AFPOR_BOREN_POSITION                    0x00000000
#define _AFPOR_BOREN_MASK                        0x00000003
#define _AFPOR_BOREN_LENGTH                      0x00000002

#define _AFPOR_RETVR_POSITION                    0x00000002
#define _AFPOR_RETVR_MASK                        0x00000004
#define _AFPOR_RETVR_LENGTH                      0x00000001

#define _AFPOR_LPBOREN_POSITION                  0x00000003
#define _AFPOR_LPBOREN_MASK                      0x00000008
#define _AFPOR_LPBOREN_LENGTH                    0x00000001

#define _AFPOR_w_POSITION                        0x00000000
#define _AFPOR_w_MASK                            0xFFFFFFFF
#define _AFPOR_w_LENGTH                          0x00000020

#define _AFWDT_SWDTPS_POSITION                   0x00000000
#define _AFWDT_SWDTPS_MASK                       0x0000001F
#define _AFWDT_SWDTPS_LENGTH                     0x00000005

#define _AFWDT_FWDTWINSZ_POSITION                0x00000005
#define _AFWDT_FWDTWINSZ_MASK                    0x00000060
#define _AFWDT_FWDTWINSZ_LENGTH                  0x00000002

#define _AFWDT_WINDIS_POSITION                   0x00000007
#define _AFWDT_WINDIS_MASK                       0x00000080
#define _AFWDT_WINDIS_LENGTH                     0x00000001

#define _AFWDT_RWDTPS_POSITION                   0x00000008
#define _AFWDT_RWDTPS_MASK                       0x00001F00
#define _AFWDT_RWDTPS_LENGTH                     0x00000005

#define _AFWDT_RCLKSEL_POSITION                  0x0000000D
#define _AFWDT_RCLKSEL_MASK                      0x00006000
#define _AFWDT_RCLKSEL_LENGTH                    0x00000002

#define _AFWDT_FWDTEN_POSITION                   0x0000000F
#define _AFWDT_FWDTEN_MASK                       0x00008000
#define _AFWDT_FWDTEN_LENGTH                     0x00000001

#define _AFWDT_w_POSITION                        0x00000000
#define _AFWDT_w_MASK                            0xFFFFFFFF
#define _AFWDT_w_LENGTH                          0x00000020

#define _AFOSCSEL_FNOSC_POSITION                 0x00000000
#define _AFOSCSEL_FNOSC_MASK                     0x00000007
#define _AFOSCSEL_FNOSC_LENGTH                   0x00000003

#define _AFOSCSEL_PLLSRC_POSITION                0x00000004
#define _AFOSCSEL_PLLSRC_MASK                    0x00000010
#define _AFOSCSEL_PLLSRC_LENGTH                  0x00000001

#define _AFOSCSEL_SOSCEN_POSITION                0x00000006
#define _AFOSCSEL_SOSCEN_MASK                    0x00000040
#define _AFOSCSEL_SOSCEN_LENGTH                  0x00000001

#define _AFOSCSEL_IESO_POSITION                  0x00000007
#define _AFOSCSEL_IESO_MASK                      0x00000080
#define _AFOSCSEL_IESO_LENGTH                    0x00000001

#define _AFOSCSEL_POSCMOD_POSITION               0x00000008
#define _AFOSCSEL_POSCMOD_MASK                   0x00000300
#define _AFOSCSEL_POSCMOD_LENGTH                 0x00000002

#define _AFOSCSEL_OSCIOFNC_POSITION              0x0000000A
#define _AFOSCSEL_OSCIOFNC_MASK                  0x00000400
#define _AFOSCSEL_OSCIOFNC_LENGTH                0x00000001

#define _AFOSCSEL_SOSCSEL_POSITION               0x0000000C
#define _AFOSCSEL_SOSCSEL_MASK                   0x00001000
#define _AFOSCSEL_SOSCSEL_LENGTH                 0x00000001

#define _AFOSCSEL_FCKSM_POSITION                 0x0000000E
#define _AFOSCSEL_FCKSM_MASK                     0x0000C000
#define _AFOSCSEL_FCKSM_LENGTH                   0x00000002

#define _AFOSCSEL_w_POSITION                     0x00000000
#define _AFOSCSEL_w_MASK                         0xFFFFFFFF
#define _AFOSCSEL_w_LENGTH                       0x00000020

#define _AFSEC_CP_POSITION                       0x0000001F
#define _AFSEC_CP_MASK                           0x80000000
#define _AFSEC_CP_LENGTH                         0x00000001

#define _AFSEC_w_POSITION                        0x00000000
#define _AFSEC_w_MASK                            0xFFFFFFFF
#define _AFSEC_w_LENGTH                          0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _EXTERNAL_1_VECTOR                       4
#define _EXTERNAL_2_VECTOR                       5
#define _EXTERNAL_3_VECTOR                       6
#define _EXTERNAL_4_VECTOR                       7
#define _CHANGE_NOTICE_A_VECTOR                  8
#define _CHANGE_NOTICE_B_VECTOR                  9
#define _CHANGE_NOTICE_C_VECTOR                  10
#define _TIMER_1_VECTOR                          11
#define _COMPARATOR_1_VECTOR                     12
#define _COMPARATOR_2_VECTOR                     13
#define _RTCC_VECTOR                             14
#define _ADC_VECTOR                              15
#define _CRC_VECTOR                              16
#define _HLVD_VECTOR                             17
#define _CLC1_VECTOR                             18
#define _CLC2_VECTOR                             19
#define _SPI1_ERR_VECTOR                         20
#define _SPI1_TX_VECTOR                          21
#define _SPI1_RX_VECTOR                          22
#define _UART1_RX_VECTOR                         23
#define _UART1_TX_VECTOR                         24
#define _UART1_ERR_VECTOR                        25
#define _CCP1_VECTOR                             29
#define _CCT1_VECTOR                             30
#define _CCP2_VECTOR                             31
#define _CCT2_VECTOR                             32
#define _CCP3_VECTOR                             33
#define _CCT3_VECTOR                             34
#define _SPI2_ERR_VECTOR                         37
#define _SPI2_TX_VECTOR                          38
#define _SPI2_RX_VECTOR                          39
#define _UART2_RX_VECTOR                         40
#define _UART2_TX_VECTOR                         41
#define _UART2_ERR_VECTOR                        42
#define _NVM_VECTOR                              46
#define _PERFORMANCE_COUNTER_VECTOR              47

/* Device Peripherals */
#define _ADC
#define _CCP1
#define _CCP2
#define _CCP3
#define _CDAC1
#define _CLC1
#define _CLC2
#define _CMP1
#define _CMP2
#define _CRC
#define _CRU
#define _FRC
#define _HLVD
#define _INT
#define _NVM
#define _PORTA
#define _PORTB
#define _RTCC
#define _SPI1
#define _SPI2
#define _TMR1
#define _UART1
#define _UART2
#define _WDT

/* Base Addresses for Peripherals */
#define _ADC_BASE_ADDRESS                        0xBF800700
#define _CCP1_BASE_ADDRESS                       0xBF800100
#define _CCP2_BASE_ADDRESS                       0xBF800200
#define _CCP3_BASE_ADDRESS                       0xBF800300
#define _CDAC1_BASE_ADDRESS                      0xBF800980
#define _CLC1_BASE_ADDRESS                       0xBF800A80
#define _CLC2_BASE_ADDRESS                       0xBF800B00
#define _CMP1_BASE_ADDRESS                       0xBF800910
#define _CMP2_BASE_ADDRESS                       0xBF800930
#define _CRC_BASE_ADDRESS                        0xBF800A00
#define _CRU_BASE_ADDRESS                        0xBF802000
#define _FRC_BASE_ADDRESS                        0xBF802200
#define _HLVD_BASE_ADDRESS                       0xBF802310
#define _INT_BASE_ADDRESS                        0xBF80F000
#define _NVM_BASE_ADDRESS                        0xBF802380
#define _PORTA_BASE_ADDRESS                      0xBF802600
#define _PORTB_BASE_ADDRESS                      0xBF802700
#define _RTCC_BASE_ADDRESS                       0xBF800000
#define _SPI1_BASE_ADDRESS                       0xBF808080
#define _SPI2_BASE_ADDRESS                       0xBF808100
#define _TMR1_BASE_ADDRESS                       0xBF808000
#define _UART1_BASE_ADDRESS                      0xBF800600
#define _UART2_BASE_ADDRESS                      0xBF800680
#define _WDT_BASE_ADDRESS                        0xBF803E80

/* Default Memory-region macros */
#define __KSEG0_PROGRAM_MEM_BASE                 0x9D000000
#define __KSEG0_PROGRAM_MEM_LENGTH               0x10000
#define __DEBUG_EXEC_MEM_BASE                    0x9FC00490
#define __DEBUG_EXEC_MEM_LENGTH                  0x760
#define __KSEG1_BOOT_MEM_BASE                    0xBFC00000
#define __KSEG1_BOOT_MEM_LENGTH                  0x490
#define __KSEG0_DATA_MEM_BASE                    0x80000000
#define __KSEG0_DATA_MEM_LENGTH                  0x2000
#define __CONFIGSFRS_BFC01740_BASE               0xBFC01740
#define __CONFIGSFRS_BFC01740_LENGTH             0x1C
#define __CONFIGSFRS_BFC017C0_BASE               0xBFC017C0
#define __CONFIGSFRS_BFC017C0_LENGTH             0x1C
#define __SFRS_BASE                              0xBF800000
#define __SFRS_LENGTH                            0x100000

/*  The following device macros are predefined by the MPLAB XC32
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MM0064GPL020
#  define __32MM0064GPL020 1
#endif
#ifndef __32MM0064GPL020__
#  define __32MM0064GPL020__ 1
#endif
#ifndef __XC__
#  define __XC__ 1
#endif
#ifndef __XC
#  define __XC 1
#endif
#ifndef __XC32__
#  define __XC32__ 1
#endif
#ifndef __XC32
#  define __XC32 1
#endif
#ifndef __PIC32MM
#  define __PIC32MM 1
#endif
#ifndef __PIC32MM__
#  define __PIC32MM__ 1
#endif
#ifndef __PIC32_FLASH_SIZE
#  define __PIC32_FLASH_SIZE 64
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET "GP"
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ "GP"
#endif
#ifndef __PIC32_FEATURE_SET0
#  define __PIC32_FEATURE_SET0 'G'
#endif
#ifndef __PIC32_FEATURE_SET1
#  define __PIC32_FEATURE_SET1 'P'
#endif
#ifndef __PIC32_PRODUCT_GROUP
#  define __PIC32_PRODUCT_GROUP 'L'
#endif
#ifndef __PIC32_PIN_COUNT
#  define __PIC32_PIN_COUNT 20
#endif

/*  The following device macros indicate which core features are
 *  available on this device.
 */
#ifndef __PIC32_HAS_MICROMIPS
# define __PIC32_HAS_MICROMIPS 1
#endif
#ifndef __PIC32_HAS_MCUASE
# define __PIC32_HAS_MCUASE 1
#endif
#ifndef __PIC32_HAS_SSX
# define __PIC32_HAS_SSX 1
#endif
#ifndef __PIC32_HAS_INTCONVS
# define __PIC32_HAS_INTCONVS 1
#endif
#ifndef __PIC32_HAS_INIT_DATA
# define __PIC32_HAS_INIT_DATA 1
#endif
#ifndef __PIC32_SRS_SET_COUNT
# define __PIC32_SRS_SET_COUNT 2
#endif

#endif
