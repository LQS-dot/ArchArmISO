
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

#ifndef __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__
#define __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-uicc-low-level-access
 * @title: Ms Uicc Low Level Access service
 * @short_description: Support for the Ms Uicc Low Level Access service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Uicc Low Level Access service.
 */

/*****************************************************************************/
/* Struct: MbimTerminalCapabilityInfo */

/**
 * MbimTerminalCapabilityInfo:
 * @terminal_capability_data_size: size of the terminal_capability_data array.
 * @terminal_capability_data: an array of #guint8 values.
 *
 * A MbimTerminalCapabilityInfo element.
 *
 * Since: 1.26
 */
typedef struct {
    guint32 terminal_capability_data_size;
    guint8 *terminal_capability_data;
} MbimTerminalCapabilityInfo;

/**
 * MbimTerminalCapabilityInfoArray:
 *
 * A NULL-terminated array of MbimTerminalCapabilityInfo elements.
 *
 * Since: 1.26
 */
typedef MbimTerminalCapabilityInfo *MbimTerminalCapabilityInfoArray;
/**
 * mbim_terminal_capability_info_array_free:
 * @array: a #NULL terminated array of #MbimTerminalCapabilityInfo structs.
 *
 * Frees the memory allocated for the array of #MbimTerminalCapabilityInfo structs.
 *
 * Since: 1.26
 */
void mbim_terminal_capability_info_array_free (MbimTerminalCapabilityInfoArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimTerminalCapabilityInfoArray, mbim_terminal_capability_info_array_free)

/*****************************************************************************/
/* Struct: MbimUiccApplication */

/**
 * MbimUiccApplication:
 * @application_type: a #MbimUiccApplicationType given as a #guint32.
 * @application_id_size: size of the application_id array.
 * @application_id: an array of #guint8 values.
 * @application_name: a string.
 * @pin_key_reference_count: a #guint32.
 * @pin_key_references_size: size of the pin_key_references array.
 * @pin_key_references: an array of #guint8 values.
 *
 * A MbimUiccApplication element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 application_type;
    guint32 application_id_size;
    guint8 *application_id;
    gchar *application_name;
    guint32 pin_key_reference_count;
    guint32 pin_key_references_size;
    guint8 *pin_key_references;
} MbimUiccApplication;

/**
 * MbimUiccApplicationArray:
 *
 * A NULL-terminated array of MbimUiccApplication elements.
 *
 * Since: 1.28
 */
typedef MbimUiccApplication *MbimUiccApplicationArray;
/**
 * mbim_uicc_application_array_free:
 * @array: a #NULL terminated array of #MbimUiccApplication structs.
 *
 * Frees the memory allocated for the array of #MbimUiccApplication structs.
 *
 * Since: 1.28
 */
