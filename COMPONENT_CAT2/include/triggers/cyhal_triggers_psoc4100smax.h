/***************************************************************************//**
* \file cyhal_triggers_psoc4100smax.h
*
* \brief
* PSoC4100Smax family HAL triggers header
*
* \note
* Generator version: 1.6.0.464
*
********************************************************************************
* \copyright
* Copyright 2016-2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef _CYHAL_TRIGGERS_PSOC4100SMAX_H_
#define _CYHAL_TRIGGERS_PSOC4100SMAX_H_

/**
 * \addtogroup group_hal_impl_triggers_psoc4100smax PSOC4100SMAX
 * \ingroup group_hal_impl_triggers
 * \{
 * Trigger connections for psoc4100smax
 */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/** @brief Name of each input trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_ZERO = 0, //!< cpuss.zero
    CYHAL_TRIGGER_CANFD_TR_DBG_DMA_REQ0 = 1, //!< canfd.tr_dbg_dma_req[0]
    CYHAL_TRIGGER_CANFD_TR_FIFO00 = 2, //!< canfd.tr_fifo0[0]
    CYHAL_TRIGGER_CANFD_TR_FIFO10 = 3, //!< canfd.tr_fifo1[0]
    CYHAL_TRIGGER_CANFD_TR_TMP_RTP_OUT0 = 4, //!< canfd.tr_tmp_rtp_out[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT0 = 5, //!< cpuss.dmac_tr_out[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT1 = 6, //!< cpuss.dmac_tr_out[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT2 = 7, //!< cpuss.dmac_tr_out[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT3 = 8, //!< cpuss.dmac_tr_out[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT4 = 9, //!< cpuss.dmac_tr_out[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT5 = 10, //!< cpuss.dmac_tr_out[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT6 = 11, //!< cpuss.dmac_tr_out[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT7 = 12, //!< cpuss.dmac_tr_out[7]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT8 = 13, //!< cpuss.dmac_tr_out[8]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT9 = 14, //!< cpuss.dmac_tr_out[9]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT10 = 15, //!< cpuss.dmac_tr_out[10]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT11 = 16, //!< cpuss.dmac_tr_out[11]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT12 = 17, //!< cpuss.dmac_tr_out[12]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT13 = 18, //!< cpuss.dmac_tr_out[13]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT14 = 19, //!< cpuss.dmac_tr_out[14]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT15 = 20, //!< cpuss.dmac_tr_out[15]
    CYHAL_TRIGGER_EXCO_TRIGGER = 21, //!< exco.trigger
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0 = 22, //!< lpcomp.comp_out[0]
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1 = 23, //!< lpcomp.comp_out[1]
    CYHAL_TRIGGER_MSC0_TR_RD_REQ_OUT = 24, //!< msc[0].tr_rd_req_out
    CYHAL_TRIGGER_MSC1_TR_RD_REQ_OUT = 25, //!< msc[1].tr_rd_req_out
    CYHAL_TRIGGER_MSC0_TR_WR_REQ_OUT = 26, //!< msc[0].tr_wr_req_out
    CYHAL_TRIGGER_MSC1_TR_WR_REQ_OUT = 27, //!< msc[1].tr_wr_req_out
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0 = 28, //!< pass[0].dsi_ctb_cmp0
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1 = 29, //!< pass[0].dsi_ctb_cmp1
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE = 30, //!< pass[0].dsi_sar_sample_done
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT = 31, //!< pass[0].tr_sar_out
    CYHAL_TRIGGER_SCB0_TR_I2C_SCL_FILTERED = 32, //!< scb[0].tr_i2c_scl_filtered
    CYHAL_TRIGGER_SCB1_TR_I2C_SCL_FILTERED = 33, //!< scb[1].tr_i2c_scl_filtered
    CYHAL_TRIGGER_SCB2_TR_I2C_SCL_FILTERED = 34, //!< scb[2].tr_i2c_scl_filtered
    CYHAL_TRIGGER_SCB3_TR_I2C_SCL_FILTERED = 35, //!< scb[3].tr_i2c_scl_filtered
    CYHAL_TRIGGER_SCB4_TR_I2C_SCL_FILTERED = 36, //!< scb[4].tr_i2c_scl_filtered
    CYHAL_TRIGGER_SCB0_TR_RX_REQ = 37, //!< scb[0].tr_rx_req
    CYHAL_TRIGGER_SCB1_TR_RX_REQ = 38, //!< scb[1].tr_rx_req
    CYHAL_TRIGGER_SCB2_TR_RX_REQ = 39, //!< scb[2].tr_rx_req
    CYHAL_TRIGGER_SCB3_TR_RX_REQ = 40, //!< scb[3].tr_rx_req
    CYHAL_TRIGGER_SCB4_TR_RX_REQ = 41, //!< scb[4].tr_rx_req
    CYHAL_TRIGGER_SCB0_TR_TX_REQ = 42, //!< scb[0].tr_tx_req
    CYHAL_TRIGGER_SCB1_TR_TX_REQ = 43, //!< scb[1].tr_tx_req
    CYHAL_TRIGGER_SCB2_TR_TX_REQ = 44, //!< scb[2].tr_tx_req
    CYHAL_TRIGGER_SCB3_TR_TX_REQ = 45, //!< scb[3].tr_tx_req
    CYHAL_TRIGGER_SCB4_TR_TX_REQ = 46, //!< scb[4].tr_tx_req
    CYHAL_TRIGGER_TCPWM_LINE0 = 47, //!< tcpwm.line[0]
    CYHAL_TRIGGER_TCPWM_LINE1 = 48, //!< tcpwm.line[1]
    CYHAL_TRIGGER_TCPWM_LINE2 = 49, //!< tcpwm.line[2]
    CYHAL_TRIGGER_TCPWM_LINE3 = 50, //!< tcpwm.line[3]
    CYHAL_TRIGGER_TCPWM_LINE4 = 51, //!< tcpwm.line[4]
    CYHAL_TRIGGER_TCPWM_LINE5 = 52, //!< tcpwm.line[5]
    CYHAL_TRIGGER_TCPWM_LINE6 = 53, //!< tcpwm.line[6]
    CYHAL_TRIGGER_TCPWM_LINE7 = 54, //!< tcpwm.line[7]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0 = 55, //!< tcpwm.tr_compare_match[0]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1 = 56, //!< tcpwm.tr_compare_match[1]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2 = 57, //!< tcpwm.tr_compare_match[2]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3 = 58, //!< tcpwm.tr_compare_match[3]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4 = 59, //!< tcpwm.tr_compare_match[4]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5 = 60, //!< tcpwm.tr_compare_match[5]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6 = 61, //!< tcpwm.tr_compare_match[6]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7 = 62, //!< tcpwm.tr_compare_match[7]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0 = 63, //!< tcpwm.tr_overflow[0]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1 = 64, //!< tcpwm.tr_overflow[1]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2 = 65, //!< tcpwm.tr_overflow[2]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3 = 66, //!< tcpwm.tr_overflow[3]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4 = 67, //!< tcpwm.tr_overflow[4]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5 = 68, //!< tcpwm.tr_overflow[5]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6 = 69, //!< tcpwm.tr_overflow[6]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7 = 70, //!< tcpwm.tr_overflow[7]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0 = 71, //!< tcpwm.tr_underflow[0]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1 = 72, //!< tcpwm.tr_underflow[1]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2 = 73, //!< tcpwm.tr_underflow[2]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3 = 74, //!< tcpwm.tr_underflow[3]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4 = 75, //!< tcpwm.tr_underflow[4]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5 = 76, //!< tcpwm.tr_underflow[5]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6 = 77, //!< tcpwm.tr_underflow[6]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7 = 78, //!< tcpwm.tr_underflow[7]
} cyhal_trigger_source_psoc4100smax_t;

/** Typedef from device family specific trigger source to generic trigger source */
typedef cyhal_trigger_source_psoc4100smax_t cyhal_source_t;

