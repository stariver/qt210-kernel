/*
 * Copyright (C) 2011 Samsung Electronics Co.Ltd
 * Author: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __PLAT_S5P_OHCI_H
#define __PLAT_S5P_OHCI_H

struct s5p_ohci_platdata {
	int (*phy_init)(struct platform_device *pdev, int type);
	int (*phy_exit)(struct platform_device *pdev, int type);
	void(*port_status)(int connected);
};

extern void s5p_ohci_set_platdata(struct s5p_ohci_platdata *pd);

#endif /* __PLAT_S5P_OHCI_H */