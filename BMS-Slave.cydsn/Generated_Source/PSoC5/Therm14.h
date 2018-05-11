/*******************************************************************************
* File Name: Therm14.h  
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

#if !defined(CY_PINS_Therm14_H) /* Pins Therm14_H */
#define CY_PINS_Therm14_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm14_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm14__PORT == 15 && ((Therm14__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm14_Write(uint8 value);
void    Therm14_SetDriveMode(uint8 mode);
uint8   Therm14_ReadDataReg(void);
uint8   Therm14_Read(void);
void    Therm14_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm14_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm14_SetDriveMode() function.
     *  @{
     */
        #define Therm14_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm14_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm14_DM_RES_UP          PIN_DM_RES_UP
        #define Therm14_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm14_DM_OD_LO           PIN_DM_OD_LO
        #define Therm14_DM_OD_HI           PIN_DM_OD_HI
        #define Therm14_DM_STRONG          PIN_DM_STRONG
        #define Therm14_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm14_MASK               Therm14__MASK
#define Therm14_SHIFT              Therm14__SHIFT
#define Therm14_WIDTH              1u

/* Interrupt constants */
#if defined(Therm14__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm14_SetInterruptMode() function.
     *  @{
     */
        #define Therm14_INTR_NONE      (uint16)(0x0000u)
        #define Therm14_INTR_RISING    (uint16)(0x0001u)
        #define Therm14_INTR_FALLING   (uint16)(0x0002u)
        #define Therm14_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm14_INTR_MASK      (0x01u) 
#endif /* (Therm14__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm14_PS                     (* (reg8 *) Therm14__PS)
/* Data Register */
#define Therm14_DR                     (* (reg8 *) Therm14__DR)
/* Port Number */
#define Therm14_PRT_NUM                (* (reg8 *) Therm14__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm14_AG                     (* (reg8 *) Therm14__AG)                       
/* Analog MUX bux enable */
#define Therm14_AMUX                   (* (reg8 *) Therm14__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm14_BIE                    (* (reg8 *) Therm14__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm14_BIT_MASK               (* (reg8 *) Therm14__BIT_MASK)
/* Bypass Enable */
#define Therm14_BYP                    (* (reg8 *) Therm14__BYP)
/* Port wide control signals */                                                   
#define Therm14_CTL                    (* (reg8 *) Therm14__CTL)
/* Drive Modes */
#define Therm14_DM0                    (* (reg8 *) Therm14__DM0) 
#define Therm14_DM1                    (* (reg8 *) Therm14__DM1)
#define Therm14_DM2                    (* (reg8 *) Therm14__DM2) 
/* Input Buffer Disable Override */
#define Therm14_INP_DIS                (* (reg8 *) Therm14__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm14_LCD_COM_SEG            (* (reg8 *) Therm14__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm14_LCD_EN                 (* (reg8 *) Therm14__LCD_EN)
/* Slew Rate Control */
#define Therm14_SLW                    (* (reg8 *) Therm14__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm14_PRTDSI__CAPS_SEL       (* (reg8 *) Therm14__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm14_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm14__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm14_PRTDSI__OE_SEL0        (* (reg8 *) Therm14__PRTDSI__OE_SEL0) 
#define Therm14_PRTDSI__OE_SEL1        (* (reg8 *) Therm14__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm14_PRTDSI__OUT_SEL0       (* (reg8 *) Therm14__PRTDSI__OUT_SEL0) 
#define Therm14_PRTDSI__OUT_SEL1       (* (reg8 *) Therm14__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm14_PRTDSI__SYNC_OUT       (* (reg8 *) Therm14__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm14__SIO_CFG)
    #define Therm14_SIO_HYST_EN        (* (reg8 *) Therm14__SIO_HYST_EN)
    #define Therm14_SIO_REG_HIFREQ     (* (reg8 *) Therm14__SIO_REG_HIFREQ)
    #define Therm14_SIO_CFG            (* (reg8 *) Therm14__SIO_CFG)
    #define Therm14_SIO_DIFF           (* (reg8 *) Therm14__SIO_DIFF)
#endif /* (Therm14__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm14__INTSTAT)
    #define Therm14_INTSTAT            (* (reg8 *) Therm14__INTSTAT)
    #define Therm14_SNAP               (* (reg8 *) Therm14__SNAP)
    
	#define Therm14_0_INTTYPE_REG 		(* (reg8 *) Therm14__0__INTTYPE)
#endif /* (Therm14__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm14_H */


/* [] END OF FILE */
