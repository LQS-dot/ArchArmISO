
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

#ifndef __LIBMBIM_GLIB_MBIM_STK__
#define __LIBMBIM_GLIB_MBIM_STK__

G_BEGIN_DECLS

/**
 * SECTION:mbim-stk
 * @title: Stk service
 * @short_description: Support for the Stk service.
 *
 * This section implements support for requests, responses and notifications in the
 * Stk service.
 */

/*****************************************************************************/
/* Message (Query): MBIM Message STK Pac */

/**
 * mbim_message_stk_pac_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Pac' query command in the 'STK' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_stk_pac_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Pac */

/**
 * mbim_message_stk_pac_set_new:
 * @pac_host_control: (in)(element-type guint8)(array fixed-size=32): the 'PacHostControl' field, given as an array of 32 #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Pac' set command in the 'STK' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_stk_pac_set_new (
    const guint8 *pac_host_control,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Pac */

/**
 * mbim_message_stk_pac_response_parse:
 * @message: the #MbimMessage.
 * @out_pac_support: (out)(optional)(transfer none)(element-type guint8)(array fixed-size=256): return location for an array of 256 #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Pac' response command in the 'STK' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_stk_pac_response_parse (
    const MbimMessage *message,
    const guint8 **out_pac_support,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message STK Pac */

/**
 * mbim_message_stk_pac_notification_parse:
 * @message: the #MbimMessage.
 * @out_pac_type: (out)(optional)(transfer none): return location for a #MbimStkPacType, or %NULL if the 'PacType' field is not needed.
 * @out_data_buffer_size: (out)(optional): return location for the size of the data_buffer array.
 * @out_data_buffer: (out)(optional)(transfer none)(element-type guint8)(array length=out_data_buffer_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Pac' notification command in the 'STK' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_stk_pac_notification_parse (
    const MbimMessage *message,
    MbimStkPacType *out_pac_type,
    guint32 *out_data_buffer_size,
    const guint8 **out_data_buffer,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Terminal Response */

/**
 * mbim_message_stk_terminal_response_set_new:
 * @response_size: (in): size of the response array.
 * @response: (in)(element-type guint8)(array length=response_size): the 'Response' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Terminal Response' set command in the 'STK' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_stk_terminal_response_set_new (
    const guint32 response_size,
    const guint8 *response,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Terminal Response */

/**
 * mbim_message_stk_terminal_response_response_parse:
 * @message: the #MbimMessage.
 * @out_result_data_size: (out)(optional): return location for the size of the result_data array.
 * @out_result_data: (out)(optional)(transfer none)(element-type guint8)(array length=out_result_data_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @out_status_words: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWords' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Terminal Response' response command in the 'STK' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_stk_terminal_response_response_parse (
    const MbimMessage *message,
    guint32 *out_result_data_size,
    const guint8 **out_result_data,
    guint32 *out_status_words,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message STK Envelope */

/**
 * mbim_message_stk_envelope_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Envelope' query command in the 'STK' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_stk_envelope_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message STK Envelope */

/**
 * mbim_message_stk_envelope_set_new:
 * @data_size: (in): size of the data array.
 * @data: (in)(element-type guint8)(array length=data_size): the 'Data' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Envelope' set command in the 'STK' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_stk_envelope_set_new (
    const guint32 data_size,
    const guint8 *data,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message STK Envelope */

/**
 * mbim_message_stk_envelope_response_parse:
 * @message: the #MbimMessage.
 * @out_envelope_support: (out)(optional)(transfer none)(element-type guint8)(array fixed-size=32): return location for an array of 32 #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Envelope' response command in the 'STK' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_stk_envelope_response_parse (
    const MbimMessage *message,
    const guint8 **out_envelope_support,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_stk_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_STK__ */
