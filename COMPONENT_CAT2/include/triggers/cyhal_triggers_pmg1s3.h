/***************************************************************************//**
* \file cyhal_triggers_pmg1s3.h
*
* \brief
* PMG1S3 family HAL triggers header
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

#ifndef _CYHAL_TRIGGERS_PMG1S3_H_
#define _CYHAL_TRIGGERS_PMG1S3_H_

/**
 * \addtogroup group_hal_impl_triggers_pmg1s3 PMG1S3
 * \ingroup group_hal_impl_triggers
 * \{
 * Trigger connections for pmg1s3
 */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/** @brief Name of each input trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_ZERO = 0, //!< cpuss.zero
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT0 = 1, //!< cpuss.dmac_tr_out[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT1 = 2, //!< cpuss.dmac_tr_out[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT2 = 3, //!< cpuss.dmac_tr_out[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT3 = 4, //!< cpuss.dmac_tr_out[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT4 = 5, //!< cpuss.dmac_tr_out[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT5 = 6, //!< cpuss.dmac_tr_out[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT6 = 7, //!< cpuss.dmac_tr_out[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT7 = 8, //!< cpuss.dmac_tr_out[7]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT8 = 9, //!< cpuss.dmac_tr_out[8]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT9 = 10, //!< cpuss.dmac_tr_out[9]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT10 = 11, //!< cpuss.dmac_tr_out[10]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT11 = 12, //!< cpuss.dmac_tr_out[11]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT12 = 13, //!< cpuss.dmac_tr_out[12]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT13 = 14, //!< cpuss.dmac_tr_out[13]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT14 = 15, //!< cpuss.dmac_tr_out[14]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_OUT15 = 16, //!< cpuss.dmac_tr_out[15]
    CYHAL_TRIGGER_LPCOMP_COMP_OUT0 = 17, //!< lpcomp.comp_out[0]
    CYHAL_TRIGGER_LPCOMP_COMP_OUT1 = 18, //!< lpcomp.comp_out[1]
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP0 = 19, //!< pass[0].dsi_ctb_cmp0
    CYHAL_TRIGGER_PASS0_DSI_CTB_CMP1 = 20, //!< pass[0].dsi_ctb_cmp1
    CYHAL_TRIGGER_PASS0_DSI_SAR_SAMPLE_DONE = 21, //!< pass[0].dsi_sar_sample_done
    CYHAL_TRIGGER_PASS0_TR_SAR_OUT = 22, //!< pass[0].tr_sar_out
    CYHAL_TRIGGER_SCB0_TR_RX_REQ = 23, //!< scb[0].tr_rx_req
    CYHAL_TRIGGER_SCB1_TR_RX_REQ = 24, //!< scb[1].tr_rx_req
    CYHAL_TRIGGER_SCB2_TR_RX_REQ = 25, //!< scb[2].tr_rx_req
    CYHAL_TRIGGER_SCB3_TR_RX_REQ = 26, //!< scb[3].tr_rx_req
    CYHAL_TRIGGER_SCB4_TR_RX_REQ = 27, //!< scb[4].tr_rx_req
    CYHAL_TRIGGER_SCB5_TR_RX_REQ = 28, //!< scb[5].tr_rx_req
    CYHAL_TRIGGER_SCB6_TR_RX_REQ = 29, //!< scb[6].tr_rx_req
    CYHAL_TRIGGER_SCB7_TR_RX_REQ = 30, //!< scb[7].tr_rx_req
    CYHAL_TRIGGER_SCB0_TR_TX_REQ = 31, //!< scb[0].tr_tx_req
    CYHAL_TRIGGER_SCB1_TR_TX_REQ = 32, //!< scb[1].tr_tx_req
    CYHAL_TRIGGER_SCB2_TR_TX_REQ = 33, //!< scb[2].tr_tx_req
    CYHAL_TRIGGER_SCB3_TR_TX_REQ = 34, //!< scb[3].tr_tx_req
    CYHAL_TRIGGER_SCB4_TR_TX_REQ = 35, //!< scb[4].tr_tx_req
    CYHAL_TRIGGER_SCB5_TR_TX_REQ = 36, //!< scb[5].tr_tx_req
    CYHAL_TRIGGER_SCB6_TR_TX_REQ = 37, //!< scb[6].tr_tx_req
    CYHAL_TRIGGER_SCB7_TR_TX_REQ = 38, //!< scb[7].tr_tx_req
    CYHAL_TRIGGER_TCPWM_LINE0 = 39, //!< tcpwm.line[0]
    CYHAL_TRIGGER_TCPWM_LINE1 = 40, //!< tcpwm.line[1]
    CYHAL_TRIGGER_TCPWM_LINE2 = 41, //!< tcpwm.line[2]
    CYHAL_TRIGGER_TCPWM_LINE3 = 42, //!< tcpwm.line[3]
    CYHAL_TRIGGER_TCPWM_LINE4 = 43, //!< tcpwm.line[4]
    CYHAL_TRIGGER_TCPWM_LINE5 = 44, //!< tcpwm.line[5]
    CYHAL_TRIGGER_TCPWM_LINE6 = 45, //!< tcpwm.line[6]
    CYHAL_TRIGGER_TCPWM_LINE7 = 46, //!< tcpwm.line[7]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH0 = 47, //!< tcpwm.tr_compare_match[0]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH1 = 48, //!< tcpwm.tr_compare_match[1]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH2 = 49, //!< tcpwm.tr_compare_match[2]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH3 = 50, //!< tcpwm.tr_compare_match[3]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH4 = 51, //!< tcpwm.tr_compare_match[4]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH5 = 52, //!< tcpwm.tr_compare_match[5]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH6 = 53, //!< tcpwm.tr_compare_match[6]
    CYHAL_TRIGGER_TCPWM_TR_COMPARE_MATCH7 = 54, //!< tcpwm.tr_compare_match[7]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW0 = 55, //!< tcpwm.tr_overflow[0]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW1 = 56, //!< tcpwm.tr_overflow[1]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW2 = 57, //!< tcpwm.tr_overflow[2]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW3 = 58, //!< tcpwm.tr_overflow[3]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW4 = 59, //!< tcpwm.tr_overflow[4]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW5 = 60, //!< tcpwm.tr_overflow[5]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW6 = 61, //!< tcpwm.tr_overflow[6]
    CYHAL_TRIGGER_TCPWM_TR_OVERFLOW7 = 62, //!< tcpwm.tr_overflow[7]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW0 = 63, //!< tcpwm.tr_underflow[0]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW1 = 64, //!< tcpwm.tr_underflow[1]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW2 = 65, //!< tcpwm.tr_underflow[2]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW3 = 66, //!< tcpwm.tr_underflow[3]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW4 = 67, //!< tcpwm.tr_underflow[4]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW5 = 68, //!< tcpwm.tr_underflow[5]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW6 = 69, //!< tcpwm.tr_underflow[6]
    CYHAL_TRIGGER_TCPWM_TR_UNDERFLOW7 = 70, //!< tcpwm.tr_underflow[7]
    CYHAL_TRIGGER_USB_DMA_REQ0 = 71, //!< usb.dma_req[0]
    CYHAL_TRIGGER_USB_DMA_REQ1 = 72, //!< usb.dma_req[1]
    CYHAL_TRIGGER_USB_DMA_REQ2 = 73, //!< usb.dma_req[2]
    CYHAL_TRIGGER_USB_DMA_REQ3 = 74, //!< usb.dma_req[3]
    CYHAL_TRIGGER_USB_DMA_REQ4 = 75, //!< usb.dma_req[4]
    CYHAL_TRIGGER_USB_DMA_REQ5 = 76, //!< usb.dma_req[5]
    CYHAL_TRIGGER_USB_DMA_REQ6 = 77, //!< usb.dma_req[6]
    CYHAL_TRIGGER_USB_DMA_REQ7 = 78, //!< usb.dma_req[7]
    CYHAL_TRIGGER_USBPD0_TR_OUT_0 = 79, //!< usbpd[0].tr_out_0
    CYHAL_TRIGGER_USBPD1_TR_OUT_0 = 80, //!< usbpd[1].tr_out_0
    CYHAL_TRIGGER_USBPD0_TR_OUT_1 = 81, //!< usbpd[0].tr_out_1
    CYHAL_TRIGGER_USBPD1_TR_OUT_1 = 82, //!< usbpd[1].tr_out_1
    CYHAL_TRIGGER_USBPD0_TR_OUT_2 = 83, //!< usbpd[0].tr_out_2
    CYHAL_TRIGGER_USBPD1_TR_OUT_2 = 84, //!< usbpd[1].tr_out_2
    CYHAL_TRIGGER_USBPD0_TR_OUT_3 = 85, //!< usbpd[0].tr_out_3
    CYHAL_TRIGGER_USBPD1_TR_OUT_3 = 86, //!< usbpd[1].tr_out_3
    CYHAL_TRIGGER_USBPD0_TR_OUT_4 = 87, //!< usbpd[0].tr_out_4
    CYHAL_TRIGGER_USBPD1_TR_OUT_4 = 88, //!< usbpd[1].tr_out_4
    CYHAL_TRIGGER_USBPD0_TR_OUT_5 = 89, //!< usbpd[0].tr_out_5
    CYHAL_TRIGGER_USBPD1_TR_OUT_5 = 90, //!< usbpd[1].tr_out_5
    CYHAL_TRIGGER_USBPD0_TR_OUT_6 = 91, //!< usbpd[0].tr_out_6
    CYHAL_TRIGGER_USBPD1_TR_OUT_6 = 92, //!< usbpd[1].tr_out_6
} cyhal_trigger_source_pmg1s3_t;

/** Typedef from device family specific trigger source to generic trigger source */
typedef cyhal_trigger_source_pmg1s3_t cyhal_source_t;

