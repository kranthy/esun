/* Copyright @ Blu Systems Pvt Ltd */
#ifndef __GPIO_CTL_H
#define __GPIO_CTL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

/******************************************************************************************************************
| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- |

# Example: GPIO

(See the README.md file in the upper level 'examples' directory for more information about examples.)

This test code shows how to configure GPIO and how to use it with interruption.

## GPIO functions:

| GPIO                         | Direction | Configuration                                          |
| ---------------------------- | --------- | ------------------------------------------------------ |
| CONFIG_GPIO_OUTPUT_0         | output    |                                                        |
| CONFIG_GPIO_OUTPUT_1         | output    |                                                        |
| CONFIG_GPIO_INPUT_0          | input     | pulled up, interrupt from rising edge and falling edge |
| CONFIG_GPIO_INPUT_1          | input     | pulled up, interrupt from rising edge                  |

## Test:
 1. Connect CONFIG_GPIO_OUTPUT_0 with CONFIG_GPIO_INPUT_0
 2. Connect CONFIG_GPIO_OUTPUT_1 with CONFIG_GPIO_INPUT_1
 3. Generate pulses on CONFIG_GPIO_OUTPUT_0/1, that triggers interrupt on CONFIG_GPIO_INPUT_0/1

 **Note:** The following pin assignments are used by default, you can change them by `idf.py menuconfig` > `Example Configuration`.

|                 | CONFIG_GPIO_OUTPUT_0 | CONFIG_GPIO_OUTPUT_1 | CONFIG_GPIO_INPUT_0 | CONFIG_GPIO_INPUT_1 |
| --------------- | -------------------- | -------------------- | ------------------- | ------------------- |
| ESP32-C2/ESP32H2| 8                    | 9                    | 4                   | 5                   |
| All other chips | 18                   | 19                   | 4                   | 5                   |

## How to use example

Before project configuration and build, be sure to set the correct chip target using `idf.py set-target <chip_name>`.
*********************************************************************************************************************/



#endif // #ifndef __GPIO_CTL_H
