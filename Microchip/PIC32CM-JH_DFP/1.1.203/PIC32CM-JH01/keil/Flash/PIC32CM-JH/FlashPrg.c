/*------------------------------------------------------------------------------
 * Copyright (c) 2022 Arm Limited (or its affiliates). All rights reserved.
 *------------------------------------------------------------------------------
 * Name:    FlashPrg.c
 * Purpose: Flash Programming Functions for PIC32CM-JH
 * Rev.:    V1.0.0
 *----------------------------------------------------------------------------*/

#include "..\FlashOS.h"        /* FlashOS Structures */

typedef volatile unsigned long    vu32;
typedef volatile unsigned short   vu16;
typedef          unsigned long     u32;

/* System Control Interface register */
typedef struct {
  vu32 WRCTRL;           /* offset: 0x000 (R/W 32) Write Control Register */
} PAC_TypeDef;


/* Flash Registers register */
typedef struct {
  vu16 CTRLA;           /* offset: 0x000 (R/W 16) NVM Control Register A */
  vu16 RESERVED1;
  vu32 CTRLB;           /* offset: 0x004 (R/W 32) NVM Control Register B */
  vu32 PARAM;           /* offset: 0x008 (R/W 32) Parameter Register */
  vu32 INTENCLR;        /* offset: 0x00C (R/W 32) Interrupt Enable Clear Register */
  vu32 INTENSET;        /* offset: 0x010 (R/W 32) Interrupt Enable Set Register */
  vu32 INTFLAG;         /* offset: 0x014 (R/W 32) Interrupt Flag Status and Clear Register */
  vu16 STATUS;          /* offset: 0x018 (R/W 16) Status Register */
  vu16 RESERVED2;
  vu32 ADDR;            /* offset: 0x01C (R/W 32) Address Register */
  vu16 LOCK;            /* offset: 0x020 (R/W 16) Lock Register */
} NVMCTRL_TypeDef;

/* NVMCTRL Control Register A definitions */
#define NVMCTRL_CTRLA_CMDEX_KEY    (0xA5U   <<  8)    /* Command Execution Key */

/* NVMCTRL Control Register A command definitions */
#define NVMCTRL_CTRLA_CMD_ER       (0x02U        )    /* Erase Row */
#define NVMCTRL_CTRLA_CMD_WP       (0x04U        )    /* Write Page */
#define NVMCTRL_CTRLA_CMD_DFER     (0x1AU        )    /* Data Flash Erase Row */
#define NVMCTRL_CTRLA_CMD_DFWP     (0x1CU        )    /* Data Flash Write Page */
#define NVMCTRL_CTRLA_CMD_UR       (0x41U        )    /* Unlock Region */
#define NVMCTRL_CTRLA_CMD_PBC      (0x44U        )    /* Page Buffer Clear */

/* NVMCTRL NVM Parameter Register definitions */
#define NVMCTRL_PARAM_NVMP          (0xFFFFU      )   /* NVM Pages */
#define NVMCTRL_PARAM_PSZ           (0x07U   << 16)   /* Page Size */

/* NVMCTRL Interrupt Flag Register definitions */
#define NVMCTRL_INTFLAG_READY       (0x01U        )   /* NVM READY */
#define NVMCTRL_INTFLAG_ERROR       (0x01U   <<  1)   /* Error */

/* NVMCTRL Status Register definitions */
#define NVMCTRL_STATUS_PRM          (0x01U        )   /* Power Reduction Mode */
#define NVMCTRL_STATUS_LOAD         (0x01U   <<  1)   /* NVM Page Buffer Active Loading */
#define NVMCTRL_STATUS_PROGE        (0x01U   <<  2)   /* Programming Error Status */
#define NVMCTRL_STATUS_LOCKE        (0x01U   <<  3)   /* Lock Error Status */
#define NVMCTRL_STATUS_NVME         (0x01U   <<  4)   /* NVM Error */
#define NVMCTRL_STATUS_SB           (0x01U   <<  8)   /* Security Bit Status */


/* Peripheral Memory Map */
/* ---- PIC32CM-MC ----------------------------------------------------------- */
#if defined PIC32CM_JH_256 || defined PIC32CM_JH_512
  #define PAC_BASE             0x40000000
  #define NVMCTRL_BASE         0x41004000
