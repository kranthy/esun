/* Copyright @ Blu Systems Pvt Ltd */
#ifndef __SOFTAP_H
#define __SOFTAP_H

#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

#include "esp_mac.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"

/* Wifi Event handler */
typedef void wifi_event_handler_t(void* arg, esp_event_base_t evt_base,
                        int32_t evt_id, void* evt_data);

/* Monitor the system health, creates heartbeat task */
//void wifi_sap_init(wifi_event_handler_t hndlr);
void wifi_sap_init();

void wifi_init();

#endif // #ifndef __SOFTAP_H