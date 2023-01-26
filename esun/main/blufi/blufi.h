/* Copyright @ Blu Systems Pvt Ltd */

#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

#include "esp_err.h"
#include "esp_blufi_api.h"
#include "esp_log.h"
#include "esp_blufi.h"

#include "esp_bt.h"
#include "esp_bt_main.h"
#include "esp_bt_device.h"

/* Init blufi */
void blufi_init(void);
