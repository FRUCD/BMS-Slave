/*******************************************************************************
* File Name: Therm9.h  
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

#if !defined(CY_PINS_Therm9_H) /* Pins Therm9_H */
#define CY_PINS_Therm9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm9_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm9__PORT == 15 && ((Therm9__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm9_Write(uint8 value);
void    Therm9_SetDriveMode(uint8 mode);
uint8   Therm9_ReadDataReg(void);
uint8   Therm9_Read(void);
void    Therm9_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm9_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm9_SetDriveMode() function.
     *  @{
     */
        #define Therm9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm9_DM_RES_UP          PIN_DM_RES_UP
        #define Therm9_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm9_DM_OD_LO           PIN_DM_OD_LO
        #define Therm9_DM_OD_HI           PIN_DM_OD_HI
        #define Therm9_DM_STRONG          PIN_DM_STRONG
        #define Therm9_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm9_MASK               Therm9__MASK
#define Therm9_SHIFT              Therm9__SHIFT
#define Therm9_WIDTH              1u

/* Interrupt constants */
#if defined(Therm9__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm9_SetInterruptMode() function.
     *  @{
     */
        #define Therm9_INTR_NONE      (uint16)(0x0000u)
        #define Therm9_INTR_RISING    (uint16)(0x0001u)
        #define Therm9_INTR_FALLING   (uint16)(0x0002u)
        #define Therm9_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm9_INTR_MASK      (0x01u) 
#endif /* (Therm9__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm9_PS                     (* (reg8 *) Therm9__PS)
/* Data Register */
#define Therm9_DR                     (* (reg8 *) Therm9__DR)
/* Port Number */
#define Therm9_PRT_NUM                (* (reg8 *) Therm9__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm9_AG                     (* (reg8 *) Therm9__AG)                       
/* Analog MUX bux enable */
#define Therm9_AMUX                   (* (reg8 *) Therm9__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm9_BIE                    (* (reg8 *) Therm9__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm9_BIT_MASK               (* (reg8 *) Therm9__BIT_MASK)
/* Bypass Enable */
#define Therm9_BYP                    (* (reg8 *) Therm9__BYP)
/* Port wide control signals */                                                   
#define Therm9_CTL                    (* (reg8 *) Therm9__CTL)
/* Drive Modes */
#define Therm9_DM0                    (* (reg8 *) Therm9__DM0) 
#define Therm9_DM1                    (* (reg8 *) Therm9__DM1)
#define Therm9_DM2                    (* (reg8 *) Therm9__DM2) 
/* Input Buffer Disable Override */
#define Therm9_INP_DIS                (* (reg8 *) Therm9__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm9_LCD_COM_SEG            (* (reg8 *) Therm9__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm9_LCD_EN                 (* (reg8 *) Therm9__LCD_EN)
/* Slew Rate Control */
#define Therm9_SLW                    (* (reg8 *) Therm9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm9_PRTDSI__CAPS_SEL       (* (reg8 *) Therm9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm9_PRTDSI__OE_SEL0        (* (reg8 *) Therm9__PRTDSI__OE_SEL0) 
#define Therm9_PRTDSI__OE_SEL1        (* (reg8 *) Therm9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm9_PRTDSI__OUT_SEL0       (* (reg8 *) Therm9__PRTDSI__OUT_SEL0) 
#define Therm9_PRTDSI__OUT_SEL1       (* (reg8 *) Therm9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm9_PRTDSI__SYNC_OUT       (* (reg8 *) Therm9__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm9__SIO_CFG)
    #define Therm9_SIO_HYST_EN        (* (reg8 *) Therm9__SIO_HYST_EN)
    #define Therm9_SIO_REG_HIFREQ     (* (reg8 *) Therm9__SIO_REG_HIFREQ)
    #define Therm9_SIO_CFG            (* (reg8 *) Therm9__SIO_CFG)
    #define Therm9_SIO_DIFF           (* (reg8 *) Therm9__SIO_DIFF)
#endif /* (Therm9__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm9__INTSTAT)
    #define Therm9_INTSTAT            (* (reg8 *) Therm9__INTSTAT)
    #define Therm9_SNAP               (* (reg8 *) Therm9__SNAP)
    
	#define Therm9_0_INTTYPE_REG 		(* (reg8 *) Therm9__0__INTTYPE)
#endif /* (Therm9__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm9_H */


/* [] END OF FILE */
