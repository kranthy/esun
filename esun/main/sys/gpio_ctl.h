/* Copyright @ Blu Systems Pvt Ltd */
#ifndef __GPIO_CTL_H
#define __GPIO_CTL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

/******************************************************************************************************************
## GPIO functions:
| GPIO                         | Direction | Configuration                                          |
| ---------------------------- | --------- | ------------------------------------------------------ |
| CONFIG_GPIO_OUTPUT_0         | output    |                                                        |
| CONFIG_GPIO_OUTPUT_1         | output    |                                                        |
| CONFIG_GPIO_INPUT_0          | input     | pulled up, interrupt from rising edge and falling edge |
| CONFIG_GPIO_INPUT_1          | input     | pulled up, interrupt from rising edge                  |

These are defined in config.h 
|                 | CONFIG_GPIO_OUTPUT_0 | CONFIG_GPIO_OUTPUT_1 | CONFIG_GPIO_INPUT_0 | CONFIG_GPIO_INPUT_1 |
| --------------- | -------------------- | -------------------- | ------------------- | ------------------- |
| ESP32-C2/ESP32H2| 8                    | 9                    | 4                   | 5                   |
| All other chips | 18                   | 19                   | 4                   | 5                   |
*********************************************************************************************************************/



#endif // #ifndef __GPIO_CTL_H
