/*
 * USB_macropad.cpp
 *
 * Created: 10/21/2019 5:07:04 PM
 * Author : dtnra
 */ 

#include <avr/io.h>

#define USB_DEVICE_VENDOR_ID 0x03EB
#define USB_DEVICE_PRODUCT_ID 0xXXXX
#define USB_DEVICE_MAJOR_VERSION 1
#define USB_DEVICE_MINOR_VERSION 0
#define USB_DEVICE_POWER 100
#define USB_DEVICE_ATTR USB_CONFIG_ATTR_BUS_POWERED

int main(void)
{
	udc_start();
    /* Replace with your application code */
    while (1) 
    {
    }
}

