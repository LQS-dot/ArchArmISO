
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

#ifndef __LIBMBIM_GLIB_MBIM_SMS__
#define __LIBMBIM_GLIB_MBIM_SMS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-sms
 * @title: Sms service
 * @short_description: Support for the Sms service.
 *
 * This section implements support for requests, responses and notifications in the
 * Sms service.
 */

/*****************************************************************************/
/* Struct: MbimSmsPduReadRecord */

/**
 * MbimSmsPduReadRecord:
 * @message_index: a #guint32.
 * @message_status: a #MbimSmsStatus given as a #guint32.
 * @pdu_data_size: size of the pdu_data array.
 * @pdu_data: an array of #guint8 values.
 *
 * A MbimSmsPduReadRecord element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 message_index;
    guint32 message_status;
    guint32 pdu_data_size;
    guint8 *pdu_data;
} MbimSmsPduReadRecord;

/**
 * MbimSmsPduReadRecordArray:
 *
 * A NULL-terminated array of MbimSmsPduReadRecord elements.
 *
 * Since: 1.24
 */
typedef MbimSmsPduReadRecord *MbimSmsPduReadRecordArray;
/**
 * mbim_sms_pdu_read_record_array_free:
 * @array: a #NULL terminated array of #MbimSmsPduReadRecord structs.
 *
 * Frees the memory allocated for the array of #MbimSmsPduReadRecord structs.
 *
 * Since: 1.4
 */
void mbim_sms_pdu_read_record_array_free (MbimSmsPduReadRecordArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSmsPduReadRecordArray, mbim_sms_pdu_read_record_array_free)

/*****************************************************************************/
/* Struct: MbimSmsCdmaReadRecord */

/**
 * MbimSmsCdmaReadRecord:
 * @message_index: a #guint32.
 * @message_status: a #MbimSmsStatus given as a #guint32.
 * @address: a string.
 * @timestamp: a string.
 * @encoding: a #MbimSmsCdmaEncoding given as a #guint32.
 * @language: a #MbimSmsCdmaLang given as a #guint32.
 * @encoded_message_size: size of the encoded_message array.
 * @encoded_message: an array of #guint8 values.
 * @encoded_message_size_in_characters: a #guint32.
 *
 * A MbimSmsCdmaReadRecord element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 message_index;
    guint32 message_status;
    gchar *address;
    gchar *timestamp;
    guint32 encoding;
    guint32 language;
    guint32 encoded_message_size;
    guint8 *encoded_message;
    guint32 encoded_message_size_in_characters;
} MbimSmsCdmaReadRecord;

/**
 * MbimSmsCdmaReadRecordArray:
 *
 * A NULL-terminated array of MbimSmsCdmaReadRecord elements.
 *
 * Since: 1.24
 */
typedef MbimSmsCdmaReadRecord *MbimSmsCdmaReadRecordArray;
/**
 * mbim_sms_cdma_read_record_array_free:
 * @array: a #NULL terminated array of #MbimSmsCdmaReadRecord structs.
 *
 * Frees the memory allocated for the array of #MbimSmsCdmaReadRecord structs.
 *
 * Since: 1.4
 */
void mbim_sms_cdma_read_record_array_free (MbimSmsCdmaReadRecordArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSmsCdmaReadRecordArray, mbim_sms_cdma_read_record_array_free)

/*****************************************************************************/
/* Struct: MbimSmsPduSendRecord */

/**
 * MbimSmsPduSendRecord:
 * @pdu_data_size: size of the pdu_data array.
 * @pdu_data: an array of #guint8 values.
 *
 * A MbimSmsPduSendRecord element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 pdu_data_size;
    guint8 *pdu_data;
} MbimSmsPduSendRecord;

/**
 * mbim_sms_pdu_send_record_free:
 * @var: a #MbimSmsPduSendRecord.
 *
 * Frees the memory allocated for the #MbimSmsPduSendRecord.
 *
 * Since: 1.4
 */
void mbim_sms_pdu_send_record_free (MbimSmsPduSendRecord *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSmsPduSendRecord, mbim_sms_pdu_send_record_free)

/*****************************************************************************/
/* Struct: MbimSmsCdmaSendRecord */

/**
 * MbimSmsCdmaSendRecord:
 * @encoding: a #MbimSmsCdmaEncoding given as a #guint32.
 * @language: a #MbimSmsCdmaLang given as a #guint32.
 * @address: a string.
 * @encoded_message_size: size of the encoded_message array.
 * @encoded_message: an array of #guint8 values.
 * @encoded_message_size_in_characters: a #guint32.
 *
 * A MbimSmsCdmaSendRecord element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 encoding;
    guint32 language;
    gchar *address;
    guint32 encoded_message_size;
    guint8 *encoded_message;
    guint32 encoded_message_size_in_characters;
} MbimSmsCdmaSendRecord;

/**
 * mbim_sms_cdma_send_record_free:
 * @var: a #MbimSmsCdmaSendRecord.
 *
 * Frees the memory allocated for the #MbimSmsCdmaSendRecord.
 *
 * Since: 1.4
 */
void mbim_sms_cdma_send_record_free (MbimSmsCdmaSendRecord *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSmsCdmaSendRecord, mbim_sms_cdma_send_record_free)

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Configuration */

/**
 * mbim_message_sms_configuration_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Configuration' query command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Configuration */

/**
 * mbim_message_sms_configuration_set_new:
 * @format: (in): the 'Format' field, given as a #MbimSmsFormat.
 * @sc_address: (in): the 'ScAddress' field, given as a string.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Configuration' set command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_configuration_set_new (
    MbimSmsFormat format,
    const gchar *sc_address,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Configuration */

