/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/* GPIO ID    | label
  PA0         | A0
  PA1         | A1
  PA2         | D1/TX
  PA3         | D0/RX
  PA4         | A2
  PA5         | D13/SCK
  PA6         | D12/MISO
  PA7         | D11/PWM/MOSI
  PA8         | D7
  PA9         | D8
  PA10        | D2
  PA11        |
  PA12        |
  PA13        |
  PA14        |
  PA15        |
  PB0         | A3
  PB1         |
  PB2         |
  PB3         | D3/PWM
  PB4         | D5/PWM
  PB5         | D4
  PB6         | D10/PWM/CS
  PB7         |
  PB8         | D15/SCL
  PB9         | D14/SDA
  PB10        | D6/PWM
  PB11        |
  PB12        |
  PB13        |
  PB14        |
  PB15        |
  PC0         | A5
  PC1         | A4
  PC2         |
  PC3         |
  PC4         |
  PC5         |
  PC6         |
  PC7         | D9/PWM
  PC8         |
  PC9         |
  PC10        |
  PC11        |
  PC12        |
  PC13        |
  PC14        |
  PC15        |

*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Pins descriptions
 */
extern const PinDescription g_APinDescription[]=

//  arduino_id  |     ulPin    |   ulPort | mode               |          configured
{
  { ARDUINO_PIN_A0,   GPIO_PIN_0,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC ,                    false },
  { ARDUINO_PIN_A1,   GPIO_PIN_1,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC ,                    false },
  { ARDUINO_PIN_D1,   GPIO_PIN_2,  GPIOA, GPIO_PIN_IO|GPIO_PIN_UART_TX ,                false },
  { ARDUINO_PIN_D0,   GPIO_PIN_3,  GPIOA, GPIO_PIN_IO|GPIO_PIN_UART_RX ,                false },
  { ARDUINO_PIN_A2,   GPIO_PIN_4,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC ,                    false },
  { ARDUINO_PIN_D13,  GPIO_PIN_5,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_SCK,                 false },
  { ARDUINO_PIN_D12,  GPIO_PIN_6,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_MISO ,               false },
  { ARDUINO_PIN_D11,  GPIO_PIN_7,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_MOSI|GPIO_PIN_PWM,   false },
  { ARDUINO_PIN_D7,   GPIO_PIN_8,  GPIOA, GPIO_PIN_IO,                                  false },
  { ARDUINO_PIN_D8,   GPIO_PIN_9,  GPIOA, GPIO_PIN_IO,                                  false },
  { ARDUINO_PIN_D2,   GPIO_PIN_10, GPIOA, GPIO_PIN_IO,                                  false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_11, GPIOA, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_12, GPIOA, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_13, GPIOA, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_14, GPIOA, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_15, GPIOA, GPIO_PIN_MORPHO_ONLY ,                        false },
  { ARDUINO_PIN_A3,   GPIO_PIN_0,  GPIOB, GPIO_PIN_ADC,                                 false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_1,  GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_2,  GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_D3,   GPIO_PIN_3,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { ARDUINO_PIN_D5,   GPIO_PIN_4,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { ARDUINO_PIN_D4,   GPIO_PIN_5,  GPIOB, GPIO_PIN_IO,                                  false },
  { ARDUINO_PIN_D10,  GPIO_PIN_6,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM|GPIO_PIN_SPI_CS,     false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_7,  GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_D15,  GPIO_PIN_8,  GPIOB, GPIO_PIN_IO|GPIO_PIN_I2C_SCL,                 false },
  { ARDUINO_PIN_D14,  GPIO_PIN_9,  GPIOB, GPIO_PIN_IO|GPIO_PIN_I2C_SDA,                 false },
  { ARDUINO_PIN_D6,   GPIO_PIN_10, GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_11, GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_12, GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_13, GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_14, GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_15, GPIOB, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_A5,   GPIO_PIN_0,  GPIOC, GPIO_PIN_IO|GPIO_PIN_ADC,                     false },
  { ARDUINO_PIN_A4,   GPIO_PIN_1,  GPIOC, GPIO_PIN_IO|GPIO_PIN_ADC,                     false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_2,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_3,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_4,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_5,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_6,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_D9,   GPIO_PIN_7,  GPIOC, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_8,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_9,  GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_10, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_11, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_12, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_13, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_14, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false },
  { ARDUINO_PIN_EXT,  GPIO_PIN_15, GPIOC, GPIO_PIN_MORPHO_ONLY,                         false }
} ;

#ifdef __cplusplus
}
#endif

/*
 * UART objects
 */

UARTClass Serial(USART2_E);    //available on PA2/PA3
UARTClass Serial1(USART1_E);   //available on PA9/PA10
USARTClass Serial2(USART2_E);  //available on PA2/PA3
USARTClass Serial3(USART4_E);   //available on PA0/PA1

void serialEvent() __attribute__((weak));
void serialEvent() { }

void serialEventRun(void)
{
  if (Serial.available()) serialEvent();
}

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

void __libc_init_array(void);


void init( void )
{
  hw_config_init();
}

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI48;
  RCC_OscInitStruct.HSI48State = RCC_HSI48_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              | RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI48;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1);

  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

#ifdef __cplusplus
}
#endif
