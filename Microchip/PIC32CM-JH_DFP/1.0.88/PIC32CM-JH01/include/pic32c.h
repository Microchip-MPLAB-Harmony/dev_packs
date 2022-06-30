/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2022 Microchip Technology Inc.
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

#ifndef _SAM_
#define _SAM_

#if   defined(__PIC32CM5164JH01100__) || defined(__PIC32CM5164JH01100__)
  #include "pic32cm5164jh01100.h"
#elif defined(__PIC32CM2532JH01064__) || defined(__PIC32CM2532JH01064__)
  #include "pic32cm2532jh01064.h"
#elif defined(__PIC32CM5164JH01048__) || defined(__PIC32CM5164JH01048__)
  #include "pic32cm5164jh01048.h"
#elif defined(__PIC32CM2532JH01032__) || defined(__PIC32CM2532JH01032__)
  #include "pic32cm2532jh01032.h"
#elif defined(__PIC32CM5164JH01064__) || defined(__PIC32CM5164JH01064__)
  #include "pic32cm5164jh01064.h"
#elif defined(__PIC32CM5164JH01032__) || defined(__PIC32CM5164JH01032__)
  #include "pic32cm5164jh01032.h"
#elif defined(__PIC32CM2532JH01048__) || defined(__PIC32CM2532JH01048__)
  #include "pic32cm2532jh01048.h"
#elif defined(__PIC32CM2532JH01100__) || defined(__PIC32CM2532JH01100__)
  #include "pic32cm2532jh01100.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