/**
 * mbim_message_sms_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_sms_storage_state: (out)(optional)(transfer none): return location for a #MbimSmsStorageState, or %NULL if the 'SmsStorageState' field is not needed.
 * @out_format: (out)(optional)(transfer none): return location for a #MbimSmsFormat, or %NULL if the 'Format' field is not needed.
 * @out_max_messages: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxMessages' field is not needed.
 * @out_cdma_short_message_size: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'CdmaShortMessageSize' field is not needed.
 * @out_sc_address: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'ScAddress' field is not needed. Free the returned value with g_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Configuration' response command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_configuration_response_parse (
    const MbimMessage *message,
    MbimSmsStorageState *out_sms_storage_state,
    MbimSmsFormat *out_format,
    guint32 *out_max_messages,
    guint32 *out_cdma_short_message_size,
    gchar **out_sc_address,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Read */

/**
 * mbim_message_sms_read_query_new:
 * @format: (in): the 'Format' field, given as a #MbimSmsFormat.
 * @flag: (in): the 'Flag' field, given as a #MbimSmsFlag.
 * @message_index: (in): the 'MessageIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Read' query command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_read_query_new (
    MbimSmsFormat format,
    MbimSmsFlag flag,
    guint32 message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Read */

/**
 * mbim_message_sms_read_response_parse:
 * @message: the #MbimMessage.
 * @out_format: (out)(optional)(transfer none): return location for a #MbimSmsFormat, or %NULL if the 'Format' field is not needed.
 * @out_messages_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MessagesCount' field is not needed.
 * @out_pdu_messages: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSmsPduReadRecord): return location for a newly allocated array of #MbimSmsPduReadRecord items, or %NULL if the 'PduMessages' field is not needed. Free the returned value with mbim_sms_pdu_read_record_array_free().
 * @out_cdma_messages: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSmsCdmaReadRecord): return location for a newly allocated array of #MbimSmsCdmaReadRecord items, or %NULL if the 'CdmaMessages' field is not needed. Free the returned value with mbim_sms_cdma_read_record_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Read' response command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_read_response_parse (
    const MbimMessage *message,
    MbimSmsFormat *out_format,
    guint32 *out_messages_count,
    MbimSmsPduReadRecordArray **out_pdu_messages,
    MbimSmsCdmaReadRecordArray **out_cdma_messages,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message SMS Read */

/**
 * mbim_message_sms_read_notification_parse:
 * @message: the #MbimMessage.
 * @out_format: (out)(optional)(transfer none): return location for a #MbimSmsFormat, or %NULL if the 'Format' field is not needed.
 * @out_messages_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MessagesCount' field is not needed.
 * @out_pdu_messages: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSmsPduReadRecord): return location for a newly allocated array of #MbimSmsPduReadRecord items, or %NULL if the 'PduMessages' field is not needed. Free the returned value with mbim_sms_pdu_read_record_array_free().
 * @out_cdma_messages: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSmsCdmaReadRecord): return location for a newly allocated array of #MbimSmsCdmaReadRecord items, or %NULL if the 'CdmaMessages' field is not needed. Free the returned value with mbim_sms_cdma_read_record_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Read' notification command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_read_notification_parse (
    const MbimMessage *message,
    MbimSmsFormat *out_format,
    guint32 *out_messages_count,
    MbimSmsPduReadRecordArray **out_pdu_messages,
    MbimSmsCdmaReadRecordArray **out_cdma_messages,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Send */

/**
 * mbim_message_sms_send_set_new:
 * @format: (in): the 'Format' field, given as a #MbimSmsFormat.
 * @pdu_message: (in): the 'PduMessage' field, given as a #MbimSmsPduSendRecord.
 * @cdma_message: (in): the 'CdmaMessage' field, given as a #MbimSmsCdmaSendRecord.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Send' set command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_send_set_new (
    MbimSmsFormat format,
    const MbimSmsPduSendRecord *pdu_message,
    const MbimSmsCdmaSendRecord *cdma_message,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Send */

/**
 * mbim_message_sms_send_response_parse:
 * @message: the #MbimMessage.
 * @out_message_reference: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MessageReference' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Send' response command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_send_response_parse (
    const MbimMessage *message,
    guint32 *out_message_reference,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message SMS Delete */

/**
 * mbim_message_sms_delete_set_new:
 * @flag: (in): the 'Flag' field, given as a #MbimSmsFlag.
 * @message_index: (in): the 'MessageIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Delete' set command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_delete_set_new (
    MbimSmsFlag flag,
    guint32 message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Delete */

/**
 * mbim_message_sms_delete_response_parse:
 * @message: the #MbimMessage.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Delete' response command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_delete_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message SMS Message Store Status */

/**
 * mbim_message_sms_message_store_status_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Message Store Status' query command in the 'SMS' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_sms_message_store_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message SMS Message Store Status */

/**
 * mbim_message_sms_message_store_status_response_parse:
 * @message: the #MbimMessage.
 * @out_flag: (out)(optional)(transfer none): return location for a #MbimSmsStatusFlag, or %NULL if the 'Flag' field is not needed.
 * @out_message_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MessageIndex' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Message Store Status' response command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_message_store_status_response_parse (
    const MbimMessage *message,
    MbimSmsStatusFlag *out_flag,
    guint32 *out_message_index,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message SMS Message Store Status */

/**
 * mbim_message_sms_message_store_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_flag: (out)(optional)(transfer none): return location for a #MbimSmsStatusFlag, or %NULL if the 'Flag' field is not needed.
 * @out_message_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MessageIndex' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Message Store Status' notification command in the 'SMS' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_sms_message_store_status_notification_parse (
    const MbimMessage *message,
    MbimSmsStatusFlag *out_flag,
    guint32 *out_message_index,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_sms_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_SMS__ */
