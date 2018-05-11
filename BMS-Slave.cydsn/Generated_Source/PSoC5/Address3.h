/*******************************************************************************
* File Name: Address3.h  
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

#if !defined(CY_PINS_Address3_H) /* Pins Address3_H */
#define CY_PINS_Address3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Address3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Address3__PORT == 15 && ((Address3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Address3_Write(uint8 value);
void    Address3_SetDriveMode(uint8 mode);
uint8   Address3_ReadDataReg(void);
uint8   Address3_Read(void);
void    Address3_SetInterruptMode(uint16 position, uint16 mode);
uint8   Address3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Address3_SetDriveMode() function.
     *  @{
     */
        #define Address3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Address3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Address3_DM_RES_UP          PIN_DM_RES_UP
        #define Address3_DM_RES_DWN         PIN_DM_RES_DWN
        #define Address3_DM_OD_LO           PIN_DM_OD_LO
        #define Address3_DM_OD_HI           PIN_DM_OD_HI
        #define Address3_DM_STRONG          PIN_DM_STRONG
        #define Address3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Address3_MASK               Address3__MASK
#define Address3_SHIFT              Address3__SHIFT
#define Address3_WIDTH              1u

/* Interrupt constants */
#if defined(Address3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Address3_SetInterruptMode() function.
     *  @{
     */
        #define Address3_INTR_NONE      (uint16)(0x0000u)
        #define Address3_INTR_RISING    (uint16)(0x0001u)
        #define Address3_INTR_FALLING   (uint16)(0x0002u)
        #define Address3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Address3_INTR_MASK      (0x01u) 
#endif /* (Address3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Address3_PS                     (* (reg8 *) Address3__PS)
/* Data Register */
#define Address3_DR                     (* (reg8 *) Address3__DR)
/* Port Number */
#define Address3_PRT_NUM                (* (reg8 *) Address3__PRT) 
/* Connect to Analog Globals */                                                  
#define Address3_AG                     (* (reg8 *) Address3__AG)                       
/* Analog MUX bux enable */
#define Address3_AMUX                   (* (reg8 *) Address3__AMUX) 
/* Bidirectional Enable */                                                        
#define Address3_BIE                    (* (reg8 *) Address3__BIE)
/* Bit-mask for Aliased Register Access */
#define Address3_BIT_MASK               (* (reg8 *) Address3__BIT_MASK)
/* Bypass Enable */
#define Address3_BYP                    (* (reg8 *) Address3__BYP)
/* Port wide control signals */                                                   
#define Address3_CTL                    (* (reg8 *) Address3__CTL)
/* Drive Modes */
#define Address3_DM0                    (* (reg8 *) Address3__DM0) 
#define Address3_DM1                    (* (reg8 *) Address3__DM1)
#define Address3_DM2                    (* (reg8 *) Address3__DM2) 
/* Input Buffer Disable Override */
#define Address3_INP_DIS                (* (reg8 *) Address3__INP_DIS)
/* LCD Common or Segment Drive */
#define Address3_LCD_COM_SEG            (* (reg8 *) Address3__LCD_COM_SEG)
/* Enable Segment LCD */
#define Address3_LCD_EN                 (* (reg8 *) Address3__LCD_EN)
/* Slew Rate Control */
#define Address3_SLW                    (* (reg8 *) Address3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Address3_PRTDSI__CAPS_SEL       (* (reg8 *) Address3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Address3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Address3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Address3_PRTDSI__OE_SEL0        (* (reg8 *) Address3__PRTDSI__OE_SEL0) 
#define Address3_PRTDSI__OE_SEL1        (* (reg8 *) Address3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Address3_PRTDSI__OUT_SEL0       (* (reg8 *) Address3__PRTDSI__OUT_SEL0) 
#define Address3_PRTDSI__OUT_SEL1       (* (reg8 *) Address3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Address3_PRTDSI__SYNC_OUT       (* (reg8 *) Address3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Address3__SIO_CFG)
    #define Address3_SIO_HYST_EN        (* (reg8 *) Address3__SIO_HYST_EN)
    #define Address3_SIO_REG_HIFREQ     (* (reg8 *) Address3__SIO_REG_HIFREQ)
    #define Address3_SIO_CFG            (* (reg8 *) Address3__SIO_CFG)
    #define Address3_SIO_DIFF           (* (reg8 *) Address3__SIO_DIFF)
#endif /* (Address3__SIO_CFG) */

/* Interrupt Registers */
#if defined(Address3__INTSTAT)
    #define Address3_INTSTAT            (* (reg8 *) Address3__INTSTAT)
    #define Address3_SNAP               (* (reg8 *) Address3__SNAP)
    
	#define Address3_0_INTTYPE_REG 		(* (reg8 *) Address3__0__INTTYPE)
#endif /* (Address3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Address3_H */


/* [] END OF FILE */
