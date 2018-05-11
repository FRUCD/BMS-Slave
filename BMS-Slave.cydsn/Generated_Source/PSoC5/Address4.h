/*******************************************************************************
* File Name: Address4.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Address4_H) /* Pins Address4_H */
#define CY_PINS_Address4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address4__PORT == 15 && ((Address4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address4_Write(uint8 value);
void    Address4_SetDriveMode(uint8 mode);
uint8   Address4_ReadDataReg(void);
uint8   Address4_Read(void);
void    Address4_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address4_SetDriveMode() function.
     *  @{
     */
        #define Address4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address4_DM_RES_UP          PIN_DM_RES_UP
        #define Address4_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address4_DM_OD_LO           PIN_DM_OD_LO
        #define Address4_DM_OD_HI           PIN_DM_OD_HI
        #define Address4_DM_STRONG          PIN_DM_STRONG
        #define Address4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address4_MASK               Address4__MASK
#define Address4_SHIFT              Address4__SHIFT
#define Address4_WIDTH              1u

/* Interrupt constants */
#if defined(Address4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address4_SetInterruptMode() function.
     *  @{
     */
        #define Address4_INTR_NONE      (uint16)(0x0000u)
        #define Address4_INTR_RISING    (uint16)(0x0001u)
        #define Address4_INTR_FALLING   (uint16)(0x0002u)
        #define Address4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address4_INTR_MASK      (0x01u) 
#endif /* (Address4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address4_PS                     (* (reg8 *) Address4__PS)
/* Data Register */
#define Address4_DR                     (* (reg8 *) Address4__DR)
/* Port Number */
#define Address4_PRT_NUM                (* (reg8 *) Address4__PRT) 
/* Connect to Analog Globals */                                                  
#define Address4_AG                     (* (reg8 *) Address4__AG)                       
/* Analog MUX bux enable */
#define Address4_AMUX                   (* (reg8 *) Address4__AMUX) 
/* Bidirectional Enable */                                                        
#define Address4_BIE                    (* (reg8 *) Address4__BIE)
/* Bit-mask for Aliased Register Access */
#define Address4_BIT_MASK               (* (reg8 *) Address4__BIT_MASK)
/* Bypass Enable */
#define Address4_BYP                    (* (reg8 *) Address4__BYP)
/* Port wide control signals */                                                   
#define Address4_CTL                    (* (reg8 *) Address4__CTL)
/* Drive Modes */
#define Address4_DM0                    (* (reg8 *) Address4__DM0) 
#define Address4_DM1                    (* (reg8 *) Address4__DM1)
#define Address4_DM2                    (* (reg8 *) Address4__DM2) 
/* Input Buffer Disable Override */
#define Address4_INP_DIS                (* (reg8 *) Address4__INP_DIS)
/* LCD Common or Segment Drive */
#define Address4_LCD_COM_SEG            (* (reg8 *) Address4__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address4_LCD_EN                 (* (reg8 *) Address4__LCD_EN)
/* Slew Rate Control */
#define Address4_SLW                    (* (reg8 *) Address4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address4_PRTDSI__CAPS_SEL       (* (reg8 *) Address4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address4_PRTDSI__OE_SEL0        (* (reg8 *) Address4__PRTDSI__OE_SEL0) 
#define Address4_PRTDSI__OE_SEL1        (* (reg8 *) Address4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address4_PRTDSI__OUT_SEL0       (* (reg8 *) Address4__PRTDSI__OUT_SEL0) 
#define Address4_PRTDSI__OUT_SEL1       (* (reg8 *) Address4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address4_PRTDSI__SYNC_OUT       (* (reg8 *) Address4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address4__SIO_CFG)
    #define Address4_SIO_HYST_EN        (* (reg8 *) Address4__SIO_HYST_EN)
    #define Address4_SIO_REG_HIFREQ     (* (reg8 *) Address4__SIO_REG_HIFREQ)
    #define Address4_SIO_CFG            (* (reg8 *) Address4__SIO_CFG)
    #define Address4_SIO_DIFF           (* (reg8 *) Address4__SIO_DIFF)
#endif /* (Address4__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address4__INTSTAT)
    #define Address4_INTSTAT            (* (reg8 *) Address4__INTSTAT)
    #define Address4_SNAP               (* (reg8 *) Address4__SNAP)
    
	#define Address4_0_INTTYPE_REG 		(* (reg8 *) Address4__0__INTTYPE)
#endif /* (Address4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address4_H */


/* [] END OF FILE */
