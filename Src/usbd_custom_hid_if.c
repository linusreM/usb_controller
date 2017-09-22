/**
  ******************************************************************************
  * @file           : usbd_custom_hid_if.c
  * @brief          : USB Device Custom HID interface file.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "usbd_custom_hid_if.h"
/* USER CODE BEGIN INCLUDE */
/* USER CODE END INCLUDE */
/** @addtogroup STM32_USB_OTG_DEVICE_LIBRARY
  * @{
  */

/** @defgroup USBD_CUSTOM_HID 
  * @brief usbd core module
  * @{
  */ 

/** @defgroup USBD_CUSTOM_HID_Private_TypesDefinitions
  * @{
  */ 
/* USER CODE BEGIN PRIVATE_TYPES */
/* USER CODE END PRIVATE_TYPES */ 
/**
  * @}
  */ 

/** @defgroup USBD_CUSTOM_HID_Private_Defines
  * @{
  */ 
/* USER CODE BEGIN PRIVATE_DEFINES */
/* USER CODE END PRIVATE_DEFINES */
  
/**
  * @}
  */ 

/** @defgroup USBD_CUSTOM_HID_Private_Macros
  * @{
  */ 
/* USER CODE BEGIN PRIVATE_MACRO */
/* USER CODE END PRIVATE_MACRO */

/**
  * @}
  */ 

/** @defgroup USBD_AUDIO_IF_Private_Variables
 * @{
 */
__ALIGN_BEGIN static uint8_t CUSTOM_HID_ReportDesc_FS[USBD_CUSTOM_HID_REPORT_DESC_SIZE] __ALIGN_END =
{
  /* USER CODE BEGIN 0 */ 
		//0xAC,              // Unknown (bTag: 0x0A, bType: 0x03)
		0x08,              // Usage
		//0x0D, 0x0D,        // Unknown (bTag: 0x00, bType: 0x03)
		0x05, 0x01,        // Usage Page (Generic Desktop Ctrls)
		0x09, 0x02,        // Usage (Mouse)
		0xA1, 0x01,        // Collection (Application)
		0x09, 0x01,        //   Usage (Pointer)
		0xA1, 0x00,        //   Collection (Physical)
		0x05, 0x09,        //     Usage Page (Button)
		0x19, 0x01,        //     Usage Minimum (0x01)
		0x29, 0x03,        //     Usage Maximum (0x03)
		0x15, 0x00,        //     Logical Minimum (0)
		0x25, 0x01,        //     Logical Maximum (1)
		0x95, 0x03,        //     Report Count (3)
		0x75, 0x01,        //     Report Size (1)
		0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0x95, 0x01,        //     Report Count (1)
		0x75, 0x05,        //     Report Size (5)
		0x81, 0x01,        //     Input (Const,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0x05, 0x01,        //     Usage Page (Generic Desktop Ctrls)
		0x09, 0x30,        //     Usage (X)
		0x09, 0x31,        //     Usage (Y)
		0x09, 0x38,        //     Usage (Wheel)
		0x15, 0x81,        //     Logical Minimum (-127)
		0x25, 0x7F,        //     Logical Maximum (127)
		0x75, 0x08,        //     Report Size (8)
		0x95, 0x03,        //     Report Count (3)
		0x81, 0x06,        //     Input (Data,Var,Rel,No Wrap,Linear,Preferred State,No Null Position)
		0x05, 0x07,        //     Usage Page (Kbrd/Keypad)
		0x19, 0xE0,        //     Usage Minimum (0xE0)
		0x29, 0xE7,        //     Usage Maximum (0xE7)
		0x15, 0x00,        //     Logical Minimum (0)
		0x25, 0x01,        //     Logical Maximum (1)
		0x75, 0x01,        //     Report Size (1)
		0x95, 0x08,        //     Report Count (8)
		0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0x95, 0x06,        //     Report Count (6)
		0x75, 0x08,        //     Report Size (8)
		0x15, 0x00,        //     Logical Minimum (0)
		0x25, 0x65,        //     Logical Maximum (101)
		0x05, 0x07,        //     Usage Page (Kbrd/Keypad)
		0x19, 0x00,        //     Usage Minimum (0x00)
		0x29, 0x65,        //     Usage Maximum (0x65)
		0x81, 0x00,        //     Input (Data,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
		0xC0,              //   End Collection
		0x09, 0x3C,        //   Usage (0x3C)
		0x05, 0xFF,        //   Usage Page (Reserved 0xFF)
		0x09, 0x01,        //   Usage (0x01)
		0x15, 0x00,        //   Logical Minimum (0)
		0x25, 0x01,        //   Logical Maximum (255)
		0x75, 0x08,        //   Report Size (8)
		0x95, 0x10,        //   Report Count (16)
		0xB1, 0x22,        //   Feature (Data,Var,Abs,No Wrap,Linear,No Preferred State,No Null Position,Non-volatile)
		//0x75, 0x06,        //   Report Size (8)
		//0x95, 0x04,        //   Report Count (4)
		//0xB1, 0x01,        //   Feature (Const,Array,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)


		// 104 bytes
  /* USER CODE END 0 */

  /* USER CODE END 0 */ 
		0xC0    /*     END_COLLECTION	             */
   
}; 

