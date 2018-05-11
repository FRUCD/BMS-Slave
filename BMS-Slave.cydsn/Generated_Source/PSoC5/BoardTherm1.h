/*******************************************************************************
* File Name: BoardTherm1.h  
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

#if !defined(CY_PINS_BoardTherm1_H) /* Pins BoardTherm1_H */
#define CY_PINS_BoardTherm1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm1__PORT == 15 && ((BoardTherm1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm1_Write(uint8 value);
void    BoardTherm1_SetDriveMode(uint8 mode);
uint8   BoardTherm1_ReadDataReg(void);
uint8   BoardTherm1_Read(void);
void    BoardTherm1_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm1_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm1_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm1_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm1_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm1_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm1_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm1_MASK               BoardTherm1__MASK
#define BoardTherm1_SHIFT              BoardTherm1__SHIFT
#define BoardTherm1_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm1_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm1_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm1_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm1_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm1_INTR_MASK      (0x01u) 
#endif /* (BoardTherm1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm1_PS                     (* (reg8 *) BoardTherm1__PS)
/* Data Register */
#define BoardTherm1_DR                     (* (reg8 *) BoardTherm1__DR)
/* Port Number */
#define BoardTherm1_PRT_NUM                (* (reg8 *) BoardTherm1__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm1_AG                     (* (reg8 *) BoardTherm1__AG)                       
/* Analog MUX bux enable */
#define BoardTherm1_AMUX                   (* (reg8 *) BoardTherm1__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm1_BIE                    (* (reg8 *) BoardTherm1__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm1_BIT_MASK               (* (reg8 *) BoardTherm1__BIT_MASK)
/* Bypass Enable */
#define BoardTherm1_BYP                    (* (reg8 *) BoardTherm1__BYP)
/* Port wide control signals */                                                   
#define BoardTherm1_CTL                    (* (reg8 *) BoardTherm1__CTL)
/* Drive Modes */
#define BoardTherm1_DM0                    (* (reg8 *) BoardTherm1__DM0) 
#define BoardTherm1_DM1                    (* (reg8 *) BoardTherm1__DM1)
#define BoardTherm1_DM2                    (* (reg8 *) BoardTherm1__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm1_INP_DIS                (* (reg8 *) BoardTherm1__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm1_LCD_COM_SEG            (* (reg8 *) BoardTherm1__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm1_LCD_EN                 (* (reg8 *) BoardTherm1__LCD_EN)
/* Slew Rate Control */
#define BoardTherm1_SLW                    (* (reg8 *) BoardTherm1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm1_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm1_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm1__PRTDSI__OE_SEL0) 
#define BoardTherm1_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm1_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm1__PRTDSI__OUT_SEL0) 
#define BoardTherm1_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm1_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm1__SIO_CFG)
    #define BoardTherm1_SIO_HYST_EN        (* (reg8 *) BoardTherm1__SIO_HYST_EN)
    #define BoardTherm1_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm1__SIO_REG_HIFREQ)
    #define BoardTherm1_SIO_CFG            (* (reg8 *) BoardTherm1__SIO_CFG)
    #define BoardTherm1_SIO_DIFF           (* (reg8 *) BoardTherm1__SIO_DIFF)
#endif /* (BoardTherm1__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm1__INTSTAT)
    #define BoardTherm1_INTSTAT            (* (reg8 *) BoardTherm1__INTSTAT)
    #define BoardTherm1_SNAP               (* (reg8 *) BoardTherm1__SNAP)
    
	#define BoardTherm1_0_INTTYPE_REG 		(* (reg8 *) BoardTherm1__0__INTTYPE)
#endif /* (BoardTherm1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm1_H */


/* [] END OF FILE */
