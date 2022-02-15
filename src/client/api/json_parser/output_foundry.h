// Copyright 2022 IOTA Stiftung
// SPDX-License-Identifier: Apache-2.0

#ifndef __CLIENT_API_JSON_PARSER_OUTPUT_FOUNDRY_H__
#define __CLIENT_API_JSON_PARSER_OUTPUT_FOUNDRY_H__

#include "client/api/json_parser/json_utils.h"
#include "core/models/outputs/output_foundry.h"
#include "core/models/outputs/outputs.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Deserialize JSON data to output foundry object
 *
 * @param[in] output_obj An output JSON object
 * @param[out] outputs An output list object
 * @return int 0 on success
 */
int json_output_foundry_deserialize(cJSON *output_obj, utxo_outputs_list_t **outputs);

/**
 * @brief Serialize a foundry output to a JSON object
 *
 * @param[in] foundry A foundry output
 * @return cJSON* NULL on errors
 */
cJSON *json_output_foundry_serialize(output_foundry_t *foundry);

#ifdef __cplusplus
}
#endif

#endif  // __CLIENT_API_JSON_PARSER_OUTPUT_FOUNDRY_H__
