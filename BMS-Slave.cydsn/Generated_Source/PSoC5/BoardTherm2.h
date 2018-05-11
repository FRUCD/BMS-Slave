/*******************************************************************************
* File Name: BoardTherm2.h  
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

#if !defined(CY_PINS_BoardTherm2_H) /* Pins BoardTherm2_H */
#define CY_PINS_BoardTherm2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm2__PORT == 15 && ((BoardTherm2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm2_Write(uint8 value);
void    BoardTherm2_SetDriveMode(uint8 mode);
uint8   BoardTherm2_ReadDataReg(void);
uint8   BoardTherm2_Read(void);
void    BoardTherm2_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm2_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm2_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm2_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm2_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm2_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm2_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm2_MASK               BoardTherm2__MASK
#define BoardTherm2_SHIFT              BoardTherm2__SHIFT
#define BoardTherm2_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm2_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm2_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm2_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm2_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm2_INTR_MASK      (0x01u) 
#endif /* (BoardTherm2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm2_PS                     (* (reg8 *) BoardTherm2__PS)
/* Data Register */
#define BoardTherm2_DR                     (* (reg8 *) BoardTherm2__DR)
/* Port Number */
#define BoardTherm2_PRT_NUM                (* (reg8 *) BoardTherm2__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm2_AG                     (* (reg8 *) BoardTherm2__AG)                       
/* Analog MUX bux enable */
#define BoardTherm2_AMUX                   (* (reg8 *) BoardTherm2__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm2_BIE                    (* (reg8 *) BoardTherm2__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm2_BIT_MASK               (* (reg8 *) BoardTherm2__BIT_MASK)
/* Bypass Enable */
#define BoardTherm2_BYP                    (* (reg8 *) BoardTherm2__BYP)
/* Port wide control signals */                                                   
#define BoardTherm2_CTL                    (* (reg8 *) BoardTherm2__CTL)
/* Drive Modes */
#define BoardTherm2_DM0                    (* (reg8 *) BoardTherm2__DM0) 
#define BoardTherm2_DM1                    (* (reg8 *) BoardTherm2__DM1)
#define BoardTherm2_DM2                    (* (reg8 *) BoardTherm2__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm2_INP_DIS                (* (reg8 *) BoardTherm2__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm2_LCD_COM_SEG            (* (reg8 *) BoardTherm2__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm2_LCD_EN                 (* (reg8 *) BoardTherm2__LCD_EN)
/* Slew Rate Control */
#define BoardTherm2_SLW                    (* (reg8 *) BoardTherm2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm2_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm2_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm2__PRTDSI__OE_SEL0) 
#define BoardTherm2_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm2_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm2__PRTDSI__OUT_SEL0) 
#define BoardTherm2_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm2_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm2__SIO_CFG)
    #define BoardTherm2_SIO_HYST_EN        (* (reg8 *) BoardTherm2__SIO_HYST_EN)
    #define BoardTherm2_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm2__SIO_REG_HIFREQ)
    #define BoardTherm2_SIO_CFG            (* (reg8 *) BoardTherm2__SIO_CFG)
    #define BoardTherm2_SIO_DIFF           (* (reg8 *) BoardTherm2__SIO_DIFF)
#endif /* (BoardTherm2__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm2__INTSTAT)
    #define BoardTherm2_INTSTAT            (* (reg8 *) BoardTherm2__INTSTAT)
    #define BoardTherm2_SNAP               (* (reg8 *) BoardTherm2__SNAP)
    
	#define BoardTherm2_0_INTTYPE_REG 		(* (reg8 *) BoardTherm2__0__INTTYPE)
#endif /* (BoardTherm2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm2_H */


/* [] END OF FILE */
