# CAT2 (PMG/PSoC 4) Hardware Abstraction Layer (HAL) Release Notes
The CAT2 Hardware Abstraction Layer (HAL) provides an implementation of the Hardware Abstraction Layer for the PMG & PSoC 4 chip families. This API provides convenience methods for initializing and manipulating different hardware peripherals. Depending on the specific chip being used, not all features may be supported.

### What's Included?
This release of the CAT2 HAL includes support for the following drivers:
* ADC
* Clock
* DMA
* EZ-I2C
* Flash
* GPIO
* Hardware Manager
* I2C
* LowPower Timer (LPTimer)
* Power Management (SysPM)
* PWM
* Quadrature Decoder (QuadDec)
* SPI
* System
* Timer
* UART
* WDT

The following HAL drivers are not yet implemented on CAT2 hardware but are planned for the future:
* Comparator
* CRC
* I2S
* OpAmp
* True Random Number Generator (TRNG)

The following HAL drivers are not supported on CAT2 as none of the devices in ModusToolbox have the necessary hardware support:
* DAC
* PDM/PCM
* QSPI
* RTC
* SDHC
* SDIO
* USB Device

### What Changed?
#### v1.0.1
* Added support for additional devices
#### v1.0.0
* Initial production release (ADC, Clock, DMA, EZ-I2C, Flash, GPIO, Hardware Manager, I2C, LPTimer, PWM, QuadDec, SPI, System, SysPM, Timer, UART, WDT)
#### v0.5.0
* Initial pre-production release (Clock, EZ-I2C, GPIO, Hardware Manager, I2C, PWM, SPI, System, Timer, UART, WDT)

### Supported Software and Tools
This version of the CAT2 Hardware Abstraction Layer was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| ModusToolbox Software Environment         | 2.2     |
| GCC Compiler                              | 9.3     |
| IAR Compiler                              | 8.4     |
| ARM Compiler                              | 6.11    |

Minimum required ModusToolbox Software Environment: v2.2

### More information
Use the following links for more information, as needed:
* [API Reference Guide](https://cypresssemiconductorco.github.io/mtb-hal-cat2/html/modules.html)
* [Cypress Semiconductor, an Infineon Technologies Company](http://www.cypress.com)
* [Cypress Semiconductor GitHub](https://github.com/cypresssemiconductorco)
* [ModusToolbox](https://www.cypress.com/products/modustoolbox-software-environment)

---
© Cypress Semiconductor Corporation, 2019-2021.