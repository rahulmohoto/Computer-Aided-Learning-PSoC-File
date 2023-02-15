/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (2u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x80000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (26u)
#define CapSense_SNS_STATUS1_SIZE                           (2u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x8C00001Au)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (28u)
#define CapSense_SNS_STATUS2_SIZE                           (2u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x8100001Cu)

#define CapSense_SNS_STATUS3_VALUE                          (CapSense_dsRam.snsStatus[3u])
#define CapSense_SNS_STATUS3_OFFSET                         (30u)
#define CapSense_SNS_STATUS3_SIZE                           (2u)
#define CapSense_SNS_STATUS3_PARAM_ID                       (0x8D00001Eu)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (32u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xAB800020u)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (34u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6F800022u)

#define CapSense_TRACKPAD_RESOLUTION_VALUE                  (CapSense_dsRam.wdgtList.trackpad.resolution)
#define CapSense_TRACKPAD_RESOLUTION_OFFSET                 (36u)
#define CapSense_TRACKPAD_RESOLUTION_SIZE                   (2u)
#define CapSense_TRACKPAD_RESOLUTION_PARAM_ID               (0xAA800024u)

#define CapSense_TRACKPAD_FINGER_TH_VALUE                   (CapSense_dsRam.wdgtList.trackpad.fingerTh)
#define CapSense_TRACKPAD_FINGER_TH_OFFSET                  (38u)
#define CapSense_TRACKPAD_FINGER_TH_SIZE                    (2u)
#define CapSense_TRACKPAD_FINGER_TH_PARAM_ID                (0xA6800026u)

#define CapSense_TRACKPAD_NOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.trackpad.noiseTh)
#define CapSense_TRACKPAD_NOISE_TH_OFFSET                   (40u)
#define CapSense_TRACKPAD_NOISE_TH_SIZE                     (1u)
#define CapSense_TRACKPAD_NOISE_TH_PARAM_ID                 (0x61800028u)

#define CapSense_TRACKPAD_NNOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.trackpad.nNoiseTh)
#define CapSense_TRACKPAD_NNOISE_TH_OFFSET                  (41u)
#define CapSense_TRACKPAD_NNOISE_TH_SIZE                    (1u)
#define CapSense_TRACKPAD_NNOISE_TH_PARAM_ID                (0x67800029u)

#define CapSense_TRACKPAD_HYSTERESIS_VALUE                  (CapSense_dsRam.wdgtList.trackpad.hysteresis)
#define CapSense_TRACKPAD_HYSTERESIS_OFFSET                 (42u)
#define CapSense_TRACKPAD_HYSTERESIS_SIZE                   (1u)
#define CapSense_TRACKPAD_HYSTERESIS_PARAM_ID               (0x6D80002Au)

#define CapSense_TRACKPAD_ON_DEBOUNCE_VALUE                 (CapSense_dsRam.wdgtList.trackpad.onDebounce)
#define CapSense_TRACKPAD_ON_DEBOUNCE_OFFSET                (43u)
#define CapSense_TRACKPAD_ON_DEBOUNCE_SIZE                  (1u)
#define CapSense_TRACKPAD_ON_DEBOUNCE_PARAM_ID              (0x6B80002Bu)

#define CapSense_TRACKPAD_LOW_BSLN_RST_VALUE                (CapSense_dsRam.wdgtList.trackpad.lowBslnRst)
#define CapSense_TRACKPAD_LOW_BSLN_RST_OFFSET               (44u)
#define CapSense_TRACKPAD_LOW_BSLN_RST_SIZE                 (1u)
#define CapSense_TRACKPAD_LOW_BSLN_RST_PARAM_ID             (0x6080002Cu)

#define CapSense_TRACKPAD_IDAC_MOD0_VALUE                   (CapSense_dsRam.wdgtList.trackpad.idacMod[0u])
#define CapSense_TRACKPAD_IDAC_MOD0_OFFSET                  (45u)
#define CapSense_TRACKPAD_IDAC_MOD0_SIZE                    (1u)
#define CapSense_TRACKPAD_IDAC_MOD0_PARAM_ID                (0x4000002Du)

#define CapSense_TRACKPAD_ROW_IDAC_MOD0_VALUE               (CapSense_dsRam.wdgtList.trackpad.rowIdacMod[0u])
#define CapSense_TRACKPAD_ROW_IDAC_MOD0_OFFSET              (46u)
#define CapSense_TRACKPAD_ROW_IDAC_MOD0_SIZE                (1u)
#define CapSense_TRACKPAD_ROW_IDAC_MOD0_PARAM_ID            (0x4A00002Eu)

#define CapSense_TRACKPAD_IDAC_GAIN_INDEX_VALUE             (CapSense_dsRam.wdgtList.trackpad.idacGainIndex)
#define CapSense_TRACKPAD_IDAC_GAIN_INDEX_OFFSET            (47u)
#define CapSense_TRACKPAD_IDAC_GAIN_INDEX_SIZE              (1u)
#define CapSense_TRACKPAD_IDAC_GAIN_INDEX_PARAM_ID          (0x4180002Fu)

#define CapSense_TRACKPAD_SNS_CLK_VALUE                     (CapSense_dsRam.wdgtList.trackpad.snsClk)
#define CapSense_TRACKPAD_SNS_CLK_OFFSET                    (48u)
#define CapSense_TRACKPAD_SNS_CLK_SIZE                      (2u)
#define CapSense_TRACKPAD_SNS_CLK_PARAM_ID                  (0xAE800030u)

#define CapSense_TRACKPAD_ROW_SNS_CLK_VALUE                 (CapSense_dsRam.wdgtList.trackpad.rowSnsClk)
#define CapSense_TRACKPAD_ROW_SNS_CLK_OFFSET                (50u)
#define CapSense_TRACKPAD_ROW_SNS_CLK_SIZE                  (2u)
#define CapSense_TRACKPAD_ROW_SNS_CLK_PARAM_ID              (0xA2800032u)

#define CapSense_TRACKPAD_SNS_CLK_SOURCE_VALUE              (CapSense_dsRam.wdgtList.trackpad.snsClkSource)
#define CapSense_TRACKPAD_SNS_CLK_SOURCE_OFFSET             (52u)
#define CapSense_TRACKPAD_SNS_CLK_SOURCE_SIZE               (1u)
#define CapSense_TRACKPAD_SNS_CLK_SOURCE_PARAM_ID           (0x4C800034u)

#define CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_VALUE          (CapSense_dsRam.wdgtList.trackpad.rowSnsClkSource)
#define CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_OFFSET         (53u)
#define CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_SIZE           (1u)
#define CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_PARAM_ID       (0x4A800035u)

#define CapSense_TRACKPAD_POS_X_VALUE                       (CapSense_dsRam.wdgtList.trackpad.posX)
#define CapSense_TRACKPAD_POS_X_OFFSET                      (54u)
#define CapSense_TRACKPAD_POS_X_SIZE                        (2u)
#define CapSense_TRACKPAD_POS_X_PARAM_ID                    (0x85000036u)

#define CapSense_TRACKPAD_POS_Y_VALUE                       (CapSense_dsRam.wdgtList.trackpad.posY)
#define CapSense_TRACKPAD_POS_Y_OFFSET                      (56u)
#define CapSense_TRACKPAD_POS_Y_SIZE                        (2u)
#define CapSense_TRACKPAD_POS_Y_PARAM_ID                    (0x8A000038u)

#define CapSense_LEFTCLICK_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.leftclick.resolution)
#define CapSense_LEFTCLICK_RESOLUTION_OFFSET                (58u)
#define CapSense_LEFTCLICK_RESOLUTION_SIZE                  (2u)
#define CapSense_LEFTCLICK_RESOLUTION_PARAM_ID              (0xA381003Au)

#define CapSense_LEFTCLICK_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.leftclick.fingerTh)
#define CapSense_LEFTCLICK_FINGER_TH_OFFSET                 (60u)
#define CapSense_LEFTCLICK_FINGER_TH_SIZE                   (2u)
#define CapSense_LEFTCLICK_FINGER_TH_PARAM_ID               (0xAE81003Cu)

#define CapSense_LEFTCLICK_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.leftclick.noiseTh)
#define CapSense_LEFTCLICK_NOISE_TH_OFFSET                  (62u)
#define CapSense_LEFTCLICK_NOISE_TH_SIZE                    (1u)
#define CapSense_LEFTCLICK_NOISE_TH_PARAM_ID                (0x6A81003Eu)

#define CapSense_LEFTCLICK_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.leftclick.nNoiseTh)
#define CapSense_LEFTCLICK_NNOISE_TH_OFFSET                 (63u)
#define CapSense_LEFTCLICK_NNOISE_TH_SIZE                   (1u)
#define CapSense_LEFTCLICK_NNOISE_TH_PARAM_ID               (0x6C81003Fu)

#define CapSense_LEFTCLICK_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.leftclick.hysteresis)
#define CapSense_LEFTCLICK_HYSTERESIS_OFFSET                (64u)
#define CapSense_LEFTCLICK_HYSTERESIS_SIZE                  (1u)
#define CapSense_LEFTCLICK_HYSTERESIS_PARAM_ID              (0x67810040u)

#define CapSense_LEFTCLICK_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.leftclick.onDebounce)
#define CapSense_LEFTCLICK_ON_DEBOUNCE_OFFSET               (65u)
#define CapSense_LEFTCLICK_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_LEFTCLICK_ON_DEBOUNCE_PARAM_ID             (0x61810041u)

#define CapSense_LEFTCLICK_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.leftclick.lowBslnRst)
#define CapSense_LEFTCLICK_LOW_BSLN_RST_OFFSET              (66u)
#define CapSense_LEFTCLICK_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_LEFTCLICK_LOW_BSLN_RST_PARAM_ID            (0x6B810042u)

#define CapSense_LEFTCLICK_IDAC_MOD0_VALUE                  (CapSense_dsRam.wdgtList.leftclick.idacMod[0u])
#define CapSense_LEFTCLICK_IDAC_MOD0_OFFSET                 (67u)
#define CapSense_LEFTCLICK_IDAC_MOD0_SIZE                   (1u)
#define CapSense_LEFTCLICK_IDAC_MOD0_PARAM_ID               (0x4B010043u)

#define CapSense_LEFTCLICK_ROW_IDAC_MOD0_VALUE              (CapSense_dsRam.wdgtList.leftclick.rowIdacMod[0u])
#define CapSense_LEFTCLICK_ROW_IDAC_MOD0_OFFSET             (68u)
#define CapSense_LEFTCLICK_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_LEFTCLICK_ROW_IDAC_MOD0_PARAM_ID           (0x40010044u)

#define CapSense_LEFTCLICK_IDAC_GAIN_INDEX_VALUE            (CapSense_dsRam.wdgtList.leftclick.idacGainIndex)
#define CapSense_LEFTCLICK_IDAC_GAIN_INDEX_OFFSET           (69u)
#define CapSense_LEFTCLICK_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_LEFTCLICK_IDAC_GAIN_INDEX_PARAM_ID         (0x4B810045u)

#define CapSense_LEFTCLICK_SNS_CLK_VALUE                    (CapSense_dsRam.wdgtList.leftclick.snsClk)
#define CapSense_LEFTCLICK_SNS_CLK_OFFSET                   (70u)
#define CapSense_LEFTCLICK_SNS_CLK_SIZE                     (2u)
#define CapSense_LEFTCLICK_SNS_CLK_PARAM_ID                 (0xA2810046u)

#define CapSense_LEFTCLICK_ROW_SNS_CLK_VALUE                (CapSense_dsRam.wdgtList.leftclick.rowSnsClk)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_OFFSET               (72u)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_PARAM_ID             (0x86810048u)

#define CapSense_LEFTCLICK_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.leftclick.snsClkSource)
#define CapSense_LEFTCLICK_SNS_CLK_SOURCE_OFFSET            (74u)
#define CapSense_LEFTCLICK_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_LEFTCLICK_SNS_CLK_SOURCE_PARAM_ID          (0x4281004Au)

#define CapSense_LEFTCLICK_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_dsRam.wdgtList.leftclick.rowSnsClkSource)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_SOURCE_OFFSET        (75u)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_LEFTCLICK_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4481004Bu)

#define CapSense_RIGHTCLICK_RESOLUTION_VALUE                (CapSense_dsRam.wdgtList.rightclick.resolution)
#define CapSense_RIGHTCLICK_RESOLUTION_OFFSET               (76u)
#define CapSense_RIGHTCLICK_RESOLUTION_SIZE                 (2u)
#define CapSense_RIGHTCLICK_RESOLUTION_PARAM_ID             (0xA982004Cu)

#define CapSense_RIGHTCLICK_FINGER_TH_VALUE                 (CapSense_dsRam.wdgtList.rightclick.fingerTh)
#define CapSense_RIGHTCLICK_FINGER_TH_OFFSET                (78u)
#define CapSense_RIGHTCLICK_FINGER_TH_SIZE                  (2u)
#define CapSense_RIGHTCLICK_FINGER_TH_PARAM_ID              (0xA582004Eu)

#define CapSense_RIGHTCLICK_NOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.rightclick.noiseTh)
#define CapSense_RIGHTCLICK_NOISE_TH_OFFSET                 (80u)
#define CapSense_RIGHTCLICK_NOISE_TH_SIZE                   (1u)
#define CapSense_RIGHTCLICK_NOISE_TH_PARAM_ID               (0x67820050u)

#define CapSense_RIGHTCLICK_NNOISE_TH_VALUE                 (CapSense_dsRam.wdgtList.rightclick.nNoiseTh)
#define CapSense_RIGHTCLICK_NNOISE_TH_OFFSET                (81u)
#define CapSense_RIGHTCLICK_NNOISE_TH_SIZE                  (1u)
#define CapSense_RIGHTCLICK_NNOISE_TH_PARAM_ID              (0x61820051u)

#define CapSense_RIGHTCLICK_HYSTERESIS_VALUE                (CapSense_dsRam.wdgtList.rightclick.hysteresis)
#define CapSense_RIGHTCLICK_HYSTERESIS_OFFSET               (82u)
#define CapSense_RIGHTCLICK_HYSTERESIS_SIZE                 (1u)
#define CapSense_RIGHTCLICK_HYSTERESIS_PARAM_ID             (0x6B820052u)

#define CapSense_RIGHTCLICK_ON_DEBOUNCE_VALUE               (CapSense_dsRam.wdgtList.rightclick.onDebounce)
#define CapSense_RIGHTCLICK_ON_DEBOUNCE_OFFSET              (83u)
#define CapSense_RIGHTCLICK_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_RIGHTCLICK_ON_DEBOUNCE_PARAM_ID            (0x6D820053u)

#define CapSense_RIGHTCLICK_LOW_BSLN_RST_VALUE              (CapSense_dsRam.wdgtList.rightclick.lowBslnRst)
#define CapSense_RIGHTCLICK_LOW_BSLN_RST_OFFSET             (84u)
#define CapSense_RIGHTCLICK_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_RIGHTCLICK_LOW_BSLN_RST_PARAM_ID           (0x66820054u)

#define CapSense_RIGHTCLICK_IDAC_MOD0_VALUE                 (CapSense_dsRam.wdgtList.rightclick.idacMod[0u])
#define CapSense_RIGHTCLICK_IDAC_MOD0_OFFSET                (85u)
#define CapSense_RIGHTCLICK_IDAC_MOD0_SIZE                  (1u)
#define CapSense_RIGHTCLICK_IDAC_MOD0_PARAM_ID              (0x46020055u)

#define CapSense_RIGHTCLICK_ROW_IDAC_MOD0_VALUE             (CapSense_dsRam.wdgtList.rightclick.rowIdacMod[0u])
#define CapSense_RIGHTCLICK_ROW_IDAC_MOD0_OFFSET            (86u)
#define CapSense_RIGHTCLICK_ROW_IDAC_MOD0_SIZE              (1u)
#define CapSense_RIGHTCLICK_ROW_IDAC_MOD0_PARAM_ID          (0x4C020056u)

#define CapSense_RIGHTCLICK_IDAC_GAIN_INDEX_VALUE           (CapSense_dsRam.wdgtList.rightclick.idacGainIndex)
#define CapSense_RIGHTCLICK_IDAC_GAIN_INDEX_OFFSET          (87u)
#define CapSense_RIGHTCLICK_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_RIGHTCLICK_IDAC_GAIN_INDEX_PARAM_ID        (0x47820057u)

#define CapSense_RIGHTCLICK_SNS_CLK_VALUE                   (CapSense_dsRam.wdgtList.rightclick.snsClk)
#define CapSense_RIGHTCLICK_SNS_CLK_OFFSET                  (88u)
#define CapSense_RIGHTCLICK_SNS_CLK_SIZE                    (2u)
#define CapSense_RIGHTCLICK_SNS_CLK_PARAM_ID                (0xAD820058u)

#define CapSense_RIGHTCLICK_ROW_SNS_CLK_VALUE               (CapSense_dsRam.wdgtList.rightclick.rowSnsClk)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_OFFSET              (90u)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_SIZE                (2u)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_PARAM_ID            (0x8A82005Au)

#define CapSense_RIGHTCLICK_SNS_CLK_SOURCE_VALUE            (CapSense_dsRam.wdgtList.rightclick.snsClkSource)
#define CapSense_RIGHTCLICK_SNS_CLK_SOURCE_OFFSET           (92u)
#define CapSense_RIGHTCLICK_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_RIGHTCLICK_SNS_CLK_SOURCE_PARAM_ID         (0x4F82005Cu)

#define CapSense_RIGHTCLICK_ROW_SNS_CLK_SOURCE_VALUE        (CapSense_dsRam.wdgtList.rightclick.rowSnsClkSource)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_SOURCE_OFFSET       (93u)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_SOURCE_SIZE         (1u)
#define CapSense_RIGHTCLICK_ROW_SNS_CLK_SOURCE_PARAM_ID     (0x4982005Du)

#define CapSense_GANGEDSENSOR_RESOLUTION_VALUE              (CapSense_dsRam.wdgtList.gangedsensor.resolution)
#define CapSense_GANGEDSENSOR_RESOLUTION_OFFSET             (94u)
#define CapSense_GANGEDSENSOR_RESOLUTION_SIZE               (2u)
#define CapSense_GANGEDSENSOR_RESOLUTION_PARAM_ID           (0xA383005Eu)

#define CapSense_GANGEDSENSOR_FINGER_TH_VALUE               (CapSense_dsRam.wdgtList.gangedsensor.fingerTh)
#define CapSense_GANGEDSENSOR_FINGER_TH_OFFSET              (96u)
#define CapSense_GANGEDSENSOR_FINGER_TH_SIZE                (2u)
#define CapSense_GANGEDSENSOR_FINGER_TH_PARAM_ID            (0xA3830060u)

#define CapSense_GANGEDSENSOR_NOISE_TH_VALUE                (CapSense_dsRam.wdgtList.gangedsensor.noiseTh)
#define CapSense_GANGEDSENSOR_NOISE_TH_OFFSET               (98u)
#define CapSense_GANGEDSENSOR_NOISE_TH_SIZE                 (1u)
#define CapSense_GANGEDSENSOR_NOISE_TH_PARAM_ID             (0x67830062u)

#define CapSense_GANGEDSENSOR_NNOISE_TH_VALUE               (CapSense_dsRam.wdgtList.gangedsensor.nNoiseTh)
#define CapSense_GANGEDSENSOR_NNOISE_TH_OFFSET              (99u)
#define CapSense_GANGEDSENSOR_NNOISE_TH_SIZE                (1u)
#define CapSense_GANGEDSENSOR_NNOISE_TH_PARAM_ID            (0x61830063u)

#define CapSense_GANGEDSENSOR_HYSTERESIS_VALUE              (CapSense_dsRam.wdgtList.gangedsensor.hysteresis)
#define CapSense_GANGEDSENSOR_HYSTERESIS_OFFSET             (100u)
#define CapSense_GANGEDSENSOR_HYSTERESIS_SIZE               (1u)
#define CapSense_GANGEDSENSOR_HYSTERESIS_PARAM_ID           (0x6A830064u)

#define CapSense_GANGEDSENSOR_ON_DEBOUNCE_VALUE             (CapSense_dsRam.wdgtList.gangedsensor.onDebounce)
#define CapSense_GANGEDSENSOR_ON_DEBOUNCE_OFFSET            (101u)
#define CapSense_GANGEDSENSOR_ON_DEBOUNCE_SIZE              (1u)
#define CapSense_GANGEDSENSOR_ON_DEBOUNCE_PARAM_ID          (0x6C830065u)

#define CapSense_GANGEDSENSOR_LOW_BSLN_RST_VALUE            (CapSense_dsRam.wdgtList.gangedsensor.lowBslnRst)
#define CapSense_GANGEDSENSOR_LOW_BSLN_RST_OFFSET           (102u)
#define CapSense_GANGEDSENSOR_LOW_BSLN_RST_SIZE             (1u)
#define CapSense_GANGEDSENSOR_LOW_BSLN_RST_PARAM_ID         (0x66830066u)

#define CapSense_GANGEDSENSOR_IDAC_MOD0_VALUE               (CapSense_dsRam.wdgtList.gangedsensor.idacMod[0u])
#define CapSense_GANGEDSENSOR_IDAC_MOD0_OFFSET              (103u)
#define CapSense_GANGEDSENSOR_IDAC_MOD0_SIZE                (1u)
#define CapSense_GANGEDSENSOR_IDAC_MOD0_PARAM_ID            (0x46030067u)

#define CapSense_GANGEDSENSOR_ROW_IDAC_MOD0_VALUE           (CapSense_dsRam.wdgtList.gangedsensor.rowIdacMod[0u])
#define CapSense_GANGEDSENSOR_ROW_IDAC_MOD0_OFFSET          (104u)
#define CapSense_GANGEDSENSOR_ROW_IDAC_MOD0_SIZE            (1u)
#define CapSense_GANGEDSENSOR_ROW_IDAC_MOD0_PARAM_ID        (0x4F030068u)

#define CapSense_GANGEDSENSOR_IDAC_GAIN_INDEX_VALUE         (CapSense_dsRam.wdgtList.gangedsensor.idacGainIndex)
#define CapSense_GANGEDSENSOR_IDAC_GAIN_INDEX_OFFSET        (105u)
#define CapSense_GANGEDSENSOR_IDAC_GAIN_INDEX_SIZE          (1u)
#define CapSense_GANGEDSENSOR_IDAC_GAIN_INDEX_PARAM_ID      (0x44830069u)

#define CapSense_GANGEDSENSOR_SNS_CLK_VALUE                 (CapSense_dsRam.wdgtList.gangedsensor.snsClk)
#define CapSense_GANGEDSENSOR_SNS_CLK_OFFSET                (106u)
#define CapSense_GANGEDSENSOR_SNS_CLK_SIZE                  (2u)
#define CapSense_GANGEDSENSOR_SNS_CLK_PARAM_ID              (0xAD83006Au)

#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_VALUE             (CapSense_dsRam.wdgtList.gangedsensor.rowSnsClk)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_OFFSET            (108u)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_SIZE              (2u)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_PARAM_ID          (0x8B83006Cu)

#define CapSense_GANGEDSENSOR_SNS_CLK_SOURCE_VALUE          (CapSense_dsRam.wdgtList.gangedsensor.snsClkSource)
#define CapSense_GANGEDSENSOR_SNS_CLK_SOURCE_OFFSET         (110u)
#define CapSense_GANGEDSENSOR_SNS_CLK_SOURCE_SIZE           (1u)
#define CapSense_GANGEDSENSOR_SNS_CLK_SOURCE_PARAM_ID       (0x4F83006Eu)

#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_SOURCE_VALUE      (CapSense_dsRam.wdgtList.gangedsensor.rowSnsClkSource)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_SOURCE_OFFSET     (111u)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_SOURCE_SIZE       (1u)
#define CapSense_GANGEDSENSOR_ROW_SNS_CLK_SOURCE_PARAM_ID   (0x4983006Fu)

#define CapSense_GANGEDSENSOR_PROX_TOUCH_TH_VALUE           (CapSense_dsRam.wdgtList.gangedsensor.proxTouchTh)
#define CapSense_GANGEDSENSOR_PROX_TOUCH_TH_OFFSET          (112u)
#define CapSense_GANGEDSENSOR_PROX_TOUCH_TH_SIZE            (2u)
#define CapSense_GANGEDSENSOR_PROX_TOUCH_TH_PARAM_ID        (0xAB030070u)

#define CapSense_TRACKPAD_COL0_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[0u].raw[0u])
#define CapSense_TRACKPAD_COL0_RAW0_OFFSET                  (114u)
#define CapSense_TRACKPAD_COL0_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL0_RAW0_PARAM_ID                (0x89000072u)

#define CapSense_TRACKPAD_COL0_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[0u].bsln[0u])
#define CapSense_TRACKPAD_COL0_BSLN0_OFFSET                 (116u)
#define CapSense_TRACKPAD_COL0_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL0_BSLN0_PARAM_ID               (0x84000074u)

#define CapSense_TRACKPAD_COL0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[0u].bslnExt[0u])
#define CapSense_TRACKPAD_COL0_BSLN_EXT0_OFFSET             (118u)
#define CapSense_TRACKPAD_COL0_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL0_BSLN_EXT0_PARAM_ID           (0x40000076u)

#define CapSense_TRACKPAD_COL0_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[0u].diff)
#define CapSense_TRACKPAD_COL0_DIFF_OFFSET                  (120u)
#define CapSense_TRACKPAD_COL0_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL0_DIFF_PARAM_ID                (0x87000078u)

#define CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[0u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_OFFSET     (122u)
#define CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4300007Au)

#define CapSense_TRACKPAD_COL1_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[1u].raw[0u])
#define CapSense_TRACKPAD_COL1_RAW0_OFFSET                  (124u)
#define CapSense_TRACKPAD_COL1_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL1_RAW0_PARAM_ID                (0x8600007Cu)

#define CapSense_TRACKPAD_COL1_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[1u].bsln[0u])
#define CapSense_TRACKPAD_COL1_BSLN0_OFFSET                 (126u)
#define CapSense_TRACKPAD_COL1_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL1_BSLN0_PARAM_ID               (0x8A00007Eu)

#define CapSense_TRACKPAD_COL1_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[1u].bslnExt[0u])
#define CapSense_TRACKPAD_COL1_BSLN_EXT0_OFFSET             (128u)
#define CapSense_TRACKPAD_COL1_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL1_BSLN_EXT0_PARAM_ID           (0x4C000080u)

#define CapSense_TRACKPAD_COL1_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[1u].diff)
#define CapSense_TRACKPAD_COL1_DIFF_OFFSET                  (130u)
#define CapSense_TRACKPAD_COL1_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL1_DIFF_PARAM_ID                (0x88000082u)

#define CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[1u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_OFFSET     (132u)
#define CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4D000084u)

#define CapSense_TRACKPAD_COL2_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[2u].raw[0u])
#define CapSense_TRACKPAD_COL2_RAW0_OFFSET                  (134u)
#define CapSense_TRACKPAD_COL2_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL2_RAW0_PARAM_ID                (0x89000086u)

#define CapSense_TRACKPAD_COL2_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[2u].bsln[0u])
#define CapSense_TRACKPAD_COL2_BSLN0_OFFSET                 (136u)
#define CapSense_TRACKPAD_COL2_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL2_BSLN0_PARAM_ID               (0x86000088u)

#define CapSense_TRACKPAD_COL2_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[2u].bslnExt[0u])
#define CapSense_TRACKPAD_COL2_BSLN_EXT0_OFFSET             (138u)
#define CapSense_TRACKPAD_COL2_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL2_BSLN_EXT0_PARAM_ID           (0x4200008Au)

#define CapSense_TRACKPAD_COL2_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[2u].diff)
#define CapSense_TRACKPAD_COL2_DIFF_OFFSET                  (140u)
#define CapSense_TRACKPAD_COL2_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL2_DIFF_PARAM_ID                (0x8700008Cu)

#define CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[2u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_OFFSET     (142u)
#define CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4300008Eu)

#define CapSense_TRACKPAD_COL3_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[3u].raw[0u])
#define CapSense_TRACKPAD_COL3_RAW0_OFFSET                  (144u)
#define CapSense_TRACKPAD_COL3_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL3_RAW0_PARAM_ID                (0x81000090u)

#define CapSense_TRACKPAD_COL3_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[3u].bsln[0u])
#define CapSense_TRACKPAD_COL3_BSLN0_OFFSET                 (146u)
#define CapSense_TRACKPAD_COL3_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL3_BSLN0_PARAM_ID               (0x8D000092u)

#define CapSense_TRACKPAD_COL3_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[3u].bslnExt[0u])
#define CapSense_TRACKPAD_COL3_BSLN_EXT0_OFFSET             (148u)
#define CapSense_TRACKPAD_COL3_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL3_BSLN_EXT0_PARAM_ID           (0x48000094u)

#define CapSense_TRACKPAD_COL3_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[3u].diff)
#define CapSense_TRACKPAD_COL3_DIFF_OFFSET                  (150u)
#define CapSense_TRACKPAD_COL3_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL3_DIFF_PARAM_ID                (0x8C000096u)

#define CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[3u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_OFFSET     (152u)
#define CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4B000098u)

#define CapSense_TRACKPAD_COL4_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[4u].raw[0u])
#define CapSense_TRACKPAD_COL4_RAW0_OFFSET                  (154u)
#define CapSense_TRACKPAD_COL4_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL4_RAW0_PARAM_ID                (0x8F00009Au)

#define CapSense_TRACKPAD_COL4_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[4u].bsln[0u])
#define CapSense_TRACKPAD_COL4_BSLN0_OFFSET                 (156u)
#define CapSense_TRACKPAD_COL4_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL4_BSLN0_PARAM_ID               (0x8200009Cu)

#define CapSense_TRACKPAD_COL4_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[4u].bslnExt[0u])
#define CapSense_TRACKPAD_COL4_BSLN_EXT0_OFFSET             (158u)
#define CapSense_TRACKPAD_COL4_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL4_BSLN_EXT0_PARAM_ID           (0x4600009Eu)

#define CapSense_TRACKPAD_COL4_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[4u].diff)
#define CapSense_TRACKPAD_COL4_DIFF_OFFSET                  (160u)
#define CapSense_TRACKPAD_COL4_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL4_DIFF_PARAM_ID                (0x8E0000A0u)

#define CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[4u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_OFFSET     (162u)
#define CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4A0000A2u)

#define CapSense_TRACKPAD_COL5_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[5u].raw[0u])
#define CapSense_TRACKPAD_COL5_RAW0_OFFSET                  (164u)
#define CapSense_TRACKPAD_COL5_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL5_RAW0_PARAM_ID                (0x8F0000A4u)

#define CapSense_TRACKPAD_COL5_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[5u].bsln[0u])
#define CapSense_TRACKPAD_COL5_BSLN0_OFFSET                 (166u)
#define CapSense_TRACKPAD_COL5_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL5_BSLN0_PARAM_ID               (0x830000A6u)

#define CapSense_TRACKPAD_COL5_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[5u].bslnExt[0u])
#define CapSense_TRACKPAD_COL5_BSLN_EXT0_OFFSET             (168u)
#define CapSense_TRACKPAD_COL5_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL5_BSLN_EXT0_PARAM_ID           (0x440000A8u)

#define CapSense_TRACKPAD_COL5_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[5u].diff)
#define CapSense_TRACKPAD_COL5_DIFF_OFFSET                  (170u)
#define CapSense_TRACKPAD_COL5_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL5_DIFF_PARAM_ID                (0x800000AAu)

#define CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[5u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_OFFSET     (172u)
#define CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_PARAM_ID   (0x450000ACu)

#define CapSense_TRACKPAD_COL6_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[6u].raw[0u])
#define CapSense_TRACKPAD_COL6_RAW0_OFFSET                  (174u)
#define CapSense_TRACKPAD_COL6_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_COL6_RAW0_PARAM_ID                (0x810000AEu)

#define CapSense_TRACKPAD_COL6_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[6u].bsln[0u])
#define CapSense_TRACKPAD_COL6_BSLN0_OFFSET                 (176u)
#define CapSense_TRACKPAD_COL6_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_COL6_BSLN0_PARAM_ID               (0x8B0000B0u)

#define CapSense_TRACKPAD_COL6_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[6u].bslnExt[0u])
#define CapSense_TRACKPAD_COL6_BSLN_EXT0_OFFSET             (178u)
#define CapSense_TRACKPAD_COL6_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_COL6_BSLN_EXT0_PARAM_ID           (0x4F0000B2u)

#define CapSense_TRACKPAD_COL6_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[6u].diff)
#define CapSense_TRACKPAD_COL6_DIFF_OFFSET                  (180u)
#define CapSense_TRACKPAD_COL6_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_COL6_DIFF_PARAM_ID                (0x8A0000B4u)

#define CapSense_TRACKPAD_COL6_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[6u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_COL6_NEG_BSLN_RST_CNT0_OFFSET     (182u)
#define CapSense_TRACKPAD_COL6_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_COL6_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4E0000B6u)

#define CapSense_TRACKPAD_ROW0_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[7u].raw[0u])
#define CapSense_TRACKPAD_ROW0_RAW0_OFFSET                  (184u)
#define CapSense_TRACKPAD_ROW0_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW0_RAW0_PARAM_ID                (0x890000B8u)

#define CapSense_TRACKPAD_ROW0_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[7u].bsln[0u])
#define CapSense_TRACKPAD_ROW0_BSLN0_OFFSET                 (186u)
#define CapSense_TRACKPAD_ROW0_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW0_BSLN0_PARAM_ID               (0x850000BAu)

#define CapSense_TRACKPAD_ROW0_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[7u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW0_BSLN_EXT0_OFFSET             (188u)
#define CapSense_TRACKPAD_ROW0_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW0_BSLN_EXT0_PARAM_ID           (0x400000BCu)

#define CapSense_TRACKPAD_ROW0_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[7u].diff)
#define CapSense_TRACKPAD_ROW0_DIFF_OFFSET                  (190u)
#define CapSense_TRACKPAD_ROW0_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW0_DIFF_PARAM_ID                (0x840000BEu)

#define CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[7u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_OFFSET     (192u)
#define CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID   (0x410000C0u)

#define CapSense_TRACKPAD_ROW1_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[8u].raw[0u])
#define CapSense_TRACKPAD_ROW1_RAW0_OFFSET                  (194u)
#define CapSense_TRACKPAD_ROW1_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW1_RAW0_PARAM_ID                (0x850000C2u)

#define CapSense_TRACKPAD_ROW1_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[8u].bsln[0u])
#define CapSense_TRACKPAD_ROW1_BSLN0_OFFSET                 (196u)
#define CapSense_TRACKPAD_ROW1_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW1_BSLN0_PARAM_ID               (0x880000C4u)

#define CapSense_TRACKPAD_ROW1_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[8u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW1_BSLN_EXT0_OFFSET             (198u)
#define CapSense_TRACKPAD_ROW1_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW1_BSLN_EXT0_PARAM_ID           (0x4C0000C6u)

#define CapSense_TRACKPAD_ROW1_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[8u].diff)
#define CapSense_TRACKPAD_ROW1_DIFF_OFFSET                  (200u)
#define CapSense_TRACKPAD_ROW1_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW1_DIFF_PARAM_ID                (0x8B0000C8u)

#define CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[8u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_OFFSET     (202u)
#define CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4F0000CAu)

#define CapSense_TRACKPAD_ROW2_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[9u].raw[0u])
#define CapSense_TRACKPAD_ROW2_RAW0_OFFSET                  (204u)
#define CapSense_TRACKPAD_ROW2_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW2_RAW0_PARAM_ID                (0x8A0000CCu)

#define CapSense_TRACKPAD_ROW2_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[9u].bsln[0u])
#define CapSense_TRACKPAD_ROW2_BSLN0_OFFSET                 (206u)
#define CapSense_TRACKPAD_ROW2_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW2_BSLN0_PARAM_ID               (0x860000CEu)

#define CapSense_TRACKPAD_ROW2_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[9u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW2_BSLN_EXT0_OFFSET             (208u)
#define CapSense_TRACKPAD_ROW2_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW2_BSLN_EXT0_PARAM_ID           (0x440000D0u)

#define CapSense_TRACKPAD_ROW2_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[9u].diff)
#define CapSense_TRACKPAD_ROW2_DIFF_OFFSET                  (210u)
#define CapSense_TRACKPAD_ROW2_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW2_DIFF_PARAM_ID                (0x800000D2u)

#define CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[9u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_OFFSET     (212u)
#define CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID   (0x450000D4u)

#define CapSense_TRACKPAD_ROW3_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[10u].raw[0u])
#define CapSense_TRACKPAD_ROW3_RAW0_OFFSET                  (214u)
#define CapSense_TRACKPAD_ROW3_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW3_RAW0_PARAM_ID                (0x810000D6u)

#define CapSense_TRACKPAD_ROW3_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[10u].bsln[0u])
#define CapSense_TRACKPAD_ROW3_BSLN0_OFFSET                 (216u)
#define CapSense_TRACKPAD_ROW3_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW3_BSLN0_PARAM_ID               (0x8E0000D8u)

#define CapSense_TRACKPAD_ROW3_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[10u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW3_BSLN_EXT0_OFFSET             (218u)
#define CapSense_TRACKPAD_ROW3_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW3_BSLN_EXT0_PARAM_ID           (0x4A0000DAu)

#define CapSense_TRACKPAD_ROW3_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[10u].diff)
#define CapSense_TRACKPAD_ROW3_DIFF_OFFSET                  (220u)
#define CapSense_TRACKPAD_ROW3_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW3_DIFF_PARAM_ID                (0x8F0000DCu)

#define CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[10u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_OFFSET     (222u)
#define CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4B0000DEu)

#define CapSense_TRACKPAD_ROW4_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[11u].raw[0u])
#define CapSense_TRACKPAD_ROW4_RAW0_OFFSET                  (224u)
#define CapSense_TRACKPAD_ROW4_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW4_RAW0_PARAM_ID                (0x830000E0u)

#define CapSense_TRACKPAD_ROW4_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[11u].bsln[0u])
#define CapSense_TRACKPAD_ROW4_BSLN0_OFFSET                 (226u)
#define CapSense_TRACKPAD_ROW4_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW4_BSLN0_PARAM_ID               (0x8F0000E2u)

#define CapSense_TRACKPAD_ROW4_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[11u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW4_BSLN_EXT0_OFFSET             (228u)
#define CapSense_TRACKPAD_ROW4_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW4_BSLN_EXT0_PARAM_ID           (0x4A0000E4u)

#define CapSense_TRACKPAD_ROW4_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[11u].diff)
#define CapSense_TRACKPAD_ROW4_DIFF_OFFSET                  (230u)
#define CapSense_TRACKPAD_ROW4_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW4_DIFF_PARAM_ID                (0x8E0000E6u)

#define CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[11u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_OFFSET     (232u)
#define CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID   (0x490000E8u)

#define CapSense_TRACKPAD_ROW5_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[12u].raw[0u])
#define CapSense_TRACKPAD_ROW5_RAW0_OFFSET                  (234u)
#define CapSense_TRACKPAD_ROW5_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW5_RAW0_PARAM_ID                (0x8D0000EAu)

#define CapSense_TRACKPAD_ROW5_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[12u].bsln[0u])
#define CapSense_TRACKPAD_ROW5_BSLN0_OFFSET                 (236u)
#define CapSense_TRACKPAD_ROW5_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW5_BSLN0_PARAM_ID               (0x800000ECu)

#define CapSense_TRACKPAD_ROW5_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[12u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW5_BSLN_EXT0_OFFSET             (238u)
#define CapSense_TRACKPAD_ROW5_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW5_BSLN_EXT0_PARAM_ID           (0x440000EEu)

#define CapSense_TRACKPAD_ROW5_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[12u].diff)
#define CapSense_TRACKPAD_ROW5_DIFF_OFFSET                  (240u)
#define CapSense_TRACKPAD_ROW5_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW5_DIFF_PARAM_ID                (0x860000F0u)

#define CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[12u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_OFFSET     (242u)
#define CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID   (0x420000F2u)

#define CapSense_TRACKPAD_ROW6_RAW0_VALUE                   (CapSense_dsRam.snsList.trackpad[13u].raw[0u])
#define CapSense_TRACKPAD_ROW6_RAW0_OFFSET                  (244u)
#define CapSense_TRACKPAD_ROW6_RAW0_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW6_RAW0_PARAM_ID                (0x870000F4u)

#define CapSense_TRACKPAD_ROW6_BSLN0_VALUE                  (CapSense_dsRam.snsList.trackpad[13u].bsln[0u])
#define CapSense_TRACKPAD_ROW6_BSLN0_OFFSET                 (246u)
#define CapSense_TRACKPAD_ROW6_BSLN0_SIZE                   (2u)
#define CapSense_TRACKPAD_ROW6_BSLN0_PARAM_ID               (0x8B0000F6u)

#define CapSense_TRACKPAD_ROW6_BSLN_EXT0_VALUE              (CapSense_dsRam.snsList.trackpad[13u].bslnExt[0u])
#define CapSense_TRACKPAD_ROW6_BSLN_EXT0_OFFSET             (248u)
#define CapSense_TRACKPAD_ROW6_BSLN_EXT0_SIZE               (1u)
#define CapSense_TRACKPAD_ROW6_BSLN_EXT0_PARAM_ID           (0x4C0000F8u)

#define CapSense_TRACKPAD_ROW6_DIFF_VALUE                   (CapSense_dsRam.snsList.trackpad[13u].diff)
#define CapSense_TRACKPAD_ROW6_DIFF_OFFSET                  (250u)
#define CapSense_TRACKPAD_ROW6_DIFF_SIZE                    (2u)
#define CapSense_TRACKPAD_ROW6_DIFF_PARAM_ID                (0x880000FAu)

#define CapSense_TRACKPAD_ROW6_NEG_BSLN_RST_CNT0_VALUE      (CapSense_dsRam.snsList.trackpad[13u].negBslnRstCnt[0u])
#define CapSense_TRACKPAD_ROW6_NEG_BSLN_RST_CNT0_OFFSET     (252u)
#define CapSense_TRACKPAD_ROW6_NEG_BSLN_RST_CNT0_SIZE       (1u)
#define CapSense_TRACKPAD_ROW6_NEG_BSLN_RST_CNT0_PARAM_ID   (0x4D0000FCu)

#define CapSense_LEFTCLICK_SNS0_RAW0_VALUE                  (CapSense_dsRam.snsList.leftclick[0u].raw[0u])
#define CapSense_LEFTCLICK_SNS0_RAW0_OFFSET                 (254u)
#define CapSense_LEFTCLICK_SNS0_RAW0_SIZE                   (2u)
#define CapSense_LEFTCLICK_SNS0_RAW0_PARAM_ID               (0x890000FEu)

#define CapSense_LEFTCLICK_SNS0_BSLN0_VALUE                 (CapSense_dsRam.snsList.leftclick[0u].bsln[0u])
#define CapSense_LEFTCLICK_SNS0_BSLN0_OFFSET                (256u)
#define CapSense_LEFTCLICK_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_LEFTCLICK_SNS0_BSLN0_PARAM_ID              (0x8C000100u)

#define CapSense_LEFTCLICK_SNS0_BSLN_EXT0_VALUE             (CapSense_dsRam.snsList.leftclick[0u].bslnExt[0u])
#define CapSense_LEFTCLICK_SNS0_BSLN_EXT0_OFFSET            (258u)
#define CapSense_LEFTCLICK_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_LEFTCLICK_SNS0_BSLN_EXT0_PARAM_ID          (0x48000102u)

#define CapSense_LEFTCLICK_SNS0_DIFF_VALUE                  (CapSense_dsRam.snsList.leftclick[0u].diff)
#define CapSense_LEFTCLICK_SNS0_DIFF_OFFSET                 (260u)
#define CapSense_LEFTCLICK_SNS0_DIFF_SIZE                   (2u)
#define CapSense_LEFTCLICK_SNS0_DIFF_PARAM_ID               (0x8D000104u)

#define CapSense_LEFTCLICK_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_dsRam.snsList.leftclick[0u].negBslnRstCnt[0u])
#define CapSense_LEFTCLICK_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (262u)
#define CapSense_LEFTCLICK_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_LEFTCLICK_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x49000106u)

#define CapSense_RIGHTCLICK_SNS0_RAW0_VALUE                 (CapSense_dsRam.snsList.rightclick[0u].raw[0u])
#define CapSense_RIGHTCLICK_SNS0_RAW0_OFFSET                (264u)
#define CapSense_RIGHTCLICK_SNS0_RAW0_SIZE                  (2u)
#define CapSense_RIGHTCLICK_SNS0_RAW0_PARAM_ID              (0x8E000108u)

#define CapSense_RIGHTCLICK_SNS0_BSLN0_VALUE                (CapSense_dsRam.snsList.rightclick[0u].bsln[0u])
#define CapSense_RIGHTCLICK_SNS0_BSLN0_OFFSET               (266u)
#define CapSense_RIGHTCLICK_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_RIGHTCLICK_SNS0_BSLN0_PARAM_ID             (0x8200010Au)

#define CapSense_RIGHTCLICK_SNS0_BSLN_EXT0_VALUE            (CapSense_dsRam.snsList.rightclick[0u].bslnExt[0u])
#define CapSense_RIGHTCLICK_SNS0_BSLN_EXT0_OFFSET           (268u)
#define CapSense_RIGHTCLICK_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_RIGHTCLICK_SNS0_BSLN_EXT0_PARAM_ID         (0x4700010Cu)

#define CapSense_RIGHTCLICK_SNS0_DIFF_VALUE                 (CapSense_dsRam.snsList.rightclick[0u].diff)
#define CapSense_RIGHTCLICK_SNS0_DIFF_OFFSET                (270u)
#define CapSense_RIGHTCLICK_SNS0_DIFF_SIZE                  (2u)
#define CapSense_RIGHTCLICK_SNS0_DIFF_PARAM_ID              (0x8300010Eu)

#define CapSense_RIGHTCLICK_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_dsRam.snsList.rightclick[0u].negBslnRstCnt[0u])
#define CapSense_RIGHTCLICK_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (272u)
#define CapSense_RIGHTCLICK_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_RIGHTCLICK_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000110u)

#define CapSense_GANGEDSENSOR_SNS0_RAW0_VALUE               (CapSense_dsRam.snsList.gangedsensor[0u].raw[0u])
#define CapSense_GANGEDSENSOR_SNS0_RAW0_OFFSET              (274u)
#define CapSense_GANGEDSENSOR_SNS0_RAW0_SIZE                (2u)
#define CapSense_GANGEDSENSOR_SNS0_RAW0_PARAM_ID            (0x85000112u)

#define CapSense_GANGEDSENSOR_SNS0_BSLN0_VALUE              (CapSense_dsRam.snsList.gangedsensor[0u].bsln[0u])
#define CapSense_GANGEDSENSOR_SNS0_BSLN0_OFFSET             (276u)
#define CapSense_GANGEDSENSOR_SNS0_BSLN0_SIZE               (2u)
#define CapSense_GANGEDSENSOR_SNS0_BSLN0_PARAM_ID           (0x88000114u)

#define CapSense_GANGEDSENSOR_SNS0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.gangedsensor[0u].bslnExt[0u])
#define CapSense_GANGEDSENSOR_SNS0_BSLN_EXT0_OFFSET         (278u)
#define CapSense_GANGEDSENSOR_SNS0_BSLN_EXT0_SIZE           (1u)
#define CapSense_GANGEDSENSOR_SNS0_BSLN_EXT0_PARAM_ID       (0x4C000116u)

#define CapSense_GANGEDSENSOR_SNS0_DIFF_VALUE               (CapSense_dsRam.snsList.gangedsensor[0u].diff)
#define CapSense_GANGEDSENSOR_SNS0_DIFF_OFFSET              (280u)
#define CapSense_GANGEDSENSOR_SNS0_DIFF_SIZE                (2u)
#define CapSense_GANGEDSENSOR_SNS0_DIFF_PARAM_ID            (0x8B000118u)

#define CapSense_GANGEDSENSOR_SNS0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.gangedsensor[0u].negBslnRstCnt[0u])
#define CapSense_GANGEDSENSOR_SNS0_NEG_BSLN_RST_CNT0_OFFSET (282u)
#define CapSense_GANGEDSENSOR_SNS0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_GANGEDSENSOR_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F00011Au)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (284u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x6900011Cu)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (285u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x6F00011Du)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (286u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8600011Eu)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (288u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x86000120u)

#define CapSense_SCAN_CSD_ISC_VALUE                         (CapSense_dsRam.scanCsdISC)
#define CapSense_SCAN_CSD_ISC_OFFSET                        (290u)
#define CapSense_SCAN_CSD_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSD_ISC_PARAM_ID                      (0x42000122u)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (291u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x44000123u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_TRACKPAD_PTR2SNS_FLASH_VALUE               (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_TRACKPAD_PTR2SNS_FLASH_OFFSET              (0u)
#define CapSense_TRACKPAD_PTR2SNS_FLASH_SIZE                (4u)
#define CapSense_TRACKPAD_PTR2SNS_FLASH_PARAM_ID            (0xD1000000u)

#define CapSense_TRACKPAD_PTR2WD_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_TRACKPAD_PTR2WD_RAM_OFFSET                 (4u)
#define CapSense_TRACKPAD_PTR2WD_RAM_SIZE                   (4u)
#define CapSense_TRACKPAD_PTR2WD_RAM_PARAM_ID               (0xD0000004u)

#define CapSense_TRACKPAD_PTR2SNS_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_TRACKPAD_PTR2SNS_RAM_OFFSET                (8u)
#define CapSense_TRACKPAD_PTR2SNS_RAM_SIZE                  (4u)
#define CapSense_TRACKPAD_PTR2SNS_RAM_PARAM_ID              (0xD3000008u)

#define CapSense_TRACKPAD_PTR2FLTR_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_TRACKPAD_PTR2FLTR_HISTORY_OFFSET           (12u)
#define CapSense_TRACKPAD_PTR2FLTR_HISTORY_SIZE             (4u)
#define CapSense_TRACKPAD_PTR2FLTR_HISTORY_PARAM_ID         (0xD200000Cu)

#define CapSense_TRACKPAD_PTR2DEBOUNCE_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_TRACKPAD_PTR2DEBOUNCE_OFFSET               (16u)
#define CapSense_TRACKPAD_PTR2DEBOUNCE_SIZE                 (4u)
#define CapSense_TRACKPAD_PTR2DEBOUNCE_PARAM_ID             (0xD4000010u)

#define CapSense_TRACKPAD_STATIC_CONFIG_VALUE               (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_TRACKPAD_STATIC_CONFIG_OFFSET              (20u)
#define CapSense_TRACKPAD_STATIC_CONFIG_SIZE                (4u)
#define CapSense_TRACKPAD_STATIC_CONFIG_PARAM_ID            (0xD5000014u)

#define CapSense_TRACKPAD_TOTAL_NUM_SNS_VALUE               (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_TRACKPAD_TOTAL_NUM_SNS_OFFSET              (24u)
#define CapSense_TRACKPAD_TOTAL_NUM_SNS_SIZE                (2u)
#define CapSense_TRACKPAD_TOTAL_NUM_SNS_PARAM_ID            (0x99000018u)

#define CapSense_TRACKPAD_TYPE_VALUE                        (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_TRACKPAD_TYPE_OFFSET                       (26u)
#define CapSense_TRACKPAD_TYPE_SIZE                         (1u)
#define CapSense_TRACKPAD_TYPE_PARAM_ID                     (0x5D00001Au)

#define CapSense_TRACKPAD_NUM_COLS_VALUE                    (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_TRACKPAD_NUM_COLS_OFFSET                   (27u)
#define CapSense_TRACKPAD_NUM_COLS_SIZE                     (1u)
#define CapSense_TRACKPAD_NUM_COLS_PARAM_ID                 (0x5B00001Bu)

#define CapSense_TRACKPAD_NUM_ROWS_VALUE                    (CapSense_dsFlash.wdgtArray[0].numRows)
#define CapSense_TRACKPAD_NUM_ROWS_OFFSET                   (28u)
#define CapSense_TRACKPAD_NUM_ROWS_SIZE                     (1u)
#define CapSense_TRACKPAD_NUM_ROWS_PARAM_ID                 (0x5000001Cu)

#define CapSense_TRACKPAD_X_RESOLUTION_VALUE                (CapSense_dsFlash.wdgtArray[0].xResolution)
#define CapSense_TRACKPAD_X_RESOLUTION_OFFSET               (30u)
#define CapSense_TRACKPAD_X_RESOLUTION_SIZE                 (2u)
#define CapSense_TRACKPAD_X_RESOLUTION_PARAM_ID             (0x9400001Eu)

#define CapSense_TRACKPAD_Y_RESOLUTION_VALUE                (CapSense_dsFlash.wdgtArray[0].yResolution)
#define CapSense_TRACKPAD_Y_RESOLUTION_OFFSET               (32u)
#define CapSense_TRACKPAD_Y_RESOLUTION_SIZE                 (2u)
#define CapSense_TRACKPAD_Y_RESOLUTION_PARAM_ID             (0x94000020u)

#define CapSense_TRACKPAD_X_CENT_MULT_VALUE                 (CapSense_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_TRACKPAD_X_CENT_MULT_OFFSET                (36u)
#define CapSense_TRACKPAD_X_CENT_MULT_SIZE                  (4u)
#define CapSense_TRACKPAD_X_CENT_MULT_PARAM_ID              (0xDA000024u)

#define CapSense_TRACKPAD_Y_CENT_MULT_VALUE                 (CapSense_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_TRACKPAD_Y_CENT_MULT_OFFSET                (40u)
#define CapSense_TRACKPAD_Y_CENT_MULT_SIZE                  (4u)
#define CapSense_TRACKPAD_Y_CENT_MULT_PARAM_ID              (0xD9000028u)

#define CapSense_TRACKPAD_PTR2POS_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[0].ptr2PosHistory)
#define CapSense_TRACKPAD_PTR2POS_HISTORY_OFFSET            (44u)
#define CapSense_TRACKPAD_PTR2POS_HISTORY_SIZE              (4u)
#define CapSense_TRACKPAD_PTR2POS_HISTORY_PARAM_ID          (0xD800002Cu)

#define CapSense_TRACKPAD_IIR_FILTER_COEFF_VALUE            (CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_TRACKPAD_IIR_FILTER_COEFF_OFFSET           (48u)
#define CapSense_TRACKPAD_IIR_FILTER_COEFF_SIZE             (1u)
#define CapSense_TRACKPAD_IIR_FILTER_COEFF_PARAM_ID         (0x59000030u)

#define CapSense_LEFTCLICK_PTR2SNS_FLASH_VALUE              (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_LEFTCLICK_PTR2SNS_FLASH_OFFSET             (52u)
#define CapSense_LEFTCLICK_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_LEFTCLICK_PTR2SNS_FLASH_PARAM_ID           (0xDC010034u)

#define CapSense_LEFTCLICK_PTR2WD_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_LEFTCLICK_PTR2WD_RAM_OFFSET                (56u)
#define CapSense_LEFTCLICK_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_LEFTCLICK_PTR2WD_RAM_PARAM_ID              (0xDF010038u)

#define CapSense_LEFTCLICK_PTR2SNS_RAM_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_LEFTCLICK_PTR2SNS_RAM_OFFSET               (60u)
#define CapSense_LEFTCLICK_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_LEFTCLICK_PTR2SNS_RAM_PARAM_ID             (0xDE01003Cu)

#define CapSense_LEFTCLICK_PTR2FLTR_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_LEFTCLICK_PTR2FLTR_HISTORY_OFFSET          (64u)
#define CapSense_LEFTCLICK_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_LEFTCLICK_PTR2FLTR_HISTORY_PARAM_ID        (0xDF010040u)

#define CapSense_LEFTCLICK_PTR2DEBOUNCE_VALUE               (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_LEFTCLICK_PTR2DEBOUNCE_OFFSET              (68u)
#define CapSense_LEFTCLICK_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_LEFTCLICK_PTR2DEBOUNCE_PARAM_ID            (0xDE010044u)

#define CapSense_LEFTCLICK_STATIC_CONFIG_VALUE              (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_LEFTCLICK_STATIC_CONFIG_OFFSET             (72u)
#define CapSense_LEFTCLICK_STATIC_CONFIG_SIZE               (4u)
#define CapSense_LEFTCLICK_STATIC_CONFIG_PARAM_ID           (0xDD010048u)

#define CapSense_LEFTCLICK_TOTAL_NUM_SNS_VALUE              (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_LEFTCLICK_TOTAL_NUM_SNS_OFFSET             (76u)
#define CapSense_LEFTCLICK_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_LEFTCLICK_TOTAL_NUM_SNS_PARAM_ID           (0x9301004Cu)

#define CapSense_LEFTCLICK_TYPE_VALUE                       (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_LEFTCLICK_TYPE_OFFSET                      (78u)
#define CapSense_LEFTCLICK_TYPE_SIZE                        (1u)
#define CapSense_LEFTCLICK_TYPE_PARAM_ID                    (0x5701004Eu)

#define CapSense_LEFTCLICK_NUM_COLS_VALUE                   (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_LEFTCLICK_NUM_COLS_OFFSET                  (79u)
#define CapSense_LEFTCLICK_NUM_COLS_SIZE                    (1u)
#define CapSense_LEFTCLICK_NUM_COLS_PARAM_ID                (0x5101004Fu)

#define CapSense_LEFTCLICK_NUM_ROWS_VALUE                   (CapSense_dsFlash.wdgtArray[1].numRows)
#define CapSense_LEFTCLICK_NUM_ROWS_OFFSET                  (80u)
#define CapSense_LEFTCLICK_NUM_ROWS_SIZE                    (1u)
#define CapSense_LEFTCLICK_NUM_ROWS_PARAM_ID                (0x5D010050u)

#define CapSense_LEFTCLICK_X_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[1].xResolution)
#define CapSense_LEFTCLICK_X_RESOLUTION_OFFSET              (82u)
#define CapSense_LEFTCLICK_X_RESOLUTION_SIZE                (2u)
#define CapSense_LEFTCLICK_X_RESOLUTION_PARAM_ID            (0x99010052u)

#define CapSense_LEFTCLICK_Y_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[1].yResolution)
#define CapSense_LEFTCLICK_Y_RESOLUTION_OFFSET              (84u)
#define CapSense_LEFTCLICK_Y_RESOLUTION_SIZE                (2u)
#define CapSense_LEFTCLICK_Y_RESOLUTION_PARAM_ID            (0x94010054u)

#define CapSense_LEFTCLICK_X_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_LEFTCLICK_X_CENT_MULT_OFFSET               (88u)
#define CapSense_LEFTCLICK_X_CENT_MULT_SIZE                 (4u)
#define CapSense_LEFTCLICK_X_CENT_MULT_PARAM_ID             (0xD8010058u)

#define CapSense_LEFTCLICK_Y_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define CapSense_LEFTCLICK_Y_CENT_MULT_OFFSET               (92u)
#define CapSense_LEFTCLICK_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_LEFTCLICK_Y_CENT_MULT_PARAM_ID             (0xD901005Cu)

#define CapSense_LEFTCLICK_PTR2POS_HISTORY_VALUE            (CapSense_dsFlash.wdgtArray[1].ptr2PosHistory)
#define CapSense_LEFTCLICK_PTR2POS_HISTORY_OFFSET           (96u)
#define CapSense_LEFTCLICK_PTR2POS_HISTORY_SIZE             (4u)
#define CapSense_LEFTCLICK_PTR2POS_HISTORY_PARAM_ID         (0xD5010060u)

#define CapSense_LEFTCLICK_IIR_FILTER_COEFF_VALUE           (CapSense_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_LEFTCLICK_IIR_FILTER_COEFF_OFFSET          (100u)
#define CapSense_LEFTCLICK_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_LEFTCLICK_IIR_FILTER_COEFF_PARAM_ID        (0x53010064u)

#define CapSense_RIGHTCLICK_PTR2SNS_FLASH_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_RIGHTCLICK_PTR2SNS_FLASH_OFFSET            (104u)
#define CapSense_RIGHTCLICK_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_RIGHTCLICK_PTR2SNS_FLASH_PARAM_ID          (0xD2020068u)

#define CapSense_RIGHTCLICK_PTR2WD_RAM_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_RIGHTCLICK_PTR2WD_RAM_OFFSET               (108u)
#define CapSense_RIGHTCLICK_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_RIGHTCLICK_PTR2WD_RAM_PARAM_ID             (0xD302006Cu)

#define CapSense_RIGHTCLICK_PTR2SNS_RAM_VALUE               (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_RIGHTCLICK_PTR2SNS_RAM_OFFSET              (112u)
#define CapSense_RIGHTCLICK_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_RIGHTCLICK_PTR2SNS_RAM_PARAM_ID            (0xD5020070u)

#define CapSense_RIGHTCLICK_PTR2FLTR_HISTORY_VALUE          (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_RIGHTCLICK_PTR2FLTR_HISTORY_OFFSET         (116u)
#define CapSense_RIGHTCLICK_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_RIGHTCLICK_PTR2FLTR_HISTORY_PARAM_ID       (0xD4020074u)

#define CapSense_RIGHTCLICK_PTR2DEBOUNCE_VALUE              (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_RIGHTCLICK_PTR2DEBOUNCE_OFFSET             (120u)
#define CapSense_RIGHTCLICK_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_RIGHTCLICK_PTR2DEBOUNCE_PARAM_ID           (0xD7020078u)

#define CapSense_RIGHTCLICK_STATIC_CONFIG_VALUE             (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_RIGHTCLICK_STATIC_CONFIG_OFFSET            (124u)
#define CapSense_RIGHTCLICK_STATIC_CONFIG_SIZE              (4u)
#define CapSense_RIGHTCLICK_STATIC_CONFIG_PARAM_ID          (0xD602007Cu)

#define CapSense_RIGHTCLICK_TOTAL_NUM_SNS_VALUE             (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_RIGHTCLICK_TOTAL_NUM_SNS_OFFSET            (128u)
#define CapSense_RIGHTCLICK_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_RIGHTCLICK_TOTAL_NUM_SNS_PARAM_ID          (0x9B020080u)

#define CapSense_RIGHTCLICK_TYPE_VALUE                      (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_RIGHTCLICK_TYPE_OFFSET                     (130u)
#define CapSense_RIGHTCLICK_TYPE_SIZE                       (1u)
#define CapSense_RIGHTCLICK_TYPE_PARAM_ID                   (0x5F020082u)

#define CapSense_RIGHTCLICK_NUM_COLS_VALUE                  (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_RIGHTCLICK_NUM_COLS_OFFSET                 (131u)
#define CapSense_RIGHTCLICK_NUM_COLS_SIZE                   (1u)
#define CapSense_RIGHTCLICK_NUM_COLS_PARAM_ID               (0x59020083u)

#define CapSense_RIGHTCLICK_NUM_ROWS_VALUE                  (CapSense_dsFlash.wdgtArray[2].numRows)
#define CapSense_RIGHTCLICK_NUM_ROWS_OFFSET                 (132u)
#define CapSense_RIGHTCLICK_NUM_ROWS_SIZE                   (1u)
#define CapSense_RIGHTCLICK_NUM_ROWS_PARAM_ID               (0x52020084u)

#define CapSense_RIGHTCLICK_X_RESOLUTION_VALUE              (CapSense_dsFlash.wdgtArray[2].xResolution)
#define CapSense_RIGHTCLICK_X_RESOLUTION_OFFSET             (134u)
#define CapSense_RIGHTCLICK_X_RESOLUTION_SIZE               (2u)
#define CapSense_RIGHTCLICK_X_RESOLUTION_PARAM_ID           (0x96020086u)

#define CapSense_RIGHTCLICK_Y_RESOLUTION_VALUE              (CapSense_dsFlash.wdgtArray[2].yResolution)
#define CapSense_RIGHTCLICK_Y_RESOLUTION_OFFSET             (136u)
#define CapSense_RIGHTCLICK_Y_RESOLUTION_SIZE               (2u)
#define CapSense_RIGHTCLICK_Y_RESOLUTION_PARAM_ID           (0x99020088u)

#define CapSense_RIGHTCLICK_X_CENT_MULT_VALUE               (CapSense_dsFlash.wdgtArray[2].xCentroidMultiplier)
#define CapSense_RIGHTCLICK_X_CENT_MULT_OFFSET              (140u)
#define CapSense_RIGHTCLICK_X_CENT_MULT_SIZE                (4u)
#define CapSense_RIGHTCLICK_X_CENT_MULT_PARAM_ID            (0xD702008Cu)

#define CapSense_RIGHTCLICK_Y_CENT_MULT_VALUE               (CapSense_dsFlash.wdgtArray[2].yCentroidMultiplier)
#define CapSense_RIGHTCLICK_Y_CENT_MULT_OFFSET              (144u)
#define CapSense_RIGHTCLICK_Y_CENT_MULT_SIZE                (4u)
#define CapSense_RIGHTCLICK_Y_CENT_MULT_PARAM_ID            (0xD1020090u)

#define CapSense_RIGHTCLICK_PTR2POS_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[2].ptr2PosHistory)
#define CapSense_RIGHTCLICK_PTR2POS_HISTORY_OFFSET          (148u)
#define CapSense_RIGHTCLICK_PTR2POS_HISTORY_SIZE            (4u)
#define CapSense_RIGHTCLICK_PTR2POS_HISTORY_PARAM_ID        (0xD0020094u)

#define CapSense_RIGHTCLICK_IIR_FILTER_COEFF_VALUE          (CapSense_dsFlash.wdgtArray[2].iirFilterCoeff)
#define CapSense_RIGHTCLICK_IIR_FILTER_COEFF_OFFSET         (152u)
#define CapSense_RIGHTCLICK_IIR_FILTER_COEFF_SIZE           (1u)
#define CapSense_RIGHTCLICK_IIR_FILTER_COEFF_PARAM_ID       (0x54020098u)

#define CapSense_GANGEDSENSOR_PTR2SNS_FLASH_VALUE           (CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_GANGEDSENSOR_PTR2SNS_FLASH_OFFSET          (156u)
#define CapSense_GANGEDSENSOR_PTR2SNS_FLASH_SIZE            (4u)
#define CapSense_GANGEDSENSOR_PTR2SNS_FLASH_PARAM_ID        (0xD103009Cu)

#define CapSense_GANGEDSENSOR_PTR2WD_RAM_VALUE              (CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_GANGEDSENSOR_PTR2WD_RAM_OFFSET             (160u)
#define CapSense_GANGEDSENSOR_PTR2WD_RAM_SIZE               (4u)
#define CapSense_GANGEDSENSOR_PTR2WD_RAM_PARAM_ID           (0xDD0300A0u)

#define CapSense_GANGEDSENSOR_PTR2SNS_RAM_VALUE             (CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_GANGEDSENSOR_PTR2SNS_RAM_OFFSET            (164u)
#define CapSense_GANGEDSENSOR_PTR2SNS_RAM_SIZE              (4u)
#define CapSense_GANGEDSENSOR_PTR2SNS_RAM_PARAM_ID          (0xDC0300A4u)

#define CapSense_GANGEDSENSOR_PTR2FLTR_HISTORY_VALUE        (CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_GANGEDSENSOR_PTR2FLTR_HISTORY_OFFSET       (168u)
#define CapSense_GANGEDSENSOR_PTR2FLTR_HISTORY_SIZE         (4u)
#define CapSense_GANGEDSENSOR_PTR2FLTR_HISTORY_PARAM_ID     (0xDF0300A8u)

#define CapSense_GANGEDSENSOR_PTR2DEBOUNCE_VALUE            (CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_GANGEDSENSOR_PTR2DEBOUNCE_OFFSET           (172u)
#define CapSense_GANGEDSENSOR_PTR2DEBOUNCE_SIZE             (4u)
#define CapSense_GANGEDSENSOR_PTR2DEBOUNCE_PARAM_ID         (0xDE0300ACu)

#define CapSense_GANGEDSENSOR_STATIC_CONFIG_VALUE           (CapSense_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_GANGEDSENSOR_STATIC_CONFIG_OFFSET          (176u)
#define CapSense_GANGEDSENSOR_STATIC_CONFIG_SIZE            (4u)
#define CapSense_GANGEDSENSOR_STATIC_CONFIG_PARAM_ID        (0xD80300B0u)

#define CapSense_GANGEDSENSOR_TOTAL_NUM_SNS_VALUE           (CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_GANGEDSENSOR_TOTAL_NUM_SNS_OFFSET          (180u)
#define CapSense_GANGEDSENSOR_TOTAL_NUM_SNS_SIZE            (2u)
#define CapSense_GANGEDSENSOR_TOTAL_NUM_SNS_PARAM_ID        (0x960300B4u)

#define CapSense_GANGEDSENSOR_TYPE_VALUE                    (CapSense_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_GANGEDSENSOR_TYPE_OFFSET                   (182u)
#define CapSense_GANGEDSENSOR_TYPE_SIZE                     (1u)
#define CapSense_GANGEDSENSOR_TYPE_PARAM_ID                 (0x520300B6u)

#define CapSense_GANGEDSENSOR_NUM_COLS_VALUE                (CapSense_dsFlash.wdgtArray[3].numCols)
#define CapSense_GANGEDSENSOR_NUM_COLS_OFFSET               (183u)
#define CapSense_GANGEDSENSOR_NUM_COLS_SIZE                 (1u)
#define CapSense_GANGEDSENSOR_NUM_COLS_PARAM_ID             (0x540300B7u)

#define CapSense_GANGEDSENSOR_NUM_ROWS_VALUE                (CapSense_dsFlash.wdgtArray[3].numRows)
#define CapSense_GANGEDSENSOR_NUM_ROWS_OFFSET               (184u)
#define CapSense_GANGEDSENSOR_NUM_ROWS_SIZE                 (1u)
#define CapSense_GANGEDSENSOR_NUM_ROWS_PARAM_ID             (0x5D0300B8u)

#define CapSense_GANGEDSENSOR_X_RESOLUTION_VALUE            (CapSense_dsFlash.wdgtArray[3].xResolution)
#define CapSense_GANGEDSENSOR_X_RESOLUTION_OFFSET           (186u)
#define CapSense_GANGEDSENSOR_X_RESOLUTION_SIZE             (2u)
#define CapSense_GANGEDSENSOR_X_RESOLUTION_PARAM_ID         (0x990300BAu)

#define CapSense_GANGEDSENSOR_Y_RESOLUTION_VALUE            (CapSense_dsFlash.wdgtArray[3].yResolution)
#define CapSense_GANGEDSENSOR_Y_RESOLUTION_OFFSET           (188u)
#define CapSense_GANGEDSENSOR_Y_RESOLUTION_SIZE             (2u)
#define CapSense_GANGEDSENSOR_Y_RESOLUTION_PARAM_ID         (0x940300BCu)

#define CapSense_GANGEDSENSOR_X_CENT_MULT_VALUE             (CapSense_dsFlash.wdgtArray[3].xCentroidMultiplier)
#define CapSense_GANGEDSENSOR_X_CENT_MULT_OFFSET            (192u)
#define CapSense_GANGEDSENSOR_X_CENT_MULT_SIZE              (4u)
#define CapSense_GANGEDSENSOR_X_CENT_MULT_PARAM_ID          (0xDA0300C0u)

#define CapSense_GANGEDSENSOR_Y_CENT_MULT_VALUE             (CapSense_dsFlash.wdgtArray[3].yCentroidMultiplier)
#define CapSense_GANGEDSENSOR_Y_CENT_MULT_OFFSET            (196u)
#define CapSense_GANGEDSENSOR_Y_CENT_MULT_SIZE              (4u)
#define CapSense_GANGEDSENSOR_Y_CENT_MULT_PARAM_ID          (0xDB0300C4u)

#define CapSense_GANGEDSENSOR_PTR2POS_HISTORY_VALUE         (CapSense_dsFlash.wdgtArray[3].ptr2PosHistory)
#define CapSense_GANGEDSENSOR_PTR2POS_HISTORY_OFFSET        (200u)
#define CapSense_GANGEDSENSOR_PTR2POS_HISTORY_SIZE          (4u)
#define CapSense_GANGEDSENSOR_PTR2POS_HISTORY_PARAM_ID      (0xD80300C8u)

#define CapSense_GANGEDSENSOR_IIR_FILTER_COEFF_VALUE        (CapSense_dsFlash.wdgtArray[3].iirFilterCoeff)
#define CapSense_GANGEDSENSOR_IIR_FILTER_COEFF_OFFSET       (204u)
#define CapSense_GANGEDSENSOR_IIR_FILTER_COEFF_SIZE         (1u)
#define CapSense_GANGEDSENSOR_IIR_FILTER_COEFF_PARAM_ID     (0x5E0300CCu)

#define CapSense_GANGEDSENSOR_SNS0_FIRST_PIN_ID_VALUE       (CapSense_dsFlash.eltdList..gangedsensor_sns0.firstPinId)
#define CapSense_GANGEDSENSOR_SNS0_FIRST_PIN_ID_OFFSET      (208u)
#define CapSense_GANGEDSENSOR_SNS0_FIRST_PIN_ID_SIZE        (2u)
#define CapSense_GANGEDSENSOR_SNS0_FIRST_PIN_ID_PARAM_ID    (0x950000D0u)

#define CapSense_GANGEDSENSOR_SNS0_NUM_PINS_VALUE           (CapSense_dsFlash.eltdList..gangedsensor_sns0.numPins)
#define CapSense_GANGEDSENSOR_SNS0_NUM_PINS_OFFSET          (210u)
#define CapSense_GANGEDSENSOR_SNS0_NUM_PINS_SIZE            (1u)
#define CapSense_GANGEDSENSOR_SNS0_NUM_PINS_PARAM_ID        (0x510000D2u)

#define CapSense_GANGEDSENSOR_SNS0_TYPE_VALUE               (CapSense_dsFlash.eltdList..gangedsensor_sns0.type)
#define CapSense_GANGEDSENSOR_SNS0_TYPE_OFFSET              (211u)
#define CapSense_GANGEDSENSOR_SNS0_TYPE_SIZE                (1u)
#define CapSense_GANGEDSENSOR_SNS0_TYPE_PARAM_ID            (0x570000D3u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
