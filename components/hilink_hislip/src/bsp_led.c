#include "bsp_led.h"   

 /**
  * @brief  ��ʼ������LED��IO
  * @param  ��
  * @retval ��
  */
void LED_GPIO_Config(void)
{		
    /*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
    GPIO_InitTypeDef GPIO_InitStruct;
	__HAL_RCC_GPIOI_CLK_ENABLE();
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	GPIO_InitStruct.Pin = LED1_PIN | LED2_PIN | LED3_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	//GPIO_InitStruct.Alternate = 
	HAL_GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);
		
    /*�ر�RGB��*/
    LED_RGBOFF;		
}
/*********************************************END OF FILE**********************/
