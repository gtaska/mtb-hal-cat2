/***************************************************************************//**
* \file cyhal_psoc4100s_28_ssop_auto.c
*
* \brief
* PSoC4100S device GPIO HAL header for 28-SSOP-AUTO package
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

#include "cy_device_headers.h"
#include "cyhal_hw_types.h"

#if defined(_GPIO_PSOC4100S_28_SSOP_AUTO_H_)
#include "pin_packages/cyhal_psoc4100s_28_ssop_auto.h"

/* Hardware Blocks */
static const cyhal_resource_inst_t CYHAL_LPCOMP_0_0 = { CYHAL_RSC_LPCOMP, 0, 0 };
static const cyhal_resource_inst_t CYHAL_LPCOMP_1_0 = { CYHAL_RSC_LPCOMP, 1, 0 };
static const cyhal_resource_inst_t CYHAL_OPAMP_0 = { CYHAL_RSC_OPAMP, 0, 0 };
static const cyhal_resource_inst_t CYHAL_OPAMP_1 = { CYHAL_RSC_OPAMP, 1, 0 };
static const cyhal_resource_inst_t CYHAL_ADC_0 = { CYHAL_RSC_ADC, 0, 10 };
static const cyhal_resource_inst_t CYHAL_SCB_0 = { CYHAL_RSC_SCB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_1 = { CYHAL_RSC_SCB, 1, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_2 = { CYHAL_RSC_SCB, 2, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_0 = { CYHAL_RSC_TCPWM, 0, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_1 = { CYHAL_RSC_TCPWM, 0, 1 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_2 = { CYHAL_RSC_TCPWM, 0, 2 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_3 = { CYHAL_RSC_TCPWM, 0, 3 };

/* Pin connections */
/* Connections for: lpcomp_comp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_comp[3] = {
    {&CYHAL_LPCOMP_0_0, P2_7, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_0_0, P4_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_1_0, P4_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: lpcomp_in_n */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_in_n[2] = {
    {&CYHAL_LPCOMP_0_0, P0_1, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_1_0, P0_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: lpcomp_in_p */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_in_p[2] = {
    {&CYHAL_LPCOMP_0_0, P0_0, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_1_0, P0_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_dsi_ctb_cmp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_dsi_ctb_cmp[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_out_10x */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_out_10x[2] = {
    {&CYHAL_OPAMP_0, P1_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_OPAMP_1, P1_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_m */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_m[2] = {
    {&CYHAL_OPAMP_0, P1_1, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_OPAMP_1, P1_4, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p0[1] = {
    {&CYHAL_OPAMP_0, P1_0, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p1[1] = {
    {&CYHAL_OPAMP_1, P1_7, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_dsi_sar_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data[10] = {
    {&CYHAL_ADC_0, P0_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_3_PASS0_DSI_SAR_DATA2},
    {&CYHAL_ADC_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_PASS0_DSI_SAR_DATA3},
    {&CYHAL_ADC_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_PASS0_DSI_SAR_DATA4},
    {&CYHAL_ADC_0, P2_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_6_PASS0_DSI_SAR_DATA5},
    {&CYHAL_ADC_0, P2_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_7_PASS0_DSI_SAR_DATA6},
    {&CYHAL_ADC_0, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_PASS0_DSI_SAR_DATA7},
    {&CYHAL_ADC_0, P3_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_1_PASS0_DSI_SAR_DATA8},
    {&CYHAL_ADC_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_PASS0_DSI_SAR_DATA9},
    {&CYHAL_ADC_0, P4_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_2_PASS0_DSI_SAR_DATA10},
    {&CYHAL_ADC_0, P4_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_3_PASS0_DSI_SAR_DATA11},
};

/* Connections for: pass_dsi_sar_data_valid */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data_valid[1] = {
    {&CYHAL_ADC_0, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_PASS0_DSI_SAR_DATA_VALID},
};

/* Connections for: pass_dsi_sar_sample_done */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_sample_done[1] = {
    {&CYHAL_ADC_0, P0_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_2_PASS0_DSI_SAR_SAMPLE_DONE},
};

/* Connections for: pass_sar_ext_vref0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref0[1] = {
    {&CYHAL_ADC_0, P1_7, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sar_ext_vref1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref1[1] = {
    {&CYHAL_ADC_0, P1_7, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sarmux_pads */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sarmux_pads[4] = {
    {&CYHAL_ADC_0, P2_4, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_5, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_6, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_7, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_tr_sar_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_tr_sar_out[1] = {
    {&CYHAL_ADC_0, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_PASS0_TR_SAR_OUT},
};

/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[5] = {
    {&CYHAL_SCB_2, P0_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P0_0_SCB2_I2C_SCL},
    {&CYHAL_SCB_0, P1_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_0_SCB0_I2C_SCL},
    {&CYHAL_SCB_2, P1_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_2_SCB2_I2C_SCL},
    {&CYHAL_SCB_1, P3_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_0_SCB1_I2C_SCL},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P4_0_SCB0_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[5] = {
    {&CYHAL_SCB_2, P0_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P0_1_SCB2_I2C_SDA},
    {&CYHAL_SCB_0, P1_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_1_SCB0_I2C_SDA},
    {&CYHAL_SCB_2, P1_3, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_3_SCB2_I2C_SDA},
    {&CYHAL_SCB_1, P3_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_1_SCB1_I2C_SDA},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P4_1_SCB0_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[5] = {
    {&CYHAL_SCB_1, P0_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_6_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P1_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_7_SCB2_SPI_CLK},
    {&CYHAL_SCB_1, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P4_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_2_SCB0_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[3] = {
    {&CYHAL_SCB_0, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB0_SPI_MISO},
    {&CYHAL_SCB_1, P3_1, (uint8_t)CY_GPIO_DM_HIGHZ, P3_1_SCB1_SPI_MISO},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_HIGHZ, P4_1_SCB0_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[4] = {
    {&CYHAL_SCB_0, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P2_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_7_SCB2_SPI_MOSI},
    {&CYHAL_SCB_1, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_SCB1_SPI_MOSI},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_SCB0_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[5] = {
    {&CYHAL_SCB_2, P0_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_3_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_1, P0_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_7_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_0, P4_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_3_SCB0_SPI_SELECT0},
};

/* Connections for: scb_spi_m_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select1[3] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_SCB0_SPI_SELECT1},
    {&CYHAL_SCB_0, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_SCB0_SPI_SELECT1},
    {&CYHAL_SCB_1, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_SCB1_SPI_SELECT1},
};

/* Connections for: scb_spi_m_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select2[2] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_SCB0_SPI_SELECT2},
    {&CYHAL_SCB_1, P2_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_5_SCB1_SPI_SELECT2},
};

/* Connections for: scb_spi_m_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select3[2] = {
    {&CYHAL_SCB_0, P0_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_2_SCB0_SPI_SELECT3},
    {&CYHAL_SCB_1, P2_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_6_SCB1_SPI_SELECT3},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[5] = {
    {&CYHAL_SCB_1, P0_6, (uint8_t)CY_GPIO_DM_HIGHZ, P0_6_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P1_7, (uint8_t)CY_GPIO_DM_HIGHZ, P1_7_SCB2_SPI_CLK},
    {&CYHAL_SCB_1, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P4_2, (uint8_t)CY_GPIO_DM_HIGHZ, P4_2_SCB0_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[3] = {
    {&CYHAL_SCB_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB0_SPI_MISO},
    {&CYHAL_SCB_1, P3_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_1_SCB1_SPI_MISO},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_SCB0_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[4] = {
    {&CYHAL_SCB_0, P1_0, (uint8_t)CY_GPIO_DM_HIGHZ, P1_0_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P2_7, (uint8_t)CY_GPIO_DM_HIGHZ, P2_7_SCB2_SPI_MOSI},
    {&CYHAL_SCB_1, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB1_SPI_MOSI},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, P4_0_SCB0_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[5] = {
    {&CYHAL_SCB_2, P0_3, (uint8_t)CY_GPIO_DM_HIGHZ, P0_3_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_1, P0_7, (uint8_t)CY_GPIO_DM_HIGHZ, P0_7_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_0, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_1, P3_3, (uint8_t)CY_GPIO_DM_HIGHZ, P3_3_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_0, P4_3, (uint8_t)CY_GPIO_DM_HIGHZ, P4_3_SCB0_SPI_SELECT0},
};

/* Connections for: scb_spi_s_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select1[3] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_SCB0_SPI_SELECT1},
    {&CYHAL_SCB_0, P1_4, (uint8_t)CY_GPIO_DM_HIGHZ, P1_4_SCB0_SPI_SELECT1},
    {&CYHAL_SCB_1, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_SCB1_SPI_SELECT1},
};

/* Connections for: scb_spi_s_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select2[2] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, P0_1_SCB0_SPI_SELECT2},
    {&CYHAL_SCB_1, P2_5, (uint8_t)CY_GPIO_DM_HIGHZ, P2_5_SCB1_SPI_SELECT2},
};

/* Connections for: scb_spi_s_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select3[2] = {
    {&CYHAL_SCB_0, P0_2, (uint8_t)CY_GPIO_DM_HIGHZ, P0_2_SCB0_SPI_SELECT3},
    {&CYHAL_SCB_1, P2_6, (uint8_t)CY_GPIO_DM_HIGHZ, P2_6_SCB1_SPI_SELECT3},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[5] = {
    {&CYHAL_SCB_2, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_SCB2_UART_CTS},
    {&CYHAL_SCB_1, P0_6, (uint8_t)CY_GPIO_DM_HIGHZ, P0_6_SCB1_UART_CTS},
    {&CYHAL_SCB_0, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB0_UART_CTS},
    {&CYHAL_SCB_1, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_SCB1_UART_CTS},
    {&CYHAL_SCB_0, P4_2, (uint8_t)CY_GPIO_DM_HIGHZ, P4_2_SCB0_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[5] = {
    {&CYHAL_SCB_2, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_SCB2_UART_RTS},
    {&CYHAL_SCB_1, P0_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_7_SCB1_UART_RTS},
    {&CYHAL_SCB_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB0_UART_RTS},
    {&CYHAL_SCB_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_SCB1_UART_RTS},
    {&CYHAL_SCB_0, P4_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_3_SCB0_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[3] = {
    {&CYHAL_SCB_0, P1_0, (uint8_t)CY_GPIO_DM_HIGHZ, P1_0_SCB0_UART_RX},
    {&CYHAL_SCB_1, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB1_UART_RX},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, P4_0_SCB0_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[4] = {
    {&CYHAL_SCB_2, P0_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_6_SCB2_UART_TX},
    {&CYHAL_SCB_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB0_UART_TX},
    {&CYHAL_SCB_1, P3_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_1_SCB1_UART_TX},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_SCB0_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[7] = {
    {&CYHAL_TCPWM_0_0, P0_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_7_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_2, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_TCPWM_LINE2},
    {&CYHAL_TCPWM_0_3, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_TCPWM_LINE3},
    {&CYHAL_TCPWM_0_0, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_1, P2_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_6_TCPWM_LINE1},
    {&CYHAL_TCPWM_0_0, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_1, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_TCPWM_LINE1},
};

/* Connections for: tcpwm_line_compl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line_compl[6] = {
    {&CYHAL_TCPWM_0_2, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_TCPWM_LINE_COMPL2},
    {&CYHAL_TCPWM_0_3, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_TCPWM_LINE_COMPL3},
    {&CYHAL_TCPWM_0_0, P2_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_5_TCPWM_LINE_COMPL0},
    {&CYHAL_TCPWM_0_1, P2_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_7_TCPWM_LINE_COMPL1},
    {&CYHAL_TCPWM_0_0, P3_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_1_TCPWM_LINE_COMPL0},
    {&CYHAL_TCPWM_0_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_LINE_COMPL1},
};

/* Connections for: tcpwm_tr_in */
/* Since the GPIO pin is not tied to a particular TCPWM resource reuse the
   resource_inst field as the index of the tcpwm input line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_in[4] = {
    {(cyhal_resource_inst_t*)0, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_TCPWM_TR_IN0},
    {(cyhal_resource_inst_t*)1, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, P0_1_TCPWM_TR_IN1},
    {(cyhal_resource_inst_t*)2, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_TCPWM_TR_IN2},
    {(cyhal_resource_inst_t*)3, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_TCPWM_TR_IN3},
};

#endif
