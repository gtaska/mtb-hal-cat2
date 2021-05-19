/***************************************************************************//**
* \file cyhal_pmg1s1_40_qfn_pmg1_s1.c
*
* \brief
* PMG1S1 device GPIO HAL header for 40-QFN-PMG1-S1 package
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

#if defined(_GPIO_PMG1S1_40_QFN_PMG1_S1_H_)
#include "pin_packages/cyhal_pmg1s1_40_qfn_pmg1_s1.h"

/* Hardware Blocks */
static const cyhal_resource_inst_t CYHAL_SCB_0 = { CYHAL_RSC_SCB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_1 = { CYHAL_RSC_SCB, 1, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_2 = { CYHAL_RSC_SCB, 2, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_3 = { CYHAL_RSC_SCB, 3, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_0 = { CYHAL_RSC_TCPWM, 0, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_1 = { CYHAL_RSC_TCPWM, 0, 1 };
static const cyhal_resource_inst_t CYHAL_USBPD_0 = { CYHAL_RSC_USBPD, 0, 0 };

/* Pin connections */
/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[4] = {
    {&CYHAL_SCB_1, P1_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_2_SCB1_I2C_SCL},
    {&CYHAL_SCB_3, P2_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_0_SCB3_I2C_SCL},
    {&CYHAL_SCB_2, P3_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_2_SCB2_I2C_SCL},
    {&CYHAL_SCB_0, P5_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P5_1_SCB0_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[4] = {
    {&CYHAL_SCB_1, P1_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_1_SCB1_I2C_SDA},
    {&CYHAL_SCB_3, P2_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_1_SCB3_I2C_SDA},
    {&CYHAL_SCB_2, P3_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_1_SCB2_I2C_SDA},
    {&CYHAL_SCB_0, P5_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P5_0_SCB0_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[4] = {
    {&CYHAL_SCB_3, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_SCB2_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[4] = {
    {&CYHAL_SCB_3, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB1_SPI_MISO},
    {&CYHAL_SCB_2, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, P4_0_SCB2_SPI_MISO},
    {&CYHAL_SCB_0, P5_1, (uint8_t)CY_GPIO_DM_HIGHZ, P5_1_SCB0_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[4] = {
    {&CYHAL_SCB_1, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB1_SPI_MOSI},
    {&CYHAL_SCB_3, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB3_SPI_MOSI},
    {&CYHAL_SCB_2, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_SCB2_SPI_MOSI},
    {&CYHAL_SCB_0, P5_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_0_SCB0_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[4] = {
    {&CYHAL_SCB_1, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_3, P2_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_0_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_0, P2_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_2_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_2, P3_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_1_SCB2_SPI_SELECT0},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[4] = {
    {&CYHAL_SCB_3, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, P0_1_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P4_1, (uint8_t)CY_GPIO_DM_HIGHZ, P4_1_SCB2_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[4] = {
    {&CYHAL_SCB_3, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_SCB1_SPI_MISO},
    {&CYHAL_SCB_2, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_SCB2_SPI_MISO},
    {&CYHAL_SCB_0, P5_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_1_SCB0_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[4] = {
    {&CYHAL_SCB_1, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB1_SPI_MOSI},
    {&CYHAL_SCB_3, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_SCB3_SPI_MOSI},
    {&CYHAL_SCB_2, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_SCB2_SPI_MOSI},
    {&CYHAL_SCB_0, P5_0, (uint8_t)CY_GPIO_DM_HIGHZ, P5_0_SCB0_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[4] = {
    {&CYHAL_SCB_1, P1_0, (uint8_t)CY_GPIO_DM_HIGHZ, P1_0_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_3, P2_0, (uint8_t)CY_GPIO_DM_HIGHZ, P2_0_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_0, P2_2, (uint8_t)CY_GPIO_DM_HIGHZ, P2_2_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_2, P3_1, (uint8_t)CY_GPIO_DM_HIGHZ, P3_1_SCB2_SPI_SELECT0},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[4] = {
    {&CYHAL_SCB_1, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB1_UART_CTS},
    {&CYHAL_SCB_3, P2_0, (uint8_t)CY_GPIO_DM_HIGHZ, P2_0_SCB3_UART_CTS},
    {&CYHAL_SCB_0, P2_2, (uint8_t)CY_GPIO_DM_HIGHZ, P2_2_SCB0_UART_CTS},
    {&CYHAL_SCB_2, P3_1, (uint8_t)CY_GPIO_DM_HIGHZ, P3_1_SCB2_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[4] = {
    {&CYHAL_SCB_1, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB1_UART_RTS},
    {&CYHAL_SCB_3, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB3_UART_RTS},
    {&CYHAL_SCB_2, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_SCB2_UART_RTS},
    {&CYHAL_SCB_0, P5_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_0_SCB0_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[4] = {
    {&CYHAL_SCB_3, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, P0_1_SCB3_UART_RX},
    {&CYHAL_SCB_1, P1_0, (uint8_t)CY_GPIO_DM_HIGHZ, P1_0_SCB1_UART_RX},
    {&CYHAL_SCB_0, P3_0, (uint8_t)CY_GPIO_DM_HIGHZ, P3_0_SCB0_UART_RX},
    {&CYHAL_SCB_2, P4_1, (uint8_t)CY_GPIO_DM_HIGHZ, P4_1_SCB2_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[4] = {
    {&CYHAL_SCB_3, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_SCB3_UART_TX},
    {&CYHAL_SCB_1, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB1_UART_TX},
    {&CYHAL_SCB_2, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_SCB2_UART_TX},
    {&CYHAL_SCB_0, P5_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P5_1_SCB0_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[2] = {
    {&CYHAL_TCPWM_0_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_1, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_TCPWM_LINE1},
};

/* Connections for: tcpwm_tr_compare_match */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_compare_match[2] = {
    {&CYHAL_TCPWM_0_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_TCPWM_TR_COMPARE_MATCH0},
    {&CYHAL_TCPWM_0_1, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_TCPWM_TR_COMPARE_MATCH1},
};

/* Connections for: tcpwm_tr_overflow */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_overflow[2] = {
    {&CYHAL_TCPWM_0_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_TCPWM_TR_OVERFLOW0},
    {&CYHAL_TCPWM_0_1, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_TCPWM_TR_OVERFLOW1},
};

/* Connections for: usbpd_adc_cmp_out_gpio */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_adc_cmp_out_gpio[1] = {
    {&CYHAL_USBPD_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_USBPD0_ADC_CMP_OUT_GPIO0},
};

/* Connections for: usbpd_afc_tx_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_afc_tx_data[1] = {
    {&CYHAL_USBPD_0, P2_0, (uint8_t)CY_GPIO_DM_HIGHZ, P2_0_USBPD0_AFC_TX_DATA},
};

/* Connections for: usbpd_afc_tx_data_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_afc_tx_data_en[1] = {
    {&CYHAL_USBPD_0, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_USBPD0_AFC_TX_DATA_EN},
};

/* Connections for: usbpd_fault_gpio0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_fault_gpio0[1] = {
    {&CYHAL_USBPD_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_USBPD0_FAULT_GPIO0},
};

/* Connections for: usbpd_fault_gpio1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_fault_gpio1[1] = {
    {&CYHAL_USBPD_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_USBPD0_FAULT_GPIO1},
};

/* Connections for: usbpd_gpio_ddft0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft0[1] = {
    {&CYHAL_USBPD_0, P2_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_0_USBPD0_GPIO_DDFT0},
};

/* Connections for: usbpd_gpio_ddft1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft1[1] = {
    {&CYHAL_USBPD_0, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_USBPD0_GPIO_DDFT1},
};

/* Connections for: usbpd_hpd */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_hpd[1] = {
    {&CYHAL_USBPD_0, P3_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_0_USBPD0_HPD},
};

/* Connections for: usbpd_pad_dpdm_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_pad_dpdm_uart_rx[1] = {
    {&CYHAL_USBPD_0, P4_1, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_pad_dpdm_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_pad_dpdm_uart_tx[1] = {
    {&CYHAL_USBPD_0, P4_0, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu20_lsrx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu20_lsrx[1] = {
    {&CYHAL_USBPD_0, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu20_lstx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu20_lstx[1] = {
    {&CYHAL_USBPD_0, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_swapt_in */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_in[1] = {
    {&CYHAL_USBPD_0, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_USBPD0_SWAPT_IN},
};

/* Connections for: usbpd_swapt_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_out[2] = {
    {&CYHAL_USBPD_0, P4_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_0_USBPD0_SWAPT_OUT0},
    {&CYHAL_USBPD_0, P4_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P4_1_USBPD0_SWAPT_OUT1},
};

/* Connections for: usbpd_tx_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data[1] = {
    {&CYHAL_USBPD_0, P2_2, (uint8_t)CY_GPIO_DM_HIGHZ, P2_2_USBPD0_TX_DATA},
};

/* Connections for: usbpd_tx_data_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data_en[1] = {
    {&CYHAL_USBPD_0, P3_1, (uint8_t)CY_GPIO_DM_HIGHZ, P3_1_USBPD0_TX_DATA_EN},
};

#endif
