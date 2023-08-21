
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

#ifndef __LIBMBIM_GLIB_MBIM_INTEL_THERMAL_RF__
#define __LIBMBIM_GLIB_MBIM_INTEL_THERMAL_RF__

G_BEGIN_DECLS

/**
 * SECTION:mbim-intel-thermal-rf
 * @title: Intel Thermal Rf service
 * @short_description: Support for the Intel Thermal Rf service.
 *
 * This section implements support for requests, responses and notifications in the
 * Intel Thermal Rf service.
 */

/*****************************************************************************/
/* Struct: MbimIntelRfimFrequencyValue */

/**
 * MbimIntelRfimFrequencyValue:
 * @serving_cell_info: a #MbimIntelServingCellInfo given as a #guint32.
 * @center_frequency: a #guint64.
 * @bandwidth: a #guint32.
 * @rsrp: a #guint32.
 * @rsrq: a #guint32.
 * @sinr: a #guint32.
 * @rssi: a #guint32.
 * @connection_status: a #gboolean given as a #guint32.
 *
 * A MbimIntelRfimFrequencyValue element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 serving_cell_info;
    guint64 center_frequency;
    guint32 bandwidth;
    guint32 rsrp;
    guint32 rsrq;
    guint32 sinr;
    guint32 rssi;
    guint32 connection_status;
} MbimIntelRfimFrequencyValue;

/**
 * MbimIntelRfimFrequencyValueArray:
 *
 * A NULL-terminated array of MbimIntelRfimFrequencyValue elements.
 *
 * Since: 1.28
 */
typedef MbimIntelRfimFrequencyValue *MbimIntelRfimFrequencyValueArray;
/**
 * mbim_intel_rfim_frequency_value_array_free:
 * @array: a #NULL terminated array of #MbimIntelRfimFrequencyValue structs.
 *
 * Frees the memory allocated for the array of #MbimIntelRfimFrequencyValue structs.
 *
 * Since: 1.28
 */
void mbim_intel_rfim_frequency_value_array_free (MbimIntelRfimFrequencyValueArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimIntelRfimFrequencyValueArray, mbim_intel_rfim_frequency_value_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message Intel Thermal RF RFIM */

/**
 * mbim_message_intel_thermal_rf_rfim_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'RFIM' query command in the 'Intel Thermal RF' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_intel_thermal_rf_rfim_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Intel Thermal RF RFIM */

/**
 * mbim_message_intel_thermal_rf_rfim_set_new:
 * @activation_state: (in): the 'ActivationState' field, given as a #gboolean.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'RFIM' set command in the 'Intel Thermal RF' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_intel_thermal_rf_rfim_set_new (
    gboolean activation_state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Intel Thermal RF RFIM */

/**
 * mbim_message_intel_thermal_rf_rfim_response_parse:
 * @message: the #MbimMessage.
 * @out_rfim_frequency_values_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RfimFrequencyValuesCount' field is not needed.
 * @out_rfim_frequency_values: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIntelRfimFrequencyValue): return location for a newly allocated array of #MbimIntelRfimFrequencyValue items, or %NULL if the 'RfimFrequencyValues' field is not needed. Free the returned value with mbim_intel_rfim_frequency_value_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'RFIM' response command in the 'Intel Thermal RF' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_intel_thermal_rf_rfim_response_parse (
    const MbimMessage *message,
    guint32 *out_rfim_frequency_values_count,
    MbimIntelRfimFrequencyValueArray **out_rfim_frequency_values,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Intel Thermal RF RFIM */

/**
 * mbim_message_intel_thermal_rf_rfim_notification_parse:
 * @message: the #MbimMessage.
 * @out_rfim_frequency_values_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RfimFrequencyValuesCount' field is not needed.
 * @out_rfim_frequency_values: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIntelRfimFrequencyValue): return location for a newly allocated array of #MbimIntelRfimFrequencyValue items, or %NULL if the 'RfimFrequencyValues' field is not needed. Free the returned value with mbim_intel_rfim_frequency_value_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'RFIM' notification command in the 'Intel Thermal RF' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_intel_thermal_rf_rfim_notification_parse (
    const MbimMessage *message,
    guint32 *out_rfim_frequency_values_count,
    MbimIntelRfimFrequencyValueArray **out_rfim_frequency_values,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_intel_thermal_rf_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_INTEL_THERMAL_RF__ */
