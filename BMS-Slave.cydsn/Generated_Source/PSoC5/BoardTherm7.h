/*******************************************************************************
* File Name: BoardTherm7.h  
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

#if !defined(CY_PINS_BoardTherm7_H) /* Pins BoardTherm7_H */
#define CY_PINS_BoardTherm7_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm7_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm7__PORT == 15 && ((BoardTherm7__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm7_Write(uint8 value);
void    BoardTherm7_SetDriveMode(uint8 mode);
uint8   BoardTherm7_ReadDataReg(void);
uint8   BoardTherm7_Read(void);
void    BoardTherm7_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm7_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm7_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm7_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm7_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm7_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm7_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm7_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm7_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm7_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm7_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm7_MASK               BoardTherm7__MASK
#define BoardTherm7_SHIFT              BoardTherm7__SHIFT
#define BoardTherm7_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm7__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm7_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm7_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm7_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm7_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm7_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm7_INTR_MASK      (0x01u) 
#endif /* (BoardTherm7__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm7_PS                     (* (reg8 *) BoardTherm7__PS)
/* Data Register */
#define BoardTherm7_DR                     (* (reg8 *) BoardTherm7__DR)
/* Port Number */
#define BoardTherm7_PRT_NUM                (* (reg8 *) BoardTherm7__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm7_AG                     (* (reg8 *) BoardTherm7__AG)                       
/* Analog MUX bux enable */
#define BoardTherm7_AMUX                   (* (reg8 *) BoardTherm7__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm7_BIE                    (* (reg8 *) BoardTherm7__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm7_BIT_MASK               (* (reg8 *) BoardTherm7__BIT_MASK)
/* Bypass Enable */
#define BoardTherm7_BYP                    (* (reg8 *) BoardTherm7__BYP)
/* Port wide control signals */                                                   
#define BoardTherm7_CTL                    (* (reg8 *) BoardTherm7__CTL)
/* Drive Modes */
#define BoardTherm7_DM0                    (* (reg8 *) BoardTherm7__DM0) 
#define BoardTherm7_DM1                    (* (reg8 *) BoardTherm7__DM1)
#define BoardTherm7_DM2                    (* (reg8 *) BoardTherm7__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm7_INP_DIS                (* (reg8 *) BoardTherm7__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm7_LCD_COM_SEG            (* (reg8 *) BoardTherm7__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm7_LCD_EN                 (* (reg8 *) BoardTherm7__LCD_EN)
/* Slew Rate Control */
#define BoardTherm7_SLW                    (* (reg8 *) BoardTherm7__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm7_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm7__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm7_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm7__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm7_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm7__PRTDSI__OE_SEL0) 
#define BoardTherm7_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm7__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm7_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm7__PRTDSI__OUT_SEL0) 
#define BoardTherm7_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm7__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm7_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm7__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm7__SIO_CFG)
    #define BoardTherm7_SIO_HYST_EN        (* (reg8 *) BoardTherm7__SIO_HYST_EN)
    #define BoardTherm7_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm7__SIO_REG_HIFREQ)
    #define BoardTherm7_SIO_CFG            (* (reg8 *) BoardTherm7__SIO_CFG)
    #define BoardTherm7_SIO_DIFF           (* (reg8 *) BoardTherm7__SIO_DIFF)
#endif /* (BoardTherm7__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm7__INTSTAT)
    #define BoardTherm7_INTSTAT            (* (reg8 *) BoardTherm7__INTSTAT)
    #define BoardTherm7_SNAP               (* (reg8 *) BoardTherm7__SNAP)
    
	#define BoardTherm7_0_INTTYPE_REG 		(* (reg8 *) BoardTherm7__0__INTTYPE)
#endif /* (BoardTherm7__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm7_H */


/* [] END OF FILE */
