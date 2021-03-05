/***************************************************************************//**
* \file cyhal_wdt_impl.h
*
* \brief
* CAT2 (PMG/PSoC 4) specific implementation for WDT API.
*
********************************************************************************
* \copyright
* Copyright 2019-2021 Cypress Semiconductor Corporation
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

#pragma once

/**
* \addtogroup group_hal_impl_wdt WDT (Watchdog Timer)
* \ingroup group_hal_impl
* \{
* The CAT2 (PMG/PSoC 4) WDT is only capable of supporting certain timeout ranges below its maximum timeout.
* As a result, any unsupported timeouts given to the HAL WDT are rounded up to the nearest supported value.
* The following table describes the unsupported ranges and the timeout values they are rounded to.
*
* <table class="doxtable">
*   <tr><th>Range (ms)</th><th>Rounded Timeout (ms)</th></tr>
*   <tr>
*     <td>2458 - 3276</td>
*     <td>3277</td>
*   </tr>
*   <tr>
*     <td>1229 - 1638</td>
*     <td>1639</td>
*   </tr>
*   <tr>
*     <td>615 - 819</td>
*     <td>820</td>
*   </tr>
*   <tr>
*     <td>308 - 409</td>
*     <td>410</td>
*   </tr>
*   <tr>
*     <td>154 - 204</td>
*     <td>205</td>
*   </tr>
*   <tr>
*     <td>77 - 102</td>
*     <td>103</td>
*   </tr>
*   <tr>
*     <td>39 - 51</td>
*     <td>52</td>
*   </tr>
*   <tr>
*     <td>20 - 25</td>
*     <td>26</td>
*   </tr>
*   <tr>
*     <td>10 - 12</td>
*     <td>13</td>
*   </tr>
*   <tr>
*     <td>5 - 6</td>
*     <td>7</td>
*   </tr>
*   <tr>
*     <td>3 - 3</td>
*     <td>4</td>
*   </tr>
* </table>
* \} group_hal_impl_wdt
*/

#include "cyhal_wdt_impl_common.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/**
* \cond INTERNAL
*/

// ILO Frequency = 40000 Hz
// ILO Period = 1 / 40000 Hz = .025 ms
// WDT Reset Period (timeout_ms) = .025 ms * (2 * 2^(16 - ignore_bits) + match)
// ignore_bits range: 0 - 16 (only need up to 12)
// match range: 0 - 2^(16 - ignore_bits)
static const _cyhal_wdt_ignore_bits_data_t _cyhal_wdt_ignore_data[] = {
    {3277, 2458}, //  0 bit(s): min period: 3277ms, max period: 4915ms, round up from 2458+ms
    {1639, 1229}, //  1 bit(s): min period: 1639ms, max period: 2457ms, round up from 1229+ms
    { 820,  615}, //  2 bit(s): min period:  820ms, max period: 1228ms, round up from 615+ms
    { 410,  308}, //  3 bit(s): min period:  410ms, max period:  614ms, round up from 308+ms
    { 205,  154}, //  4 bit(s): min period:  205ms, max period:  307ms, round up from 154+ms
    { 103,   77}, //  5 bit(s): min period:  103ms, max period:  153ms, round up from 77+ms
    {  52,   39}, //  6 bit(s): min period:   52ms, max period:   76ms, round up from 39+ms
    {  26,   20}, //  7 bit(s): min period:   26ms, max period:   38ms, round up from 20+ms
    {  13,   10}, //  8 bit(s): min period:   13ms, max period:   19ms, round up from 10+ms
    {   7,    5}, //  9 bit(s): min period:    7ms, max period:    9ms, round up from 5+ms
    {   4,    3}, // 10 bit(s): min period:    4ms, max period:    4ms, round up from 3+ms
    {   2,    2}, // 11 bit(s): min period:    2ms, max period:    2ms, round up from 2+ms
    {   1,    1}, // 12 bit(s): min period:    1ms, max period:    1ms, round up from 1+ms
};

// (2^16 * 3) * .025 ms
/** Maximum WDT timeout in milliseconds */
#define _CYHAL_WDT_MAX_TIMEOUT_MS 4915

/** Maximum number of ignore bits */
#define _CYHAL_WDT_MAX_IGNORE_BITS 12

/** \endcond */

#if defined(__cplusplus)
}
#endif /* __cplusplus */
