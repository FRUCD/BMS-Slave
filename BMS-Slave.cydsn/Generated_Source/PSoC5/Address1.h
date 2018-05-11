/*******************************************************************************
* File Name: Address1.h  
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

#if !defined(CY_PINS_Address1_H) /* Pins Address1_H */
#define CY_PINS_Address1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address1__PORT == 15 && ((Address1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address1_Write(uint8 value);
void    Address1_SetDriveMode(uint8 mode);
uint8   Address1_ReadDataReg(void);
uint8   Address1_Read(void);
void    Address1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address1_SetDriveMode() function.
     *  @{
     */
        #define Address1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address1_DM_RES_UP          PIN_DM_RES_UP
        #define Address1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address1_DM_OD_LO           PIN_DM_OD_LO
        #define Address1_DM_OD_HI           PIN_DM_OD_HI
        #define Address1_DM_STRONG          PIN_DM_STRONG
        #define Address1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address1_MASK               Address1__MASK
#define Address1_SHIFT              Address1__SHIFT
#define Address1_WIDTH              1u

/* Interrupt constants */
#if defined(Address1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address1_SetInterruptMode() function.
     *  @{
     */
        #define Address1_INTR_NONE      (uint16)(0x0000u)
        #define Address1_INTR_RISING    (uint16)(0x0001u)
        #define Address1_INTR_FALLING   (uint16)(0x0002u)
        #define Address1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address1_INTR_MASK      (0x01u) 
#endif /* (Address1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address1_PS                     (* (reg8 *) Address1__PS)
/* Data Register */
#define Address1_DR                     (* (reg8 *) Address1__DR)
/* Port Number */
#define Address1_PRT_NUM                (* (reg8 *) Address1__PRT) 
/* Connect to Analog Globals */                                                  
#define Address1_AG                     (* (reg8 *) Address1__AG)                       
/* Analog MUX bux enable */
#define Address1_AMUX                   (* (reg8 *) Address1__AMUX) 
/* Bidirectional Enable */                                                        
#define Address1_BIE                    (* (reg8 *) Address1__BIE)
/* Bit-mask for Aliased Register Access */
#define Address1_BIT_MASK               (* (reg8 *) Address1__BIT_MASK)
/* Bypass Enable */
#define Address1_BYP                    (* (reg8 *) Address1__BYP)
/* Port wide control signals */                                                   
#define Address1_CTL                    (* (reg8 *) Address1__CTL)
/* Drive Modes */
#define Address1_DM0                    (* (reg8 *) Address1__DM0) 
#define Address1_DM1                    (* (reg8 *) Address1__DM1)
#define Address1_DM2                    (* (reg8 *) Address1__DM2) 
/* Input Buffer Disable Override */
#define Address1_INP_DIS                (* (reg8 *) Address1__INP_DIS)
/* LCD Common or Segment Drive */
#define Address1_LCD_COM_SEG            (* (reg8 *) Address1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address1_LCD_EN                 (* (reg8 *) Address1__LCD_EN)
/* Slew Rate Control */
#define Address1_SLW                    (* (reg8 *) Address1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address1_PRTDSI__CAPS_SEL       (* (reg8 *) Address1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address1_PRTDSI__OE_SEL0        (* (reg8 *) Address1__PRTDSI__OE_SEL0) 
#define Address1_PRTDSI__OE_SEL1        (* (reg8 *) Address1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address1_PRTDSI__OUT_SEL0       (* (reg8 *) Address1__PRTDSI__OUT_SEL0) 
#define Address1_PRTDSI__OUT_SEL1       (* (reg8 *) Address1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address1_PRTDSI__SYNC_OUT       (* (reg8 *) Address1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address1__SIO_CFG)
    #define Address1_SIO_HYST_EN        (* (reg8 *) Address1__SIO_HYST_EN)
    #define Address1_SIO_REG_HIFREQ     (* (reg8 *) Address1__SIO_REG_HIFREQ)
    #define Address1_SIO_CFG            (* (reg8 *) Address1__SIO_CFG)
    #define Address1_SIO_DIFF           (* (reg8 *) Address1__SIO_DIFF)
#endif /* (Address1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address1__INTSTAT)
    #define Address1_INTSTAT            (* (reg8 *) Address1__INTSTAT)
    #define Address1_SNAP               (* (reg8 *) Address1__SNAP)
    
	#define Address1_0_INTTYPE_REG 		(* (reg8 *) Address1__0__INTTYPE)
#endif /* (Address1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address1_H */


/* [] END OF FILE */
