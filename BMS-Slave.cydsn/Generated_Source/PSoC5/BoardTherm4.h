/*******************************************************************************
* File Name: BoardTherm4.h  
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

#if !defined(CY_PINS_BoardTherm4_H) /* Pins BoardTherm4_H */
#define CY_PINS_BoardTherm4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm4__PORT == 15 && ((BoardTherm4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm4_Write(uint8 value);
void    BoardTherm4_SetDriveMode(uint8 mode);
uint8   BoardTherm4_ReadDataReg(void);
uint8   BoardTherm4_Read(void);
void    BoardTherm4_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm4_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm4_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm4_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm4_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm4_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm4_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm4_MASK               BoardTherm4__MASK
#define BoardTherm4_SHIFT              BoardTherm4__SHIFT
#define BoardTherm4_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm4_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm4_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm4_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm4_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm4_INTR_MASK      (0x01u) 
#endif /* (BoardTherm4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm4_PS                     (* (reg8 *) BoardTherm4__PS)
/* Data Register */
#define BoardTherm4_DR                     (* (reg8 *) BoardTherm4__DR)
/* Port Number */
#define BoardTherm4_PRT_NUM                (* (reg8 *) BoardTherm4__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm4_AG                     (* (reg8 *) BoardTherm4__AG)                       
/* Analog MUX bux enable */
#define BoardTherm4_AMUX                   (* (reg8 *) BoardTherm4__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm4_BIE                    (* (reg8 *) BoardTherm4__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm4_BIT_MASK               (* (reg8 *) BoardTherm4__BIT_MASK)
/* Bypass Enable */
#define BoardTherm4_BYP                    (* (reg8 *) BoardTherm4__BYP)
/* Port wide control signals */                                                   
#define BoardTherm4_CTL                    (* (reg8 *) BoardTherm4__CTL)
/* Drive Modes */
#define BoardTherm4_DM0                    (* (reg8 *) BoardTherm4__DM0) 
#define BoardTherm4_DM1                    (* (reg8 *) BoardTherm4__DM1)
#define BoardTherm4_DM2                    (* (reg8 *) BoardTherm4__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm4_INP_DIS                (* (reg8 *) BoardTherm4__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm4_LCD_COM_SEG            (* (reg8 *) BoardTherm4__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm4_LCD_EN                 (* (reg8 *) BoardTherm4__LCD_EN)
/* Slew Rate Control */
#define BoardTherm4_SLW                    (* (reg8 *) BoardTherm4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm4_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm4_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm4__PRTDSI__OE_SEL0) 
#define BoardTherm4_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm4_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm4__PRTDSI__OUT_SEL0) 
#define BoardTherm4_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm4_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm4__SIO_CFG)
    #define BoardTherm4_SIO_HYST_EN        (* (reg8 *) BoardTherm4__SIO_HYST_EN)
    #define BoardTherm4_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm4__SIO_REG_HIFREQ)
    #define BoardTherm4_SIO_CFG            (* (reg8 *) BoardTherm4__SIO_CFG)
    #define BoardTherm4_SIO_DIFF           (* (reg8 *) BoardTherm4__SIO_DIFF)
#endif /* (BoardTherm4__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm4__INTSTAT)
    #define BoardTherm4_INTSTAT            (* (reg8 *) BoardTherm4__INTSTAT)
    #define BoardTherm4_SNAP               (* (reg8 *) BoardTherm4__SNAP)
    
	#define BoardTherm4_0_INTTYPE_REG 		(* (reg8 *) BoardTherm4__0__INTTYPE)
#endif /* (BoardTherm4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm4_H */


/* [] END OF FILE */
