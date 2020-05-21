/*-------------------------------------------------------------------------
 * XC processor header for PIC32C devices
 *
 * Copyright (c) 2017, Microchip Technology Inc. and its subsidiaries ("Microchip")
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
 *         with the distribution.
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
#ifndef __XC_PIC32C_H
#define __XC_PIC32C_H


#if defined(__SAMC20N17A__)
#  include <samc20n17a.h>
#elif defined(__SAMC20G15A__)
#  include <samc20g15a.h>
#elif defined(__SAMC20N18A__)
#  include <samc20n18a.h>
#elif defined(__SAMC20J17A__)
#  include <samc20j17a.h>
#elif defined(__SAMC20E17A__)
#  include <samc20e17a.h>
#elif defined(__SAMC20G17A__)
#  include <samc20g17a.h>
#elif defined(__SAMC20G18A__)
#  include <samc20g18a.h>
#elif defined(__SAMC20E15A__)
#  include <samc20e15a.h>
#elif defined(__SAMC20J15A__)
#  include <samc20j15a.h>
#elif defined(__SAMC20E16A__)
#  include <samc20e16a.h>
#elif defined(__SAMC20J18AU__)
#  include <samc20j18au.h>
#elif defined(__SAMC20J16A__)
#  include <samc20j16a.h>
#elif defined(__SAMC20E18A__)
#  include <samc20e18a.h>
#elif defined(__SAMC20J17AU__)
#  include <samc20j17au.h>
#elif defined(__SAMC20G16A__)
#  include <samc20g16a.h>
#elif defined(__SAMC20J18A__)
#  include <samc20j18a.h>
#else
#  error Unknown processor for selected DFP!
#endif


#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__)

#ifndef _nop
#define _nop() __builtin_nop()
#endif /* _nop */

#ifndef Nop
/* Consider using _nop rather than Nop */
#define Nop()  _nop()
#endif /* Nop */

#endif /* defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__) */

#endif /* __XC_PIC32C_H */
