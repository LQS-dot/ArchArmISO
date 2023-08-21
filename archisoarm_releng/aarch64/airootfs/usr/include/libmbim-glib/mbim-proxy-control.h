
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

#ifndef __LIBMBIM_GLIB_MBIM_PROXY_CONTROL__
#define __LIBMBIM_GLIB_MBIM_PROXY_CONTROL__

G_BEGIN_DECLS

/**
 * SECTION:mbim-proxy-control
 * @title: Proxy Control service
 * @short_description: Support for the Proxy Control service.
 *
 * This section implements support for requests, responses and notifications in the
 * Proxy Control service.
 */

/*****************************************************************************/
/* Message (Set): MBIM Message Proxy Control Configuration */

/**
 * mbim_message_proxy_control_configuration_set_new:
 * @device_path: (in): the 'DevicePath' field, given as a string.
 * @timeout: (in): the 'Timeout' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Configuration' set command in the 'Proxy Control' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.10
 */
MbimMessage *mbim_message_proxy_control_configuration_set_new (
    const gchar *device_path,
    guint32 timeout,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Proxy Control Configuration */

/**
 * mbim_message_proxy_control_configuration_response_parse:
 * @message: the #MbimMessage.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Configuration' response command in the 'Proxy Control' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean mbim_message_proxy_control_configuration_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Proxy Control Version */

/**
 * mbim_message_proxy_control_version_notification_parse:
 * @message: the #MbimMessage.
 * @out_mbim_version: (out)(optional)(transfer none): return location for a #guint16, or %NULL if the 'MbimVersion' field is not needed.
 * @out_mbim_extended_version: (out)(optional)(transfer none): return location for a #guint16, or %NULL if the 'MbimExtendedVersion' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Version' notification command in the 'Proxy Control' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_proxy_control_version_notification_parse (
    const MbimMessage *message,
    guint16 *out_mbim_version,
    guint16 *out_mbim_extended_version,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_proxy_control_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_PROXY_CONTROL__ */
