/***************************************************************************//**
* \file cy_crypto_config.h
* \version 2.0
*
* \brief
*  This file provides user parameters for the Crypto driver.
*
********************************************************************************
* \copyright
* Copyright 2016-2018 Cypress Semiconductor Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#if !defined(CY_CRYPTO_CONFIG_H)
#define CY_CRYPTO_CONFIG_H

#include "cy_device_headers.h"
#include "crypto/cy_crypto_common.h"

/* Defines to configure Crypto driver */
extern const cy_stc_crypto_config_t cryptoConfig;

/**
* \addtogroup group_crypto_config_macros
* \{
*
* These constants defines an interrupts settings for IPC channel used for the
* client-server communications.
*
* On the CM4 core crypto driver uses IPC hardware depended interrupt sources.
*
* For CM0+ core user must define the multiplexed interrupt sources by yourself.
*/

/** Number of Crypto Notify interrupt mapped to CM0+ */
#define CY_CRYPTO_CM0_NOTIFY_INTR_NR  (NvicMux2_IRQn)
/** Priority of Crypto Notify interrupt, equal to CM0+ and CM4 cores */
#define CY_CRYPTO_NOTIFY_INTR_PR      (2u)

/** Number of Crypto Release interrupt mapped to CM0+ */
#define CY_CRYPTO_CM0_RELEASE_INTR_NR (NvicMux30_IRQn)
/** Priority of Crypto Release interrupt, equal to CM0+ and CM4 cores */
#define CY_CRYPTO_RELEASE_INTR_PR     (2u)

/** Number of Crypto Error interrupt mapped to CM0+ */
#define CY_CRYPTO_CM0_ERROR_INTR_NR   (NvicMux31_IRQn)
/** Priority of Crypto Error interrupt mapped to CM0+ */
#define CY_CRYPTO_ERROR_INTR_PR       (2u)

/** \} group_crypto_config_macros */

#endif /* #if !defined(CY_CRYPTO_CONFIG_H) */


/* [] END OF FILE */
