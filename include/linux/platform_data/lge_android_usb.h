/* arch/arm/mach-msm/include/mach/lge/lge_android_usb.h
 *
 * Copyright (C) 2011, 2012 LG Electronics Inc.
 * Author : Hyeon H. Park <hyunhui.park@lge.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __LGE_ANDROID_USB_H__
#define __LGE_ANDROID_USB_H__

#include <mach/board_lge.h>

struct lge_android_usb_platform_data {
	__u16 vendor_id;
	__u16 factory_pid;
	__u8  iSerialNumber;
	char *product_name;
	char *manufacturer_name;
	char *factory_composition;
	int (*get_factory_cable)(void);
	int (*get_cable_adc)(struct chg_cable_info *c_info);
};

int lgeusb_get_pif_cable(void);

int lgeusb_get_vendor_id(void);
int lgeusb_get_factory_pid(void);
int lgeusb_get_serial_number(void);
int lgeusb_get_product_name(char *);
int lgeusb_get_manufacturer_name(char *);
int lgeusb_get_factory_composition(char *);

#define LGEUSB_FACTORY_56K 1
#define LGEUSB_FACTORY_130K 2
#define LGEUSB_FACTORY_910K 3

#endif /*                       */
