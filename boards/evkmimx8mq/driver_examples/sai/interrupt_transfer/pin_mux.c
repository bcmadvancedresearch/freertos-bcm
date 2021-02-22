/*
 * Copyright 2017-2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * 
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.0
processor: MIMX8MQ6xxxJZ
package_id: MIMX8MQ6DVAJZ
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {coreID: m4}
- pin_list:
  - {pin_num: A6, peripheral: UART3, signal: uart_tx, pin_signal: UART3_RXD, PUE: Enabled, SRE: MEDIUM}
  - {pin_num: B7, peripheral: UART3, signal: uart_rx, pin_signal: UART3_TXD, PUE: Enabled, SRE: MEDIUM}
  - {pin_num: H5, peripheral: SAI2, signal: sai_mclk, pin_signal: SAI2_MCLK, SION: DISABLED, HYS: Enabled, SRE: MEDIUM, DSE: OHM_105}
  - {pin_num: J5, peripheral: SAI2, signal: sai_tx_bclk, pin_signal: SAI2_TXC, HYS: Enabled, SRE: MEDIUM, DSE: OHM_105}
  - {pin_num: G5, peripheral: SAI2, signal: 'sai_tx_data, 0', pin_signal: SAI2_TXD0, HYS: Enabled, SRE: MEDIUM, DSE: OHM_105}
  - {pin_num: H4, peripheral: SAI2, signal: sai_tx_sync, pin_signal: SAI2_TXFS, HYS: Enabled, SRE: MEDIUM, DSE: OHM_105, VSEL: VSEL_0}
  - {pin_num: N7, peripheral: GPIO1, signal: 'gpio_io, 08', pin_signal: GPIO1_IO08, SION: ENABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M4[m4] */
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO08_GPIO1_IO08, 1U);
    IOMUXC_SetPinMux(IOMUXC_SAI2_MCLK_SAI2_MCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI2_MCLK_SAI2_MCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI2_TXC_SAI2_TX_BCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI2_TXC_SAI2_TX_BCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI2_TXD0_SAI2_TX_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI2_TXD0_SAI2_TX_DATA0, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI2_TXFS_SAI2_TX_SYNC, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI2_TXFS_SAI2_TX_SYNC, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART3_RXD_UART3_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART3_RXD_UART3_TX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART3_TXD_UART3_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART3_TXD_UART3_RX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
