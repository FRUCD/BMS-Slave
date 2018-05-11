/*******************************************************************************
* File Name: BoardTherm5.h  
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

#if !defined(CY_PINS_BoardTherm5_H) /* Pins BoardTherm5_H */
#define CY_PINS_BoardTherm5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BoardTherm5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BoardTherm5__PORT == 15 && ((BoardTherm5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    BoardTherm5_Write(uint8 value);
void    BoardTherm5_SetDriveMode(uint8 mode);
uint8   BoardTherm5_ReadDataReg(void);
uint8   BoardTherm5_Read(void);
void    BoardTherm5_SetInterruptMode(uint16 position, uint16 mode);
uint8   BoardTherm5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the BoardTherm5_SetDriveMode() function.
     *  @{
     */
        #define BoardTherm5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define BoardTherm5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define BoardTherm5_DM_RES_UP          PIN_DM_RES_UP
        #define BoardTherm5_DM_RES_DWN         PIN_DM_RES_DWN
        #define BoardTherm5_DM_OD_LO           PIN_DM_OD_LO
        #define BoardTherm5_DM_OD_HI           PIN_DM_OD_HI
        #define BoardTherm5_DM_STRONG          PIN_DM_STRONG
        #define BoardTherm5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define BoardTherm5_MASK               BoardTherm5__MASK
#define BoardTherm5_SHIFT              BoardTherm5__SHIFT
#define BoardTherm5_WIDTH              1u

/* Interrupt constants */
#if defined(BoardTherm5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BoardTherm5_SetInterruptMode() function.
     *  @{
     */
        #define BoardTherm5_INTR_NONE      (uint16)(0x0000u)
        #define BoardTherm5_INTR_RISING    (uint16)(0x0001u)
        #define BoardTherm5_INTR_FALLING   (uint16)(0x0002u)
        #define BoardTherm5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define BoardTherm5_INTR_MASK      (0x01u) 
#endif /* (BoardTherm5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BoardTherm5_PS                     (* (reg8 *) BoardTherm5__PS)
/* Data Register */
#define BoardTherm5_DR                     (* (reg8 *) BoardTherm5__DR)
/* Port Number */
#define BoardTherm5_PRT_NUM                (* (reg8 *) BoardTherm5__PRT) 
/* Connect to Analog Globals */                                                  
#define BoardTherm5_AG                     (* (reg8 *) BoardTherm5__AG)                       
/* Analog MUX bux enable */
#define BoardTherm5_AMUX                   (* (reg8 *) BoardTherm5__AMUX) 
/* Bidirectional Enable */                                                        
#define BoardTherm5_BIE                    (* (reg8 *) BoardTherm5__BIE)
/* Bit-mask for Aliased Register Access */
#define BoardTherm5_BIT_MASK               (* (reg8 *) BoardTherm5__BIT_MASK)
/* Bypass Enable */
#define BoardTherm5_BYP                    (* (reg8 *) BoardTherm5__BYP)
/* Port wide control signals */                                                   
#define BoardTherm5_CTL                    (* (reg8 *) BoardTherm5__CTL)
/* Drive Modes */
#define BoardTherm5_DM0                    (* (reg8 *) BoardTherm5__DM0) 
#define BoardTherm5_DM1                    (* (reg8 *) BoardTherm5__DM1)
#define BoardTherm5_DM2                    (* (reg8 *) BoardTherm5__DM2) 
/* Input Buffer Disable Override */
#define BoardTherm5_INP_DIS                (* (reg8 *) BoardTherm5__INP_DIS)
/* LCD Common or Segment Drive */
#define BoardTherm5_LCD_COM_SEG            (* (reg8 *) BoardTherm5__LCD_COM_SEG)
/* Enable Segment LCD */
#define BoardTherm5_LCD_EN                 (* (reg8 *) BoardTherm5__LCD_EN)
/* Slew Rate Control */
#define BoardTherm5_SLW                    (* (reg8 *) BoardTherm5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BoardTherm5_PRTDSI__CAPS_SEL       (* (reg8 *) BoardTherm5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BoardTherm5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BoardTherm5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BoardTherm5_PRTDSI__OE_SEL0        (* (reg8 *) BoardTherm5__PRTDSI__OE_SEL0) 
#define BoardTherm5_PRTDSI__OE_SEL1        (* (reg8 *) BoardTherm5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BoardTherm5_PRTDSI__OUT_SEL0       (* (reg8 *) BoardTherm5__PRTDSI__OUT_SEL0) 
#define BoardTherm5_PRTDSI__OUT_SEL1       (* (reg8 *) BoardTherm5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BoardTherm5_PRTDSI__SYNC_OUT       (* (reg8 *) BoardTherm5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(BoardTherm5__SIO_CFG)
    #define BoardTherm5_SIO_HYST_EN        (* (reg8 *) BoardTherm5__SIO_HYST_EN)
    #define BoardTherm5_SIO_REG_HIFREQ     (* (reg8 *) BoardTherm5__SIO_REG_HIFREQ)
    #define BoardTherm5_SIO_CFG            (* (reg8 *) BoardTherm5__SIO_CFG)
    #define BoardTherm5_SIO_DIFF           (* (reg8 *) BoardTherm5__SIO_DIFF)
#endif /* (BoardTherm5__SIO_CFG) */

/* Interrupt Registers */
#if defined(BoardTherm5__INTSTAT)
    #define BoardTherm5_INTSTAT            (* (reg8 *) BoardTherm5__INTSTAT)
    #define BoardTherm5_SNAP               (* (reg8 *) BoardTherm5__SNAP)
    
	#define BoardTherm5_0_INTTYPE_REG 		(* (reg8 *) BoardTherm5__0__INTTYPE)
#endif /* (BoardTherm5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BoardTherm5_H */


/* [] END OF FILE */
