/*******************************************************************************
* File Name: BoardTherm9.h  
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

#if !defined(CY_PINS_BoardTherm9_H) /* Pins BoardTherm9_H */
#define CY_PINS_BoardTherm9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm9_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm9__PORT == 15 && ((BoardTherm9__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm9_Write(uint8 value);
void    BoardTherm9_SetDriveMode(uint8 mode);
uint8   BoardTherm9_ReadDataReg(void);
uint8   BoardTherm9_Read(void);
void    BoardTherm9_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm9_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm9_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm9_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm9_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm9_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm9_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm9_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm9_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm9_MASK               BoardTherm9__MASK
#define BoardTherm9_SHIFT              BoardTherm9__SHIFT
#define BoardTherm9_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm9__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm9_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm9_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm9_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm9_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm9_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm9_INTR_MASK      (0x01u) 
#endif /* (BoardTherm9__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm9_PS                     (* (reg8 *) BoardTherm9__PS)
/* Data Register */
#define BoardTherm9_DR                     (* (reg8 *) BoardTherm9__DR)
/* Port Number */
#define BoardTherm9_PRT_NUM                (* (reg8 *) BoardTherm9__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm9_AG                     (* (reg8 *) BoardTherm9__AG)                       
/* Analog MUX bux enable */
#define BoardTherm9_AMUX                   (* (reg8 *) BoardTherm9__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm9_BIE                    (* (reg8 *) BoardTherm9__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm9_BIT_MASK               (* (reg8 *) BoardTherm9__BIT_MASK)
/* Bypass Enable */
#define BoardTherm9_BYP                    (* (reg8 *) BoardTherm9__BYP)
/* Port wide control signals */                                                   
#define BoardTherm9_CTL                    (* (reg8 *) BoardTherm9__CTL)
/* Drive Modes */
#define BoardTherm9_DM0                    (* (reg8 *) BoardTherm9__DM0) 
#define BoardTherm9_DM1                    (* (reg8 *) BoardTherm9__DM1)
#define BoardTherm9_DM2                    (* (reg8 *) BoardTherm9__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm9_INP_DIS                (* (reg8 *) BoardTherm9__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm9_LCD_COM_SEG            (* (reg8 *) BoardTherm9__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm9_LCD_EN                 (* (reg8 *) BoardTherm9__LCD_EN)
/* Slew Rate Control */
#define BoardTherm9_SLW                    (* (reg8 *) BoardTherm9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm9_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm9_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm9__PRTDSI__OE_SEL0) 
#define BoardTherm9_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm9_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm9__PRTDSI__OUT_SEL0) 
#define BoardTherm9_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm9_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm9__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm9__SIO_CFG)
    #define BoardTherm9_SIO_HYST_EN        (* (reg8 *) BoardTherm9__SIO_HYST_EN)
    #define BoardTherm9_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm9__SIO_REG_HIFREQ)
    #define BoardTherm9_SIO_CFG            (* (reg8 *) BoardTherm9__SIO_CFG)
    #define BoardTherm9_SIO_DIFF           (* (reg8 *) BoardTherm9__SIO_DIFF)
#endif /* (BoardTherm9__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm9__INTSTAT)
    #define BoardTherm9_INTSTAT            (* (reg8 *) BoardTherm9__INTSTAT)
    #define BoardTherm9_SNAP               (* (reg8 *) BoardTherm9__SNAP)
    
	#define BoardTherm9_0_INTTYPE_REG 		(* (reg8 *) BoardTherm9__0__INTTYPE)
#endif /* (BoardTherm9__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm9_H */


/* [] END OF FILE */
