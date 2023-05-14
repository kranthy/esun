/* Copyright @ Blu Systems Pvt Ltd */
#ifndef __CONFIG_H
#define __CONFIG_H

#include "sdkconfig.h"

#include "esp_adc/adc_continuous.h"

/* Device specific configurations */

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

#if CONFIG_IDF_TARGET_ESP32C3 || CONFIG_IDF_TARGET_ESP32S3 ||                  \
    CONFIG_IDF_TARGET_ESP32H2 || CONFIG_IDF_TARGET_ESP32C2
extern adc_channel_t channel[3];
#endif
#if CONFIG_IDF_TARGET_ESP32S2
extern adc_channel_t channel[3];
#endif
#if CONFIG_IDF_TARGET_ESP32
extern adc_channel_t channel[1];
#endif

#if CONFIG_IDF_TARGET_ESP32H2 || CONFIG_IDF_TARGET_ESP32C2
#define CONFIG_GPIO_OUTPUT_0    (8) 
#define CONFIG_GPIO_OUTPUT_1    (9)
#define CONFIG_GPIO_INPUT_0     (4)
#define CONFIG_GPIO_INPUT_1     (5)
#else
#define CONFIG_GPIO_OUTPUT_0    (18) 
#define CONFIG_GPIO_OUTPUT_1    (19)
#define CONFIG_GPIO_INPUT_0     (4)
#define CONFIG_GPIO_INPUT_1     (5)
#endif // gpio 

#endif // __CONFIG_H