/** @brief Name of each output trigger. */
typedef enum
{
    CYHAL_TRIGGER_CANFD_TR_DBG_DMA_ACK0 = 0, //!< DMA_Requests - canfd.tr_dbg_dma_ack[0]
    CYHAL_TRIGGER_CANFD_TR_EVT_SWT_IN0 = 1, //!< DMA_Requests - canfd.tr_evt_swt_in[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN0 = 2, //!< DMA_Requests - cpuss.dmac_tr_in[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN1 = 3, //!< DMA_Requests - cpuss.dmac_tr_in[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN2 = 4, //!< DMA_Requests - cpuss.dmac_tr_in[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN3 = 5, //!< DMA_Requests - cpuss.dmac_tr_in[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN4 = 6, //!< DMA_Requests - cpuss.dmac_tr_in[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN5 = 7, //!< DMA_Requests - cpuss.dmac_tr_in[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN6 = 8, //!< DMA_Requests - cpuss.dmac_tr_in[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN7 = 9, //!< DMA_Requests - cpuss.dmac_tr_in[7]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN8 = 10, //!< DMA_Requests - cpuss.dmac_tr_in[8]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN9 = 11, //!< DMA_Requests - cpuss.dmac_tr_in[9]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN10 = 12, //!< DMA_Requests - cpuss.dmac_tr_in[10]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN11 = 13, //!< DMA_Requests - cpuss.dmac_tr_in[11]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN12 = 14, //!< DMA_Requests - cpuss.dmac_tr_in[12]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN13 = 15, //!< DMA_Requests - cpuss.dmac_tr_in[13]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN14 = 16, //!< DMA_Requests - cpuss.dmac_tr_in[14]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN15 = 17, //!< DMA_Requests - cpuss.dmac_tr_in[15]
    CYHAL_TRIGGER_MSC0_TR_RD_REQ_IN = 18, //!< CSD Triggers - msc[0].tr_rd_req_in
    CYHAL_TRIGGER_MSC1_TR_RD_REQ_IN = 19, //!< CSD Triggers - msc[1].tr_rd_req_in
    CYHAL_TRIGGER_MSC0_TR_WR_REQ_IN = 20, //!< CSD Triggers - msc[0].tr_wr_req_in
    CYHAL_TRIGGER_MSC1_TR_WR_REQ_IN = 21, //!< CSD Triggers - msc[1].tr_wr_req_in
    CYHAL_TRIGGER_PASS0_TR_SAR_IN = 22, //!< PASS Triggers - pass[0].tr_sar_in
    CYHAL_TRIGGER_TCPWM_TR_IN7 = 23, //!< TCPWM Triggers - tcpwm.tr_in[7]
    CYHAL_TRIGGER_TCPWM_TR_IN8 = 24, //!< TCPWM Triggers - tcpwm.tr_in[8]
    CYHAL_TRIGGER_TCPWM_TR_IN9 = 25, //!< TCPWM Triggers - tcpwm.tr_in[9]
    CYHAL_TRIGGER_TCPWM_TR_IN10 = 26, //!< TCPWM Triggers - tcpwm.tr_in[10]
    CYHAL_TRIGGER_TCPWM_TR_IN11 = 27, //!< TCPWM Triggers - tcpwm.tr_in[11]
    CYHAL_TRIGGER_TCPWM_TR_IN12 = 28, //!< TCPWM Triggers - tcpwm.tr_in[12]
    CYHAL_TRIGGER_TCPWM_TR_IN13 = 29, //!< TCPWM Triggers - tcpwm.tr_in[13]
} cyhal_trigger_dest_psoc4100smax_t;

/** Typedef from device family specific trigger dest to generic trigger dest */
typedef cyhal_trigger_dest_psoc4100smax_t cyhal_dest_t;

/** \cond INTERNAL */
/** Table of number of inputs to each mux. */
extern const uint16_t cyhal_sources_per_mux[4];

/** Table indicating whether mux is 1to1. */
extern const bool cyhal_is_mux_1to1[4];

/** Table pointing to each mux source table. The index of each source in the table is its mux input index. */
extern const cyhal_source_t* cyhal_mux_to_sources [4];

/** Maps each cyhal_destination_t to a mux index.
 * If bit 8 of the mux index is set, this denotes that the trigger is a
 * one to one trigger.
 */
extern const uint8_t cyhal_dest_to_mux[30];

/* Maps each cyhal_destination_t to a specific output in its mux */
extern const uint8_t cyhal_mux_dest_index[30];
/** \endcond */

#if defined(__cplusplus)
}
#endif /* __cplusplus */
/** \} group_hal_impl_triggers_psoc4100smax */
#endif /* _CYHAL_TRIGGERS_PSOC4100SMAX_H_ */


/* [] END OF FILE */
