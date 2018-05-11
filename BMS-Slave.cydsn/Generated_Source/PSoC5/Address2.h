/*******************************************************************************
* File Name: Address2.h  
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

#if !defined(CY_PINS_Address2_H) /* Pins Address2_H */
#define CY_PINS_Address2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address2__PORT == 15 && ((Address2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address2_Write(uint8 value);
void    Address2_SetDriveMode(uint8 mode);
uint8   Address2_ReadDataReg(void);
uint8   Address2_Read(void);
void    Address2_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address2_SetDriveMode() function.
     *  @{
     */
        #define Address2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address2_DM_RES_UP          PIN_DM_RES_UP
        #define Address2_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address2_DM_OD_LO           PIN_DM_OD_LO
        #define Address2_DM_OD_HI           PIN_DM_OD_HI
        #define Address2_DM_STRONG          PIN_DM_STRONG
        #define Address2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address2_MASK               Address2__MASK
#define Address2_SHIFT              Address2__SHIFT
#define Address2_WIDTH              1u

/* Interrupt constants */
#if defined(Address2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address2_SetInterruptMode() function.
     *  @{
     */
        #define Address2_INTR_NONE      (uint16)(0x0000u)
        #define Address2_INTR_RISING    (uint16)(0x0001u)
        #define Address2_INTR_FALLING   (uint16)(0x0002u)
        #define Address2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address2_INTR_MASK      (0x01u) 
#endif /* (Address2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address2_PS                     (* (reg8 *) Address2__PS)
/* Data Register */
#define Address2_DR                     (* (reg8 *) Address2__DR)
/* Port Number */
#define Address2_PRT_NUM                (* (reg8 *) Address2__PRT) 
/* Connect to Analog Globals */                                                  
#define Address2_AG                     (* (reg8 *) Address2__AG)                       
/* Analog MUX bux enable */
#define Address2_AMUX                   (* (reg8 *) Address2__AMUX) 
/* Bidirectional Enable */                                                        
#define Address2_BIE                    (* (reg8 *) Address2__BIE)
/* Bit-mask for Aliased Register Access */
#define Address2_BIT_MASK               (* (reg8 *) Address2__BIT_MASK)
/* Bypass Enable */
#define Address2_BYP                    (* (reg8 *) Address2__BYP)
/* Port wide control signals */                                                   
#define Address2_CTL                    (* (reg8 *) Address2__CTL)
/* Drive Modes */
#define Address2_DM0                    (* (reg8 *) Address2__DM0) 
#define Address2_DM1                    (* (reg8 *) Address2__DM1)
#define Address2_DM2                    (* (reg8 *) Address2__DM2) 
/* Input Buffer Disable Override */
#define Address2_INP_DIS                (* (reg8 *) Address2__INP_DIS)
/* LCD Common or Segment Drive */
#define Address2_LCD_COM_SEG            (* (reg8 *) Address2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address2_LCD_EN                 (* (reg8 *) Address2__LCD_EN)
/* Slew Rate Control */
#define Address2_SLW                    (* (reg8 *) Address2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address2_PRTDSI__CAPS_SEL       (* (reg8 *) Address2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address2_PRTDSI__OE_SEL0        (* (reg8 *) Address2__PRTDSI__OE_SEL0) 
#define Address2_PRTDSI__OE_SEL1        (* (reg8 *) Address2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address2_PRTDSI__OUT_SEL0       (* (reg8 *) Address2__PRTDSI__OUT_SEL0) 
#define Address2_PRTDSI__OUT_SEL1       (* (reg8 *) Address2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address2_PRTDSI__SYNC_OUT       (* (reg8 *) Address2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address2__SIO_CFG)
    #define Address2_SIO_HYST_EN        (* (reg8 *) Address2__SIO_HYST_EN)
    #define Address2_SIO_REG_HIFREQ     (* (reg8 *) Address2__SIO_REG_HIFREQ)
    #define Address2_SIO_CFG            (* (reg8 *) Address2__SIO_CFG)
    #define Address2_SIO_DIFF           (* (reg8 *) Address2__SIO_DIFF)
#endif /* (Address2__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address2__INTSTAT)
    #define Address2_INTSTAT            (* (reg8 *) Address2__INTSTAT)
    #define Address2_SNAP               (* (reg8 *) Address2__SNAP)
    
	#define Address2_0_INTTYPE_REG 		(* (reg8 *) Address2__0__INTTYPE)
#endif /* (Address2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address2_H */


/* [] END OF FILE */
