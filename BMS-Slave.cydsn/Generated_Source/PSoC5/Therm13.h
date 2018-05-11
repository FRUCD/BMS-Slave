/*******************************************************************************
* File Name: Therm13.h  
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

#if !defined(CY_PINS_Therm13_H) /* Pins Therm13_H */
#define CY_PINS_Therm13_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm13_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm13__PORT == 15 && ((Therm13__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm13_Write(uint8 value);
void    Therm13_SetDriveMode(uint8 mode);
uint8   Therm13_ReadDataReg(void);
uint8   Therm13_Read(void);
void    Therm13_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm13_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm13_SetDriveMode() function.
     *  @{
     */
        #define Therm13_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm13_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm13_DM_RES_UP          PIN_DM_RES_UP
        #define Therm13_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm13_DM_OD_LO           PIN_DM_OD_LO
        #define Therm13_DM_OD_HI           PIN_DM_OD_HI
        #define Therm13_DM_STRONG          PIN_DM_STRONG
        #define Therm13_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm13_MASK               Therm13__MASK
#define Therm13_SHIFT              Therm13__SHIFT
#define Therm13_WIDTH              1u

/* Interrupt constants */
#if defined(Therm13__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm13_SetInterruptMode() function.
     *  @{
     */
        #define Therm13_INTR_NONE      (uint16)(0x0000u)
        #define Therm13_INTR_RISING    (uint16)(0x0001u)
        #define Therm13_INTR_FALLING   (uint16)(0x0002u)
        #define Therm13_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm13_INTR_MASK      (0x01u) 
#endif /* (Therm13__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm13_PS                     (* (reg8 *) Therm13__PS)
/* Data Register */
#define Therm13_DR                     (* (reg8 *) Therm13__DR)
/* Port Number */
#define Therm13_PRT_NUM                (* (reg8 *) Therm13__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm13_AG                     (* (reg8 *) Therm13__AG)                       
/* Analog MUX bux enable */
#define Therm13_AMUX                   (* (reg8 *) Therm13__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm13_BIE                    (* (reg8 *) Therm13__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm13_BIT_MASK               (* (reg8 *) Therm13__BIT_MASK)
/* Bypass Enable */
#define Therm13_BYP                    (* (reg8 *) Therm13__BYP)
/* Port wide control signals */                                                   
#define Therm13_CTL                    (* (reg8 *) Therm13__CTL)
/* Drive Modes */
#define Therm13_DM0                    (* (reg8 *) Therm13__DM0) 
#define Therm13_DM1                    (* (reg8 *) Therm13__DM1)
#define Therm13_DM2                    (* (reg8 *) Therm13__DM2) 
/* Input Buffer Disable Override */
#define Therm13_INP_DIS                (* (reg8 *) Therm13__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm13_LCD_COM_SEG            (* (reg8 *) Therm13__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm13_LCD_EN                 (* (reg8 *) Therm13__LCD_EN)
/* Slew Rate Control */
#define Therm13_SLW                    (* (reg8 *) Therm13__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm13_PRTDSI__CAPS_SEL       (* (reg8 *) Therm13__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm13_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm13__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm13_PRTDSI__OE_SEL0        (* (reg8 *) Therm13__PRTDSI__OE_SEL0) 
#define Therm13_PRTDSI__OE_SEL1        (* (reg8 *) Therm13__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm13_PRTDSI__OUT_SEL0       (* (reg8 *) Therm13__PRTDSI__OUT_SEL0) 
#define Therm13_PRTDSI__OUT_SEL1       (* (reg8 *) Therm13__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm13_PRTDSI__SYNC_OUT       (* (reg8 *) Therm13__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm13__SIO_CFG)
    #define Therm13_SIO_HYST_EN        (* (reg8 *) Therm13__SIO_HYST_EN)
    #define Therm13_SIO_REG_HIFREQ     (* (reg8 *) Therm13__SIO_REG_HIFREQ)
    #define Therm13_SIO_CFG            (* (reg8 *) Therm13__SIO_CFG)
    #define Therm13_SIO_DIFF           (* (reg8 *) Therm13__SIO_DIFF)
#endif /* (Therm13__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm13__INTSTAT)
    #define Therm13_INTSTAT            (* (reg8 *) Therm13__INTSTAT)
    #define Therm13_SNAP               (* (reg8 *) Therm13__SNAP)
    
	#define Therm13_0_INTTYPE_REG 		(* (reg8 *) Therm13__0__INTTYPE)
#endif /* (Therm13__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm13_H */


/* [] END OF FILE */
