/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

// Thermistors for cells and thermistors for the board itself (used for balancing)
#define N_OF_THERM 14
#define N_OF_BOARD 9

enum {
    IDLE,
    BYTE_2,
    BYTE_3,
    ENABLE_TRANSMIT,
    TRANSMITTING
} typedef STATE;

uint8_t ENABLE_BYTES[3];
uint8_t ADDRESS;
STATE CURRENT_STATE = 0x0;

uint16_t thermResults[N_OF_THERM];
uint16_t boardResults[N_OF_BOARD]; 

uint16_t thermVolts[N_OF_THERM];
uint16_t boardVolts[N_OF_BOARD];

uint8_t test[46];

void updateVolts();
void init();

int main(void)
{
    init();
    
    for (int i = 0; i < 46; i++) {
        test[i] = i;   
    }
    CyGlobalIntEnable; /* Enable global interrupts. */

    ADC_Start();
    ADC_StartConvert(); // Running in free mode, so just continuously converts
    SPIS_Start();
    
    for(;;)
    {
        updateVolts();
        if (CURRENT_STATE == ENABLE_TRANSMIT) {
            updateVolts();
            SPIS_ClearTxBuffer();          // Clear buffer
            OE_Write(1);                   // Enable output
            
            for (int i = 0; i < 46; i++) {
                SPIS_WriteTxData(test[i]); // Put data in the buffer
            }
            SPIS_ClearRxBuffer(); 
            CURRENT_STATE = TRANSMITTING;
            CyDelay(100);                  // Give time for the data to be sent before disabling output
            OE_Write(0);                   // Disable output
            CURRENT_STATE = IDLE;
        }
        
        
        
        /*
        works
        if (SENDING_FLAG == 0x1) {
            //OE_Write(1);
            SPIS_ClearTxBuffer();
            for (int i = 0; i < 23; i++) {
                SPIS_WriteTxData(test[i]);
            }
            SPIS_ClearRxBuffer();
            SENDING_FLAG = 0x2;
            //while(SPIS_GetRxBufferSize() > 0);
            CyDelay(100);
            OE_Write(0);
        }
        */
        /*
        SPIS_ClearTxBuffer();
        SPIS_ClearRxBuffer();
        while(SPIS_GetRxBufferSize() < 1);
        uint8_t data = SPIS_ReadRxData();
        
        if (data == 0xAF) { // Command for psoc on subpack 1 
            updateVolts();
            for (int i = 0; i < N_OF_THERM; i++) {
                SPIS_WriteTxData(thermVolts[i] >> 8); // Top four bits
                SPIS_WriteTxData(thermVolts[i] & 0xFF); // Bottom byte
            }
                
            for (int i = 0; i < N_OF_BOARD; i++) {
                SPIS_WriteTxData(boardVolts[i] >> 8);
                SPIS_WriteTxData(boardVolts[i] & 0xFF);
            }
            while(SPIS_GetTxBufferSize() > 0);
        }
        */
    }
}

void updateVolts() {
    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT); // Blocks until conversion is done
        
    for (int i = 0; i < N_OF_THERM; i++) {
        thermResults[i] = ADC_GetResult16(i);   
    }
        
    for (int i = 0; i < N_OF_BOARD; i++) {
        boardResults[i] = ADC_GetResult16(N_OF_THERM + i);   
    }
        
    for (int i = 0; i < N_OF_THERM; i++) {
        thermVolts[i] = ADC_CountsTo_mVolts(thermResults[i]);   
    }
        
    for (int i = 0; i < N_OF_BOARD; i++) {
        boardVolts[i] = ADC_CountsTo_mVolts(boardResults[i]);
    }
}

void SPIS_RX_ISR_ExitCallback() {
    uint8_t data = SPIS_ReadRxData();
    
    switch (CURRENT_STATE) {
        case IDLE:
            if (data == ENABLE_BYTES[0]) {
                CURRENT_STATE = BYTE_2;
            }  
            break;
        case BYTE_2:
            if (data == ENABLE_BYTES[1]) {
                CURRENT_STATE = BYTE_3;
            } else {
                CURRENT_STATE = IDLE;   
            }
            break;
        case BYTE_3:
            if (data == ENABLE_BYTES[2]) {
                CURRENT_STATE = ENABLE_TRANSMIT;
            } else {
                CURRENT_STATE = IDLE;   
            }
            break;
        default:
            break;
            
    }
    
}

void init() {
    ADDRESS = 0x00           | Address1_Read(); // MSB
    ADDRESS = (ADDRESS << 1) | Address2_Read();
    ADDRESS = (ADDRESS << 1) | Address3_Read();
    ADDRESS = (ADDRESS << 1) | Address4_Read(); // LSB
    
    for (int i = 0; i < 3; i++)
        ENABLE_BYTES[i] = (0x80 | (ADDRESS << 3)) + i;
}

/* [] END OF FILE */
