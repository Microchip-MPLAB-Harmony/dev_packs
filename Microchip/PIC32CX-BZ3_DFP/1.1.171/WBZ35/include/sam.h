/*
 * Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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
 */

#ifndef _SAM_H_
#define _SAM_H_

#if   defined(__WBZ350__) || defined(__WBZ350__)
  #include "wbz350.h"
#elif defined(__WBZ351__) || defined(__WBZ351__)
  #include "wbz351.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_H_ */

