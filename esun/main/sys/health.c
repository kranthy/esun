/* Copyright @ Blu Systems Pvt Ltd */
#include "esp_chip_info.h"
#include "esp_flash.h"

#include "health.h"

//static const char *TAG = "SYS:HEALTH";

/* Heartbeat rask */
static void hb_task(void *args)
{
    esp_chip_info_t chip_info;
    uint32_t flash_size;

    printf("System Info \n");

    esp_chip_info(&chip_info);
    printf("This is %s chip with %d CPU core(s), WiFi%s%s, ",
        CONFIG_IDF_TARGET,
        chip_info.cores,
        (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
        (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

    unsigned major_rev = chip_info.revision / 100;
    unsigned minor_rev = chip_info.revision % 100;
    printf("silicon revision v%d.%d, ", major_rev, minor_rev);
    if(esp_flash_get_size(NULL, &flash_size) != ESP_OK) {
        printf("Get flash size failed");
        return;
    }

    printf("%lxMB %s flash\n", flash_size / (1024 * 1024),
           (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

    while (1) {
        printf("Minimum free heap size: %ld bytes\n", esp_get_minimum_free_heap_size());
        vTaskDelay(pdMS_TO_TICKS(HB_TASK_INTERVAL));
    }
}

void health_init(void)
{
  xTaskCreate(&hb_task, "hb_task", 3072, NULL, 5, NULL);
}
