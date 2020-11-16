/***************************************************************************//**
* \file cyhal_triggers_psoc4100sp256kb.h
*
* \brief
* PSoC4100Sp256KB family HAL triggers header
*
* \note
* Generator version: 1.6.0.379
*
********************************************************************************
* \copyright
* Copyright 2016-2020 Cypress Semiconductor Corporation
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

#ifndef _CYHAL_TRIGGERS_PSOC4100SP256KB_H_
#define _CYHAL_TRIGGERS_PSOC4100SP256KB_H_

/**
 * \addtogroup group_hal_impl_triggers_psoc4100sp256kb PSOC4100SP256KB
 * \ingroup group_hal_impl_triggers
 * \{
 * Trigger connections for psoc4100sp256kb
 */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/** @brief Name of each input trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT0 = 0, //!< cpuss.dmac_tr_out[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT1 = 1, //!< cpuss.dmac_tr_out[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT2 = 2, //!< cpuss.dmac_tr_out[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT3 = 3, //!< cpuss.dmac_tr_out[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT4 = 4, //!< cpuss.dmac_tr_out[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT5 = 5, //!< cpuss.dmac_tr_out[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT6 = 6, //!< cpuss.dmac_tr_out[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT7 = 7, //!< cpuss.dmac_tr_out[7]
    CYHAL_TRIGGER_CPUSS_ZERO = 8, //!< cpuss.zero
    CYHAL_TRIGGER_CSD_DSI_SENSE_OUT = 9, //!< csd.dsi_sense_out
    CYHAL_TRIGGER_CSD_TR_ADC_DONE = 10, //!< csd.tr_adc_done
    CYHAL_TRIGGER_EXCO_TRIGGER = 11, //!< exco.trigger
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0 = 12, //!< lpcomp.comp_out[0]
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1 = 13, //!< lpcomp.comp_out[1]
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0 = 14, //!< pass[0].dsi_ctb_cmp0
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP0 = 15, //!< pass[1].dsi_ctb_cmp0
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1 = 16, //!< pass[0].dsi_ctb_cmp1
    CYHAL_TRIGGER_PASS1_DSI_CTB_CMP1 = 17, //!< pass[1].dsi_ctb_cmp1
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE = 18, //!< pass[0].dsi_sar_sample_done
    CYHAL_TRIGGER_PASS1_DSI_SAR_SAMPLE_DONE = 19, //!< pass[1].dsi_sar_sample_done
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT = 20, //!< pass[0].tr_sar_out
    CYHAL_TRIGGER_PASS1_TR_SAR_OUT = 21, //!< pass[1].tr_sar_out
    CYHAL_TRIGGER_SCB0_TR_RX_REQ = 22, //!< scb[0].tr_rx_req
    CYHAL_TRIGGER_SCB1_TR_RX_REQ = 23, //!< scb[1].tr_rx_req
    CYHAL_TRIGGER_SCB2_TR_RX_REQ = 24, //!< scb[2].tr_rx_req
    CYHAL_TRIGGER_SCB3_TR_RX_REQ = 25, //!< scb[3].tr_rx_req
    CYHAL_TRIGGER_SCB4_TR_RX_REQ = 26, //!< scb[4].tr_rx_req
    CYHAL_TRIGGER_SCB0_TR_TX_REQ = 27, //!< scb[0].tr_tx_req
    CYHAL_TRIGGER_SCB1_TR_TX_REQ = 28, //!< scb[1].tr_tx_req
    CYHAL_TRIGGER_SCB2_TR_TX_REQ = 29, //!< scb[2].tr_tx_req
    CYHAL_TRIGGER_SCB3_TR_TX_REQ = 30, //!< scb[3].tr_tx_req
    CYHAL_TRIGGER_SCB4_TR_TX_REQ = 31, //!< scb[4].tr_tx_req
    CYHAL_TRIGGER_TCPWM_LINE0 = 32, //!< tcpwm.line[0]
    CYHAL_TRIGGER_TCPWM_LINE1 = 33, //!< tcpwm.line[1]
    CYHAL_TRIGGER_TCPWM_LINE2 = 34, //!< tcpwm.line[2]
    CYHAL_TRIGGER_TCPWM_LINE3 = 35, //!< tcpwm.line[3]
    CYHAL_TRIGGER_TCPWM_LINE4 = 36, //!< tcpwm.line[4]
    CYHAL_TRIGGER_TCPWM_LINE5 = 37, //!< tcpwm.line[5]
    CYHAL_TRIGGER_TCPWM_LINE6 = 38, //!< tcpwm.line[6]
    CYHAL_TRIGGER_TCPWM_LINE7 = 39, //!< tcpwm.line[7]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0 = 40, //!< tcpwm.tr_compare_match[0]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1 = 41, //!< tcpwm.tr_compare_match[1]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2 = 42, //!< tcpwm.tr_compare_match[2]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3 = 43, //!< tcpwm.tr_compare_match[3]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4 = 44, //!< tcpwm.tr_compare_match[4]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5 = 45, //!< tcpwm.tr_compare_match[5]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6 = 46, //!< tcpwm.tr_compare_match[6]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7 = 47, //!< tcpwm.tr_compare_match[7]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0 = 48, //!< tcpwm.tr_overflow[0]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1 = 49, //!< tcpwm.tr_overflow[1]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2 = 50, //!< tcpwm.tr_overflow[2]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3 = 51, //!< tcpwm.tr_overflow[3]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4 = 52, //!< tcpwm.tr_overflow[4]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5 = 53, //!< tcpwm.tr_overflow[5]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6 = 54, //!< tcpwm.tr_overflow[6]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7 = 55, //!< tcpwm.tr_overflow[7]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0 = 56, //!< tcpwm.tr_underflow[0]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1 = 57, //!< tcpwm.tr_underflow[1]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2 = 58, //!< tcpwm.tr_underflow[2]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3 = 59, //!< tcpwm.tr_underflow[3]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4 = 60, //!< tcpwm.tr_underflow[4]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5 = 61, //!< tcpwm.tr_underflow[5]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6 = 62, //!< tcpwm.tr_underflow[6]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7 = 63, //!< tcpwm.tr_underflow[7]
} cyhal_trigger_source_psoc4100sp256kb_t;

/** Typedef from device family specific trigger source to generic trigger source */
typedef cyhal_trigger_source_psoc4100sp256kb_t cyhal_source_t;

