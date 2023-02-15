/*******************************************************************************
* File Name: PROX_GND.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PROX_GND_ALIASES_H) /* Pins PROX_GND_ALIASES_H */
#define CY_PINS_PROX_GND_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PROX_GND_0			(PROX_GND__0__PC)
#define PROX_GND_0_PS		(PROX_GND__0__PS)
#define PROX_GND_0_PC		(PROX_GND__0__PC)
#define PROX_GND_0_DR		(PROX_GND__0__DR)
#define PROX_GND_0_SHIFT	(PROX_GND__0__SHIFT)
#define PROX_GND_0_INTR	((uint16)((uint16)0x0003u << (PROX_GND__0__SHIFT*2u)))

#define PROX_GND_INTR_ALL	 ((uint16)(PROX_GND_0_INTR))


#endif /* End Pins PROX_GND_ALIASES_H */


/* [] END OF FILE */