/** @brief Name of each output trigger. */
typedef enum
{
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN0 = 0, //!< DMA_Requests - cpuss.dmac_tr_in[0]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN1 = 1, //!< DMA_Requests - cpuss.dmac_tr_in[1]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN2 = 2, //!< DMA_Requests - cpuss.dmac_tr_in[2]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN3 = 3, //!< DMA_Requests - cpuss.dmac_tr_in[3]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN4 = 4, //!< DMA_Requests - cpuss.dmac_tr_in[4]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN5 = 5, //!< DMA_Requests - cpuss.dmac_tr_in[5]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN6 = 6, //!< DMA_Requests - cpuss.dmac_tr_in[6]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN7 = 7, //!< DMA_Requests - cpuss.dmac_tr_in[7]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN8 = 8, //!< USB_DMA_Requests - cpuss.dmac_tr_in[8]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN9 = 9, //!< USB_DMA_Requests - cpuss.dmac_tr_in[9]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN10 = 10, //!< USB_DMA_Requests - cpuss.dmac_tr_in[10]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN11 = 11, //!< USB_DMA_Requests - cpuss.dmac_tr_in[11]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN12 = 12, //!< USB_DMA_Requests - cpuss.dmac_tr_in[12]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN13 = 13, //!< USB_DMA_Requests - cpuss.dmac_tr_in[13]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN14 = 14, //!< USB_DMA_Requests - cpuss.dmac_tr_in[14]
    CYHAL_TRIGGER_CPUSS_DMAC_TR_IN15 = 15, //!< USB_DMA_Requests - cpuss.dmac_tr_in[15]
    CYHAL_TRIGGER_PASS0_TR_SAR_IN = 16, //!< PASS Triggers - pass[0].tr_sar_in
    CYHAL_TRIGGER_TCPWM_TR_IN8 = 17, //!< TCPWM Triggers - tcpwm.tr_in[8]
    CYHAL_TRIGGER_TCPWM_TR_IN9 = 18, //!< TCPWM Triggers - tcpwm.tr_in[9]
    CYHAL_TRIGGER_TCPWM_TR_IN10 = 19, //!< TCPWM Triggers - tcpwm.tr_in[10]
    CYHAL_TRIGGER_TCPWM_TR_IN11 = 20, //!< TCPWM Triggers - tcpwm.tr_in[11]
    CYHAL_TRIGGER_TCPWM_TR_IN12 = 21, //!< TCPWM Triggers - tcpwm.tr_in[12]
    CYHAL_TRIGGER_TCPWM_TR_IN13 = 22, //!< TCPWM Triggers - tcpwm.tr_in[13]
    CYHAL_TRIGGER_USB_DMA_BURSTEND0 = 23, //!< USB_BurstEnd - usb.dma_burstend[0]
    CYHAL_TRIGGER_USB_DMA_BURSTEND1 = 24, //!< USB_BurstEnd - usb.dma_burstend[1]
    CYHAL_TRIGGER_USB_DMA_BURSTEND2 = 25, //!< USB_BurstEnd - usb.dma_burstend[2]
    CYHAL_TRIGGER_USB_DMA_BURSTEND3 = 26, //!< USB_BurstEnd - usb.dma_burstend[3]
    CYHAL_TRIGGER_USB_DMA_BURSTEND4 = 27, //!< USB_BurstEnd - usb.dma_burstend[4]
    CYHAL_TRIGGER_USB_DMA_BURSTEND5 = 28, //!< USB_BurstEnd - usb.dma_burstend[5]
    CYHAL_TRIGGER_USB_DMA_BURSTEND6 = 29, //!< USB_BurstEnd - usb.dma_burstend[6]
    CYHAL_TRIGGER_USB_DMA_BURSTEND7 = 30, //!< USB_BurstEnd - usb.dma_burstend[7]
} cyhal_trigger_dest_pmg1s3_t;

/** Typedef from device family specific trigger dest to generic trigger dest */
typedef cyhal_trigger_dest_pmg1s3_t cyhal_dest_t;

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
extern const uint8_t cyhal_dest_to_mux[31];

/* Maps each cyhal_destination_t to a specific output in its mux */
extern const uint8_t cyhal_mux_dest_index[31];
/** \endcond */

#if defined(__cplusplus)
}
#endif /* __cplusplus */
/** \} group_hal_impl_triggers_pmg1s3 */
#endif /* _CYHAL_TRIGGERS_PMG1S3_H_ */


/* [] END OF FILE */
