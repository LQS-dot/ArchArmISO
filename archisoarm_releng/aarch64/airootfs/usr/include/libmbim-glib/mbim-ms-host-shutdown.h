
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

#ifndef __LIBMBIM_GLIB_MBIM_MS_HOST_SHUTDOWN__
#define __LIBMBIM_GLIB_MBIM_MS_HOST_SHUTDOWN__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-host-shutdown
 * @title: Ms Host Shutdown service
 * @short_description: Support for the Ms Host Shutdown service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Host Shutdown service.
 */

/*****************************************************************************/
/* Message (Set): MBIM Message MS Host Shutdown Notify */

/**
 * mbim_message_ms_host_shutdown_notify_set_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Notify' set command in the 'MS Host Shutdown' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.8
 */
MbimMessage *mbim_message_ms_host_shutdown_notify_set_new (
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_host_shutdown_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_HOST_SHUTDOWN__ */