/** @brief Name of each output trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN0 = 0, //!< GP_DMA_Requests - cpuss.dmac_tr_in[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN1 = 1, //!< GP_DMA_Requests - cpuss.dmac_tr_in[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN2 = 2, //!< GP_DMA_Requests - cpuss.dmac_tr_in[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN3 = 3, //!< GP_DMA_Requests - cpuss.dmac_tr_in[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN4 = 4, //!< GP_DMA_Requests - cpuss.dmac_tr_in[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN5 = 5, //!< GP_DMA_Requests - cpuss.dmac_tr_in[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN6 = 6, //!< GP_DMA_Requests - cpuss.dmac_tr_in[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN7 = 7, //!< GP_DMA_Requests - cpuss.dmac_tr_in[7]
    CYHAL_TRIGGER_CSD_DSI_START = 8, //!< CSD Trigger Mux - csd.dsi_start
    CYHAL_TRIGGER_PASS0_TR_SAR_IN = 9, //!< PASS[0] Triggers - pass[0].tr_sar_in
    CYHAL_TRIGGER_PASS1_TR_SAR_IN = 10, //!< PASS[1] Triggers - pass[1].tr_sar_in
    CYHAL_TRIGGER_TCPWM_TR_IN7 = 11, //!< TCPWM Triggers - tcpwm.tr_in[7]
    CYHAL_TRIGGER_TCPWM_TR_IN8 = 12, //!< TCPWM Triggers - tcpwm.tr_in[8]
    CYHAL_TRIGGER_TCPWM_TR_IN9 = 13, //!< TCPWM Triggers - tcpwm.tr_in[9]
    CYHAL_TRIGGER_TCPWM_TR_IN10 = 14, //!< TCPWM Triggers - tcpwm.tr_in[10]
    CYHAL_TRIGGER_TCPWM_TR_IN11 = 15, //!< TCPWM Triggers - tcpwm.tr_in[11]
    CYHAL_TRIGGER_TCPWM_TR_IN12 = 16, //!< TCPWM Triggers - tcpwm.tr_in[12]
    CYHAL_TRIGGER_TCPWM_TR_IN13 = 17, //!< TCPWM Triggers - tcpwm.tr_in[13]
} cyhal_trigger_dest_psoc4100sp256kb_t;

/** Typedef from device family specific trigger dest to generic trigger dest */
typedef cyhal_trigger_dest_psoc4100sp256kb_t cyhal_dest_t;

/** \cond INTERNAL */
/** Table of number of inputs to each mux. */
extern const uint16_t cyhal_sources_per_mux[5];

/** Table indicating whether mux is 1to1. */
extern const bool cyhal_is_mux_1to1[5];

/** Table pointing to each mux source table. The index of each source in the table is its mux input index. */
extern const cyhal_source_t* cyhal_mux_to_sources [5];

/** Maps each cyhal_destination_t to a mux index.
 * If bit 8 of the mux index is set, this denotes that the trigger is a
 * one to one trigger.
 */
extern const uint8_t cyhal_dest_to_mux[18];

/* Maps each cyhal_destination_t to a specific output in its mux */
extern const uint8_t cyhal_mux_dest_index[18];
/** \endcond */

#if defined(__cplusplus)
}
#endif /* __cplusplus */
/** \} group_hal_impl_triggers_psoc4100sp256kb */
#endif /* _CYHAL_TRIGGERS_PSOC4100SP256KB_H_ */


/* [] END OF FILE */
