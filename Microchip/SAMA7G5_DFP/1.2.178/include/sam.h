/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc.
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

#ifndef _SAM_H_
#define _SAM_H_

#if   defined(__SAMA7G54__) || defined(__SAMA7G54__)
  #include "sama7g54.h"
#elif defined(__SAMA7G54D1G__) || defined(__SAMA7G54D1G__)
  #include "sama7g54d1g.h"
#elif defined(__SAMA7G54D2G__) || defined(__SAMA7G54D2G__)
  #include "sama7g54d2g.h"
#elif defined(__SAMA7G54D4G__) || defined(__SAMA7G54D4G__)
  #include "sama7g54d4g.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

