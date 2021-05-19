/***************************************************************************//**
* \file cyhal_pmg1s2_40_qfn_pmg1_s2.c
*
* \brief
* PMG1S2 device GPIO HAL header for 40-QFN-PMG1-S2 package
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

#if defined(_GPIO_PMG1S2_40_QFN_PMG1_S2_H_)
#include "pin_packages/cyhal_pmg1s2_40_qfn_pmg1_s2.h"

/* Hardware Blocks */
static const cyhal_resource_inst_t CYHAL_SCB_0 = { CYHAL_RSC_SCB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_1 = { CYHAL_RSC_SCB, 1, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_2 = { CYHAL_RSC_SCB, 2, 0 };
static const cyhal_resource_inst_t CYHAL_SCB_3 = { CYHAL_RSC_SCB, 3, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_0 = { CYHAL_RSC_TCPWM, 0, 0 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_1 = { CYHAL_RSC_TCPWM, 0, 1 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_2 = { CYHAL_RSC_TCPWM, 0, 2 };
static const cyhal_resource_inst_t CYHAL_TCPWM_0_3 = { CYHAL_RSC_TCPWM, 0, 3 };
static const cyhal_resource_inst_t CYHAL_USB_0 = { CYHAL_RSC_USB, 0, 0 };
static const cyhal_resource_inst_t CYHAL_USBPD_0 = { CYHAL_RSC_USBPD, 0, 0 };

/* Pin connections */
/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[4] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P0_1_SCB0_I2C_SCL},
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_2_SCB3_I2C_SCL},
    {&CYHAL_SCB_1, P2_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_0_SCB1_I2C_SCL},
    {&CYHAL_SCB_2, P3_5, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_5_SCB2_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[4] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P0_0_SCB0_I2C_SDA},
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P1_3_SCB3_I2C_SDA},
    {&CYHAL_SCB_1, P2_1, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P2_1_SCB1_I2C_SDA},
    {&CYHAL_SCB_2, P3_4, (uint8_t)CY_GPIO_DM_OD_DRIVESLOW, P3_4_SCB2_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[4] = {
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P2_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_0_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P2_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_6_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_SCB2_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[6] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_HIGHZ, P0_1_SCB0_SPI_MISO},
    {&CYHAL_SCB_2, P1_0, (uint8_t)CY_GPIO_DM_HIGHZ, P1_0_SCB2_SPI_MISO},
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_HIGHZ, P1_4_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_HIGHZ, P1_6_SCB1_SPI_MISO},
    {&CYHAL_SCB_1, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_SCB1_SPI_MISO},
    {&CYHAL_SCB_3, P3_6, (uint8_t)CY_GPIO_DM_HIGHZ, P3_6_SCB3_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[4] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_SCB3_SPI_MOSI},
    {&CYHAL_SCB_1, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB1_SPI_MOSI},
    {&CYHAL_SCB_0, P2_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_5_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P3_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_4_SCB2_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[6] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_2, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_3, P1_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_5_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_1, P1_7, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_7_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_1, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_3, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_SCB3_SPI_SELECT0},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[4] = {
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_HIGHZ, P1_3_SCB3_SPI_CLK},
    {&CYHAL_SCB_1, P2_0, (uint8_t)CY_GPIO_DM_HIGHZ, P2_0_SCB1_SPI_CLK},
    {&CYHAL_SCB_0, P2_6, (uint8_t)CY_GPIO_DM_HIGHZ, P2_6_SCB0_SPI_CLK},
    {&CYHAL_SCB_2, P3_5, (uint8_t)CY_GPIO_DM_HIGHZ, P3_5_SCB2_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[6] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_SCB0_SPI_MISO},
    {&CYHAL_SCB_2, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_SCB2_SPI_MISO},
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_SCB3_SPI_MISO},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_6_SCB1_SPI_MISO},
    {&CYHAL_SCB_1, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_SCB1_SPI_MISO},
    {&CYHAL_SCB_3, P3_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_6_SCB3_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[4] = {
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB3_SPI_MOSI},
    {&CYHAL_SCB_1, P2_1, (uint8_t)CY_GPIO_DM_HIGHZ, P2_1_SCB1_SPI_MOSI},
    {&CYHAL_SCB_0, P2_5, (uint8_t)CY_GPIO_DM_HIGHZ, P2_5_SCB0_SPI_MOSI},
    {&CYHAL_SCB_2, P3_4, (uint8_t)CY_GPIO_DM_HIGHZ, P3_4_SCB2_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[6] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_SCB0_SPI_SELECT0},
    {&CYHAL_SCB_2, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB2_SPI_SELECT0},
    {&CYHAL_SCB_3, P1_5, (uint8_t)CY_GPIO_DM_HIGHZ, P1_5_SCB3_SPI_SELECT0},
    {&CYHAL_SCB_1, P1_7, (uint8_t)CY_GPIO_DM_HIGHZ, P1_7_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_1, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_SCB1_SPI_SELECT0},
    {&CYHAL_SCB_3, P3_3, (uint8_t)CY_GPIO_DM_HIGHZ, P3_3_SCB3_SPI_SELECT0},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[4] = {
    {&CYHAL_SCB_0, P0_0, (uint8_t)CY_GPIO_DM_HIGHZ, P0_0_SCB0_UART_CTS},
    {&CYHAL_SCB_3, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB3_UART_CTS},
    {&CYHAL_SCB_1, P2_0, (uint8_t)CY_GPIO_DM_HIGHZ, P2_0_SCB1_UART_CTS},
    {&CYHAL_SCB_2, P3_4, (uint8_t)CY_GPIO_DM_HIGHZ, P3_4_SCB2_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[4] = {
    {&CYHAL_SCB_0, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_SCB0_UART_RTS},
    {&CYHAL_SCB_3, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB3_UART_RTS},
    {&CYHAL_SCB_1, P2_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_1_SCB1_UART_RTS},
    {&CYHAL_SCB_2, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_SCB2_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[5] = {
    {&CYHAL_SCB_2, P1_1, (uint8_t)CY_GPIO_DM_HIGHZ, P1_1_SCB2_UART_RX},
    {&CYHAL_SCB_0, P1_2, (uint8_t)CY_GPIO_DM_HIGHZ, P1_2_SCB0_UART_RX},
    {&CYHAL_SCB_3, P1_5, (uint8_t)CY_GPIO_DM_HIGHZ, P1_5_SCB3_UART_RX},
    {&CYHAL_SCB_1, P1_7, (uint8_t)CY_GPIO_DM_HIGHZ, P1_7_SCB1_UART_RX},
    {&CYHAL_SCB_0, P2_6, (uint8_t)CY_GPIO_DM_HIGHZ, P2_6_SCB0_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[5] = {
    {&CYHAL_SCB_2, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_SCB2_UART_TX},
    {&CYHAL_SCB_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_SCB0_UART_TX},
    {&CYHAL_SCB_3, P1_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_4_SCB3_UART_TX},
    {&CYHAL_SCB_1, P1_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_6_SCB1_UART_TX},
    {&CYHAL_SCB_0, P2_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_5_SCB0_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[6] = {
    {&CYHAL_TCPWM_0_0, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_1, P0_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_1_TCPWM_LINE1},
    {&CYHAL_TCPWM_0_0, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_TCPWM_LINE0},
    {&CYHAL_TCPWM_0_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_LINE1},
    {&CYHAL_TCPWM_0_2, P3_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_4_TCPWM_LINE2},
    {&CYHAL_TCPWM_0_3, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_TCPWM_LINE3},
};

/* Connections for: tcpwm_tr_compare_match */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_compare_match[4] = {
    {&CYHAL_TCPWM_0_0, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_TCPWM_TR_COMPARE_MATCH0},
    {&CYHAL_TCPWM_0_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_TR_COMPARE_MATCH1},
    {&CYHAL_TCPWM_0_2, P3_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_4_TCPWM_TR_COMPARE_MATCH2},
    {&CYHAL_TCPWM_0_3, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_TCPWM_TR_COMPARE_MATCH3},
};

/* Connections for: tcpwm_tr_overflow */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_overflow[4] = {
    {&CYHAL_TCPWM_0_0, P3_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_2_TCPWM_TR_OVERFLOW0},
    {&CYHAL_TCPWM_0_1, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_TCPWM_TR_OVERFLOW1},
    {&CYHAL_TCPWM_0_2, P3_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_4_TCPWM_TR_OVERFLOW2},
    {&CYHAL_TCPWM_0_3, P3_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_5_TCPWM_TR_OVERFLOW3},
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
    {&CYHAL_USB_0, VSSIO_4, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usb_vbus_valid */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usb_vbus_valid[1] = {
    {&CYHAL_USB_0, P2_4, (uint8_t)CY_GPIO_DM_HIGHZ, P2_4_USB_VBUS_VALID},
};

/* Connections for: usbpd_auxn_io */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_auxn_io[1] = {
    {&CYHAL_USBPD_0, P1_7, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_auxp_io */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_auxp_io[1] = {
    {&CYHAL_USBPD_0, P1_6, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_cmp_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_cmp_out[4] = {
    {&CYHAL_USBPD_0, P0_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P0_0_USBPD0_CMP_OUT0},
    {&CYHAL_USBPD_0, P1_0, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_0_USBPD0_CMP_OUT1},
    {&CYHAL_USBPD_0, P2_6, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_6_USBPD0_CMP_OUT0},
    {&CYHAL_USBPD_0, P3_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_4_USBPD0_CMP_OUT1},
};

/* Connections for: usbpd_gpio_ddft0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft0[1] = {
    {&CYHAL_USBPD_0, P2_5, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_5_USBPD0_GPIO_DDFT0},
};

/* Connections for: usbpd_gpio_ddft1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_gpio_ddft1[1] = {
    {&CYHAL_USBPD_0, P2_4, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P2_4_USBPD0_GPIO_DDFT1},
};

/* Connections for: usbpd_hpd */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_hpd[2] = {
    {&CYHAL_USBPD_0, P1_2, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_2_USBPD0_HPD},
    {&CYHAL_USBPD_0, P3_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P3_3_USBPD0_HPD},
};

/* Connections for: usbpd_sbu1_io */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu1_io[1] = {
    {&CYHAL_USBPD_0, P1_4, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_sbu2_io */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_sbu2_io[1] = {
    {&CYHAL_USBPD_0, P1_5, (uint8_t)CY_GPIO_DM_HIGHZ, HSIOM_SEL_GPIO},
};

/* Connections for: usbpd_swapt_in */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_in[1] = {
    {&CYHAL_USBPD_0, P3_6, (uint8_t)CY_GPIO_DM_HIGHZ, P3_6_USBPD0_SWAPT_IN},
};

/* Connections for: usbpd_swapt_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_swapt_out[2] = {
    {&CYHAL_USBPD_0, P1_1, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_1_USBPD0_SWAPT_OUT1},
    {&CYHAL_USBPD_0, P1_3, (uint8_t)CY_GPIO_DM_STRONG_IN_OFF, P1_3_USBPD0_SWAPT_OUT0},
};

/* Connections for: usbpd_tx_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data[1] = {
    {&CYHAL_USBPD_0, P3_2, (uint8_t)CY_GPIO_DM_HIGHZ, P3_2_USBPD0_TX_DATA},
};

/* Connections for: usbpd_tx_data_en */
const cyhal_resource_pin_mapping_t cyhal_pin_map_usbpd_tx_data_en[1] = {
    {&CYHAL_USBPD_0, P3_5, (uint8_t)CY_GPIO_DM_HIGHZ, P3_5_USBPD0_TX_DATA_EN},
};

#endif
