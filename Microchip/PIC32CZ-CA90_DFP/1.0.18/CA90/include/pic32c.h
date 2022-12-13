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

#if   defined(__PIC32CZ8110CA90100__) || defined(__PIC32CZ8110CA90100__)
  #include "pic32cz8110ca90100.h"
#elif defined(__PIC32CZ4010CA90144__) || defined(__PIC32CZ4010CA90144__)
  #include "pic32cz4010ca90144.h"
#elif defined(__PIC32CZ4010CA90208__) || defined(__PIC32CZ4010CA90208__)
  #include "pic32cz4010ca90208.h"
#elif defined(__PIC32CZ2051CA90144__) || defined(__PIC32CZ2051CA90144__)
  #include "pic32cz2051ca90144.h"
#elif defined(__PIC32CZ2051CA90176__) || defined(__PIC32CZ2051CA90176__)
  #include "pic32cz2051ca90176.h"
#elif defined(__PIC32CZ2051CA90208__) || defined(__PIC32CZ2051CA90208__)
  #include "pic32cz2051ca90208.h"
#elif defined(__PIC32CZ4010CA90100__) || defined(__PIC32CZ4010CA90100__)
  #include "pic32cz4010ca90100.h"
#elif defined(__PIC32CZ8110CA90208__) || defined(__PIC32CZ8110CA90208__)
  #include "pic32cz8110ca90208.h"
#elif defined(__PIC32CZ4010CA90176__) || defined(__PIC32CZ4010CA90176__)
  #include "pic32cz4010ca90176.h"
#elif defined(__PIC32CZ8110CA90176__) || defined(__PIC32CZ8110CA90176__)
  #include "pic32cz8110ca90176.h"
#elif defined(__PIC32CZ2051CA90100__) || defined(__PIC32CZ2051CA90100__)
  #include "pic32cz2051ca90100.h"
#elif defined(__PIC32CZ8110CA90144__) || defined(__PIC32CZ8110CA90144__)
  #include "pic32cz8110ca90144.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

