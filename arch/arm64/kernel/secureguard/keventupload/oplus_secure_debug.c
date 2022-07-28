/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/string.h>

#include "oplus_secure_debug.h"

void print_format(unsigned char * temp,unsigned int len)
{
	unsigned int i=0;
	printk(" ");
	for(i=0;i<len;i++)
	{
		if(temp[i]<16)
			printk("0%x",temp[i]);
		else
			printk("%x",temp[i]);


		if(i%32==31)
			printk("\n");
		if((i%16==7)||(i%16==15))
			printk(" ");
	}
	if(len%16!=15)
		printk("\n");
	printk("\n\n");

}

