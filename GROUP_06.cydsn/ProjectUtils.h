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

#define BUFFER_SIZE 7
#define RW_SIZE		2

#define MASK_BIT_0  		(1<<CTRL_REG_Status_Bit_0)
#define MASK_BIT_1  		(1<<CTRL_REG_Status_Bit_1)

#define DEVICE_STOPPED  	0
#define TMP_SAMPLING        1
#define LDR_SAMPLING        2
#define BOTH_SAMPLING       3

#define CTRL_REGISTER_1_BYTE 0 
#define CTRL_REGISTER_2_BYTE 1
#define WHO_AM_I 			 2
#define TMP_Bit_15_8		 3
#define TMP_Bit_07_0		 4
#define LDR_Bit_15_8		 5
#define LDR_Bit_07_0		 6

#define CTRL_REG_Status_Bit_0 			0
#define CTRL_REG_Status_Bit_1 			1
#define CTRL_REG_AverageSample_Bit_0 	2
#define CTRL_REG_AverageSample_Bit_1 	3
#define CTRL_REG_AverageSample_Bit_2 	4
#define CTRL_REG_AverageSample_Bit_3 	5

#define BLUE_LED_OFF 0
#define BLUE_LED_ON 1

#define SINGLE_CHANNEL_PERIOD 200
#define DOUBLE_CHANNEL_PERIOD 100

#define CHANNEL_TMP 0
#define CHANNEL_LDR 1

#define SAMPLES_FOR_AVG 5

char STATE, old_STATE;

//MACRO FOR FUNCTIONS
void startComponents(void);
void stopComponents(void);
char checkStatus(uint8_t *buffer);
void resetBuffer(uint8_t *buffer, int length);
char incrementAverageCounter(char *buffer);

/* [] END OF FILE */
