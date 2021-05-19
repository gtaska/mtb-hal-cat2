/***************************************************************************//**
* \file cyhal_pmg1s3_48_qfn_cypm1311.c
*
* \brief
* PMG1S3 device GPIO HAL header for 48-QFN-CYPM1311 package
*
* \note
* Generator version: 1.6.0.512
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

#if defined(_GPIO_PMG1S3_48_QFN_CYPM1311_H_)
#include "pin_packages/cyhal_pmg1s3_48_qfn_cypm1311.h"

/* Hardware Blocks */
static const cyhal_resource_inst_t CYHAL_LPCOMP_0_0 = { CYHAL_RSC_LPCOMP, 0, 0 };
static const cyhal_resource_inst_t CYHAL_LPCOMP_1_0 = { CYHAL_RSC_LPCOMP, 1, 0 };
static const cyhal_resource_inst_t CYHAL_OPAMP_0 = { CYHAL_RSC_OPAMP, 0, 0 };
static const cyhal_resource_inst_t CYHAL_OPAMP_1 = { CYHAL_RSC_OPAMP, 1, 0 };
static const cyhal_resource_inst_t CYHAL_ADC_0 = { CYHAL_RSC_ADC, 0, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_0 = { CYHAL_RSC_SCB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_1 = { CYHAL_RSC_SCB, 1, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_2 = { CYHAL_RSC_SCB, 2, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_3 = { CYHAL_RSC_SCB, 3, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_4 = { CYHAL_RSC_SCB, 4, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_5 = { CYHAL_RSC_SCB, 5, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_6 = { CYHAL_RSC_SCB, 6, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_0 = { CYHAL_RSC_TCPWM, 0, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_2 = { CYHAL_RSC_TCPWM, 0, 2 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_3 = { CYHAL_RSC_TCPWM, 0, 3 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_4 = { CYHAL_RSC_TCPWM, 0, 4 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_5 = { CYHAL_RSC_TCPWM, 0, 5 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_6 = { CYHAL_RSC_TCPWM, 0, 6 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_7 = { CYHAL_RSC_TCPWM, 0, 7 };
static const cyhal_resource_inst_t CYHAL_USB_0 = { CYHAL_RSC_USB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_USBPD_0 = { CYHAL_RSC_USBPD, 0, 0 };
static const cyhal_resource_inst_t CYHAL_USBPD_1 = { CYHAL_RSC_USBPD, 1, 0 };

/* Pin connections */
/* Connections for: lpcomp_comp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_comp[2] = {
    {&CYHAL_LPCOMP_1_0, P5_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_0_0, P5_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: lpcomp_in_n */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_in_n[2] = {
    {&CYHAL_LPCOMP_1_0, P1_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_0_0, P1_5, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: lpcomp_in_p */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_in_p[2] = {
    {&CYHAL_LPCOMP_1_0, P1_1, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_LPCOMP_0_0, P1_6, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_dsi_ctb_cmp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_dsi_ctb_cmp[2] = {
    {&CYHAL_OPAMP_0, P5_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_2_PASS0_DSI_CTB_CMP0},
    {&CYHAL_OPAMP_1, P5_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_3_PASS0_DSI_CTB_CMP1},
};

/* Connections for: opamp_out_10x */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_out_10x[1] = {
    {&CYHAL_OPAMP_0, P3_5, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_m */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_m[2] = {
    {&CYHAL_OPAMP_1, P3_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_OPAMP_0, P3_6, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p0[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p1[1] = {
    {&CYHAL_OPAMP_1, P3_0, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_dsi_sar_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data[8] = {
    {&CYHAL_ADC_0, P1_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_5_PASS0_DSI_SAR_DATA2},
    {&CYHAL_ADC_0, P3_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_6_PASS0_DSI_SAR_DATA7},
    {&CYHAL_ADC_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_PASS0_DSI_SAR_DATA3},
    {&CYHAL_ADC_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_PASS0_DSI_SAR_DATA4},
    {&CYHAL_ADC_0, P5_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_0_PASS0_DSI_SAR_DATA6},
    {&CYHAL_ADC_0, P5_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_1_PASS0_DSI_SAR_DATA5},
    {&CYHAL_ADC_0, P6_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_0_PASS0_DSI_SAR_DATA0},
    {&CYHAL_ADC_0, P6_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_1_PASS0_DSI_SAR_DATA1},
};

/* Connections for: pass_dsi_sar_data_valid */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data_valid[1] = {
    {&CYHAL_ADC_0, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_PASS0_DSI_SAR_DATA_VALID},
};

/* Connections for: pass_dsi_sar_sample_done */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_sample_done[1] = {
    {&CYHAL_ADC_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_PASS0_DSI_SAR_SAMPLE_DONE},
};

/* Connections for: pass_sar_ext_vref0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref0[1] = {
    {&CYHAL_ADC_0, P3_0, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sar_ext_vref1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref1[1] = {
    {&CYHAL_ADC_0, P3_0, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sarmux_pads */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sarmux_pads[4] = {
    {&CYHAL_ADC_0, P2_1, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_2, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_3, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
    {&CYHAL_ADC_0, P2_4, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: pass_tr_sar_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_tr_sar_out[1] = {
    {&CYHAL_ADC_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_PASS0_TR_SAR_OUT},
};

/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[7] = {
    {&CYHAL_SCB_3, P1_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_1_SCB3_I2C_SCL},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_6_SCB1_I2C_SCL},
    {&CYHAL_SCB_5, P2_3, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_3_SCB5_I2C_SCL},
    {&CYHAL_SCB_4, P3_5, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_5_SCB4_I2C_SCL},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P4_0_SCB0_I2C_SCL},
    {&CYHAL_SCB_2, P5_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P5_0_SCB2_I2C_SCL},
    {&CYHAL_SCB_6, P6_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P6_1_SCB6_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[7] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_2_SCB3_I2C_SDA},
    {&CYHAL_SCB_1, P1_5, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_5_SCB1_I2C_SDA},
    {&CYHAL_SCB_5, P2_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_2_SCB5_I2C_SDA},
    {&CYHAL_SCB_4, P3_6, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_6_SCB4_I2C_SDA},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P4_1_SCB0_I2C_SDA},
    {&CYHAL_SCB_2, P5_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P5_1_SCB2_I2C_SDA},
    {&CYHAL_SCB_6, P6_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P6_0_SCB6_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[7] = {
    {&CYHAL_SCB_3, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_6_SCB1_SPI_CLK},
    {&CYHAL_SCB_5, P2_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_3_SCB5_SPI_CLK},
    {&CYHAL_SCB_4, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_SCB4_SPI_CLK},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P5_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_0_SCB2_SPI_CLK},
    {&CYHAL_SCB_6, P6_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_1_SCB6_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[7] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_5, (uint8_t)CY_GPIO_DM_HIGHZ, P1_5_SCB1_SPI_MISO},
    {&CYHAL_SCB_5, P2_2, (uint8_t)CY_GPIO_DM_HIGHZ, P2_2_SCB5_SPI_MISO},
    {&CYHAL_SCB_0, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_SCB0_SPI_MISO},
    {&CYHAL_SCB_4, P3_6, (uint8_t)CY_GPIO_DM_HIGHZ, P3_6_SCB4_SPI_MISO},
    {&CYHAL_SCB_2, P5_2, (uint8_t)CY_GPIO_DM_HIGHZ, P5_2_SCB2_SPI_MISO},
    {&CYHAL_SCB_6, P6_0, (uint8_t)CY_GPIO_DM_HIGHZ, P6_0_SCB6_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[5] = {
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB3_SPI_MOSI},
    {&CYHAL_SCB_4, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_SCB4_SPI_MOSI},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P5_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_1_SCB2_SPI_MOSI},
    {&CYHAL_SCB_6, P6_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_3_SCB6_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[5] = {
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_0, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_4, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_SCB4_SPI_SELECT0},
    {&CYHAL_SCB_2, P5_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_3_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_6, P6_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_2_SCB6_SPI_SELECT0},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[7] = {
    {&CYHAL_SCB_3, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_HIGHZ, P1_6_SCB1_SPI_CLK},
    {&CYHAL_SCB_5, P2_3, (uint8_t)CY_GPIO_DM_HIGHZ, P2_3_SCB5_SPI_CLK},
    {&CYHAL_SCB_4, P3_5, (uint8_t)CY_GPIO_DM_HIGHZ, P3_5_SCB4_SPI_CLK},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, P4_0_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P5_0, (uint8_t)CY_GPIO_DM_HIGHZ, P5_0_SCB2_SPI_CLK},
    {&CYHAL_SCB_6, P6_1, (uint8_t)CY_GPIO_DM_HIGHZ, P6_1_SCB6_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[7] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_5_SCB1_SPI_MISO},
    {&CYHAL_SCB_5, P2_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_2_SCB5_SPI_MISO},
    {&CYHAL_SCB_0, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_SCB0_SPI_MISO},
    {&CYHAL_SCB_4, P3_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_6_SCB4_SPI_MISO},
    {&CYHAL_SCB_2, P5_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_2_SCB2_SPI_MISO},
    {&CYHAL_SCB_6, P6_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_0_SCB6_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[5] = {
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_SCB3_SPI_MOSI},
    {&CYHAL_SCB_4, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB4_SPI_MOSI},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_HIGHZ, P4_1_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P5_1, (uint8_t)CY_GPIO_DM_HIGHZ, P5_1_SCB2_SPI_MOSI},
    {&CYHAL_SCB_6, P6_3, (uint8_t)CY_GPIO_DM_HIGHZ, P6_3_SCB6_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[5] = {
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_HIGHZ, P1_4_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_0, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_4, P3_3, (uint8_t)CY_GPIO_DM_HIGHZ, P3_3_SCB4_SPI_SELECT0},
    {&CYHAL_SCB_2, P5_3, (uint8_t)CY_GPIO_DM_HIGHZ, P5_3_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_6, P6_2, (uint8_t)CY_GPIO_DM_HIGHZ, P6_2_SCB6_SPI_SELECT0},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[5] = {
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_SCB3_UART_CTS},
    {&CYHAL_SCB_0, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_SCB0_UART_CTS},
    {&CYHAL_SCB_4, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB4_UART_CTS},
    {&CYHAL_SCB_2, P5_2, (uint8_t)CY_GPIO_DM_HIGHZ, P5_2_SCB2_UART_CTS},
    {&CYHAL_SCB_6, P6_3, (uint8_t)CY_GPIO_DM_HIGHZ, P6_3_SCB6_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[5] = {
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_SCB3_UART_RTS},
    {&CYHAL_SCB_0, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB0_UART_RTS},
    {&CYHAL_SCB_4, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_SCB4_UART_RTS},
    {&CYHAL_SCB_2, P5_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_3_SCB2_UART_RTS},
    {&CYHAL_SCB_6, P6_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_2_SCB6_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[6] = {
    {&CYHAL_SCB_3, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB3_UART_RX},
    {&CYHAL_SCB_5, P2_3, (uint8_t)CY_GPIO_DM_HIGHZ, P2_3_SCB5_UART_RX},
    {&CYHAL_SCB_4, P3_5, (uint8_t)CY_GPIO_DM_HIGHZ, P3_5_SCB4_UART_RX},
    {&CYHAL_SCB_0, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, P4_0_SCB0_UART_RX},
    {&CYHAL_SCB_2, P5_0, (uint8_t)CY_GPIO_DM_HIGHZ, P5_0_SCB2_UART_RX},
    {&CYHAL_SCB_6, P6_1, (uint8_t)CY_GPIO_DM_HIGHZ, P6_1_SCB6_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[7] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_SCB3_UART_TX},
    {&CYHAL_SCB_1, P1_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_5_SCB1_UART_TX},
    {&CYHAL_SCB_5, P2_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_2_SCB5_UART_TX},
    {&CYHAL_SCB_4, P3_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_6_SCB4_UART_TX},
    {&CYHAL_SCB_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_SCB0_UART_TX},
    {&CYHAL_SCB_2, P5_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_1_SCB2_UART_TX},
    {&CYHAL_SCB_6, P6_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_0_SCB6_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[7] = {
    {&CYHAL_TCPWM_0_4, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_TCPWM_LINE4},
    {&CYHAL_TCPWM_0_5, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_TCPWM_LINE5},
    {&CYHAL_TCPWM_0_2, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_TCPWM_LINE2},
    {&CYHAL_TCPWM_0_3, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_TCPWM_LINE3},
    {&CYHAL_TCPWM_0_6, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_TCPWM_LINE6},
    {&CYHAL_TCPWM_0_7, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_LINE7},
    {&CYHAL_TCPWM_0_0, P6_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_2_TCPWM_LINE0},
};

/* Connections for: tcpwm_tr_compare_match */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_compare_match[7] = {
    {&CYHAL_TCPWM_0_4, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_TCPWM_TR_COMPARE_MATCH4},
    {&CYHAL_TCPWM_0_5, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_TCPWM_TR_COMPARE_MATCH5},
    {&CYHAL_TCPWM_0_2, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_TCPWM_TR_COMPARE_MATCH2},
    {&CYHAL_TCPWM_0_3, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_TCPWM_TR_COMPARE_MATCH3},
    {&CYHAL_TCPWM_0_6, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_TCPWM_TR_COMPARE_MATCH6},
    {&CYHAL_TCPWM_0_7, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_TR_COMPARE_MATCH7},
    {&CYHAL_TCPWM_0_0, P6_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P6_2_TCPWM_TR_COMPARE_MATCH0},
};

/* Connections for: tcpwm_tr_in */
/* Since the GPIO pin is not tied to a particular TCPWM resource reuse the
   resource_inst field as the index of the tcpwm input line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_in[7] = {
    {(cyhal_resource_inst_t*)4, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_TCPWM_TR_IN4},
    {(cyhal_resource_inst_t*)5, P1_4, (uint8_t)CY_GPIO_DM_HIGHZ, P1_4_TCPWM_TR_IN5},
    {(cyhal_resource_inst_t*)2, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_TCPWM_TR_IN2},
    {(cyhal_resource_inst_t*)3, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_TCPWM_TR_IN3},
    {(cyhal_resource_inst_t*)6, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_TCPWM_TR_IN6},
    {(cyhal_resource_inst_t*)7, P3_3, (uint8_t)CY_GPIO_DM_HIGHZ, P3_3_TCPWM_TR_IN7},
    {(cyhal_resource_inst_t*)0, P6_2, (uint8_t)CY_GPIO_DM_HIGHZ, P6_2_TCPWM_TR_IN0},
};

/* Connections for: usb_dm */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usb_dm[1] = {
    {&CYHAL_USB_0, USBDM, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: usb_dp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usb_dp[1] = {
    {&CYHAL_USB_0, USBDP, (uint8_t)CY_GPIO_DM_ANALOG, HSIOM_SEL_GPIO},
};

/* Connections for: usb_vbus_det */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usb_vbus_det[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usb_vbus_valid */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usb_vbus_valid[1] = {
    {&CYHAL_USB_0, P3_3, (uint8_t)CY_GPIO_DM_HIGHZ, P3_3_USB_VBUS_VALID},
};

/* Connections for: usbpd_adc_cmp_out_gpio */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_adc_cmp_out_gpio[1] = {
    {&CYHAL_USBPD_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_USBPD0_ADC_CMP_OUT_GPIO0},
};

/* Connections for: usbpd_afc_tx_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_afc_tx_data[2] = {
    {&CYHAL_USBPD_0, P2_3, (uint8_t)CY_GPIO_DM_HIGHZ, P2_3_USBPD0_AFC_TX_DATA0},
    {&CYHAL_USBPD_0, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_USBPD0_AFC_TX_DATA0},
};

/* Connections for: usbpd_afc_tx_data_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_afc_tx_data_en[2] = {
    {&CYHAL_USBPD_0, P2_2, (uint8_t)CY_GPIO_DM_HIGHZ, P2_2_USBPD0_AFC_TX_DATA_EN},
    {&CYHAL_USBPD_0, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_USBPD0_AFC_TX_DATA_EN},
};

/* Connections for: usbpd_ddft0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_ddft0[1] = {
    {&CYHAL_USBPD_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_USBPD0_DDFT0},
};

/* Connections for: usbpd_ddft1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_ddft1[1] = {
    {&CYHAL_USBPD_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_USBPD0_DDFT1},
};

/* Connections for: usbpd_fault_gpio0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_fault_gpio0[1] = {
    {&CYHAL_USBPD_0, P1_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_5_USBPD0_FAULT_GPIO0},
};

/* Connections for: usbpd_fault_gpio1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_fault_gpio1[1] = {
    {&CYHAL_USBPD_0, P5_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_0_USBPD0_FAULT_GPIO1},
};

/* Connections for: usbpd_gpio_ddft0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft0[2] = {
    {&CYHAL_USBPD_1, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_USBPD1_GPIO_DDFT0},
    {&CYHAL_USBPD_0, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_USBPD0_GPIO_DDFT0},
};

/* Connections for: usbpd_gpio_ddft1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft1[1] = {
    {&CYHAL_USBPD_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_USBPD0_GPIO_DDFT1},
};

/* Connections for: usbpd_hpd */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_hpd[1] = {
    {&CYHAL_USBPD_0, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_USBPD0_HPD},
};

/* Connections for: usbpd_pad_usbphy_dm_bch_det */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_pad_usbphy_dm_bch_det[1] = {
    {&CYHAL_USBPD_0, USBDM, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_pad_usbphy_dp_bch_det */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_pad_usbphy_dp_bch_det[1] = {
    {&CYHAL_USBPD_0, USBDP, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu_dbg1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_dbg1[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu_dbg2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_dbg2[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu_io1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_io1[2] = {
    {&CYHAL_USBPD_1, P6_0, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
    {&CYHAL_USBPD_0, P6_3, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu_io2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_io2[2] = {
    {&CYHAL_USBPD_1, P6_1, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
    {&CYHAL_USBPD_0, P6_2, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu_lsrx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_lsrx[1] = {
    {&CYHAL_USBPD_1, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_USBPD1_SBU_LSRX},
};

/* Connections for: usbpd_sbu_lstx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu_lstx[1] = {
    {NULL, NC, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_swapt_in */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_in[1] = {
    {&CYHAL_USBPD_0, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_USBPD0_SWAPT_IN},
};

/* Connections for: usbpd_swapt_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_out[2] = {
    {&CYHAL_USBPD_0, P5_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_2_USBPD0_SWAPT_OUT0},
    {&CYHAL_USBPD_0, P5_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_3_USBPD0_SWAPT_OUT1},
};

/* Connections for: usbpd_tx_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data[2] = {
    {&CYHAL_USBPD_0, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_USBPD0_TX_DATA},
    {&CYHAL_USBPD_1, P5_1, (uint8_t)CY_GPIO_DM_HIGHZ, P5_1_USBPD1_TX_DATA},
};

/* Connections for: usbpd_tx_data_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data_en[1] = {
    {&CYHAL_USBPD_0, P5_5, (uint8_t)CY_GPIO_DM_HIGHZ, P5_5_USBPD0_TX_DATA_EN},
};

#endif
