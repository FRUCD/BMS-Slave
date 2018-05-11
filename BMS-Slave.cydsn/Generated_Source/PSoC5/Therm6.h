/*******************************************************************************
* File Name: Therm6.h  
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

#if !defined(CY_PINS_Therm6_H) /* Pins Therm6_H */
#define CY_PINS_Therm6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm6__PORT == 15 && ((Therm6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm6_Write(uint8 value);
void    Therm6_SetDriveMode(uint8 mode);
uint8   Therm6_ReadDataReg(void);
uint8   Therm6_Read(void);
void    Therm6_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm6_SetDriveMode() function.
     *  @{
     */
        #define Therm6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm6_DM_RES_UP          PIN_DM_RES_UP
        #define Therm6_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm6_DM_OD_LO           PIN_DM_OD_LO
        #define Therm6_DM_OD_HI           PIN_DM_OD_HI
        #define Therm6_DM_STRONG          PIN_DM_STRONG
        #define Therm6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm6_MASK               Therm6__MASK
#define Therm6_SHIFT              Therm6__SHIFT
#define Therm6_WIDTH              1u

/* Interrupt constants */
#if defined(Therm6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm6_SetInterruptMode() function.
     *  @{
     */
        #define Therm6_INTR_NONE      (uint16)(0x0000u)
        #define Therm6_INTR_RISING    (uint16)(0x0001u)
        #define Therm6_INTR_FALLING   (uint16)(0x0002u)
        #define Therm6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm6_INTR_MASK      (0x01u) 
#endif /* (Therm6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm6_PS                     (* (reg8 *) Therm6__PS)
/* Data Register */
#define Therm6_DR                     (* (reg8 *) Therm6__DR)
/* Port Number */
#define Therm6_PRT_NUM                (* (reg8 *) Therm6__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm6_AG                     (* (reg8 *) Therm6__AG)                       
/* Analog MUX bux enable */
#define Therm6_AMUX                   (* (reg8 *) Therm6__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm6_BIE                    (* (reg8 *) Therm6__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm6_BIT_MASK               (* (reg8 *) Therm6__BIT_MASK)
/* Bypass Enable */
#define Therm6_BYP                    (* (reg8 *) Therm6__BYP)
/* Port wide control signals */                                                   
#define Therm6_CTL                    (* (reg8 *) Therm6__CTL)
/* Drive Modes */
#define Therm6_DM0                    (* (reg8 *) Therm6__DM0) 
#define Therm6_DM1                    (* (reg8 *) Therm6__DM1)
#define Therm6_DM2                    (* (reg8 *) Therm6__DM2) 
/* Input Buffer Disable Override */
#define Therm6_INP_DIS                (* (reg8 *) Therm6__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm6_LCD_COM_SEG            (* (reg8 *) Therm6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm6_LCD_EN                 (* (reg8 *) Therm6__LCD_EN)
/* Slew Rate Control */
#define Therm6_SLW                    (* (reg8 *) Therm6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm6_PRTDSI__CAPS_SEL       (* (reg8 *) Therm6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm6_PRTDSI__OE_SEL0        (* (reg8 *) Therm6__PRTDSI__OE_SEL0) 
#define Therm6_PRTDSI__OE_SEL1        (* (reg8 *) Therm6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm6_PRTDSI__OUT_SEL0       (* (reg8 *) Therm6__PRTDSI__OUT_SEL0) 
#define Therm6_PRTDSI__OUT_SEL1       (* (reg8 *) Therm6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm6_PRTDSI__SYNC_OUT       (* (reg8 *) Therm6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm6__SIO_CFG)
    #define Therm6_SIO_HYST_EN        (* (reg8 *) Therm6__SIO_HYST_EN)
    #define Therm6_SIO_REG_HIFREQ     (* (reg8 *) Therm6__SIO_REG_HIFREQ)
    #define Therm6_SIO_CFG            (* (reg8 *) Therm6__SIO_CFG)
    #define Therm6_SIO_DIFF           (* (reg8 *) Therm6__SIO_DIFF)
#endif /* (Therm6__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm6__INTSTAT)
    #define Therm6_INTSTAT            (* (reg8 *) Therm6__INTSTAT)
    #define Therm6_SNAP               (* (reg8 *) Therm6__SNAP)
    
	#define Therm6_0_INTTYPE_REG 		(* (reg8 *) Therm6__0__INTTYPE)
#endif /* (Therm6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm6_H */


/* [] END OF FILE */