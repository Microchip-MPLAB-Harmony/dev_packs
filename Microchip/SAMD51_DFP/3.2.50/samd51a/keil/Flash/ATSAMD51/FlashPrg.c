/* -----------------------------------------------------------------------------
 * Copyright (c) 2017 ARM Ltd.
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
 * $Date:        16. January 2017
 * $Revision:    V1.0.0
 *
 * Project:      Flash Programming Functions for ATSAMD51
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.0.0
 *    Initial release
 */

#include "..\FlashOS.H"                          /* FlashOS Structures */

typedef volatile unsigned long    vu32;
typedef volatile unsigned short   vu16;
typedef volatile unsigned char    vu8;
typedef          unsigned long     u32;
typedef          unsigned char     u8;

/* System Control Interface register */
typedef struct {
  vu32 WRCTRL;          /* offset: 0x00 (R/W 32) Write control */
  vu8  EVCTRL;          /* offset: 0x04 (R/W  8) Event control */
  vu8  RESERVED1[3];
  vu8  INTENCLR;        /* offset: 0x08 (R/W  8) Interrupt enable clear */
  vu8  INTENSET;        /* offset: 0x09 (R/W  8) Interrupt enable set */
  vu8  RESERVED2[6];
  vu32 INTFLAGAHB;      /* offset: 0x10 (R/W 32) Bridge interrupt flag status */
  vu32 INTFLAGA;        /* offset: 0x14 (R/W 32) Peripheral interrupt flag status - Bridge A */
  vu32 INTFLAGB;        /* offset: 0x18 (R/W 32) Peripheral interrupt flag status - Bridge B */
  vu32 INTFLAGC;        /* offset: 0x1C (R/W 32) Peripheral interrupt flag status - Bridge C */
  vu32 INTFLAGD;        /* offset: 0x20 (R/W 32) Peripheral interrupt flag status - Bridge D */
  vu8  RESERVED3[16];
  vu32 STATUSA;         /* offset: 0x34 (R/  32) Peripheral write protection status - Bridge A */
  vu32 STATUSB;         /* offset: 0x38 (R/  32) Peripheral write protection status - Bridge B */
  vu32 STATUSC;         /* offset: 0x3C (R/  32) Peripheral write protection status - Bridge C */
  vu32 STATUSD;         /* offset: 0x40 (R/  32) Peripheral write protection status - Bridge D */
} PAC_TypeDef;


/* Flash Registers register */
typedef struct {
  vu16 CTRLA;           /* offset: 0x00 (R/W 16) Control A */
  vu8  RESERVED1[2];
  vu16 CTRLB;           /* offset: 0x04 ( /W 16) Control B */
  vu8  RESERVED2[2];
  vu32 PARAM;           /* offset: 0x08 (R/  32) NVM Parameter */
  vu16 INTENCLR;        /* offset: 0x0C (R/W 16) Interrupt Enable Clear */
  vu16 INTENSET;        /* offset: 0x0E (R/W 16) Interrupt Enable Set */
  vu16 INTFLAG;         /* offset: 0x10 (R/W 16) Interrupt Flag Status and Clear */
  vu16 STATUS;          /* offset: 0x12 (R/  16) Status */
  vu32 ADDR;            /* offset: 0x14 (R/W 32) Address */
  vu32 RUNLOCK;         /* offset: 0x18 (R/  32) Lock Section */
  vu32 PBLDATA[2];      /* offset: 0x1C (R/  32) Page Buffer Load Data x */
  vu32 ECCERR;          /* offset: 0x24 (R/  32) ECC Error Status Register */
  vu8  DBGCTRL;         /* offset: 0x28 (R/W  8) Debug Control */
  vu8  RESERVED3[1];
  vu8  SEECFG;          /* offset: 0x2A (R/W  8) SmartEEPROM Configuration Register */
  vu8  RESERVED4[1];
  vu32 SEESTAT;         /* offset: 0x2C (R/  32) SmartEEPROM Status Register */
} NVMCTRL_TypeDef;

/* NVMCTRL Control Register B definitions */
#define NVMCTRL_CTRLB_CMDEX_KEY    (0xA5U   <<  8)    /* Command Execution Key */

/* NVMCTRL Control Register B command definitions */
#define NVMCTRL_CTRLB_CMD_EB        (0x01U  <<  0)     /* Erase Block */
#define NVMCTRL_CTRLB_CMD_WP        (0x03U  <<  0)     /* Write Page */
#define NVMCTRL_CTRLB_CMD_UR        (0x12U  <<  0)     /* Unlock Region */
#define NVMCTRL_CTRLB_CMD_PBC       (0x15U  <<  0)     /* Page Buffer Clear */

