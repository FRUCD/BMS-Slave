/*******************************************************************************
* File Name: BoardTherm3.h  
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

#if !defined(CY_PINS_BoardTherm3_H) /* Pins BoardTherm3_H */
#define CY_PINS_BoardTherm3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm3__PORT == 15 && ((BoardTherm3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm3_Write(uint8 value);
void    BoardTherm3_SetDriveMode(uint8 mode);
uint8   BoardTherm3_ReadDataReg(void);
uint8   BoardTherm3_Read(void);
void    BoardTherm3_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm3_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm3_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm3_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm3_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm3_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm3_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm3_MASK               BoardTherm3__MASK
#define BoardTherm3_SHIFT              BoardTherm3__SHIFT
#define BoardTherm3_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm3_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm3_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm3_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm3_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm3_INTR_MASK      (0x01u) 
#endif /* (BoardTherm3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm3_PS                     (* (reg8 *) BoardTherm3__PS)
/* Data Register */
#define BoardTherm3_DR                     (* (reg8 *) BoardTherm3__DR)
/* Port Number */
#define BoardTherm3_PRT_NUM                (* (reg8 *) BoardTherm3__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm3_AG                     (* (reg8 *) BoardTherm3__AG)                       
/* Analog MUX bux enable */
#define BoardTherm3_AMUX                   (* (reg8 *) BoardTherm3__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm3_BIE                    (* (reg8 *) BoardTherm3__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm3_BIT_MASK               (* (reg8 *) BoardTherm3__BIT_MASK)
/* Bypass Enable */
#define BoardTherm3_BYP                    (* (reg8 *) BoardTherm3__BYP)
/* Port wide control signals */                                                   
#define BoardTherm3_CTL                    (* (reg8 *) BoardTherm3__CTL)
/* Drive Modes */
#define BoardTherm3_DM0                    (* (reg8 *) BoardTherm3__DM0) 
#define BoardTherm3_DM1                    (* (reg8 *) BoardTherm3__DM1)
#define BoardTherm3_DM2                    (* (reg8 *) BoardTherm3__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm3_INP_DIS                (* (reg8 *) BoardTherm3__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm3_LCD_COM_SEG            (* (reg8 *) BoardTherm3__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm3_LCD_EN                 (* (reg8 *) BoardTherm3__LCD_EN)
/* Slew Rate Control */
#define BoardTherm3_SLW                    (* (reg8 *) BoardTherm3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm3_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm3_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm3__PRTDSI__OE_SEL0) 
#define BoardTherm3_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm3_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm3__PRTDSI__OUT_SEL0) 
#define BoardTherm3_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm3_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm3__SIO_CFG)
    #define BoardTherm3_SIO_HYST_EN        (* (reg8 *) BoardTherm3__SIO_HYST_EN)
    #define BoardTherm3_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm3__SIO_REG_HIFREQ)
    #define BoardTherm3_SIO_CFG            (* (reg8 *) BoardTherm3__SIO_CFG)
    #define BoardTherm3_SIO_DIFF           (* (reg8 *) BoardTherm3__SIO_DIFF)
#endif /* (BoardTherm3__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm3__INTSTAT)
    #define BoardTherm3_INTSTAT            (* (reg8 *) BoardTherm3__INTSTAT)
    #define BoardTherm3_SNAP               (* (reg8 *) BoardTherm3__SNAP)
    
	#define BoardTherm3_0_INTTYPE_REG 		(* (reg8 *) BoardTherm3__0__INTTYPE)
#endif /* (BoardTherm3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm3_H */


/* [] END OF FILE */
