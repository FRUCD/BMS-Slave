/*******************************************************************************
* File Name: Therm5.h  
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

#if !defined(CY_PINS_Therm5_H) /* Pins Therm5_H */
#define CY_PINS_Therm5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm5__PORT == 15 && ((Therm5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Therm5_Write(uint8 value);
void    Therm5_SetDriveMode(uint8 mode);
uint8   Therm5_ReadDataReg(void);
uint8   Therm5_Read(void);
void    Therm5_SetInterruptMode(uint16 position, uint16 mode);
uint8   Therm5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Therm5_SetDriveMode() function.
     *  @{
     */
        #define Therm5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Therm5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Therm5_DM_RES_UP          PIN_DM_RES_UP
        #define Therm5_DM_RES_DWN         PIN_DM_RES_DWN
        #define Therm5_DM_OD_LO           PIN_DM_OD_LO
        #define Therm5_DM_OD_HI           PIN_DM_OD_HI
        #define Therm5_DM_STRONG          PIN_DM_STRONG
        #define Therm5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Therm5_MASK               Therm5__MASK
#define Therm5_SHIFT              Therm5__SHIFT
#define Therm5_WIDTH              1u

/* Interrupt constants */
#if defined(Therm5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Therm5_SetInterruptMode() function.
     *  @{
     */
        #define Therm5_INTR_NONE      (uint16)(0x0000u)
        #define Therm5_INTR_RISING    (uint16)(0x0001u)
        #define Therm5_INTR_FALLING   (uint16)(0x0002u)
        #define Therm5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Therm5_INTR_MASK      (0x01u) 
#endif /* (Therm5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm5_PS                     (* (reg8 *) Therm5__PS)
/* Data Register */
#define Therm5_DR                     (* (reg8 *) Therm5__DR)
/* Port Number */
#define Therm5_PRT_NUM                (* (reg8 *) Therm5__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm5_AG                     (* (reg8 *) Therm5__AG)                       
/* Analog MUX bux enable */
#define Therm5_AMUX                   (* (reg8 *) Therm5__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm5_BIE                    (* (reg8 *) Therm5__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm5_BIT_MASK               (* (reg8 *) Therm5__BIT_MASK)
/* Bypass Enable */
#define Therm5_BYP                    (* (reg8 *) Therm5__BYP)
/* Port wide control signals */                                                   
#define Therm5_CTL                    (* (reg8 *) Therm5__CTL)
/* Drive Modes */
#define Therm5_DM0                    (* (reg8 *) Therm5__DM0) 
#define Therm5_DM1                    (* (reg8 *) Therm5__DM1)
#define Therm5_DM2                    (* (reg8 *) Therm5__DM2) 
/* Input Buffer Disable Override */
#define Therm5_INP_DIS                (* (reg8 *) Therm5__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm5_LCD_COM_SEG            (* (reg8 *) Therm5__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm5_LCD_EN                 (* (reg8 *) Therm5__LCD_EN)
/* Slew Rate Control */
#define Therm5_SLW                    (* (reg8 *) Therm5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm5_PRTDSI__CAPS_SEL       (* (reg8 *) Therm5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm5_PRTDSI__OE_SEL0        (* (reg8 *) Therm5__PRTDSI__OE_SEL0) 
#define Therm5_PRTDSI__OE_SEL1        (* (reg8 *) Therm5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm5_PRTDSI__OUT_SEL0       (* (reg8 *) Therm5__PRTDSI__OUT_SEL0) 
#define Therm5_PRTDSI__OUT_SEL1       (* (reg8 *) Therm5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm5_PRTDSI__SYNC_OUT       (* (reg8 *) Therm5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Therm5__SIO_CFG)
    #define Therm5_SIO_HYST_EN        (* (reg8 *) Therm5__SIO_HYST_EN)
    #define Therm5_SIO_REG_HIFREQ     (* (reg8 *) Therm5__SIO_REG_HIFREQ)
    #define Therm5_SIO_CFG            (* (reg8 *) Therm5__SIO_CFG)
    #define Therm5_SIO_DIFF           (* (reg8 *) Therm5__SIO_DIFF)
#endif /* (Therm5__SIO_CFG) */

/* Interrupt Registers */
#if defined(Therm5__INTSTAT)
    #define Therm5_INTSTAT            (* (reg8 *) Therm5__INTSTAT)
    #define Therm5_SNAP               (* (reg8 *) Therm5__SNAP)
    
	#define Therm5_0_INTTYPE_REG 		(* (reg8 *) Therm5__0__INTTYPE)
#endif /* (Therm5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm5_H */


/* [] END OF FILE */