/* USER CODE BEGIN PRIVATE_VARIABLES */
/* USER CODE END PRIVATE_VARIABLES */
/**
  * @}
  */ 
  
/** @defgroup USBD_CUSTOM_HID_IF_Exported_Variables
  * @{
  */ 
  extern USBD_HandleTypeDef hUsbDeviceFS;
/* USER CODE BEGIN EXPORTED_VARIABLES */
/* USER CODE END EXPORTED_VARIABLES */

/**
  * @}
  */ 
  
/** @defgroup USBD_CUSTOM_HID_Private_FunctionPrototypes
  * @{
  */
static int8_t CUSTOM_HID_Init_FS     (void);
static int8_t CUSTOM_HID_DeInit_FS   (void);
static int8_t CUSTOM_HID_OutEvent_FS (uint8_t event_idx, uint8_t state);
 

USBD_CUSTOM_HID_ItfTypeDef USBD_CustomHID_fops_FS = 
{
  CUSTOM_HID_ReportDesc_FS,
  CUSTOM_HID_Init_FS,
  CUSTOM_HID_DeInit_FS,
  CUSTOM_HID_OutEvent_FS,
};

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  CUSTOM_HID_Init_FS
  *         Initializes the CUSTOM HID media low layer
  * @param  None
  * @retval Result of the operation: USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_Init_FS(void)
{ 
  /* USER CODE BEGIN 4 */ 
  return (0);
  /* USER CODE END 4 */ 
}

/**
  * @brief  CUSTOM_HID_DeInit_FS
  *         DeInitializes the CUSTOM HID media low layer
  * @param  None
  * @retval Result of the operation: USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_DeInit_FS(void)
{
  /* USER CODE BEGIN 5 */ 
  return (0);
  /* USER CODE END 5 */ 
}

/**
  * @brief  CUSTOM_HID_OutEvent_FS
  *         Manage the CUSTOM HID class events       
  * @param  event_idx: event index
  * @param  state: event state
  * @retval Result of the operation: USBD_OK if all operations are OK else USBD_FAIL
  */
static int8_t CUSTOM_HID_OutEvent_FS  (uint8_t event_idx, uint8_t state)
{ 
  /* USER CODE BEGIN 6 */ 
  return (0);
  /* USER CODE END 6 */ 
}

/* USER CODE BEGIN 7 */ 
/**
  * @brief  USBD_CUSTOM_HID_SendReport_FS
  *         Send the report to the Host       
  * @param  report: the report to be sent
  * @param  len: the report length
  * @retval Result of the operation: USBD_OK if all operations are OK else USBD_FAIL
  */
/*  
static int8_t USBD_CUSTOM_HID_SendReport_FS ( uint8_t *report,uint16_t len)
{
  return USBD_CUSTOM_HID_SendReport(&hUsbDeviceFS, report, len); 
}
*/
/* USER CODE END 7 */ 

/* USER CODE BEGIN PRIVATE_FUNCTIONS_IMPLEMENTATION */
/* USER CODE END PRIVATE_FUNCTIONS_IMPLEMENTATION */

/**
  * @}
  */ 

/**
  * @}
  */  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
