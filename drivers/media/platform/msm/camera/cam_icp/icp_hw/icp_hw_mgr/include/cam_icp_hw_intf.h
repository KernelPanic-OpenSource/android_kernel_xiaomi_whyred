/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2017-2018, The Linux Foundation. All rights reserved.
 */

#ifndef CAM_ICP_HW_INTF_H
#define CAM_ICP_HW_INTF_H

#define CAM_ICP_CMD_BUF_MAX_SIZE     128
#define CAM_ICP_MSG_BUF_MAX_SIZE     CAM_ICP_CMD_BUF_MAX_SIZE

enum cam_a5_hw_type {
	CAM_ICP_DEV_A5,
	CAM_ICP_DEV_IPE,
	CAM_ICP_DEV_BPS,
	CAM_ICP_DEV_MAX,
};

/**
 * struct cam_a5_clk_update_cmd - Payload for hw manager command
 *
 * @curr_clk_rate:        clk rate to HW
 * @ipe_bps_pc_enable     power collpase enable flag
 */
struct cam_a5_clk_update_cmd {
	uint32_t  curr_clk_rate;
	bool  ipe_bps_pc_enable;
};
#endif