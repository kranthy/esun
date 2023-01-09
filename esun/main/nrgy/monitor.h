/* Copyright @ Blu Systems Pvt Ltd */

#include <string.h>
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

#include "esp_adc/adc_continuous.h"

#define EXAMPLE_READ_LEN   256
#define GET_UNIT(x)        ((x>>3) & 0x1)

#if CONFIG_IDF_TARGET_ESP32
#define ADC_CONV_MODE       ADC_CONV_SINGLE_UNIT_1  //ESP32 only supports ADC1 DMA mode
#define ADC_OUTPUT_TYPE     ADC_DIGI_OUTPUT_FORMAT_TYPE1
#elif CONFIG_IDF_TARGET_ESP32S2
#define ADC_CONV_MODE       ADC_CONV_BOTH_UNIT
#define ADC_OUTPUT_TYPE     ADC_DIGI_OUTPUT_FORMAT_TYPE2
#elif CONFIG_IDF_TARGET_ESP32C3 || CONFIG_IDF_TARGET_ESP32H2 || CONFIG_IDF_TARGET_ESP32C2
#define ADC_CONV_MODE       ADC_CONV_ALTER_UNIT     //ESP32C3 only supports alter mode
#define ADC_OUTPUT_TYPE     ADC_DIGI_OUTPUT_FORMAT_TYPE2
#elif CONFIG_IDF_TARGET_ESP32S3
#define ADC_CONV_MODE       ADC_CONV_BOTH_UNIT
#define ADC_OUTPUT_TYPE     ADC_DIGI_OUTPUT_FORMAT_TYPE2
#endif

void monitor_main(void);