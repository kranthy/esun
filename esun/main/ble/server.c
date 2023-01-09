/* Copyright @ Blu Systems Pvt Ltd */
#include "ble/server.h"

//static const char *TAG = "BLE:SRVR";

/* Heartbeat rask */
static void ble_srvr_task(void *args)
{
    while (1) {
        printf("BLE Server: Minimum free heap size: %ld bytes\n", esp_get_minimum_free_heap_size());
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}

void ble_srvr_init(void)
{
  xTaskCreate(&ble_srvr_task, "ble_srvr_task", 3072, NULL, 5, NULL);
}
