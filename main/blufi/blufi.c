/* Copyright @ Blu Systems Pvt Ltd */
#include "esp_wifi.h"

#include "blufi/blufi.h"
#include "cmn/cmn.h"
#include "wifi/softap.h"

// static const char *TAG = "BLUFI";

void blufi_init(void) {
    wifi_init();
}

esp_err_t esp_blufi_host_init(void) {
  int ret;
  ret = esp_bluedroid_init();
  if (ret) {
    printf("%s init bluedroid failed: %s\n", __func__,
                esp_err_to_name(ret));
    return ESP_FAIL;
  }

  ret = esp_bluedroid_enable();
  if (ret) {
    printf("%s init bluedroid failed: %s\n", __func__,
                esp_err_to_name(ret));
    return ESP_FAIL;
  }
  printf("BD ADDR: " ESP_BD_ADDR_STR "\n",
             ESP_BD_ADDR_HEX(esp_bt_dev_get_address()));

  return ESP_OK;
}

esp_err_t esp_blufi_gap_register_callback(void) {
  int rc;
  rc = esp_ble_gap_register_callback(esp_blufi_gap_event_handler);
  if (rc) {
    return rc;
  }
  return esp_blufi_profile_init();
}

esp_err_t esp_blufi_host_and_cb_init(esp_blufi_callbacks_t *example_callbacks) {
  esp_err_t ret = ESP_OK;

  ret = esp_blufi_host_init();
  if (ret) {
    printf("%s initialise host failed: %s\n", __func__,
                esp_err_to_name(ret));
    return ret;
  }

  ret = esp_blufi_register_callbacks(example_callbacks);
  if (ret) {
    printf("%s blufi register failed, error code = %x\n", __func__, ret);
    return ret;
  }

  ret = esp_blufi_gap_register_callback();
  if (ret) {
    printf("%s gap register failed, error code = %x\n", __func__, ret);
    return ret;
  }

  return ESP_OK;
}
