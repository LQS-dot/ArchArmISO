
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

#ifndef __LIBMBIM_GLIB_MBIM_MS_VOICE_EXTENSIONS__
#define __LIBMBIM_GLIB_MBIM_MS_VOICE_EXTENSIONS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-voice-extensions
 * @title: Ms Voice Extensions service
 * @short_description: Support for the Ms Voice Extensions service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Voice Extensions service.
 */

/*****************************************************************************/
/* Message (Query): MBIM Message MS Voice Extensions NITZ */

/**
 * mbim_message_ms_voice_extensions_nitz_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'NITZ' query command in the 'MS Voice Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_voice_extensions_nitz_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS Voice Extensions NITZ */

/**
 * mbim_message_ms_voice_extensions_nitz_response_parse:
 * @message: the #MbimMessage.
 * @out_year: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Year' field is not needed.
 * @out_month: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Month' field is not needed.
 * @out_day: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Day' field is not needed.
 * @out_hour: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Hour' field is not needed.
 * @out_minute: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Minute' field is not needed.
 * @out_second: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Second' field is not needed.
 * @out_time_zone_offset_minutes: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TimeZoneOffsetMinutes' field is not needed.
 * @out_daylight_saving_time_offset_minutes: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'DaylightSavingTimeOffsetMinutes' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'DataClass' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'NITZ' response command in the 'MS Voice Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_voice_extensions_nitz_response_parse (
    const MbimMessage *message,
    guint32 *out_year,
    guint32 *out_month,
    guint32 *out_day,
    guint32 *out_hour,
    guint32 *out_minute,
    guint32 *out_second,
    guint32 *out_time_zone_offset_minutes,
    guint32 *out_daylight_saving_time_offset_minutes,
    MbimDataClass *out_data_class,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message MS Voice Extensions NITZ */

/**
 * mbim_message_ms_voice_extensions_nitz_notification_parse:
 * @message: the #MbimMessage.
 * @out_year: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Year' field is not needed.
 * @out_month: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Month' field is not needed.
 * @out_day: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Day' field is not needed.
 * @out_hour: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Hour' field is not needed.
 * @out_minute: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Minute' field is not needed.
 * @out_second: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Second' field is not needed.
 * @out_time_zone_offset_minutes: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TimeZoneOffsetMinutes' field is not needed.
 * @out_daylight_saving_time_offset_minutes: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'DaylightSavingTimeOffsetMinutes' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'DataClass' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'NITZ' notification command in the 'MS Voice Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_voice_extensions_nitz_notification_parse (
    const MbimMessage *message,
    guint32 *out_year,
    guint32 *out_month,
    guint32 *out_day,
    guint32 *out_hour,
    guint32 *out_minute,
    guint32 *out_second,
    guint32 *out_time_zone_offset_minutes,
    guint32 *out_daylight_saving_time_offset_minutes,
    MbimDataClass *out_data_class,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_voice_extensions_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_VOICE_EXTENSIONS__ */
