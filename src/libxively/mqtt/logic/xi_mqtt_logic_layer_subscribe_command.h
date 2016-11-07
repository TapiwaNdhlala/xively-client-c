/* Copyright (c) 2003-2016, LogMeIn, Inc. All rights reserved.
 *
 * This is part of the Xively C Client library,
 * it is licensed under the BSD 3-Clause license.
 */

#ifndef __XI_MQTT_LOGIC_LAYER_SUBSCRIBE_COMMAND_H__
#define __XI_MQTT_LOGIC_LAYER_SUBSCRIBE_COMMAND_H__

#include "xi_layer_api.h"
#include "xi_mqtt_logic_layer_data.h"
#include "xi_coroutine.h"
#include "xi_mqtt_message.h"
#include "xi_mqtt_logic_layer_data_helpers.h"
#include "xi_mqtt_logic_layer_task_helpers.h"
#include "xi_globals.h"

#ifdef __cplusplus
extern "C" {
#endif

xi_state_t
do_mqtt_subscribe( void* ctx, void* data, xi_state_t state, void* msg );

#ifdef __cplusplus
}
#endif

#endif /* __XI_MQTT_LOGIC_LAYER_SUBSCRIBE_COMMAND_H__ */
