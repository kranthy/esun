/* Copyright @ Blu Systems Pvt Ltd */

#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

#define HB_TASK_INTERVAL (2000)

/* Monitor the system health, creates heartbeat task */
void wifi_sap_init(void);
