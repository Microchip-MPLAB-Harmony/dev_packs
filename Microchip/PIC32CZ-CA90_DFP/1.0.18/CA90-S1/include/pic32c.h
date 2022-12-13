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

#if   defined(__PIC32CZ8110CA90100S1__) || defined(__PIC32CZ8110CA90100S1__)
  #include "pic32cz8110ca90100s1.h"
#elif defined(__PIC32CZ8110CA90144S1__) || defined(__PIC32CZ8110CA90144S1__)
  #include "pic32cz8110ca90144s1.h"
#elif defined(__PIC32CZ4010CA90100S1__) || defined(__PIC32CZ4010CA90100S1__)
  #include "pic32cz4010ca90100s1.h"
#elif defined(__PIC32CZ2051CA90208S1__) || defined(__PIC32CZ2051CA90208S1__)
  #include "pic32cz2051ca90208s1.h"
#elif defined(__PIC32CZ4010CA90144S1__) || defined(__PIC32CZ4010CA90144S1__)
  #include "pic32cz4010ca90144s1.h"
#elif defined(__PIC32CZ2051CA90100S1__) || defined(__PIC32CZ2051CA90100S1__)
  #include "pic32cz2051ca90100s1.h"
#elif defined(__PIC32CZ4010CA90208S1__) || defined(__PIC32CZ4010CA90208S1__)
  #include "pic32cz4010ca90208s1.h"
#elif defined(__PIC32CZ8110CA90176S1__) || defined(__PIC32CZ8110CA90176S1__)
  #include "pic32cz8110ca90176s1.h"
#elif defined(__PIC32CZ4010CA90176S1__) || defined(__PIC32CZ4010CA90176S1__)
  #include "pic32cz4010ca90176s1.h"
#elif defined(__PIC32CZ8110CA90208S1__) || defined(__PIC32CZ8110CA90208S1__)
  #include "pic32cz8110ca90208s1.h"
#elif defined(__PIC32CZ2051CA90144S1__) || defined(__PIC32CZ2051CA90144S1__)
  #include "pic32cz2051ca90144s1.h"
#elif defined(__PIC32CZ2051CA90176S1__) || defined(__PIC32CZ2051CA90176S1__)
  #include "pic32cz2051ca90176s1.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

