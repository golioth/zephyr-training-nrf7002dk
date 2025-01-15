/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(log_demo, LOG_LEVEL_DBG);


int main(void)
{
	int counter = 0;
	while(1) {
		printk("Hello World! %s\n", CONFIG_BOARD);
		//LOG_INF("Hello World! %d\n", counter);
		++counter;
		k_msleep(1000);
	}
}