/* NVMCTRL Interrupt Flag Register definitions */
#define NVMCTRL_INTFLAG_DONE        (0x01U   <<  0)   /* Command Done */
#define NVMCTRL_INTFLAG_ADDRE       (0x01U   <<  1)   /* Address Error */
#define NVMCTRL_INTFLAG_PROGE       (0x01U   <<  2)   /* Programming Error */
#define NVMCTRL_INTFLAG_LOCKE       (0x01U   <<  3)   /* Lock Error */
#define NVMCTRL_INTFLAG_NVME        (0x01U   <<  6)   /* NVM Error */
#define NVMCTRL_INTFLAG_ERROR       (NVMCTRL_INTFLAG_ADDRE | NVMCTRL_INTFLAG_PROGE | NVMCTRL_INTFLAG_LOCKE | NVMCTRL_INTFLAG_NVME)

/* NVMCTRL Status Register definitions */
#define NVMCTRL_STATUS_READY        (0x01U   <<  0)   /* Ready to accept a command */


/* Peripheral Memory Map */
/* ---- SAM E5x ------------------------------------------------------------------*/
#if defined ATSAMD51_256 || ATSAMD51_512 || defined ATSAMD51_1024
  #define PAC_BASE             0x40000000
  #define NVMCTRL_BASE         0x41004000
#endif

#define PAC            ((      PAC_TypeDef *)   PAC_BASE)
#define NVMCTRL        ((  NVMCTRL_TypeDef *)   NVMCTRL_BASE)

unsigned long base_adr;        /* Base Address  */


/*
 *  Initialize Flash Programming Functions
 *    Parameter:      adr:  Device Base Address
 *                    clk:  Clock Frequency (Hz)
 *                    fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int Init (unsigned long adr, unsigned long clk, unsigned long fnc) {

  /* disable Watchdog */
/*
   --> add code to disable WDT
 */

  /* enable 8 MHz internal Oscillator */
/*
   --> add code to use OSC8M as core clock
 */


  /* configure Flash access */
  if (PAC->STATUSB & (1U << 2U)) {
      PAC->WRCTRL = ((32U + 2U ) |
                     (1U << 16U)  );         /* disable NVMCTRL Write Protection */
  }

  NVMCTRL->CTRLA = (( 1U << 15) |    /* AHB1 Cache Disable */
                    ( 1U << 14) |    /* AHB0 Cache Disable */
                    (15U <<  8)  );  /* read wait states */

  NVMCTRL->INTFLAG = NVMCTRL_INTFLAG_ERROR; /* clear errors */

  /* store Flash Start address */
  base_adr = adr;

  return (0);
}


/*
 *  De-Initialize Flash Programming Functions
 *    Parameter:      fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int UnInit (unsigned long fnc) {

  return (0);
}


/*
 *  Erase complete Flash Memory
 *    Return Value:   0 - OK,  1 - Failed
 */

#if 0
/*
   We do not use the 'Erase All' command because also RAM (where the code is running) content is erased.
   Therefore the 'Erase Flash' command in uVision fails everytime.
 */
int EraseChip (void) {

  /* erase all command */
  DSU->CTRL  = DSU_CTRL_CE;
  while (!(DSU->STATUSA  & DSU_STATUSA_DONE));

  return (0);
}
#endif


/*
 *  Erase Sector in Flash Memory
 *    Parameter:      adr:  Sector Address
 *    Return Value:   0 - OK,  1 - Failed
 */
#ifdef FLASH_MEM
int EraseSector (unsigned long adr) {

  /* unlock region containing given address */
  NVMCTRL->ADDR  = adr;
  NVMCTRL->CTRLB = NVMCTRL_CTRLB_CMDEX_KEY | NVMCTRL_CTRLB_CMD_UR;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* erase block with given address */
  NVMCTRL->ADDR  = adr;
  NVMCTRL->CTRLB = NVMCTRL_CTRLB_CMDEX_KEY | NVMCTRL_CTRLB_CMD_EB;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* check for errors */
  if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR)
    return (1);

  return (0);
}
#endif

/*
 *  Program Page in Flash Memory
 *    Parameter:      adr:  Page Start Address
 *                    sz:   Page Size
 *                    buf:  Page Data
 *    Return Value:   0 - OK,  1 - Failed
 */
#ifdef FLASH_MEM
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32          *Flash;

  /* Clear Page Buffer */
  NVMCTRL->CTRLB = NVMCTRL_CTRLB_CMDEX_KEY | NVMCTRL_CTRLB_CMD_PBC;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* set write pointer to Flash address */
  Flash = (u32 *)adr;

  /* copy data to write buffer (boundry are words) */
  for (sz = (sz + 3) & ~3; sz; sz -= 4, buf += 4) {
    *Flash++ = *((u32 *)buf);
  }

  /* write block with given address */
  NVMCTRL->ADDR  = adr;
  NVMCTRL->CTRLB = NVMCTRL_CTRLB_CMDEX_KEY | NVMCTRL_CTRLB_CMD_WP;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* check for errors */
  if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR)
    return (1);

  return (0);
}
#endif
