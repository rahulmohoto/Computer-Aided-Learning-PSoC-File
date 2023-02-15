/*******************************************************************************
* File Name: PROX_GND.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PROX_GND_H) /* Pins PROX_GND_H */
#define CY_PINS_PROX_GND_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PROX_GND_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} PROX_GND_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   PROX_GND_Read(void);
void    PROX_GND_Write(uint8 value);
uint8   PROX_GND_ReadDataReg(void);
#if defined(PROX_GND__PC) || (CY_PSOC4_4200L) 
    void    PROX_GND_SetDriveMode(uint8 mode);
#endif
void    PROX_GND_SetInterruptMode(uint16 position, uint16 mode);
uint8   PROX_GND_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void PROX_GND_Sleep(void); 
void PROX_GND_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(PROX_GND__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define PROX_GND_DRIVE_MODE_BITS        (3)
    #define PROX_GND_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PROX_GND_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the PROX_GND_SetDriveMode() function.
         *  @{
         */
        #define PROX_GND_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define PROX_GND_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define PROX_GND_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define PROX_GND_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define PROX_GND_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define PROX_GND_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define PROX_GND_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define PROX_GND_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define PROX_GND_MASK               PROX_GND__MASK
#define PROX_GND_SHIFT              PROX_GND__SHIFT
#define PROX_GND_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PROX_GND_SetInterruptMode() function.
     *  @{
     */
        #define PROX_GND_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define PROX_GND_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define PROX_GND_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define PROX_GND_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(PROX_GND__SIO)
    #define PROX_GND_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(PROX_GND__PC) && (CY_PSOC4_4200L)
    #define PROX_GND_USBIO_ENABLE               ((uint32)0x80000000u)
    #define PROX_GND_USBIO_DISABLE              ((uint32)(~PROX_GND_USBIO_ENABLE))
    #define PROX_GND_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define PROX_GND_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define PROX_GND_USBIO_ENTER_SLEEP          ((uint32)((1u << PROX_GND_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << PROX_GND_USBIO_SUSPEND_DEL_SHIFT)))
    #define PROX_GND_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << PROX_GND_USBIO_SUSPEND_SHIFT)))
    #define PROX_GND_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << PROX_GND_USBIO_SUSPEND_DEL_SHIFT)))
    #define PROX_GND_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(PROX_GND__PC)
    /* Port Configuration */
    #define PROX_GND_PC                 (* (reg32 *) PROX_GND__PC)
#endif
/* Pin State */
#define PROX_GND_PS                     (* (reg32 *) PROX_GND__PS)
/* Data Register */
#define PROX_GND_DR                     (* (reg32 *) PROX_GND__DR)
/* Input Buffer Disable Override */
#define PROX_GND_INP_DIS                (* (reg32 *) PROX_GND__PC2)

/* Interrupt configuration Registers */
#define PROX_GND_INTCFG                 (* (reg32 *) PROX_GND__INTCFG)
#define PROX_GND_INTSTAT                (* (reg32 *) PROX_GND__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define PROX_GND_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(PROX_GND__SIO)
    #define PROX_GND_SIO_REG            (* (reg32 *) PROX_GND__SIO)
#endif /* (PROX_GND__SIO_CFG) */

/* USBIO registers */
#if !defined(PROX_GND__PC) && (CY_PSOC4_4200L)
    #define PROX_GND_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define PROX_GND_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define PROX_GND_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define PROX_GND_DRIVE_MODE_SHIFT       (0x00u)
#define PROX_GND_DRIVE_MODE_MASK        (0x07u << PROX_GND_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins PROX_GND_H */


/* [] END OF FILE */
