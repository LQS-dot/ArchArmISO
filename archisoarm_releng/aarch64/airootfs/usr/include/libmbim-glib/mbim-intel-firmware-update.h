
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

#ifndef __LIBMBIM_GLIB_MBIM_INTEL_FIRMWARE_UPDATE__
#define __LIBMBIM_GLIB_MBIM_INTEL_FIRMWARE_UPDATE__

G_BEGIN_DECLS

/**
 * SECTION:mbim-intel-firmware-update
 * @title: Intel Firmware Update service
 * @short_description: Support for the Intel Firmware Update service.
 *
 * This section implements support for requests, responses and notifications in the
 * Intel Firmware Update service.
 */

/**
 * SECTION:mbim-intel-firmware-update-v2
 * @title: Intel Firmware Update V2 service
 * @short_description: Support for the Intel Firmware Update V2 service.
 *
 * This section implements support for requests, responses and notifications in the
 * Intel Firmware Update V2 service.
 */

/*****************************************************************************/
/* Message (Set): MBIM Message Intel Firmware Update Modem Reboot */

/**
 * mbim_message_intel_firmware_update_modem_reboot_set_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Modem Reboot' set command in the 'Intel Firmware Update' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_intel_firmware_update_modem_reboot_set_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Intel Firmware Update V2 Modem Reboot */

/**
 * mbim_message_intel_firmware_update_v2_modem_reboot_set_new:
 * @boot_mode: (in): the 'BootMode' field, given as a #MbimIntelBootMode.
 * @timeout: (in): the 'Timeout' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Modem Reboot' set command in the 'Intel Firmware Update V2' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_intel_firmware_update_v2_modem_reboot_set_new (
    MbimIntelBootMode boot_mode,
    guint32 timeout,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_intel_firmware_update_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

G_GNUC_INTERNAL
gchar *
__mbim_message_intel_firmware_update_v2_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_INTEL_FIRMWARE_UPDATE__ */
