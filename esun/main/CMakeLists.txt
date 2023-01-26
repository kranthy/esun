idf_component_register(SRCS 
                        "esun.c" "nrgy/monitor.c" "sys/health.c" "wifi/softap.c" "ble/server.c" "blufi/blufi.c"
                        INCLUDE_DIRS ".")
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
