/*
 * Copyright(c) 2019 Xilinx, Inc. All rights reserved.
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 */

#ifndef QDMA_ACCESS_EXPORT_H_
#define QDMA_ACCESS_EXPORT_H_

#include "qdma_platform_env.h"

#ifdef __cplusplus
extern "C" {
#endif

/** QDMA Global CSR array size */
#define QDMA_GLOBAL_CSR_ARRAY_SZ        16

/**
 * struct qdma_dev_attributes - QDMA device attributes
 */
struct qdma_dev_attributes {
	/** @num_pfs - Num of PFs*/
	uint8_t num_pfs;
	/** @num_qs - Num of Queues */
	uint16_t num_qs;
	/** @flr_present - FLR resent or not? */
	uint8_t flr_present:1;
	/** @st_en - ST mode supported or not? */
	uint8_t st_en:1;
	/** @mm_en - MM mode supported or not? */
	uint8_t mm_en:1;
	/** @mm_cmpt_en - MM with Completions supported or not? */
	uint8_t mm_cmpt_en:1;
	/** @mailbox_en - Mailbox supported or not? */
	uint8_t mailbox_en:1;
	/** @mm_channel_max - Num of MM channels */
	uint8_t mm_channel_max;
};

/**
 * @enum qdma_desc_size - QDMA queue descriptor size
 */
enum qdma_desc_size {
	/** @QDMA_DESC_SIZE_8B - 8 byte descriptor */
	QDMA_DESC_SIZE_8B,
	/** @QDMA_DESC_SIZE_16B - 16 byte descriptor */
	QDMA_DESC_SIZE_16B,
	/** @QDMA_DESC_SIZE_32B - 32 byte descriptor */
	QDMA_DESC_SIZE_32B,
	/** @QDMA_DESC_SIZE_64B - 64 byte descriptor */
	QDMA_DESC_SIZE_64B
};

/**
 * @enum qdma_cmpt_update_trig_mode - Interrupt and Completion status write
 * trigger mode
 */
enum qdma_cmpt_update_trig_mode {
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_DIS - disabled */
	QDMA_CMPT_UPDATE_TRIG_MODE_DIS,
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_EVERY - every */
	QDMA_CMPT_UPDATE_TRIG_MODE_EVERY,
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_USR_CNT - user counter */
	QDMA_CMPT_UPDATE_TRIG_MODE_USR_CNT,
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_USR - user */
	QDMA_CMPT_UPDATE_TRIG_MODE_USR,
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_USR_TMR - user timer */
	QDMA_CMPT_UPDATE_TRIG_MODE_USR_TMR,
	/** @QDMA_CMPT_UPDATE_TRIG_MODE_TMR_CNTR - timer + counter combo */
	QDMA_CMPT_UPDATE_TRIG_MODE_TMR_CNTR
};


/**
 * @enum qdma_indirect_intr_ring_size - Indirect interrupt ring size
 */
enum qdma_indirect_intr_ring_size {
	/** @QDMA_INDIRECT_INTR_RING_SIZE_4KB - Accommodates 512 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_4KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_8KB - Accommodates 1024 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_8KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_12KB - Accommodates 1536 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_12KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_16KB - Accommodates 2048 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_16KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_20KB - Accommodates 2560 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_20KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_24KB - Accommodates 3072 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_24KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_28KB - Accommodates 3584 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_28KB,
	/** @QDMA_INDIRECT_INTR_RING_SIZE_32KB - Accommodates 4096 entries */
	QDMA_INDIRECT_INTR_RING_SIZE_32KB
};

/**
 * @enum qdma_wrb_interval - writeback update interval
 */
enum qdma_wrb_interval {
	/** @QDMA_WRB_INTERVAL_4 - writeback update interval of 4 */
	QDMA_WRB_INTERVAL_4,
	/** @QDMA_WRB_INTERVAL_8 - writeback update interval of 8 */
	QDMA_WRB_INTERVAL_8,
	/** @QDMA_WRB_INTERVAL_16 - writeback update interval of 16 */
	QDMA_WRB_INTERVAL_16,
	/** @QDMA_WRB_INTERVAL_32 - writeback update interval of 32 */
	QDMA_WRB_INTERVAL_32,
	/** @QDMA_WRB_INTERVAL_64 - writeback update interval of 64 */
	QDMA_WRB_INTERVAL_64,
	/** @QDMA_WRB_INTERVAL_128 - writeback update interval of 128 */
	QDMA_WRB_INTERVAL_128,
	/** @QDMA_WRB_INTERVAL_256 - writeback update interval of 256 */
	QDMA_WRB_INTERVAL_256,
	/** @QDMA_WRB_INTERVAL_512 - writeback update interval of 512 */
	QDMA_WRB_INTERVAL_512,
	/** @QDMA_NUM_WRB_INTERVALS - total number of writeback intervals */
	QDMA_NUM_WRB_INTERVALS
};

enum qdma_rtl_version {
	/** @QDMA_RTL_1 - RTL 1  */
	QDMA_RTL_BASE,
	/** @QDMA_RTL_2 - RTL 2  */
	QDMA_RTL_PATCH
};

enum qdma_everest_ip {
	/** @QDMA_SOFT_IP - Soft IP  */
	QDMA_SOFT_IP,
	/** @QDMA_HARD_IP - Hard IP  */
	QDMA_HARD_IP
};

enum qdma_vivado_release_id {
	/** @QDMA_VIVADO_2018_3 - Vivado version 2018.3  */
	QDMA_VIVADO_2018_3,
	/** @QDMA_VIVADO_2019_1 - Vivado version 2019.1  */
	QDMA_VIVADO_2019_1
};

/**
 * enum qdma_error_idx - qdma errors
 */
enum qdma_error_idx {
	/* Descriptor errors */
	QDMA_DSC_ERR_POISON,
	QDMA_DSC_ERR_UR_CA,
	QDMA_DSC_ERR_PARAM,
	QDMA_DSC_ERR_ADDR,
	QDMA_DSC_ERR_TAG,
	QDMA_DSC_ERR_FLR,
	QDMA_DSC_ERR_TIMEOUT,
	QDMA_DSC_ERR_DAT_POISON,
	QDMA_DSC_ERR_FLR_CANCEL,
	QDMA_DSC_ERR_DMA,
	QDMA_DSC_ERR_DSC,
	QDMA_DSC_ERR_RQ_CANCEL,
	QDMA_DSC_ERR_DBE,
	QDMA_DSC_ERR_SBE,
	QDMA_DSC_ERR_ALL,

	/* TRQ Errors */
	QDMA_TRQ_ERR_UNMAPPED,
	QDMA_TRQ_ERR_QID_RANGE,
	QDMA_TRQ_ERR_VF_ACCESS,
	QDMA_TRQ_ERR_TCP_TIMEOUT,
	QDMA_TRQ_ERR_ALL,

	/* C2H Errors */
	QDMA_ST_C2H_ERR_MTY_MISMATCH,
	QDMA_ST_C2H_ERR_LEN_MISMATCH,
	QDMA_ST_C2H_ERR_QID_MISMATCH,
	QDMA_ST_C2H_ERR_DESC_RSP_ERR,
	QDMA_ST_C2H_ERR_ENG_WPL_DATA_PAR_ERR,
	QDMA_ST_C2H_ERR_MSI_INT_FAIL,
	QDMA_ST_C2H_ERR_ERR_DESC_CNT,
	QDMA_ST_C2H_ERR_PORTID_CTXT_MISMATCH,
	QDMA_ST_C2H_ERR_PORTID_BYP_IN_MISMATCH,
	QDMA_ST_C2H_ERR_CMPT_INV_Q_ERR,
	QDMA_ST_C2H_ERR_CMPT_QFULL_ERR,
	QDMA_ST_C2H_ERR_CMPT_CIDX_ERR,
	QDMA_ST_C2H_ERR_CMPT_PRTY_ERR,
	QDMA_ST_C2H_ERR_ALL,

	/* Fatal Errors */
	QDMA_ST_FATAL_ERR_MTY_MISMATCH,
	QDMA_ST_FATAL_ERR_LEN_MISMATCH,
	QDMA_ST_FATAL_ERR_QID_MISMATCH,
	QDMA_ST_FATAL_ERR_TIMER_FIFO_RAM_RDBE,
	QDMA_ST_FATAL_ERR_PFCH_II_RAM_RDBE,
	QDMA_ST_FATAL_ERR_CMPT_CTXT_RAM_RDBE,
	QDMA_ST_FATAL_ERR_PFCH_CTXT_RAM_RDBE,
	QDMA_ST_FATAL_ERR_DESC_REQ_FIFO_RAM_RDBE,
	QDMA_ST_FATAL_ERR_INT_CTXT_RAM_RDBE,
	QDMA_ST_FATAL_ERR_CMPT_COAL_DATA_RAM_RDBE,
	QDMA_ST_FATAL_ERR_TUSER_FIFO_RAM_RDBE,
	QDMA_ST_FATAL_ERR_QID_FIFO_RAM_RDBE,
	QDMA_ST_FATAL_ERR_PAYLOAD_FIFO_RAM_RDBE,
	QDMA_ST_FATAL_ERR_WPL_DATA_PAR,
	QDMA_ST_FATAL_ERR_ALL,

	/* H2C Errors */
	QDMA_ST_H2C_ERR_ZERO_LEN_DESC,
	QDMA_ST_H2C_ERR_CSI_MOP,
	QDMA_ST_H2C_ERR_NO_DMA_DSC,
	QDMA_ST_H2C_ERR_SBE,
	QDMA_ST_H2C_ERR_DBE,
	QDMA_ST_H2C_ERR_ALL,

	/* Single bit errors */
	QDMA_SBE_ERR_MI_H2C0_DAT,
	QDMA_SBE_ERR_MI_C2H0_DAT,
	QDMA_SBE_ERR_H2C_RD_BRG_DAT,
	QDMA_SBE_ERR_H2C_WR_BRG_DAT,
	QDMA_SBE_ERR_C2H_RD_BRG_DAT,
	QDMA_SBE_ERR_C2H_WR_BRG_DAT,
	QDMA_SBE_ERR_FUNC_MAP,
	QDMA_SBE_ERR_DSC_HW_CTXT,
	QDMA_SBE_ERR_DSC_CRD_RCV,
	QDMA_SBE_ERR_DSC_SW_CTXT,
	QDMA_SBE_ERR_DSC_CPLI,
	QDMA_SBE_ERR_DSC_CPLD,
	QDMA_SBE_ERR_PASID_CTXT_RAM,
	QDMA_SBE_ERR_TIMER_FIFO_RAM,
	QDMA_SBE_ERR_PAYLOAD_FIFO_RAM,
	QDMA_SBE_ERR_QID_FIFO_RAM,
	QDMA_SBE_ERR_TUSER_FIFO_RAM,
	QDMA_SBE_ERR_WRB_COAL_DATA_RAM,
	QDMA_SBE_ERR_INT_QID2VEC_RAM,
	QDMA_SBE_ERR_INT_CTXT_RAM,
	QDMA_SBE_ERR_DESC_REQ_FIFO_RAM,
	QDMA_SBE_ERR_PFCH_CTXT_RAM,
	QDMA_SBE_ERR_WRB_CTXT_RAM,
	QDMA_SBE_ERR_PFCH_LL_RAM,
	QDMA_SBE_ERR_H2C_PEND_FIFO,
	QDMA_SBE_ERR_ALL,

	/* Double bit Errors */
	QDMA_DBE_ERR_MI_H2C0_DAT,
	QDMA_DBE_ERR_MI_C2H0_DAT,
	QDMA_DBE_ERR_H2C_RD_BRG_DAT,
	QDMA_DBE_ERR_H2C_WR_BRG_DAT,
	QDMA_DBE_ERR_C2H_RD_BRG_DAT,
	QDMA_DBE_ERR_C2H_WR_BRG_DAT,
	QDMA_DBE_ERR_FUNC_MAP,
	QDMA_DBE_ERR_DSC_HW_CTXT,
	QDMA_DBE_ERR_DSC_CRD_RCV,
	QDMA_DBE_ERR_DSC_SW_CTXT,
	QDMA_DBE_ERR_DSC_CPLI,
	QDMA_DBE_ERR_DSC_CPLD,
	QDMA_DBE_ERR_PASID_CTXT_RAM,
	QDMA_DBE_ERR_TIMER_FIFO_RAM,
	QDMA_DBE_ERR_PAYLOAD_FIFO_RAM,
	QDMA_DBE_ERR_QID_FIFO_RAM,
	QDMA_DBE_ERR_TUSER_FIFO_RAM,
	QDMA_DBE_ERR_WRB_COAL_DATA_RAM,
	QDMA_DBE_ERR_INT_QID2VEC_RAM,
	QDMA_DBE_ERR_INT_CTXT_RAM,
	QDMA_DBE_ERR_DESC_REQ_FIFO_RAM,
	QDMA_DBE_ERR_PFCH_CTXT_RAM,
	QDMA_DBE_ERR_WRB_CTXT_RAM,
	QDMA_DBE_ERR_PFCH_LL_RAM,
	QDMA_DBE_ERR_H2C_PEND_FIFO,
	QDMA_DBE_ERR_ALL,

	QDMA_ERRS_ALL
};


#ifdef __cplusplus
}
#endif

#endif /* QDMA_ACCESS_EXPORT_H_ */