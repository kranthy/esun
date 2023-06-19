/* Copyright @ Blu Systems Pvt Ltd */

#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

/* Monitor the system health, creates heartbeat task */
void ble_srvr_init(void);
