/***************************************************************************//**
* \file cyhal_psoc4100sp256kb_64_tqfp_mc.c
*
* \brief
* PSoC4100Sp256KB device GPIO HAL header for 64-TQFP-MC package
*
********************************************************************************
* \copyright
* (c) (2016-2021), Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
*
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

#if defined(_GPIO_PSOC4100SP256KB_64_TQFP_MC_H_)
#include "pin_packages/cyhal_psoc4100sp256kb_64_tqfp_mc.h"

/* Pin connections */
/* Connections for: lpcomp_dsi_comp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_dsi_comp[6] = {
    {0u, 0u, P2_7, P2_7_LPCOMP_COMP0},
    {0u, 1u, P3_7, P3_7_LPCOMP_COMP1},
    {0u, 0u, P4_2, P4_2_LPCOMP_COMP0},
    {0u, 1u, P4_3, P4_3_LPCOMP_COMP1},
    {0u, 0u, P5_2, P5_2_LPCOMP_COMP0},
    {0u, 1u, P5_3, P5_3_LPCOMP_COMP1},
};

/* Connections for: lpcomp_inn_comp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_inn_comp[2] = {
    {0u, 0u, P0_1, HSIOM_SEL_GPIO},
    {0u, 1u, P0_3, HSIOM_SEL_GPIO},
};

/* Connections for: lpcomp_inp_comp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_lpcomp_inp_comp[2] = {
    {0u, 0u, P0_0, HSIOM_SEL_GPIO},
    {0u, 1u, P0_2, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_dsi_ctb_cmp */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_dsi_ctb_cmp[4] = {
    {0u, 0u, P3_4, P3_4_PASS0_DSI_CTB_CMP0},
    {0u, 1u, P3_5, P3_5_PASS0_DSI_CTB_CMP1},
    {0u, 0u, P5_0, P5_0_PASS1_DSI_CTB_CMP0},
    {0u, 1u, P5_1, P5_1_PASS1_DSI_CTB_CMP1},
};

