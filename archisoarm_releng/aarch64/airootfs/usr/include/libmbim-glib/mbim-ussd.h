
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

#ifndef __LIBMBIM_GLIB_MBIM_USSD__
#define __LIBMBIM_GLIB_MBIM_USSD__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ussd
 * @title: Ussd service
 * @short_description: Support for the Ussd service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ussd service.
 */

/*****************************************************************************/
/* Message (Set): MBIM Message USSD */

/**
 * mbim_message_ussd_set_new:
 * @action: (in): the 'Action' field, given as a #MbimUssdAction.
 * @data_coding_scheme: (in): the 'DataCodingScheme' field, given as a #guint32.
 * @payload_size: (in): size of the payload array.
 * @payload: (in)(element-type guint8)(array length=payload_size): the 'Payload' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the '' set command in the 'USSD' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_ussd_set_new (
    MbimUssdAction action,
    guint32 data_coding_scheme,
    const guint32 payload_size,
    const guint8 *payload,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message USSD */

/**
 * mbim_message_ussd_response_parse:
 * @message: the #MbimMessage.
 * @out_response: (out)(optional)(transfer none): return location for a #MbimUssdResponse, or %NULL if the 'Response' field is not needed.
 * @out_session_state: (out)(optional)(transfer none): return location for a #MbimUssdSessionState, or %NULL if the 'SessionState' field is not needed.
 * @out_data_coding_scheme: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'DataCodingScheme' field is not needed.
 * @out_payload_size: (out)(optional): return location for the size of the payload array.
 * @out_payload: (out)(optional)(transfer none)(element-type guint8)(array length=out_payload_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the '' response command in the 'USSD' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_ussd_response_parse (
    const MbimMessage *message,
    MbimUssdResponse *out_response,
    MbimUssdSessionState *out_session_state,
    guint32 *out_data_coding_scheme,
    guint32 *out_payload_size,
    const guint8 **out_payload,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message USSD */

/**
 * mbim_message_ussd_notification_parse:
 * @message: the #MbimMessage.
 * @out_response: (out)(optional)(transfer none): return location for a #MbimUssdResponse, or %NULL if the 'Response' field is not needed.
 * @out_session_state: (out)(optional)(transfer none): return location for a #MbimUssdSessionState, or %NULL if the 'SessionState' field is not needed.
 * @out_data_coding_scheme: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'DataCodingScheme' field is not needed.
 * @out_payload_size: (out)(optional): return location for the size of the payload array.
 * @out_payload: (out)(optional)(transfer none)(element-type guint8)(array length=out_payload_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the '' notification command in the 'USSD' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_ussd_notification_parse (
    const MbimMessage *message,
    MbimUssdResponse *out_response,
    MbimUssdSessionState *out_session_state,
    guint32 *out_data_coding_scheme,
    guint32 *out_payload_size,
    const guint8 **out_payload,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ussd_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_USSD__ */
