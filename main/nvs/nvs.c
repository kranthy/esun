/* Copyright Qev Systems */
#include "nvs.h"

void nvs_init(void) {
    esp_err_t ret = nvs_flash_init();

    ESP_ERROR_CHECK(ret);
}
