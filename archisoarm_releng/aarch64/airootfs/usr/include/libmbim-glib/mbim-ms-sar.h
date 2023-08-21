
/* GENERATED CODE... DO NOT EDIT */

/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * Copyright (C) 2013 - 2018 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "mbim-message.h"
#include "mbim-device.h"
#include "mbim-enums.h"
#include "mbim-tlv.h"

#ifndef __LIBMBIM_GLIB_MBIM_MS_SAR__
#define __LIBMBIM_GLIB_MBIM_MS_SAR__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-sar
 * @title: Ms Sar service
 * @short_description: Support for the Ms Sar service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Sar service.
 */

/*****************************************************************************/
/* Struct: MbimSarConfigState */

/**
 * MbimSarConfigState:
 * @antenna_index: a #guint32.
 * @backoff_index: a #guint32.
 *
 * A MbimSarConfigState element.
 *
 * Since: 1.26
 */
typedef struct {
    guint32 antenna_index;
    guint32 backoff_index;
} MbimSarConfigState;

/**
 * MbimSarConfigStateArray:
 *
 * A NULL-terminated array of MbimSarConfigState elements.
 *
 * Since: 1.26
 */
typedef MbimSarConfigState *MbimSarConfigStateArray;
/**
 * mbim_sar_config_state_array_free:
 * @array: a #NULL terminated array of #MbimSarConfigState structs.
 *
 * Frees the memory allocated for the array of #MbimSarConfigState structs.
 *
 * Since: 1.26
 */
void mbim_sar_config_state_array_free (MbimSarConfigStateArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSarConfigStateArray, mbim_sar_config_state_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message MS SAR Config */

/**
 * mbim_message_ms_sar_config_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Config' query command in the 'MS SAR' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_sar_config_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS SAR Config */

/**
 * mbim_message_ms_sar_config_set_new:
 * @mode: (in): the 'Mode' field, given as a #MbimSarControlMode.
 * @backoff_state: (in): the 'BackoffState' field, given as a #MbimSarBackoffState.
 * @config_states_count: (in): the 'ConfigStatesCount' field, given as a #guint32.
 * @config_states: (in)(array zero-terminated=1)(element-type MbimSarConfigState): the 'ConfigStates' field, given as an array of #MbimSarConfigState items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Config' set command in the 'MS SAR' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_sar_config_set_new (
    MbimSarControlMode mode,
    MbimSarBackoffState backoff_state,
    guint32 config_states_count,
    const MbimSarConfigState *const *config_states,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS SAR Config */

/**
 * mbim_message_ms_sar_config_response_parse:
 * @message: the #MbimMessage.
 * @out_mode: (out)(optional)(transfer none): return location for a #MbimSarControlMode, or %NULL if the 'Mode' field is not needed.
 * @out_backoff_state: (out)(optional)(transfer none): return location for a #MbimSarBackoffState, or %NULL if the 'BackoffState' field is not needed.
 * @out_wifi_integration: (out)(optional)(transfer none): return location for a #MbimSarWifiHardwareState, or %NULL if the 'WifiIntegration' field is not needed.
 * @out_config_states_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ConfigStatesCount' field is not needed.
 * @out_config_states: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSarConfigState): return location for a newly allocated array of #MbimSarConfigState items, or %NULL if the 'ConfigStates' field is not needed. Free the returned value with mbim_sar_config_state_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Config' response command in the 'MS SAR' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_sar_config_response_parse (
    const MbimMessage *message,
    MbimSarControlMode *out_mode,
    MbimSarBackoffState *out_backoff_state,
    MbimSarWifiHardwareState *out_wifi_integration,
    guint32 *out_config_states_count,
    MbimSarConfigStateArray **out_config_states,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS SAR Transmission status */

/**
 * mbim_message_ms_sar_transmission_status_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Transmission status' query command in the 'MS SAR' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_sar_transmission_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS SAR Transmission status */

/**
 * mbim_message_ms_sar_transmission_status_set_new:
 * @channel_notification: (in): the 'ChannelNotification' field, given as a #MbimTransmissionNotificationStatus.
 * @hysteresis_timer: (in): the 'HysteresisTimer' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Transmission status' set command in the 'MS SAR' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_sar_transmission_status_set_new (
    MbimTransmissionNotificationStatus channel_notification,
    guint32 hysteresis_timer,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS SAR Transmission status */

/**
 * mbim_message_ms_sar_transmission_status_response_parse:
 * @message: the #MbimMessage.
 * @out_channel_notification: (out)(optional)(transfer none): return location for a #MbimTransmissionNotificationStatus, or %NULL if the 'ChannelNotification' field is not needed.
 * @out_transmission_status: (out)(optional)(transfer none): return location for a #MbimTransmissionState, or %NULL if the 'TransmissionStatus' field is not needed.
 * @out_hysteresis_timer: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'HysteresisTimer' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Transmission status' response command in the 'MS SAR' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_sar_transmission_status_response_parse (
    const MbimMessage *message,
    MbimTransmissionNotificationStatus *out_channel_notification,
    MbimTransmissionState *out_transmission_status,
    guint32 *out_hysteresis_timer,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message MS SAR Transmission status */

/**
 * mbim_message_ms_sar_transmission_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_channel_notification: (out)(optional)(transfer none): return location for a #MbimTransmissionNotificationStatus, or %NULL if the 'ChannelNotification' field is not needed.
 * @out_transmission_status: (out)(optional)(transfer none): return location for a #MbimTransmissionState, or %NULL if the 'TransmissionStatus' field is not needed.
 * @out_hysteresis_timer: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'HysteresisTimer' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Transmission status' notification command in the 'MS SAR' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_sar_transmission_status_notification_parse (
    const MbimMessage *message,
    MbimTransmissionNotificationStatus *out_channel_notification,
    MbimTransmissionState *out_transmission_status,
    guint32 *out_hysteresis_timer,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_sar_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_SAR__ */
