/* -----------------------------------------------------------------------------
 * Copyright (c) 2018 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *
 * $Date:        01. Februeary 2018
 * $Revision:    V1.0.0
 *
 * Project:      Flash Device Description for ATSAMH
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.0.0
 *    Initial release
 */

#include "..\FlashOS.H"         // FlashOS Structures


/* ---- SAMH --------------------------------------------------------*/
#ifdef FLASH_MEM

#ifdef ATSAMH_16
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 16kB Flash",         // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00004000,                  // Device Size in Bytes (16kB)
   1024,                        // Programming Page Size (16 * 64, 64 is real page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x0400, 0x000000,            // Sector Size 1kB (16 regions a 16 pages)
   SECTOR_END
};
#endif

#ifdef ATSAMH_32
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 32kB Flash",         // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00008000,                  // Device Size in Bytes (32kB)
   1024,                        // Programming Page Size (16 * 64, 64 is real page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x0800, 0x000000,            // Sector Size 2kB (16 regions a 32 pages)
   SECTOR_END
};
#endif

#ifdef ATSAMH_64
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 64kB Flash",         // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00010000,                  // Device Size in Bytes (64kB)
   1024,                        // Programming Page Size (16 * 64, 64 is real page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x1000, 0x000000,            // Sector Size 4kB (16 regions a 64 pages)
   SECTOR_END
};
#endif

#endif /* FLASH_MEM */


#ifdef FLASH_EEPROM

#ifdef ATSAMH_16
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 512B Data EEPROM",   // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00000200,                  // Device Size in Bytes (1kB)
   64,                          // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x100, 0x000000,             // Sector Size 256B (1 ROW = 4 * page a 64 Byte)
   SECTOR_END
};
#endif

#ifdef ATSAMH_32
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 1kB Data EEPROM",    // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00000400,                  // Device Size in Bytes (1kB)
   64,                          // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x100, 0x000000,             // Sector Size 256B (1 ROW = 4 * page a 64 Byte)
   SECTOR_END
};
#endif

#ifdef ATSAMH_64
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMH 2kB Data EEPROM",    // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00000800,                  // Device Size in Bytes (2kB)
   64,                          // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x100, 0x000000,             // Sector Size 256B (1 ROW = 4 * page a 64 Byte)
   SECTOR_END
};
#endif

#endif // FLASH_EEPROM

