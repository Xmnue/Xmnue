/*
 * Copyright (c) as9700, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __LINUX_AS9700_H__
#define __LINUX_AS9700_H__

#define AS9700_VENDOR_ID_MASK	(3 << 1)
#define AS9700_VENDOR_ID		0xF1


/* AS9700 register */
#define AS9700_REG_VOUTP		0x00
#define AS9700_REG_VOUTN		0x01
#define AS9700_REG_APPS		    0x03
#define AS9700_REG_CTRL		    0x02

#define AS9700_REG_MAX			0x06
/*register read/write access*/

#define AS_I2C_RETRIES			5



struct as9700_power {
	struct i2c_client *client;
	struct device *dev;
	struct regulator_init_data *init_data;
	struct regulator_dev *regulators[2];
	struct device_node *as_node[2];
	int vendorID;
	int enn_gpio;
	int enp_gpio;
	int read_power_mode;
	int outp;
	int outn;
	int outn_set;
	int outp_set;
	int read_outp;
	int read_outn;
	int as9700_gpio_ctrl;
	unsigned select;

};

#endif
