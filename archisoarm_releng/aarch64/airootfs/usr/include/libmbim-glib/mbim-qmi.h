
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

#ifndef __LIBMBIM_GLIB_MBIM_QMI__
#define __LIBMBIM_GLIB_MBIM_QMI__

G_BEGIN_DECLS

/**
 * SECTION:mbim-qmi
 * @title: Qmi service
 * @short_description: Support for the Qmi service.
 *
 * This section implements support for requests, responses and notifications in the
 * Qmi service.
 */

/*****************************************************************************/
/* Message (Set): MBIM Message QMI msg */

/**
 * mbim_message_qmi_msg_set_new:
 * @qmi_msg_size: (in): size of the qmi_msg array.
 * @qmi_msg: (in)(element-type guint8)(array length=qmi_msg_size): the 'QmiMsg' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'msg' set command in the 'QMI' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.14
 */
MbimMessage *mbim_message_qmi_msg_set_new (
    const guint32 qmi_msg_size,
    const guint8 *qmi_msg,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message QMI msg */

/**
 * mbim_message_qmi_msg_response_parse:
 * @message: the #MbimMessage.
 * @out_qmux_size: (out)(optional): return location for the size of the qmux array.
 * @out_qmux: (out)(optional)(transfer none)(element-type guint8)(array length=out_qmux_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'msg' response command in the 'QMI' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean mbim_message_qmi_msg_response_parse (
    const MbimMessage *message,
    guint32 *out_qmux_size,
    const guint8 **out_qmux,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message QMI msg */

/**
 * mbim_message_qmi_msg_notification_parse:
 * @message: the #MbimMessage.
 * @out_qmux_size: (out)(optional): return location for the size of the qmux array.
 * @out_qmux: (out)(optional)(transfer none)(element-type guint8)(array length=out_qmux_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'msg' notification command in the 'QMI' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_qmi_msg_notification_parse (
    const MbimMessage *message,
    guint32 *out_qmux_size,
    const guint8 **out_qmux,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_qmi_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_QMI__ */
