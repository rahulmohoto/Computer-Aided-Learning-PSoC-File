/*******************************************************************************
* File Name: PROX_GND.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PROX_GND.h"

static PROX_GND_BACKUP_STRUCT  PROX_GND_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PROX_GND_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet PROX_GND_SUT.c usage_PROX_GND_Sleep_Wakeup
*******************************************************************************/
void PROX_GND_Sleep(void)
{
    #if defined(PROX_GND__PC)
        PROX_GND_backup.pcState = PROX_GND_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PROX_GND_backup.usbState = PROX_GND_CR1_REG;
            PROX_GND_USB_POWER_REG |= PROX_GND_USBIO_ENTER_SLEEP;
            PROX_GND_CR1_REG &= PROX_GND_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PROX_GND__SIO)
        PROX_GND_backup.sioState = PROX_GND_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PROX_GND_SIO_REG &= (uint32)(~PROX_GND_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PROX_GND_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to PROX_GND_Sleep() for an example usage.
*******************************************************************************/
void PROX_GND_Wakeup(void)
{
    #if defined(PROX_GND__PC)
        PROX_GND_PC = PROX_GND_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PROX_GND_USB_POWER_REG &= PROX_GND_USBIO_EXIT_SLEEP_PH1;
            PROX_GND_CR1_REG = PROX_GND_backup.usbState;
            PROX_GND_USB_POWER_REG &= PROX_GND_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PROX_GND__SIO)
        PROX_GND_SIO_REG = PROX_GND_backup.sioState;
    #endif
}


/* [] END OF FILE */
