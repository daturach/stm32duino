/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_NUCLEO_F303ZE)
#include "pins_arduino.h"

// Pin number
// Match Table Table 14. NUCLEO-F303ZE pin assignments
// from UM1974 STM32 Nucleo-144 board
const PinName digitalPin[] = {
  PC_5,  //D0
  PC_4, //D1
  PF_15, //D2
  PE_13, //D3
  PF_14, //D4
  PE_11, //D5
  PE_9,  //D6
  PF_13, //D7
  PF_12, //D8
  PD_15, //D9
  PD_14, //D10
  PA_7,  //D11 - If SB121, SB122 (ON,OFF) connected to PA7 (default, see D71)
  //      else SB121, SB122 (OFF,ON) connected to PB5 (D22)
  PA_6,  //D12
  PA_5,  //D13
  PB_9,  //D14
  PB_8,  //D15
  PC_6,  //D16
  PB_15, //D17
  PB_13, //D18 - used as I2S_A_CK and connected to CN7 pin 5 by default, if JP7 is ON,
  //      it is also connected to Ethernet PHY as RMII_TXD1. In this case only
  //      one function of Ethernet or I2S_A must be used.
  PB_12, //D19
  PA_15, //D20
  PC_7,  //D21
  PB_5,  //D22 - D11 if SB121 off, SB122 on
  PB_3,  //D23
  PA_4,  //D24
  PB_4,  //D25
  PB_6,  //D26
  PB_2,  //D27
  PF_10, //D28
  PF_5, //D29
  PF_3, //D30
  PE_2,  //D31 - PE2 is connected to both CN9 pin 14 (I/O) and CN10 pin 25 (I/O).
  //      Only one connector pin must be used at one time.
  PA_0,  //D32
  PB_0,  //D33 - LED1
  PE_0,  //D34
  PB_11, //D35
  PB_10, //D36
  PE_15, //D37
  PE_14, //D38
  PE_12, //D39
  PE_10, //D40
  PE_7,  //D41
  PE_8,  //D42
  PC_8,  //D43
  PC_9,  //D44
  PC_10, //D45
  PC_11, //D46
  PC_12, //D47
  PD_2,  //D48
  PG_2,  //D49
  PG_3,  //D50
  PD_7,  //D51
  PD_6,  //D52
  PD_5,  //D53
  PD_4,  //D54
  PD_3,  //D55
  PE_2,  //D56 - connected to both CN9 pin 14 (I/O) and CN10 pin 25 (I/O).
  //      Only one connector pin must be used at one time
  PE_4,  //D57
  PE_5,  //D58
  PE_6,  //D59
  PE_3,  //D60
  PF_8,  //D61
  PF_7,  //D62
  PF_9,  //D63
  PG_1,  //D64
  PG_0,  //D65
  PD_1,  //D66
  PD_0,  //D67
  PH_0,  //D68
  PH_1,  //D69
  PA_8,  //D70
  PA_7,  //D71 - used as D11 and connected to CN7 pin 14 by default, if JP6 is ON, it is also connected to CN9 pin 15
  //              as COMP2_INP. In this case only one function of the Comparator input or D11 must be used.
  PA_1,    //D72
  PB_7,  //D73 - LED_BLUE
  PB_14, //D74 - LED_RED
  PC_13, //D75 - USER_BTN
  PD_9,  //D76 - Serial Rx
  PD_8,  //D77 - Serial Tx
  PA_3,  //D78/A0
  PC_0,  //D79/A1
  PC_3,  //D80/A2
  PD_11,  //D81/A3
  PD_12,  //D82/A4
  PD_13, //D83/A5
  PB_1,  //D84/A6
  PC_2,  //D85/A7
  PF_4,  //D86/A8
  PF_6,  //D87/A9
  PD_10, //D88
  PE_1,  //D89
  PF_11, //D90
  PG_4,  //D91
  PG_5,  //D92
  PG_8,  //D93
  PG_10, //D94
  PG_12, //D95
  PG_15, //D96
  PA_1,  //D97
  PA_2,  //D98
  PC_1,  //D99
  PC_4,  //D100
  PC_5,  //D101
  PG_11, //D102
  PG_13, //D103
  PA_8,  //D104
  PA_9,  //D105
  PA_10, //D106
  PA_11, //D107
  PA_12, //D108
  PG_6,  //D109
  PG_7,  //D110
  PA_13, //D111 - PA13 and PA14 are shared with the SWD signals connected to ST-LINK/V2-1. If ST-LINK part is not cut, it is not recommended to use them as I/O pins.
  PA_14, //D112 - PA13 and PA14 are shared with the SWD signals connected to ST-LINK/V2-1. If ST-LINK part is not cut, it is not recommended to use them as I/O pins.
  PC_14, //D113
  PC_15, //D114
  PF_0,  //D115
  PF_1,   //D116
  PH_2  //D117
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  78, //A0
  79, //A1
  80, //A2
  81, //A3
  82, //A4
  83, //A5
  84, //A6
  85, //A7
  86, //A8
  87, //A9
  11, //A10
  12, //A11
  13, //A12
  24, //A13
  32, //A14
  61, //A15
  62, //A16
  63  //A17
};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI|RCC_OSCILLATORTYPE_LSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSI;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}


#ifdef __cplusplus
}
#endif
#endif /* ARDUINO_GENERIC_* */
