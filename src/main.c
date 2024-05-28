/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
void main(void){
	while(1){
		print("hello word! %s\n", CONFIG_BOARD);
		k_sleep(K_SECONDS(1));
	}
}