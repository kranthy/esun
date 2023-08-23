idf_component_register(SRCS 
                        "esun.c" "nrgy/monitor.c" "sys/health.c" "wifi/softap.c" "ble/server.c" "blufi/blufi.c" "nvs/nvs.c" "cmn/config.c" "cmn/cmn.c" 
                        "sys/gpio_ctl.c" "sys/uart_ctl.c" "blufi/blufi_sec.c"
                        INCLUDE_DIRS ".")
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