void mbim_uicc_application_array_free (MbimUiccApplicationArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimUiccApplicationArray, mbim_uicc_application_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access ATR */

/**
 * mbim_message_ms_uicc_low_level_access_atr_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'ATR' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_atr_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access ATR */

/**
 * mbim_message_ms_uicc_low_level_access_atr_response_parse:
 * @message: the #MbimMessage.
 * @out_atr_size: (out)(optional): return location for the size of the atr array.
 * @out_atr: (out)(optional)(transfer none)(element-type guint8)(array length=out_atr_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'ATR' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_atr_response_parse (
    const MbimMessage *message,
    guint32 *out_atr_size,
    const guint8 **out_atr,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Open Channel */

/**
 * mbim_message_ms_uicc_low_level_access_open_channel_set_new:
 * @app_id_size: (in): size of the app_id array.
 * @app_id: (in)(element-type guint8)(array length=app_id_size): the 'AppId' field, given as an array of #guint8 values.
 * @select_p2_arg: (in): the 'SelectP2Arg' field, given as a #guint32.
 * @channel_group: (in): the 'ChannelGroup' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Open Channel' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_open_channel_set_new (
    const guint32 app_id_size,
    const guint8 *app_id,
    guint32 select_p2_arg,
    guint32 channel_group,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Open Channel */

/**
 * mbim_message_ms_uicc_low_level_access_open_channel_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @out_channel: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Channel' field is not needed.
 * @out_response_size: (out)(optional): return location for the size of the response array.
 * @out_response: (out)(optional)(transfer none)(element-type guint8)(array length=out_response_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Open Channel' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_open_channel_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    guint32 *out_channel,
    guint32 *out_response_size,
    const guint8 **out_response,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Close Channel */

/**
 * mbim_message_ms_uicc_low_level_access_close_channel_set_new:
 * @channel: (in): the 'Channel' field, given as a #guint32.
 * @channel_group: (in): the 'ChannelGroup' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Close Channel' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_close_channel_set_new (
    guint32 channel,
    guint32 channel_group,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Close Channel */

/**
 * mbim_message_ms_uicc_low_level_access_close_channel_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Close Channel' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_close_channel_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access APDU */

/**
 * mbim_message_ms_uicc_low_level_access_apdu_set_new:
 * @channel: (in): the 'Channel' field, given as a #guint32.
 * @secure_messaging: (in): the 'SecureMessaging' field, given as a #MbimUiccSecureMessaging.
 * @class_byte_type: (in): the 'ClassByteType' field, given as a #MbimUiccClassByteType.
 * @command_size: (in): size of the command array.
 * @command: (in)(element-type guint8)(array length=command_size): the 'Command' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'APDU' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_apdu_set_new (
    guint32 channel,
    MbimUiccSecureMessaging secure_messaging,
    MbimUiccClassByteType class_byte_type,
    const guint32 command_size,
    const guint8 *command,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access APDU */

/**
 * mbim_message_ms_uicc_low_level_access_apdu_response_parse:
 * @message: the #MbimMessage.
 * @out_status: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Status' field is not needed.
 * @out_response_size: (out)(optional): return location for the size of the response array.
 * @out_response: (out)(optional)(transfer none)(element-type guint8)(array length=out_response_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'APDU' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_apdu_response_parse (
    const MbimMessage *message,
    guint32 *out_status,
    guint32 *out_response_size,
    const guint8 **out_response,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Terminal Capability' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_terminal_capability_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_set_new:
 * @terminal_capability_count: (in): the 'TerminalCapabilityCount' field, given as a #guint32.
 * @terminal_capability: (in)(array zero-terminated=1)(element-type MbimTerminalCapabilityInfo): the 'TerminalCapability' field, given as an array of #MbimTerminalCapabilityInfo items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Terminal Capability' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_terminal_capability_set_new (
    guint32 terminal_capability_count,
    const MbimTerminalCapabilityInfo *const *terminal_capability,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Terminal Capability */

/**
 * mbim_message_ms_uicc_low_level_access_terminal_capability_response_parse:
 * @message: the #MbimMessage.
 * @out_terminal_capability_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TerminalCapabilityCount' field is not needed.
 * @out_terminal_capability: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimTerminalCapabilityInfo): return location for a newly allocated array of #MbimTerminalCapabilityInfo items, or %NULL if the 'TerminalCapability' field is not needed. Free the returned value with mbim_terminal_capability_info_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Terminal Capability' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_terminal_capability_response_parse (
    const MbimMessage *message,
    guint32 *out_terminal_capability_count,
    MbimTerminalCapabilityInfoArray **out_terminal_capability,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Reset' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_reset_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_set_new:
 * @pass_through_action: (in): the 'PassThroughAction' field, given as a #MbimUiccPassThroughAction.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Reset' set command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_reset_set_new (
    MbimUiccPassThroughAction pass_through_action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Reset */

/**
 * mbim_message_ms_uicc_low_level_access_reset_response_parse:
 * @message: the #MbimMessage.
 * @out_pass_through_status: (out)(optional)(transfer none): return location for a #MbimUiccPassThroughStatus, or %NULL if the 'PassThroughStatus' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Reset' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_uicc_low_level_access_reset_response_parse (
    const MbimMessage *message,
    MbimUiccPassThroughStatus *out_pass_through_status,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Application List */

/**
 * mbim_message_ms_uicc_low_level_access_application_list_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Application List' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_application_list_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Application List */

/**
 * mbim_message_ms_uicc_low_level_access_application_list_response_parse:
 * @message: the #MbimMessage.
 * @out_version: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Version' field is not needed.
 * @out_application_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ApplicationCount' field is not needed.
 * @out_active_application_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ActiveApplicationIndex' field is not needed.
 * @out_application_list_size_bytes: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ApplicationListSizeBytes' field is not needed.
 * @out_applications: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimUiccApplication): return location for a newly allocated array of #MbimUiccApplication items, or %NULL if the 'Applications' field is not needed. Free the returned value with mbim_uicc_application_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Application List' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_uicc_low_level_access_application_list_response_parse (
    const MbimMessage *message,
    guint32 *out_version,
    guint32 *out_application_count,
    guint32 *out_active_application_index,
    guint32 *out_application_list_size_bytes,
    MbimUiccApplicationArray **out_applications,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access File Status */

/**
 * mbim_message_ms_uicc_low_level_access_file_status_query_new:
 * @version: (in): the 'Version' field, given as a #guint32.
 * @application_id_size: (in): size of the application_id array.
 * @application_id: (in)(element-type guint8)(array length=application_id_size): the 'ApplicationId' field, given as an array of #guint8 values.
 * @file_path_size: (in): size of the file_path array.
 * @file_path: (in)(element-type guint8)(array length=file_path_size): the 'FilePath' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'File Status' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_file_status_query_new (
    guint32 version,
    const guint32 application_id_size,
    const guint8 *application_id,
    const guint32 file_path_size,
    const guint8 *file_path,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access File Status */

/**
 * mbim_message_ms_uicc_low_level_access_file_status_response_parse:
 * @message: the #MbimMessage.
 * @out_version: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Version' field is not needed.
 * @out_status_word1: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord1' field is not needed.
 * @out_status_word2: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord2' field is not needed.
 * @out_file_accessibility: (out)(optional)(transfer none): return location for a #MbimUiccFileAccessibility, or %NULL if the 'FileAccessibility' field is not needed.
 * @out_file_type: (out)(optional)(transfer none): return location for a #MbimUiccFileType, or %NULL if the 'FileType' field is not needed.
 * @out_file_structure: (out)(optional)(transfer none): return location for a #MbimUiccFileStructure, or %NULL if the 'FileStructure' field is not needed.
 * @out_file_item_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'FileItemCount' field is not needed.
 * @out_file_item_size: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'FileItemSize' field is not needed.
 * @out_access_condition_read: (out)(optional)(transfer none): return location for a #MbimPinType, or %NULL if the 'AccessConditionRead' field is not needed.
 * @out_access_condition_update: (out)(optional)(transfer none): return location for a #MbimPinType, or %NULL if the 'AccessConditionUpdate' field is not needed.
 * @out_access_condition_activate: (out)(optional)(transfer none): return location for a #MbimPinType, or %NULL if the 'AccessConditionActivate' field is not needed.
 * @out_access_condition_deactivate: (out)(optional)(transfer none): return location for a #MbimPinType, or %NULL if the 'AccessConditionDeactivate' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'File Status' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_uicc_low_level_access_file_status_response_parse (
    const MbimMessage *message,
    guint32 *out_version,
    guint32 *out_status_word1,
    guint32 *out_status_word2,
    MbimUiccFileAccessibility *out_file_accessibility,
    MbimUiccFileType *out_file_type,
    MbimUiccFileStructure *out_file_structure,
    guint32 *out_file_item_count,
    guint32 *out_file_item_size,
    MbimPinType *out_access_condition_read,
    MbimPinType *out_access_condition_update,
    MbimPinType *out_access_condition_activate,
    MbimPinType *out_access_condition_deactivate,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Read Binary */

/**
 * mbim_message_ms_uicc_low_level_access_read_binary_query_new:
 * @version: (in): the 'Version' field, given as a #guint32.
 * @application_id_size: (in): size of the application_id array.
 * @application_id: (in)(element-type guint8)(array length=application_id_size): the 'ApplicationId' field, given as an array of #guint8 values.
 * @file_path_size: (in): size of the file_path array.
 * @file_path: (in)(element-type guint8)(array length=file_path_size): the 'FilePath' field, given as an array of #guint8 values.
 * @read_offset: (in): the 'ReadOffset' field, given as a #guint32.
 * @read_size: (in): the 'ReadSize' field, given as a #guint32.
 * @local_pin: (in): the 'LocalPin' field, given as a string.
 * @data_size: (in): size of the data array.
 * @data: (in)(element-type guint8)(array length=data_size): the 'Data' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Read Binary' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_read_binary_query_new (
    guint32 version,
    const guint32 application_id_size,
    const guint8 *application_id,
    const guint32 file_path_size,
    const guint8 *file_path,
    guint32 read_offset,
    guint32 read_size,
    const gchar *local_pin,
    const guint32 data_size,
    const guint8 *data,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Read Binary */

/**
 * mbim_message_ms_uicc_low_level_access_read_binary_response_parse:
 * @message: the #MbimMessage.
 * @out_version: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Version' field is not needed.
 * @out_status_word1: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord1' field is not needed.
 * @out_status_word2: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord2' field is not needed.
 * @out_data_size: (out)(optional): return location for the size of the data array.
 * @out_data: (out)(optional)(transfer none)(element-type guint8)(array length=out_data_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Read Binary' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_uicc_low_level_access_read_binary_response_parse (
    const MbimMessage *message,
    guint32 *out_version,
    guint32 *out_status_word1,
    guint32 *out_status_word2,
    guint32 *out_data_size,
    const guint8 **out_data,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message MS UICC Low Level Access Read Record */

/**
 * mbim_message_ms_uicc_low_level_access_read_record_query_new:
 * @version: (in): the 'Version' field, given as a #guint32.
 * @application_id_size: (in): size of the application_id array.
 * @application_id: (in)(element-type guint8)(array length=application_id_size): the 'ApplicationId' field, given as an array of #guint8 values.
 * @file_path_size: (in): size of the file_path array.
 * @file_path: (in)(element-type guint8)(array length=file_path_size): the 'FilePath' field, given as an array of #guint8 values.
 * @record_number: (in): the 'RecordNumber' field, given as a #guint32.
 * @local_pin: (in): the 'LocalPin' field, given as a string.
 * @data_size: (in): size of the data array.
 * @data: (in)(element-type guint8)(array length=data_size): the 'Data' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Read Record' query command in the 'MS UICC Low Level Access' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_uicc_low_level_access_read_record_query_new (
    guint32 version,
    const guint32 application_id_size,
    const guint8 *application_id,
    const guint32 file_path_size,
    const guint8 *file_path,
    guint32 record_number,
    const gchar *local_pin,
    const guint32 data_size,
    const guint8 *data,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message MS UICC Low Level Access Read Record */

/**
 * mbim_message_ms_uicc_low_level_access_read_record_response_parse:
 * @message: the #MbimMessage.
 * @out_version: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Version' field is not needed.
 * @out_status_word1: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord1' field is not needed.
 * @out_status_word2: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'StatusWord2' field is not needed.
 * @out_data_size: (out)(optional): return location for the size of the data array.
 * @out_data: (out)(optional)(transfer none)(element-type guint8)(array length=out_data_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Read Record' response command in the 'MS UICC Low Level Access' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_uicc_low_level_access_read_record_response_parse (
    const MbimMessage *message,
    guint32 *out_version,
    guint32 *out_status_word1,
    guint32 *out_status_word2,
    guint32 *out_data_size,
    const guint8 **out_data,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_uicc_low_level_access_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_UICC_LOW_LEVEL_ACCESS__ */
