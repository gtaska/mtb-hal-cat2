/***************************************************************************//**
* \file cyhal_triggers_psoc4100s.h
*
* \brief
* PSoC4100S family HAL triggers header
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

#ifndef _CYHAL_TRIGGERS_PSOC4100S_H_
#define _CYHAL_TRIGGERS_PSOC4100S_H_

/**
 * \addtogroup group_hal_impl_triggers_psoc4100s PSOC4100S
 * \ingroup group_hal_impl_triggers
 * \{
 * Trigger connections for psoc4100s
 */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/** @brief Name of each input trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_ZERO = 0, //!< cpuss.zero
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0 = 1, //!< lpcomp.comp_out[0]
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1 = 2, //!< lpcomp.comp_out[1]
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0 = 3, //!< pass[0].dsi_ctb_cmp0
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1 = 4, //!< pass[0].dsi_ctb_cmp1
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE = 5, //!< pass[0].dsi_sar_sample_done
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT = 6, //!< pass[0].tr_sar_out
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0 = 7, //!< tcpwm.tr_compare_match[0]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1 = 8, //!< tcpwm.tr_compare_match[1]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2 = 9, //!< tcpwm.tr_compare_match[2]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3 = 10, //!< tcpwm.tr_compare_match[3]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4 = 11, //!< tcpwm.tr_compare_match[4]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0 = 12, //!< tcpwm.tr_overflow[0]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1 = 13, //!< tcpwm.tr_overflow[1]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2 = 14, //!< tcpwm.tr_overflow[2]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3 = 15, //!< tcpwm.tr_overflow[3]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4 = 16, //!< tcpwm.tr_overflow[4]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0 = 17, //!< tcpwm.tr_underflow[0]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1 = 18, //!< tcpwm.tr_underflow[1]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2 = 19, //!< tcpwm.tr_underflow[2]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3 = 20, //!< tcpwm.tr_underflow[3]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4 = 21, //!< tcpwm.tr_underflow[4]
} cyhal_trigger_source_psoc4100s_t;

/** Typedef from device family specific trigger source to generic trigger source */
typedef cyhal_trigger_source_psoc4100s_t cyhal_source_t;

/** @brief Name of each output trigger. */
typedef enum
{
    CYHAL_TRIGGER_PASS0_TR_SAR_IN = 0, //!< PASS Triggers - pass[0].tr_sar_in
    CYHAL_TRIGGER_TCPWM_TR_IN7 = 1, //!< TCPWM Triggers - tcpwm.tr_in[7]
    CYHAL_TRIGGER_TCPWM_TR_IN8 = 2, //!< TCPWM Triggers - tcpwm.tr_in[8]
    CYHAL_TRIGGER_TCPWM_TR_IN9 = 3, //!< TCPWM Triggers - tcpwm.tr_in[9]
    CYHAL_TRIGGER_TCPWM_TR_IN10 = 4, //!< TCPWM Triggers - tcpwm.tr_in[10]
    CYHAL_TRIGGER_TCPWM_TR_IN11 = 5, //!< TCPWM Triggers - tcpwm.tr_in[11]
    CYHAL_TRIGGER_TCPWM_TR_IN12 = 6, //!< TCPWM Triggers - tcpwm.tr_in[12]
    CYHAL_TRIGGER_TCPWM_TR_IN13 = 7, //!< TCPWM Triggers - tcpwm.tr_in[13]
} cyhal_trigger_dest_psoc4100s_t;

/** Typedef from device family specific trigger dest to generic trigger dest */
typedef cyhal_trigger_dest_psoc4100s_t cyhal_dest_t;

/** \cond INTERNAL */
/** Table of number of inputs to each mux. */
extern const uint16_t cyhal_sources_per_mux[2];

/** Table indicating whether mux is 1to1. */
extern const bool cyhal_is_mux_1to1[2];

/** Table pointing to each mux source table. The index of each source in the table is its mux input index. */
extern const cyhal_source_t* cyhal_mux_to_sources [2];

/** Maps each cyhal_destination_t to a mux index.
 * If bit 8 of the mux index is set, this denotes that the trigger is a
 * one to one trigger.
 */
extern const uint8_t cyhal_dest_to_mux[8];

/* Maps each cyhal_destination_t to a specific output in its mux */
extern const uint8_t cyhal_mux_dest_index[8];
/** \endcond */

#if defined(__cplusplus)
}
#endif /* __cplusplus */
/** \} group_hal_impl_triggers_psoc4100s */
#endif /* _CYHAL_TRIGGERS_PSOC4100S_H_ */


/* [] END OF FILE */
