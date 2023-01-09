/* Copyright @ Blu Systems Pvt Ltd */
#include <stdio.h>

#include "nrgy/monitor.h"
#include "sys/health.h"

void app_main(void)
{

  health_init();

  monitor_main();

}
