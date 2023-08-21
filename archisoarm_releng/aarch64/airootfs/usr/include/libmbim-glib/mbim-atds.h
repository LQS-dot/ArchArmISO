
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

#ifndef __LIBMBIM_GLIB_MBIM_ATDS__
#define __LIBMBIM_GLIB_MBIM_ATDS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-atds
 * @title: Atds service
 * @short_description: Support for the Atds service.
 *
 * This section implements support for requests, responses and notifications in the
 * Atds service.
 */

/*****************************************************************************/
/* Struct: MbimAtdsProvider */

/**
 * MbimAtdsProvider:
 * @provider_id: a string.
 * @provider_state: a #MbimProviderState given as a #guint32.
 * @provider_name: a string.
 * @plmn_mode: a #MbimAtdsProviderPlmnMode given as a #guint32.
 * @rssi: a #guint32.
 * @error_rate: a #guint32.
 *
 * A MbimAtdsProvider element.
 *
 * Since: 1.16
 */
typedef struct {
    gchar *provider_id;
    guint32 provider_state;
    gchar *provider_name;
    guint32 plmn_mode;
    guint32 rssi;
    guint32 error_rate;
} MbimAtdsProvider;

/**
 * MbimAtdsProviderArray:
 *
 * A NULL-terminated array of MbimAtdsProvider elements.
 *
 * Since: 1.24
 */
typedef MbimAtdsProvider *MbimAtdsProviderArray;
/**
 * mbim_atds_provider_array_free:
 * @array: a #NULL terminated array of #MbimAtdsProvider structs.
 *
 * Frees the memory allocated for the array of #MbimAtdsProvider structs.
 *
 * Since: 1.16
 */
void mbim_atds_provider_array_free (MbimAtdsProviderArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimAtdsProviderArray, mbim_atds_provider_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Signal */

/**
 * mbim_message_atds_signal_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Signal' query command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_signal_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Signal */

/**
 * mbim_message_atds_signal_response_parse:
 * @message: the #MbimMessage.
 * @out_rssi: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssi' field is not needed.
 * @out_error_rate: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRate' field is not needed.
 * @out_rscp: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rscp' field is not needed.
 * @out_ecno: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Ecno' field is not needed.
 * @out_rsrq: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rsrq' field is not needed.
 * @out_rsrp: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rsrp' field is not needed.
 * @out_rssnr: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssnr' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Signal' response command in the 'ATDS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean mbim_message_atds_signal_response_parse (
    const MbimMessage *message,
    guint32 *out_rssi,
    guint32 *out_error_rate,
    guint32 *out_rscp,
    guint32 *out_ecno,
    guint32 *out_rsrq,
    guint32 *out_rsrp,
    guint32 *out_rssnr,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Location */

/**
 * mbim_message_atds_location_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Location' query command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_location_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Location */

/**
 * mbim_message_atds_location_response_parse:
 * @message: the #MbimMessage.
 * @out_lac: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Lac' field is not needed.
 * @out_tac: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Tac' field is not needed.
 * @out_cell_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'CellId' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Location' response command in the 'ATDS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean mbim_message_atds_location_response_parse (
    const MbimMessage *message,
    guint32 *out_lac,
    guint32 *out_tac,
    guint32 *out_cell_id,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Operators */

/**
 * mbim_message_atds_operators_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Operators' query command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_operators_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Operators */

/**
 * mbim_message_atds_operators_response_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimAtdsProvider): return location for a newly allocated array of #MbimAtdsProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_atds_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Operators' response command in the 'ATDS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean mbim_message_atds_operators_response_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimAtdsProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS RAT */

/**
 * mbim_message_atds_rat_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'RAT' query command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_rat_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message ATDS RAT */

/**
 * mbim_message_atds_rat_set_new:
 * @mode: (in): the 'Mode' field, given as a #MbimAtdsRatMode.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'RAT' set command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_rat_set_new (
    MbimAtdsRatMode mode,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS RAT */

/**
 * mbim_message_atds_rat_response_parse:
 * @message: the #MbimMessage.
 * @out_mode: (out)(optional)(transfer none): return location for a #MbimAtdsRatMode, or %NULL if the 'Mode' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'RAT' response command in the 'ATDS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean mbim_message_atds_rat_response_parse (
    const MbimMessage *message,
    MbimAtdsRatMode *out_mode,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message ATDS Register State */

/**
 * mbim_message_atds_register_state_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Register State' query command in the 'ATDS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.16
 */
MbimMessage *mbim_message_atds_register_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message ATDS Register State */

/**
 * mbim_message_atds_register_state_response_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #MbimNwError, or %NULL if the 'NwError' field is not needed.
 * @out_register_state: (out)(optional)(transfer none): return location for a #MbimRegisterState, or %NULL if the 'RegisterState' field is not needed.
 * @out_register_mode: (out)(optional)(transfer none): return location for a #MbimRegisterMode, or %NULL if the 'RegisterMode' field is not needed.
 * @out_available_data_classes: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'AvailableDataClasses' field is not needed.
 * @out_current_cellular_class: (out)(optional)(transfer none): return location for a #MbimCellularClass, or %NULL if the 'CurrentCellularClass' field is not needed.
 * @out_provider_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'ProviderId' field is not needed. Free the returned value with g_free().
 * @out_provider_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'ProviderName' field is not needed. Free the returned value with g_free().
 * @out_roaming_text: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'RoamingText' field is not needed. Free the returned value with g_free().
 * @out_registration_flag: (out)(optional)(transfer none): return location for a #MbimRegistrationFlag, or %NULL if the 'RegistrationFlag' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Register State' response command in the 'ATDS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean mbim_message_atds_register_state_response_parse (
    const MbimMessage *message,
    MbimNwError *out_nw_error,
    MbimRegisterState *out_register_state,
    MbimRegisterMode *out_register_mode,
    MbimDataClass *out_available_data_classes,
    MbimCellularClass *out_current_cellular_class,
    gchar **out_provider_id,
    gchar **out_provider_name,
    gchar **out_roaming_text,
    MbimRegistrationFlag *out_registration_flag,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_atds_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_ATDS__ */