/* Connections for: opamp_out_10x */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_out_10x[3] = {
    {0u, 0u, P1_2, HSIOM_SEL_GPIO},
    {0u, 1u, P1_3, HSIOM_SEL_GPIO},
    {0u, 0u, P6_4, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_m */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_m[3] = {
    {0u, 0u, P1_1, HSIOM_SEL_GPIO},
    {0u, 1u, P1_4, HSIOM_SEL_GPIO},
    {0u, 0u, P6_2, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p0[3] = {
    {0u, 0u, P1_0, HSIOM_SEL_GPIO},
    {0u, 1u, P1_5, HSIOM_SEL_GPIO},
    {0u, 0u, P6_1, HSIOM_SEL_GPIO},
};

/* Connections for: opamp_vin_p1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_opamp_vin_p1[3] = {
    {0u, 0u, P1_6, HSIOM_SEL_GPIO},
    {0u, 1u, P1_7, HSIOM_SEL_GPIO},
    {0u, 0u, P6_5, HSIOM_SEL_GPIO},
};

/* Connections for: pass_dsi_sar_data */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data[24] = {
    {1u, 2u, P0_2, P0_2_PASS1_DSI_SAR_DATA2},
    {1u, 0u, P0_3, P0_3_PASS1_DSI_SAR_DATA0},
    {0u, 0u, P0_4, P0_4_PASS0_DSI_SAR_DATA0},
    {0u, 1u, P0_5, P0_5_PASS0_DSI_SAR_DATA1},
    {1u, 1u, P0_7, P0_7_PASS1_DSI_SAR_DATA1},
    {1u, 11u, P1_6, P1_6_PASS1_DSI_SAR_DATA11},
    {1u, 10u, P2_0, P2_0_PASS1_DSI_SAR_DATA10},
    {1u, 5u, P2_1, P2_1_PASS1_DSI_SAR_DATA5},
    {1u, 6u, P2_2, P2_2_PASS1_DSI_SAR_DATA6},
    {1u, 7u, P2_3, P2_3_PASS1_DSI_SAR_DATA7},
    {1u, 8u, P2_6, P2_6_PASS1_DSI_SAR_DATA8},
    {1u, 9u, P2_7, P2_7_PASS1_DSI_SAR_DATA9},
    {0u, 11u, P3_0, P3_0_PASS0_DSI_SAR_DATA11},
    {0u, 9u, P3_1, P3_1_PASS0_DSI_SAR_DATA9},
    {0u, 10u, P3_2, P3_2_PASS0_DSI_SAR_DATA10},
    {0u, 8u, P3_3, P3_3_PASS0_DSI_SAR_DATA8},
    {0u, 6u, P3_6, P3_6_PASS0_DSI_SAR_DATA6},
    {0u, 7u, P3_7, P3_7_PASS0_DSI_SAR_DATA7},
    {0u, 5u, P4_0, P4_0_PASS0_DSI_SAR_DATA5},
    {0u, 4u, P4_1, P4_1_PASS0_DSI_SAR_DATA4},
    {0u, 3u, P4_2, P4_2_PASS0_DSI_SAR_DATA3},
    {0u, 2u, P4_3, P4_3_PASS0_DSI_SAR_DATA2},
    {1u, 3u, P7_0, P7_0_PASS1_DSI_SAR_DATA3},
    {1u, 4u, P7_1, P7_1_PASS1_DSI_SAR_DATA4},
};

/* Connections for: pass_dsi_sar_data_valid */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_data_valid[2] = {
    {0u, 0u, P0_0, P0_0_PASS0_DSI_SAR_DATA_VALID},
    {1u, 0u, P0_1, P0_1_PASS1_DSI_SAR_DATA_VALID},
};

/* Connections for: pass_dsi_sar_sample_done */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_dsi_sar_sample_done[2] = {
    {1u, 0u, P1_2, P1_2_PASS1_DSI_SAR_SAMPLE_DONE},
    {0u, 0u, P1_3, P1_3_PASS0_DSI_SAR_SAMPLE_DONE},
};

/* Connections for: pass_sar_ext_vref0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref0[2] = {
    {0u, 0u, P1_7, HSIOM_SEL_GPIO},
    {1u, 0u, P6_5, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sar_ext_vref1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sar_ext_vref1[2] = {
    {0u, 0u, P1_7, HSIOM_SEL_GPIO},
    {1u, 0u, P6_5, HSIOM_SEL_GPIO},
};

/* Connections for: pass_sarmux_pads */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_sarmux_pads[16] = {
    {0u, 0u, P2_0, HSIOM_SEL_GPIO},
    {0u, 1u, P2_1, HSIOM_SEL_GPIO},
    {0u, 2u, P2_2, HSIOM_SEL_GPIO},
    {0u, 3u, P2_3, HSIOM_SEL_GPIO},
    {0u, 4u, P2_4, HSIOM_SEL_GPIO},
    {0u, 5u, P2_5, HSIOM_SEL_GPIO},
    {0u, 6u, P2_6, HSIOM_SEL_GPIO},
    {0u, 7u, P2_7, HSIOM_SEL_GPIO},
    {0u, 0u, P3_0, HSIOM_SEL_GPIO},
    {0u, 1u, P3_1, HSIOM_SEL_GPIO},
    {0u, 2u, P3_2, HSIOM_SEL_GPIO},
    {0u, 3u, P3_3, HSIOM_SEL_GPIO},
    {0u, 4u, P3_4, HSIOM_SEL_GPIO},
    {0u, 5u, P3_5, HSIOM_SEL_GPIO},
    {0u, 6u, P3_6, HSIOM_SEL_GPIO},
    {0u, 7u, P3_7, HSIOM_SEL_GPIO},
};

/* Connections for: pass_tr_sar_out */
const cyhal_resource_pin_mapping_t cyhal_pin_map_pass_tr_sar_out[2] = {
    {1u, 0u, P1_1, P1_1_PASS1_TR_SAR_OUT},
    {0u, 0u, P1_4, P1_4_PASS0_TR_SAR_OUT},
};

/* Connections for: scb_i2c_scl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_scl[11] = {
    {2u, 0u, P0_0, P0_0_SCB2_I2C_SCL},
    {1u, 0u, P0_4, P0_4_SCB1_I2C_SCL},
    {0u, 0u, P1_0, P1_0_SCB0_I2C_SCL},
    {2u, 0u, P1_2, P1_2_SCB2_I2C_SCL},
    {3u, 0u, P1_4, P1_4_SCB3_I2C_SCL},
    {1u, 0u, P2_0, P2_0_SCB1_I2C_SCL},
    {1u, 0u, P3_0, P3_0_SCB1_I2C_SCL},
    {0u, 0u, P4_0, P4_0_SCB0_I2C_SCL},
    {2u, 0u, P5_0, P5_0_SCB2_I2C_SCL},
    {4u, 0u, P6_4, P6_4_SCB4_I2C_SCL},
    {3u, 0u, P7_0, P7_0_SCB3_I2C_SCL},
};

/* Connections for: scb_i2c_sda */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_i2c_sda[12] = {
    {2u, 0u, P0_1, P0_1_SCB2_I2C_SDA},
    {1u, 0u, P0_5, P0_5_SCB1_I2C_SDA},
    {0u, 0u, P1_1, P1_1_SCB0_I2C_SDA},
    {2u, 0u, P1_3, P1_3_SCB2_I2C_SDA},
    {3u, 0u, P1_5, P1_5_SCB3_I2C_SDA},
    {1u, 0u, P2_1, P2_1_SCB1_I2C_SDA},
    {1u, 0u, P3_1, P3_1_SCB1_I2C_SDA},
    {0u, 0u, P4_1, P4_1_SCB0_I2C_SDA},
    {2u, 0u, P5_1, P5_1_SCB2_I2C_SDA},
    {3u, 0u, P6_1, P6_1_SCB3_I2C_SDA},
    {4u, 0u, P6_5, P6_5_SCB4_I2C_SDA},
    {3u, 0u, P7_1, P7_1_SCB3_I2C_SDA},
};

/* Connections for: scb_spi_m_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_clk[9] = {
    {1u, 0u, P0_6, P0_6_SCB1_SPI_CLK},
    {0u, 0u, P1_2, P1_2_SCB0_SPI_CLK},
    {2u, 0u, P1_7, P1_7_SCB2_SPI_CLK},
    {1u, 0u, P2_2, P2_2_SCB1_SPI_CLK},
    {1u, 0u, P3_2, P3_2_SCB1_SPI_CLK},
    {0u, 0u, P4_2, P4_2_SCB0_SPI_CLK},
    {4u, 0u, P4_6, P4_6_SCB4_SPI_CLK},
    {2u, 0u, P5_2, P5_2_SCB2_SPI_CLK},
    {3u, 0u, P6_2, P6_2_SCB3_SPI_CLK},
};

/* Connections for: scb_spi_m_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_miso[10] = {
    {1u, 0u, P0_5, P0_5_SCB1_SPI_MISO},
    {0u, 0u, P1_1, P1_1_SCB0_SPI_MISO},
    {1u, 0u, P2_1, P2_1_SCB1_SPI_MISO},
    {1u, 0u, P3_1, P3_1_SCB1_SPI_MISO},
    {2u, 0u, P3_7, P3_7_SCB2_SPI_MISO},
    {0u, 0u, P4_1, P4_1_SCB0_SPI_MISO},
    {4u, 0u, P4_5, P4_5_SCB4_SPI_MISO},
    {2u, 0u, P5_1, P5_1_SCB2_SPI_MISO},
    {3u, 0u, P6_1, P6_1_SCB3_SPI_MISO},
    {3u, 0u, P7_1, P7_1_SCB3_SPI_MISO},
};

/* Connections for: scb_spi_m_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_mosi[9] = {
    {1u, 0u, P0_4, P0_4_SCB1_SPI_MOSI},
    {0u, 0u, P1_0, P1_0_SCB0_SPI_MOSI},
    {1u, 0u, P2_0, P2_0_SCB1_SPI_MOSI},
    {2u, 0u, P2_7, P2_7_SCB2_SPI_MOSI},
    {1u, 0u, P3_0, P3_0_SCB1_SPI_MOSI},
    {0u, 0u, P4_0, P4_0_SCB0_SPI_MOSI},
    {4u, 0u, P4_4, P4_4_SCB4_SPI_MOSI},
    {2u, 0u, P5_0, P5_0_SCB2_SPI_MOSI},
    {3u, 0u, P7_0, P7_0_SCB3_SPI_MOSI},
};

/* Connections for: scb_spi_m_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select0[8] = {
    {2u, 0u, P0_3, P0_3_SCB2_SPI_SELECT0},
    {1u, 0u, P0_7, P0_7_SCB1_SPI_SELECT0},
    {0u, 0u, P1_3, P1_3_SCB0_SPI_SELECT0},
    {1u, 0u, P2_3, P2_3_SCB1_SPI_SELECT0},
    {1u, 0u, P3_3, P3_3_SCB1_SPI_SELECT0},
    {0u, 0u, P4_3, P4_3_SCB0_SPI_SELECT0},
    {4u, 0u, P4_7, P4_7_SCB4_SPI_SELECT0},
    {2u, 0u, P5_3, P5_3_SCB2_SPI_SELECT0},
};

/* Connections for: scb_spi_m_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select1[8] = {
    {0u, 0u, P0_0, P0_0_SCB0_SPI_SELECT1},
    {0u, 0u, P1_4, P1_4_SCB0_SPI_SELECT1},
    {1u, 0u, P2_4, P2_4_SCB1_SPI_SELECT1},
    {1u, 0u, P3_4, P3_4_SCB1_SPI_SELECT1},
    {0u, 0u, P4_4, P4_4_SCB0_SPI_SELECT1},
    {4u, 0u, P5_6, P5_6_SCB4_SPI_SELECT1},
    {3u, 0u, P5_7, P5_7_SCB3_SPI_SELECT1},
    {3u, 0u, P6_4, P6_4_SCB3_SPI_SELECT1},
};

/* Connections for: scb_spi_m_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select2[9] = {
    {0u, 0u, P0_1, P0_1_SCB0_SPI_SELECT2},
    {0u, 0u, P1_5, P1_5_SCB0_SPI_SELECT2},
    {1u, 0u, P2_5, P2_5_SCB1_SPI_SELECT2},
    {1u, 0u, P3_5, P3_5_SCB1_SPI_SELECT2},
    {0u, 0u, P4_5, P4_5_SCB0_SPI_SELECT2},
    {3u, 0u, P4_7, P4_7_SCB3_SPI_SELECT2},
    {2u, 0u, P5_5, P5_5_SCB2_SPI_SELECT2},
    {4u, 0u, P5_7, P5_7_SCB4_SPI_SELECT2},
    {3u, 0u, P6_5, P6_5_SCB3_SPI_SELECT2},
};

/* Connections for: scb_spi_m_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_m_select3[7] = {
    {0u, 0u, P0_2, P0_2_SCB0_SPI_SELECT3},
    {0u, 0u, P1_6, P1_6_SCB0_SPI_SELECT3},
    {1u, 0u, P2_6, P2_6_SCB1_SPI_SELECT3},
    {1u, 0u, P3_6, P3_6_SCB1_SPI_SELECT3},
    {4u, 0u, P3_6, P3_6_SCB4_SPI_SELECT3},
    {0u, 0u, P4_6, P4_6_SCB0_SPI_SELECT3},
    {2u, 0u, P5_6, P5_6_SCB2_SPI_SELECT3},
};

/* Connections for: scb_spi_s_clk */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_clk[9] = {
    {1u, 0u, P0_6, P0_6_SCB1_SPI_CLK},
    {0u, 0u, P1_2, P1_2_SCB0_SPI_CLK},
    {2u, 0u, P1_7, P1_7_SCB2_SPI_CLK},
    {1u, 0u, P2_2, P2_2_SCB1_SPI_CLK},
    {1u, 0u, P3_2, P3_2_SCB1_SPI_CLK},
    {0u, 0u, P4_2, P4_2_SCB0_SPI_CLK},
    {4u, 0u, P4_6, P4_6_SCB4_SPI_CLK},
    {2u, 0u, P5_2, P5_2_SCB2_SPI_CLK},
    {3u, 0u, P6_2, P6_2_SCB3_SPI_CLK},
};

/* Connections for: scb_spi_s_miso */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_miso[10] = {
    {1u, 0u, P0_5, P0_5_SCB1_SPI_MISO},
    {0u, 0u, P1_1, P1_1_SCB0_SPI_MISO},
    {1u, 0u, P2_1, P2_1_SCB1_SPI_MISO},
    {1u, 0u, P3_1, P3_1_SCB1_SPI_MISO},
    {2u, 0u, P3_7, P3_7_SCB2_SPI_MISO},
    {0u, 0u, P4_1, P4_1_SCB0_SPI_MISO},
    {4u, 0u, P4_5, P4_5_SCB4_SPI_MISO},
    {2u, 0u, P5_1, P5_1_SCB2_SPI_MISO},
    {3u, 0u, P6_1, P6_1_SCB3_SPI_MISO},
    {3u, 0u, P7_1, P7_1_SCB3_SPI_MISO},
};

/* Connections for: scb_spi_s_mosi */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_mosi[9] = {
    {1u, 0u, P0_4, P0_4_SCB1_SPI_MOSI},
    {0u, 0u, P1_0, P1_0_SCB0_SPI_MOSI},
    {1u, 0u, P2_0, P2_0_SCB1_SPI_MOSI},
    {2u, 0u, P2_7, P2_7_SCB2_SPI_MOSI},
    {1u, 0u, P3_0, P3_0_SCB1_SPI_MOSI},
    {0u, 0u, P4_0, P4_0_SCB0_SPI_MOSI},
    {4u, 0u, P4_4, P4_4_SCB4_SPI_MOSI},
    {2u, 0u, P5_0, P5_0_SCB2_SPI_MOSI},
    {3u, 0u, P7_0, P7_0_SCB3_SPI_MOSI},
};

/* Connections for: scb_spi_s_select0 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select0[8] = {
    {2u, 0u, P0_3, P0_3_SCB2_SPI_SELECT0},
    {1u, 0u, P0_7, P0_7_SCB1_SPI_SELECT0},
    {0u, 0u, P1_3, P1_3_SCB0_SPI_SELECT0},
    {1u, 0u, P2_3, P2_3_SCB1_SPI_SELECT0},
    {1u, 0u, P3_3, P3_3_SCB1_SPI_SELECT0},
    {0u, 0u, P4_3, P4_3_SCB0_SPI_SELECT0},
    {4u, 0u, P4_7, P4_7_SCB4_SPI_SELECT0},
    {2u, 0u, P5_3, P5_3_SCB2_SPI_SELECT0},
};

/* Connections for: scb_spi_s_select1 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select1[8] = {
    {0u, 0u, P0_0, P0_0_SCB0_SPI_SELECT1},
    {0u, 0u, P1_4, P1_4_SCB0_SPI_SELECT1},
    {1u, 0u, P2_4, P2_4_SCB1_SPI_SELECT1},
    {1u, 0u, P3_4, P3_4_SCB1_SPI_SELECT1},
    {0u, 0u, P4_4, P4_4_SCB0_SPI_SELECT1},
    {4u, 0u, P5_6, P5_6_SCB4_SPI_SELECT1},
    {3u, 0u, P5_7, P5_7_SCB3_SPI_SELECT1},
    {3u, 0u, P6_4, P6_4_SCB3_SPI_SELECT1},
};

/* Connections for: scb_spi_s_select2 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select2[9] = {
    {0u, 0u, P0_1, P0_1_SCB0_SPI_SELECT2},
    {0u, 0u, P1_5, P1_5_SCB0_SPI_SELECT2},
    {1u, 0u, P2_5, P2_5_SCB1_SPI_SELECT2},
    {1u, 0u, P3_5, P3_5_SCB1_SPI_SELECT2},
    {0u, 0u, P4_5, P4_5_SCB0_SPI_SELECT2},
    {3u, 0u, P4_7, P4_7_SCB3_SPI_SELECT2},
    {2u, 0u, P5_5, P5_5_SCB2_SPI_SELECT2},
    {4u, 0u, P5_7, P5_7_SCB4_SPI_SELECT2},
    {3u, 0u, P6_5, P6_5_SCB3_SPI_SELECT2},
};

/* Connections for: scb_spi_s_select3 */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_spi_s_select3[7] = {
    {0u, 0u, P0_2, P0_2_SCB0_SPI_SELECT3},
    {0u, 0u, P1_6, P1_6_SCB0_SPI_SELECT3},
    {1u, 0u, P2_6, P2_6_SCB1_SPI_SELECT3},
    {1u, 0u, P3_6, P3_6_SCB1_SPI_SELECT3},
    {4u, 0u, P3_6, P3_6_SCB4_SPI_SELECT3},
    {0u, 0u, P4_6, P4_6_SCB0_SPI_SELECT3},
    {2u, 0u, P5_6, P5_6_SCB2_SPI_SELECT3},
};

/* Connections for: scb_uart_cts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_cts[9] = {
    {2u, 0u, P0_0, P0_0_SCB2_UART_CTS},
    {1u, 0u, P0_6, P0_6_SCB1_UART_CTS},
    {0u, 0u, P1_2, P1_2_SCB0_UART_CTS},
    {3u, 0u, P2_6, P2_6_SCB3_UART_CTS},
    {1u, 0u, P3_2, P3_2_SCB1_UART_CTS},
    {0u, 0u, P4_2, P4_2_SCB0_UART_CTS},
    {4u, 0u, P4_6, P4_6_SCB4_UART_CTS},
    {2u, 0u, P5_2, P5_2_SCB2_UART_CTS},
    {3u, 0u, P6_2, P6_2_SCB3_UART_CTS},
};

/* Connections for: scb_uart_rts */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rts[8] = {
    {2u, 0u, P0_1, P0_1_SCB2_UART_RTS},
    {1u, 0u, P0_7, P0_7_SCB1_UART_RTS},
    {0u, 0u, P1_3, P1_3_SCB0_UART_RTS},
    {3u, 0u, P2_7, P2_7_SCB3_UART_RTS},
    {1u, 0u, P3_3, P3_3_SCB1_UART_RTS},
    {0u, 0u, P4_3, P4_3_SCB0_UART_RTS},
    {4u, 0u, P4_7, P4_7_SCB4_UART_RTS},
    {2u, 0u, P5_3, P5_3_SCB2_UART_RTS},
};

/* Connections for: scb_uart_rx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_rx[9] = {
    {1u, 0u, P0_4, P0_4_SCB1_UART_RX},
    {2u, 0u, P0_4, P0_4_SCB2_UART_RX},
    {0u, 0u, P1_0, P1_0_SCB0_UART_RX},
    {3u, 0u, P2_4, P2_4_SCB3_UART_RX},
    {1u, 0u, P3_0, P3_0_SCB1_UART_RX},
    {0u, 0u, P4_0, P4_0_SCB0_UART_RX},
    {4u, 0u, P4_4, P4_4_SCB4_UART_RX},
    {2u, 0u, P5_0, P5_0_SCB2_UART_RX},
    {3u, 0u, P7_0, P7_0_SCB3_UART_RX},
};

/* Connections for: scb_uart_tx */
const cyhal_resource_pin_mapping_t cyhal_pin_map_scb_uart_tx[11] = {
    {1u, 0u, P0_5, P0_5_SCB1_UART_TX},
    {2u, 0u, P0_5, P0_5_SCB2_UART_TX},
    {2u, 0u, P0_6, P0_6_SCB2_UART_TX},
    {0u, 0u, P1_1, P1_1_SCB0_UART_TX},
    {3u, 0u, P2_5, P2_5_SCB3_UART_TX},
    {1u, 0u, P3_1, P3_1_SCB1_UART_TX},
    {0u, 0u, P4_1, P4_1_SCB0_UART_TX},
    {4u, 0u, P4_5, P4_5_SCB4_UART_TX},
    {2u, 0u, P5_1, P5_1_SCB2_UART_TX},
    {3u, 0u, P6_1, P6_1_SCB3_UART_TX},
    {3u, 0u, P7_1, P7_1_SCB3_UART_TX},
};

/* Connections for: tcpwm_line */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line[20] = {
    {0u, 0u, P0_7, P0_7_TCPWM_LINE0},
    {0u, 2u, P1_0, P1_0_TCPWM_LINE2},
    {0u, 3u, P1_2, P1_2_TCPWM_LINE3},
    {0u, 6u, P1_4, P1_4_TCPWM_LINE6},
    {0u, 7u, P1_6, P1_6_TCPWM_LINE7},
    {0u, 4u, P2_0, P2_0_TCPWM_LINE4},
    {0u, 5u, P2_2, P2_2_TCPWM_LINE5},
    {0u, 0u, P2_4, P2_4_TCPWM_LINE0},
    {0u, 1u, P2_6, P2_6_TCPWM_LINE1},
    {0u, 0u, P3_0, P3_0_TCPWM_LINE0},
    {0u, 1u, P3_2, P3_2_TCPWM_LINE1},
    {0u, 2u, P3_4, P3_4_TCPWM_LINE2},
    {0u, 3u, P3_6, P3_6_TCPWM_LINE3},
    {0u, 6u, P4_6, P4_6_TCPWM_LINE6},
    {0u, 4u, P5_0, P5_0_TCPWM_LINE4},
    {0u, 5u, P5_2, P5_2_TCPWM_LINE5},
    {0u, 7u, P5_6, P5_6_TCPWM_LINE7},
    {0u, 5u, P6_2, P6_2_TCPWM_LINE5},
    {0u, 6u, P6_4, P6_4_TCPWM_LINE6},
    {0u, 0u, P7_0, P7_0_TCPWM_LINE0},
};

/* Connections for: tcpwm_line_compl */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_line_compl[20] = {
    {0u, 2u, P1_1, P1_1_TCPWM_LINE_COMPL2},
    {0u, 3u, P1_3, P1_3_TCPWM_LINE_COMPL3},
    {0u, 6u, P1_5, P1_5_TCPWM_LINE_COMPL6},
    {0u, 7u, P1_7, P1_7_TCPWM_LINE_COMPL7},
    {0u, 4u, P2_1, P2_1_TCPWM_LINE_COMPL4},
    {0u, 5u, P2_3, P2_3_TCPWM_LINE_COMPL5},
    {0u, 0u, P2_5, P2_5_TCPWM_LINE_COMPL0},
    {0u, 1u, P2_7, P2_7_TCPWM_LINE_COMPL1},
    {0u, 0u, P3_1, P3_1_TCPWM_LINE_COMPL0},
    {0u, 1u, P3_3, P3_3_TCPWM_LINE_COMPL1},
    {0u, 2u, P3_5, P3_5_TCPWM_LINE_COMPL2},
    {0u, 3u, P3_7, P3_7_TCPWM_LINE_COMPL3},
    {0u, 6u, P4_7, P4_7_TCPWM_LINE_COMPL6},
    {0u, 4u, P5_1, P5_1_TCPWM_LINE_COMPL4},
    {0u, 5u, P5_3, P5_3_TCPWM_LINE_COMPL5},
    {0u, 6u, P5_5, P5_5_TCPWM_LINE_COMPL6},
    {0u, 7u, P5_7, P5_7_TCPWM_LINE_COMPL7},
    {0u, 4u, P6_1, P6_1_TCPWM_LINE_COMPL4},
    {0u, 6u, P6_5, P6_5_TCPWM_LINE_COMPL6},
    {0u, 0u, P7_1, P7_1_TCPWM_LINE_COMPL0},
};

/* Connections for: tcpwm_tr_in */
/* Since the GPIO pin is not tied to a particular TCPWM resource the channel_num has no value to
   how the connection works. However, the HAL driver needs to know the index of the tcpwm input
   line. Store that in the channel_num field instead. */
const cyhal_resource_pin_mapping_t cyhal_pin_map_tcpwm_tr_in[7] = {
    {0u, 0u, P0_0, P0_0_TCPWM_TR_IN0},
    {0u, 1u, P0_1, P0_1_TCPWM_TR_IN1},
    {0u, 2u, P1_2, P1_2_TCPWM_TR_IN2},
    {0u, 3u, P1_3, P1_3_TCPWM_TR_IN3},
    {0u, 4u, P2_0, P2_0_TCPWM_TR_IN4},
    {0u, 5u, P2_1, P2_1_TCPWM_TR_IN5},
    {0u, 6u, P3_4, P3_4_TCPWM_TR_IN6},
};

#endif
