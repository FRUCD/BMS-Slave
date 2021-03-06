/*******************************************************************************
* File Name: BoardTherm8.h  
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

#if !defined(CY_PINS_BoardTherm8_H) /* Pins BoardTherm8_H */
#define CY_PINS_BoardTherm8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm8_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm8__PORT == 15 && ((BoardTherm8__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm8_Write(uint8 value);
void    BoardTherm8_SetDriveMode(uint8 mode);
uint8   BoardTherm8_ReadDataReg(void);
uint8   BoardTherm8_Read(void);
void    BoardTherm8_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm8_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm8_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm8_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm8_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm8_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm8_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm8_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm8_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm8_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm8_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm8_MASK               BoardTherm8__MASK
#define BoardTherm8_SHIFT              BoardTherm8__SHIFT
#define BoardTherm8_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm8__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm8_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm8_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm8_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm8_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm8_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm8_INTR_MASK      (0x01u) 
#endif /* (BoardTherm8__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm8_PS                     (* (reg8 *) BoardTherm8__PS)
/* Data Register */
#define BoardTherm8_DR                     (* (reg8 *) BoardTherm8__DR)
/* Port Number */
#define BoardTherm8_PRT_NUM                (* (reg8 *) BoardTherm8__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm8_AG                     (* (reg8 *) BoardTherm8__AG)                       
/* Analog MUX bux enable */
#define BoardTherm8_AMUX                   (* (reg8 *) BoardTherm8__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm8_BIE                    (* (reg8 *) BoardTherm8__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm8_BIT_MASK               (* (reg8 *) BoardTherm8__BIT_MASK)
/* Bypass Enable */
#define BoardTherm8_BYP                    (* (reg8 *) BoardTherm8__BYP)
/* Port wide control signals */                                                   
#define BoardTherm8_CTL                    (* (reg8 *) BoardTherm8__CTL)
/* Drive Modes */
#define BoardTherm8_DM0                    (* (reg8 *) BoardTherm8__DM0) 
#define BoardTherm8_DM1                    (* (reg8 *) BoardTherm8__DM1)
#define BoardTherm8_DM2                    (* (reg8 *) BoardTherm8__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm8_INP_DIS                (* (reg8 *) BoardTherm8__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm8_LCD_COM_SEG            (* (reg8 *) BoardTherm8__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm8_LCD_EN                 (* (reg8 *) BoardTherm8__LCD_EN)
/* Slew Rate Control */
#define BoardTherm8_SLW                    (* (reg8 *) BoardTherm8__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm8_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm8__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm8_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm8__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm8_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm8__PRTDSI__OE_SEL0) 
#define BoardTherm8_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm8__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm8_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm8__PRTDSI__OUT_SEL0) 
#define BoardTherm8_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm8__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm8_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm8__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm8__SIO_CFG)
    #define BoardTherm8_SIO_HYST_EN        (* (reg8 *) BoardTherm8__SIO_HYST_EN)
    #define BoardTherm8_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm8__SIO_REG_HIFREQ)
    #define BoardTherm8_SIO_CFG            (* (reg8 *) BoardTherm8__SIO_CFG)
    #define BoardTherm8_SIO_DIFF           (* (reg8 *) BoardTherm8__SIO_DIFF)
#endif /* (BoardTherm8__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm8__INTSTAT)
    #define BoardTherm8_INTSTAT            (* (reg8 *) BoardTherm8__INTSTAT)
    #define BoardTherm8_SNAP               (* (reg8 *) BoardTherm8__SNAP)
    
	#define BoardTherm8_0_INTTYPE_REG 		(* (reg8 *) BoardTherm8__0__INTTYPE)
#endif /* (BoardTherm8__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm8_H */


/* [] END OF FILE */