#endif

#if defined PIC32CM_JH_256
  #define FLASH_SIZE           0x40000
#endif

#if defined PIC32CM_JH_512
  #define FLASH_SIZE           0x80000
#endif


#define PAC            ((      PAC_TypeDef *)   PAC_BASE)
#define NVMCTRL        ((  NVMCTRL_TypeDef *)   NVMCTRL_BASE)

#define FLASH_PAGE_SIZE         64                          /* Page size is 64 Byte for all devices */
#define FLASH_REGION_SIZE      (FLASH_SIZE / 16)            /* Flash consists of 16 regions */
#define FLASH_ROW_SIZE         (FLASH_PAGE_SIZE * 4)        /* row = 4 pages */

unsigned long base_adr;        /* Base Address */


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
  PAC->WRCTRL = (      );             // disable SYSCTRL Write Protection
   --> add code to use OSC8M as core clock
 */


  /* configure Flash access */
  PAC->WRCTRL    = (( 1U << 16) |       /* disable NVMCTRL Write Protection */
                    (34U      )  );     /* APBB Peripheral NVMCTRL */
  NVMCTRL->CTRLB = (( 1U << 18) |       /* cache disabled */
                    ( 1U <<  7) |       /* manual write */
                    (15U <<  1)  );     /* read wait states */

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
 *  Erase Sector in Flash Memory
 *    Parameter:      adr:  Sector Address
 *    Return Value:   0 - OK,  1 - Failed
 */
 
#ifdef FLASH_MEM
int EraseSector (unsigned long adr) {
  u32 region_adr;
  u32 row_adr;

  /* instead of a sector we delete all rows in a region
     region is the smallest part which is write protected */

  region_adr = (adr & (FLASH_SIZE - 1)) & ~(FLASH_REGION_SIZE - 1);

  /* unlock region containing given page command */
  NVMCTRL->ADDR  = region_adr >> 1;
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_UR;
  while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

  /* erase all rows in the given region */
  for (row_adr = region_adr;  row_adr < (region_adr + FLASH_REGION_SIZE); row_adr += FLASH_ROW_SIZE) {
    /* Erase row command */
    NVMCTRL->ADDR  = row_adr >> 1;
    NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_ER;
    while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

    /* check for errors */
    if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR)
      return (1);
  }

  return (0);
}
#endif

#ifdef FLASH_DATA
int EraseSector (unsigned long adr) {
  u32 row_adr;

  /* we delete one row */

  row_adr = adr;

  /* Erase row command */
  NVMCTRL->ADDR  = row_adr >> 1;
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_DFER;
  while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

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
/* currently we rwite up to 4 pages at a time
   see page size in FlashDev.c                 */
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32 *Flash;
  u32 page_sz;
  u32 page_adr;

  /* adjust size to words */
  sz = (sz + 3) & ~3;

  /* set the initial page address */
  page_adr = adr;

  /* Clear page buffer; it is also cleared automatically  after page write */
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_PBC;
  while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

  while (sz) {
    /* set write pointer to Flash address */
    Flash = (unsigned long *)page_adr;

    /* set the page size we want to write */
    page_sz = (sz > FLASH_PAGE_SIZE) ? FLASH_PAGE_SIZE : sz;

    /* copy data to page buffer */
    while (page_sz) {
      *Flash++ = *((unsigned long *)buf);
      sz      -= 4;
      buf     += 4;
      page_sz -= 4;
    }

    /* increase page address */
    page_adr = page_adr + FLASH_PAGE_SIZE;

    /* start programming command */
    NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_WP;
    while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

    /* check for errors */
    if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR)
      return (1);
  }

  return (0);
}
#endif

#ifdef FLASH_DATA
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  u32 *Flash;

  /* Clear Page Buffer */
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_PBC;
  while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

  /* set write pointer to Flash address */
  Flash = (unsigned long *)adr;

  /* copy data to write buffer (boundry are words) */
  for (sz = (sz + 3) & ~3; sz; sz -= 4, buf += 4) {
    *Flash++ = *((unsigned long *)buf);
  }

  /* start programming command */
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_DFWP;
  while (!(NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_READY));

  /* check for errors */
  if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR)
    return (1);

  return (0);
}
#endif
