/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"

#include "FreeRTOS.h"

#include "task.h"

TaskHandle_t xTaskHandle1 = NULL;
TaskHandle_t xTaskHandle2 = NULL;

void vTask1_handler(void *params);
void vTask2_handler(void *params);

int main(void)
{	/*PUSH*/
	RCC_DeInit();
	SystemCoreClockUpdate();
	xTaskCreate(vTask1_handler,"Task1", configMINIMAL_STACK_SIZE, NULL, 2, &xTaskHandle1);
	xTaskCreate(vTask2_handler,"Task2", configMINIMAL_STACK_SIZE, NULL, 2, &xTaskHandle2);

	vTaskStartScheduler();

	for(;;);
}

void vTask1_handler(void *params)
{
	while(1);
}

void vTask2_handler(void *params)
{
	while(1);
}

