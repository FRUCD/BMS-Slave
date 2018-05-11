/*******************************************************************************
* File Name: Therm11.h  
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

#if !defined(CY_PINS_Therm11_H) /* Pins Therm11_H */
#define CY_PINS_Therm11_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm11_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm11__PORT == 15 && ((Therm11__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm11_Write(uint8 value);
void    Therm11_SetDriveMode(uint8 mode);
uint8   Therm11_ReadDataReg(void);
uint8   Therm11_Read(void);
void    Therm11_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm11_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm11_SetDriveMode() function.
     *  @{
     */
        #define Therm11_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm11_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm11_DM_RES_UP          PIN_DM_RES_UP
        #define Therm11_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm11_DM_OD_LO           PIN_DM_OD_LO
        #define Therm11_DM_OD_HI           PIN_DM_OD_HI
        #define Therm11_DM_STRONG          PIN_DM_STRONG
        #define Therm11_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm11_MASK               Therm11__MASK
#define Therm11_SHIFT              Therm11__SHIFT
#define Therm11_WIDTH              1u

/* Interrupt constants */
#if defined(Therm11__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm11_SetInterruptMode() function.
     *  @{
     */
        #define Therm11_INTR_NONE      (uint16)(0x0000u)
        #define Therm11_INTR_RISING    (uint16)(0x0001u)
        #define Therm11_INTR_FALLING   (uint16)(0x0002u)
        #define Therm11_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm11_INTR_MASK      (0x01u) 
#endif /* (Therm11__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm11_PS                     (* (reg8 *) Therm11__PS)
/* Data Register */
#define Therm11_DR                     (* (reg8 *) Therm11__DR)
/* Port Number */
#define Therm11_PRT_NUM                (* (reg8 *) Therm11__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm11_AG                     (* (reg8 *) Therm11__AG)                       
/* Analog MUX bux enable */
#define Therm11_AMUX                   (* (reg8 *) Therm11__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm11_BIE                    (* (reg8 *) Therm11__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm11_BIT_MASK               (* (reg8 *) Therm11__BIT_MASK)
/* Bypass Enable */
#define Therm11_BYP                    (* (reg8 *) Therm11__BYP)
/* Port wide control signals */                                                   
#define Therm11_CTL                    (* (reg8 *) Therm11__CTL)
/* Drive Modes */
#define Therm11_DM0                    (* (reg8 *) Therm11__DM0) 
#define Therm11_DM1                    (* (reg8 *) Therm11__DM1)
#define Therm11_DM2                    (* (reg8 *) Therm11__DM2) 
/* Input Buffer Disable Override */
#define Therm11_INP_DIS                (* (reg8 *) Therm11__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm11_LCD_COM_SEG            (* (reg8 *) Therm11__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm11_LCD_EN                 (* (reg8 *) Therm11__LCD_EN)
/* Slew Rate Control */
#define Therm11_SLW                    (* (reg8 *) Therm11__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm11_PRTDSI__CAPS_SEL       (* (reg8 *) Therm11__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm11_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm11__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm11_PRTDSI__OE_SEL0        (* (reg8 *) Therm11__PRTDSI__OE_SEL0) 
#define Therm11_PRTDSI__OE_SEL1        (* (reg8 *) Therm11__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm11_PRTDSI__OUT_SEL0       (* (reg8 *) Therm11__PRTDSI__OUT_SEL0) 
#define Therm11_PRTDSI__OUT_SEL1       (* (reg8 *) Therm11__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm11_PRTDSI__SYNC_OUT       (* (reg8 *) Therm11__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm11__SIO_CFG)
    #define Therm11_SIO_HYST_EN        (* (reg8 *) Therm11__SIO_HYST_EN)
    #define Therm11_SIO_REG_HIFREQ     (* (reg8 *) Therm11__SIO_REG_HIFREQ)
    #define Therm11_SIO_CFG            (* (reg8 *) Therm11__SIO_CFG)
    #define Therm11_SIO_DIFF           (* (reg8 *) Therm11__SIO_DIFF)
#endif /* (Therm11__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm11__INTSTAT)
    #define Therm11_INTSTAT            (* (reg8 *) Therm11__INTSTAT)
    #define Therm11_SNAP               (* (reg8 *) Therm11__SNAP)
    
	#define Therm11_0_INTTYPE_REG 		(* (reg8 *) Therm11__0__INTTYPE)
#endif /* (Therm11__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm11_H */


/* [] END OF FILE */
