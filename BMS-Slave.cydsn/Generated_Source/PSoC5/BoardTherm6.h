/*******************************************************************************
* File Name: BoardTherm6.h  
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

#if !defined(CY_PINS_BoardTherm6_H) /* Pins BoardTherm6_H */
#define CY_PINS_BoardTherm6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm6__PORT == 15 && ((BoardTherm6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm6_Write(uint8 value);
void    BoardTherm6_SetDriveMode(uint8 mode);
uint8   BoardTherm6_ReadDataReg(void);
uint8   BoardTherm6_Read(void);
void    BoardTherm6_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm6_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm6_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm6_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm6_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm6_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm6_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm6_MASK               BoardTherm6__MASK
#define BoardTherm6_SHIFT              BoardTherm6__SHIFT
#define BoardTherm6_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm6_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm6_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm6_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm6_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm6_INTR_MASK      (0x01u) 
#endif /* (BoardTherm6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm6_PS                     (* (reg8 *) BoardTherm6__PS)
/* Data Register */
#define BoardTherm6_DR                     (* (reg8 *) BoardTherm6__DR)
/* Port Number */
#define BoardTherm6_PRT_NUM                (* (reg8 *) BoardTherm6__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm6_AG                     (* (reg8 *) BoardTherm6__AG)                       
/* Analog MUX bux enable */
#define BoardTherm6_AMUX                   (* (reg8 *) BoardTherm6__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm6_BIE                    (* (reg8 *) BoardTherm6__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm6_BIT_MASK               (* (reg8 *) BoardTherm6__BIT_MASK)
/* Bypass Enable */
#define BoardTherm6_BYP                    (* (reg8 *) BoardTherm6__BYP)
/* Port wide control signals */                                                   
#define BoardTherm6_CTL                    (* (reg8 *) BoardTherm6__CTL)
/* Drive Modes */
#define BoardTherm6_DM0                    (* (reg8 *) BoardTherm6__DM0) 
#define BoardTherm6_DM1                    (* (reg8 *) BoardTherm6__DM1)
#define BoardTherm6_DM2                    (* (reg8 *) BoardTherm6__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm6_INP_DIS                (* (reg8 *) BoardTherm6__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm6_LCD_COM_SEG            (* (reg8 *) BoardTherm6__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm6_LCD_EN                 (* (reg8 *) BoardTherm6__LCD_EN)
/* Slew Rate Control */
#define BoardTherm6_SLW                    (* (reg8 *) BoardTherm6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm6_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm6_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm6__PRTDSI__OE_SEL0) 
#define BoardTherm6_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm6_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm6__PRTDSI__OUT_SEL0) 
#define BoardTherm6_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm6_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm6__SIO_CFG)
    #define BoardTherm6_SIO_HYST_EN        (* (reg8 *) BoardTherm6__SIO_HYST_EN)
    #define BoardTherm6_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm6__SIO_REG_HIFREQ)
    #define BoardTherm6_SIO_CFG            (* (reg8 *) BoardTherm6__SIO_CFG)
    #define BoardTherm6_SIO_DIFF           (* (reg8 *) BoardTherm6__SIO_DIFF)
#endif /* (BoardTherm6__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm6__INTSTAT)
    #define BoardTherm6_INTSTAT            (* (reg8 *) BoardTherm6__INTSTAT)
    #define BoardTherm6_SNAP               (* (reg8 *) BoardTherm6__SNAP)
    
	#define BoardTherm6_0_INTTYPE_REG 		(* (reg8 *) BoardTherm6__0__INTTYPE)
#endif /* (BoardTherm6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm6_H */


/* [] END OF FILE */
