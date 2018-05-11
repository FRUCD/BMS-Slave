/*******************************************************************************
* File Name: Therm8.h  
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

#if !defined(CY_PINS_Therm8_H) /* Pins Therm8_H */
#define CY_PINS_Therm8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm8_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm8__PORT == 15 && ((Therm8__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm8_Write(uint8 value);
void    Therm8_SetDriveMode(uint8 mode);
uint8   Therm8_ReadDataReg(void);
uint8   Therm8_Read(void);
void    Therm8_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm8_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm8_SetDriveMode() function.
     *  @{
     */
        #define Therm8_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm8_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm8_DM_RES_UP          PIN_DM_RES_UP
        #define Therm8_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm8_DM_OD_LO           PIN_DM_OD_LO
        #define Therm8_DM_OD_HI           PIN_DM_OD_HI
        #define Therm8_DM_STRONG          PIN_DM_STRONG
        #define Therm8_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm8_MASK               Therm8__MASK
#define Therm8_SHIFT              Therm8__SHIFT
#define Therm8_WIDTH              1u

/* Interrupt constants */
#if defined(Therm8__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm8_SetInterruptMode() function.
     *  @{
     */
        #define Therm8_INTR_NONE      (uint16)(0x0000u)
        #define Therm8_INTR_RISING    (uint16)(0x0001u)
        #define Therm8_INTR_FALLING   (uint16)(0x0002u)
        #define Therm8_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm8_INTR_MASK      (0x01u) 
#endif /* (Therm8__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm8_PS                     (* (reg8 *) Therm8__PS)
/* Data Register */
#define Therm8_DR                     (* (reg8 *) Therm8__DR)
/* Port Number */
#define Therm8_PRT_NUM                (* (reg8 *) Therm8__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm8_AG                     (* (reg8 *) Therm8__AG)                       
/* Analog MUX bux enable */
#define Therm8_AMUX                   (* (reg8 *) Therm8__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm8_BIE                    (* (reg8 *) Therm8__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm8_BIT_MASK               (* (reg8 *) Therm8__BIT_MASK)
/* Bypass Enable */
#define Therm8_BYP                    (* (reg8 *) Therm8__BYP)
/* Port wide control signals */                                                   
#define Therm8_CTL                    (* (reg8 *) Therm8__CTL)
/* Drive Modes */
#define Therm8_DM0                    (* (reg8 *) Therm8__DM0) 
#define Therm8_DM1                    (* (reg8 *) Therm8__DM1)
#define Therm8_DM2                    (* (reg8 *) Therm8__DM2) 
/* Input Buffer Disable Override */
#define Therm8_INP_DIS                (* (reg8 *) Therm8__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm8_LCD_COM_SEG            (* (reg8 *) Therm8__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm8_LCD_EN                 (* (reg8 *) Therm8__LCD_EN)
/* Slew Rate Control */
#define Therm8_SLW                    (* (reg8 *) Therm8__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm8_PRTDSI__CAPS_SEL       (* (reg8 *) Therm8__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm8_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm8__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm8_PRTDSI__OE_SEL0        (* (reg8 *) Therm8__PRTDSI__OE_SEL0) 
#define Therm8_PRTDSI__OE_SEL1        (* (reg8 *) Therm8__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm8_PRTDSI__OUT_SEL0       (* (reg8 *) Therm8__PRTDSI__OUT_SEL0) 
#define Therm8_PRTDSI__OUT_SEL1       (* (reg8 *) Therm8__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm8_PRTDSI__SYNC_OUT       (* (reg8 *) Therm8__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm8__SIO_CFG)
    #define Therm8_SIO_HYST_EN        (* (reg8 *) Therm8__SIO_HYST_EN)
    #define Therm8_SIO_REG_HIFREQ     (* (reg8 *) Therm8__SIO_REG_HIFREQ)
    #define Therm8_SIO_CFG            (* (reg8 *) Therm8__SIO_CFG)
    #define Therm8_SIO_DIFF           (* (reg8 *) Therm8__SIO_DIFF)
#endif /* (Therm8__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm8__INTSTAT)
    #define Therm8_INTSTAT            (* (reg8 *) Therm8__INTSTAT)
    #define Therm8_SNAP               (* (reg8 *) Therm8__SNAP)
    
	#define Therm8_0_INTTYPE_REG 		(* (reg8 *) Therm8__0__INTTYPE)
#endif /* (Therm8__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm8_H */


/* [] END OF FILE */
