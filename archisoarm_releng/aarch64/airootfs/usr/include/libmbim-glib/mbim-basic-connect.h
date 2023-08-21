
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

#ifndef __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__
#define __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__

G_BEGIN_DECLS

/**
 * SECTION:mbim-basic-connect
 * @title: Basic Connect service
 * @short_description: Support for the Basic Connect service.
 *
 * This section implements support for requests, responses and notifications in the
 * Basic Connect service.
 */

/**
 * SECTION:mbim-ms-basic-connect-v2
 * @title: Ms Basic Connect V2 service
 * @short_description: Support for the Ms Basic Connect V2 service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Basic Connect V2 service.
 */

/**
 * SECTION:mbim-ms-basic-connect-v3
 * @title: Ms Basic Connect V3 service
 * @short_description: Support for the Ms Basic Connect V3 service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Basic Connect V3 service.
 */

/*****************************************************************************/
/* Struct: MbimPinDesc */

/**
 * MbimPinDesc:
 * @pin_mode: a #MbimPinMode given as a #guint32.
 * @pin_format: a #MbimPinFormat given as a #guint32.
 * @pin_length_min: a #guint32.
 * @pin_length_max: a #guint32.
 *
 * A MbimPinDesc element.
 *
 * Since: 1.0
 */
typedef struct {
    guint32 pin_mode;
    guint32 pin_format;
    guint32 pin_length_min;
    guint32 pin_length_max;
} MbimPinDesc;

/**
 * mbim_pin_desc_free:
 * @var: a #MbimPinDesc.
 *
 * Frees the memory allocated for the #MbimPinDesc.
 *
 * Since: 1.0
 */
void mbim_pin_desc_free (MbimPinDesc *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPinDesc, mbim_pin_desc_free)

/*****************************************************************************/
/* Struct: MbimProvider */

/**
 * MbimProvider:
 * @provider_id: a string.
 * @provider_state: a #MbimProviderState given as a #guint32.
 * @provider_name: a string.
 * @cellular_class: a #MbimCellularClass given as a #guint32.
 * @rssi: a #guint32.
 * @error_rate: a #guint32.
 *
 * A MbimProvider element.
 *
 * Since: 1.2
 */
typedef struct {
    gchar *provider_id;
    guint32 provider_state;
    gchar *provider_name;
    guint32 cellular_class;
    guint32 rssi;
    guint32 error_rate;
} MbimProvider;

/**
 * mbim_provider_free:
 * @var: a #MbimProvider.
 *
 * Frees the memory allocated for the #MbimProvider.
 *
 * Since: 1.2
 */
void mbim_provider_free (MbimProvider *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimProvider, mbim_provider_free)

/**
 * MbimProviderArray:
 *
 * A NULL-terminated array of MbimProvider elements.
 *
 * Since: 1.24
 */
typedef MbimProvider *MbimProviderArray;
/**
 * mbim_provider_array_free:
 * @array: a #NULL terminated array of #MbimProvider structs.
 *
 * Frees the memory allocated for the array of #MbimProvider structs.
 *
 * Since: 1.2
 */
void mbim_provider_array_free (MbimProviderArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimProviderArray, mbim_provider_array_free)

/*****************************************************************************/
/* Struct: MbimProvisionedContextElement */

/**
 * MbimProvisionedContextElement:
 * @context_id: a #guint32.
 * @context_type: a #MbimUuid.
 * @access_string: a string.
 * @user_name: a string.
 * @password: a string.
 * @compression: a #MbimCompression given as a #guint32.
 * @auth_protocol: a #MbimAuthProtocol given as a #guint32.
 *
 * A MbimProvisionedContextElement element.
 *
 * Since: 1.0
 */
typedef struct {
    guint32 context_id;
    MbimUuid context_type;
    gchar *access_string;
    gchar *user_name;
    gchar *password;
    guint32 compression;
    guint32 auth_protocol;
} MbimProvisionedContextElement;

/**
 * MbimProvisionedContextElementArray:
 *
 * A NULL-terminated array of MbimProvisionedContextElement elements.
 *
 * Since: 1.24
 */
typedef MbimProvisionedContextElement *MbimProvisionedContextElementArray;
/**
 * mbim_provisioned_context_element_array_free:
 * @array: a #NULL terminated array of #MbimProvisionedContextElement structs.
 *
 * Frees the memory allocated for the array of #MbimProvisionedContextElement structs.
 *
 * Since: 1.0
 */
void mbim_provisioned_context_element_array_free (MbimProvisionedContextElementArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimProvisionedContextElementArray, mbim_provisioned_context_element_array_free)

/*****************************************************************************/
/* Struct: MbimIPv4Element */

/**
 * MbimIPv4Element:
 * @on_link_prefix_length: a #guint32.
 * @ipv4_address: a #MbimIPv4.
 *
 * A MbimIPv4Element element.
 *
 * Since: 1.0
 */
typedef struct {
    guint32 on_link_prefix_length;
    MbimIPv4 ipv4_address;
} MbimIPv4Element;

/**
 * MbimIPv4ElementArray:
 *
 * A NULL-terminated array of MbimIPv4Element elements.
 *
 * Since: 1.24
 */
typedef MbimIPv4Element *MbimIPv4ElementArray;
/**
 * mbim_ipv4_element_array_free:
 * @array: a #NULL terminated array of #MbimIPv4Element structs.
 *
 * Frees the memory allocated for the array of #MbimIPv4Element structs.
 *
 * Since: 1.0
 */
void mbim_ipv4_element_array_free (MbimIPv4ElementArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimIPv4ElementArray, mbim_ipv4_element_array_free)

/*****************************************************************************/
/* Struct: MbimIPv6Element */

/**
 * MbimIPv6Element:
 * @on_link_prefix_length: a #guint32.
 * @ipv6_address: a #MbimIPv6
 *
 * A MbimIPv6Element element.
 *
 * Since: 1.0
 */
typedef struct {
    guint32 on_link_prefix_length;
    MbimIPv6 ipv6_address;
} MbimIPv6Element;

/**
 * MbimIPv6ElementArray:
 *
 * A NULL-terminated array of MbimIPv6Element elements.
 *
 * Since: 1.24
 */
typedef MbimIPv6Element *MbimIPv6ElementArray;
/**
 * mbim_ipv6_element_array_free:
 * @array: a #NULL terminated array of #MbimIPv6Element structs.
 *
 * Frees the memory allocated for the array of #MbimIPv6Element structs.
 *
 * Since: 1.0
 */
void mbim_ipv6_element_array_free (MbimIPv6ElementArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimIPv6ElementArray, mbim_ipv6_element_array_free)

/*****************************************************************************/
/* Struct: MbimDeviceServiceElement */

/**
 * MbimDeviceServiceElement:
 * @device_service_id: a #MbimUuid.
 * @dss_payload: a #guint32.
 * @max_dss_instances: a #guint32.
 * @cids_count: a #guint32.
 * @cids: an array of #guint32 values.
 *
 * A MbimDeviceServiceElement element.
 *
 * Since: 1.0
 */
typedef struct {
    MbimUuid device_service_id;
    guint32 dss_payload;
    guint32 max_dss_instances;
    guint32 cids_count;
    guint32 *cids;
} MbimDeviceServiceElement;

/**
 * MbimDeviceServiceElementArray:
 *
 * A NULL-terminated array of MbimDeviceServiceElement elements.
 *
 * Since: 1.24
 */
typedef MbimDeviceServiceElement *MbimDeviceServiceElementArray;
/**
 * mbim_device_service_element_array_free:
 * @array: a #NULL terminated array of #MbimDeviceServiceElement structs.
 *
 * Frees the memory allocated for the array of #MbimDeviceServiceElement structs.
 *
 * Since: 1.0
 */
void mbim_device_service_element_array_free (MbimDeviceServiceElementArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimDeviceServiceElementArray, mbim_device_service_element_array_free)

/*****************************************************************************/
/* Struct: MbimEventEntry */

/**
 * MbimEventEntry:
 * @device_service_id: a #MbimUuid.
 * @cids_count: a #guint32.
 * @cids: an array of #guint32 values.
 *
 * A MbimEventEntry element.
 *
 * Since: 1.4
 */
typedef struct {
    MbimUuid device_service_id;
    guint32 cids_count;
    guint32 *cids;
} MbimEventEntry;

/**
 * MbimEventEntryArray:
 *
 * A NULL-terminated array of MbimEventEntry elements.
 *
 * Since: 1.24
 */
typedef MbimEventEntry *MbimEventEntryArray;
/**
 * mbim_event_entry_array_free:
 * @array: a #NULL terminated array of #MbimEventEntry structs.
 *
 * Frees the memory allocated for the array of #MbimEventEntry structs.
 *
 * Since: 1.4
 */
void mbim_event_entry_array_free (MbimEventEntryArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimEventEntryArray, mbim_event_entry_array_free)

/*****************************************************************************/
/* Struct: MbimPacketFilter */

/**
 * MbimPacketFilter:
 * @filter_size: a #guint32.
 * @packet_filter: an array of #guint8 values.
 * @packet_mask: an array of #guint8 values.
 *
 * A MbimPacketFilter element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 filter_size;
    guint8 *packet_filter;
    guint8 *packet_mask;
} MbimPacketFilter;

/**
 * MbimPacketFilterArray:
 *
 * A NULL-terminated array of MbimPacketFilter elements.
 *
 * Since: 1.24
 */
typedef MbimPacketFilter *MbimPacketFilterArray;
/**
 * mbim_packet_filter_array_free:
 * @array: a #NULL terminated array of #MbimPacketFilter structs.
 *
 * Frees the memory allocated for the array of #MbimPacketFilter structs.
 *
 * Since: 1.4
 */
void mbim_packet_filter_array_free (MbimPacketFilterArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPacketFilterArray, mbim_packet_filter_array_free)

/*****************************************************************************/
/* Struct: MbimRsrpSnrInfo */

/**
 * MbimRsrpSnrInfo:
 * @rsrp: a #guint32.
 * @snr: a #guint32.
 * @rsrp_threshold: a #guint32.
 * @snr_threshold: a #guint32.
 * @system_type: a #MbimDataClass given as a #guint32.
 *
 * A MbimRsrpSnrInfo element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 rsrp;
    guint32 snr;
    guint32 rsrp_threshold;
    guint32 snr_threshold;
    guint32 system_type;
} MbimRsrpSnrInfo;

/**
 * MbimRsrpSnrInfoArray:
 *
 * A NULL-terminated array of MbimRsrpSnrInfo elements.
 *
 * Since: 1.28
 */
typedef MbimRsrpSnrInfo *MbimRsrpSnrInfoArray;
/**
 * mbim_rsrp_snr_info_array_free:
 * @array: a #NULL terminated array of #MbimRsrpSnrInfo structs.
 *
 * Frees the memory allocated for the array of #MbimRsrpSnrInfo structs.
 *
 * Since: 1.28
 */
void mbim_rsrp_snr_info_array_free (MbimRsrpSnrInfoArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimRsrpSnrInfoArray, mbim_rsrp_snr_info_array_free)

/*****************************************************************************/
/* Struct: MbimTai */

/**
 * MbimTai:
 * @plmn_mcc: a #guint16.
 * @plmn_mnc: a #guint16.
 * @tac: a #guint32.
 *
 * A MbimTai element.
 *
 * Since: 1.28
 */
typedef struct {
    guint16 plmn_mcc;
    guint16 plmn_mnc;
    guint32 tac;
} MbimTai;

/**
 * mbim_tai_free:
 * @var: a #MbimTai.
 *
 * Frees the memory allocated for the #MbimTai.
 *
 * Since: 1.28
 */
void mbim_tai_free (MbimTai *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimTai, mbim_tai_free)

/*****************************************************************************/
/* Struct: MbimPacketFilterV3 */

/**
 * MbimPacketFilterV3:
 * @filter_size: a #guint32.
 * @packet_filter: an array of #guint8 values.
 * @packet_mask: an array of #guint8 values.
 * @filter_id: a #guint32.
 *
 * A MbimPacketFilterV3 element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 filter_size;
    guint8 *packet_filter;
    guint8 *packet_mask;
    guint32 filter_id;
} MbimPacketFilterV3;

/**
 * MbimPacketFilterV3Array:
 *
 * A NULL-terminated array of MbimPacketFilterV3 elements.
 *
 * Since: 1.28
 */
typedef MbimPacketFilterV3 *MbimPacketFilterV3Array;
/**
 * mbim_packet_filter_v3_array_free:
 * @array: a #NULL terminated array of #MbimPacketFilterV3 structs.
 *
 * Frees the memory allocated for the array of #MbimPacketFilterV3 structs.
 *
 * Since: 1.28
 */
void mbim_packet_filter_v3_array_free (MbimPacketFilterV3Array *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPacketFilterV3Array, mbim_packet_filter_v3_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message Device Caps */

/**
 * mbim_message_device_caps_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Caps' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_device_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Caps */

/**
 * mbim_message_device_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_device_type: (out)(optional)(transfer none): return location for a #MbimDeviceType, or %NULL if the 'DeviceType' field is not needed.
 * @out_cellular_class: (out)(optional)(transfer none): return location for a #MbimCellularClass, or %NULL if the 'CellularClass' field is not needed.
 * @out_voice_class: (out)(optional)(transfer none): return location for a #MbimVoiceClass, or %NULL if the 'VoiceClass' field is not needed.
 * @out_sim_class: (out)(optional)(transfer none): return location for a #MbimSimClass, or %NULL if the 'SimClass' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'DataClass' field is not needed.
 * @out_sms_caps: (out)(optional)(transfer none): return location for a #MbimSmsCaps, or %NULL if the 'SmsCaps' field is not needed.
 * @out_control_caps: (out)(optional)(transfer none): return location for a #MbimCtrlCaps, or %NULL if the 'ControlCaps' field is not needed.
 * @out_max_sessions: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxSessions' field is not needed.
 * @out_custom_data_class: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'CustomDataClass' field is not needed. Free the returned value with g_free().
 * @out_device_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'DeviceId' field is not needed. Free the returned value with g_free().
 * @out_firmware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'FirmwareInfo' field is not needed. Free the returned value with g_free().
 * @out_hardware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'HardwareInfo' field is not needed. Free the returned value with g_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Caps' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_device_caps_response_parse (
    const MbimMessage *message,
    MbimDeviceType *out_device_type,
    MbimCellularClass *out_cellular_class,
    MbimVoiceClass *out_voice_class,
    MbimSimClass *out_sim_class,
    MbimDataClass *out_data_class,
    MbimSmsCaps *out_sms_caps,
    MbimCtrlCaps *out_control_caps,
    guint32 *out_max_sessions,
    gchar **out_custom_data_class,
    gchar **out_device_id,
    gchar **out_firmware_info,
    gchar **out_hardware_info,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Subscriber Ready Status */

/**
 * mbim_message_subscriber_ready_status_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Subscriber Ready Status' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_subscriber_ready_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Subscriber Ready Status */

/**
 * mbim_message_subscriber_ready_status_response_parse:
 * @message: the #MbimMessage.
 * @out_ready_state: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyState, or %NULL if the 'ReadyState' field is not needed.
 * @out_subscriber_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SubscriberId' field is not needed. Free the returned value with g_free().
 * @out_sim_icc_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SimIccId' field is not needed. Free the returned value with g_free().
 * @out_ready_info: (out)(optional)(transfer none): return location for a #MbimReadyInfoFlag, or %NULL if the 'ReadyInfo' field is not needed.
 * @out_telephone_numbers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TelephoneNumbersCount' field is not needed.
 * @out_telephone_numbers: (out)(optional)(transfer full)(type GStrv): return location for a newly allocated array of strings, or %NULL if the 'TelephoneNumbers' field is not needed. Free the returned value with g_strfreev().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Subscriber Ready Status' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_subscriber_ready_status_response_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *out_ready_state,
    gchar **out_subscriber_id,
    gchar **out_sim_icc_id,
    MbimReadyInfoFlag *out_ready_info,
    guint32 *out_telephone_numbers_count,
    gchar ***out_telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Subscriber Ready Status */

/**
 * mbim_message_subscriber_ready_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_ready_state: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyState, or %NULL if the 'ReadyState' field is not needed.
 * @out_subscriber_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SubscriberId' field is not needed. Free the returned value with g_free().
 * @out_sim_icc_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SimIccId' field is not needed. Free the returned value with g_free().
 * @out_ready_info: (out)(optional)(transfer none): return location for a #MbimReadyInfoFlag, or %NULL if the 'ReadyInfo' field is not needed.
 * @out_telephone_numbers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TelephoneNumbersCount' field is not needed.
 * @out_telephone_numbers: (out)(optional)(transfer full)(type GStrv): return location for a newly allocated array of strings, or %NULL if the 'TelephoneNumbers' field is not needed. Free the returned value with g_strfreev().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Subscriber Ready Status' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean mbim_message_subscriber_ready_status_notification_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *out_ready_state,
    gchar **out_subscriber_id,
    gchar **out_sim_icc_id,
    MbimReadyInfoFlag *out_ready_info,
    guint32 *out_telephone_numbers_count,
    gchar ***out_telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Radio State */

/**
 * mbim_message_radio_state_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Radio State' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_radio_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Radio State */

/**
 * mbim_message_radio_state_set_new:
 * @radio_state: (in): the 'RadioState' field, given as a #MbimRadioSwitchState.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Radio State' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_radio_state_set_new (
    MbimRadioSwitchState radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Radio State */

/**
 * mbim_message_radio_state_response_parse:
 * @message: the #MbimMessage.
 * @out_hw_radio_state: (out)(optional)(transfer none): return location for a #MbimRadioSwitchState, or %NULL if the 'HwRadioState' field is not needed.
 * @out_sw_radio_state: (out)(optional)(transfer none): return location for a #MbimRadioSwitchState, or %NULL if the 'SwRadioState' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Radio State' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_radio_state_response_parse (
    const MbimMessage *message,
    MbimRadioSwitchState *out_hw_radio_state,
    MbimRadioSwitchState *out_sw_radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Radio State */

/**
 * mbim_message_radio_state_notification_parse:
 * @message: the #MbimMessage.
 * @out_hw_radio_state: (out)(optional)(transfer none): return location for a #MbimRadioSwitchState, or %NULL if the 'HwRadioState' field is not needed.
 * @out_sw_radio_state: (out)(optional)(transfer none): return location for a #MbimRadioSwitchState, or %NULL if the 'SwRadioState' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Radio State' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_radio_state_notification_parse (
    const MbimMessage *message,
    MbimRadioSwitchState *out_hw_radio_state,
    MbimRadioSwitchState *out_sw_radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Pin */

/**
 * mbim_message_pin_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Pin' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_pin_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Pin */

/**
 * mbim_message_pin_set_new:
 * @pin_type: (in): the 'PinType' field, given as a #MbimPinType.
 * @pin_operation: (in): the 'PinOperation' field, given as a #MbimPinOperation.
 * @pin: (in): the 'Pin' field, given as a string.
 * @new_pin: (in): the 'NewPin' field, given as a string.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Pin' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_pin_set_new (
    MbimPinType pin_type,
    MbimPinOperation pin_operation,
    const gchar *pin,
    const gchar *new_pin,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Pin */

/**
 * mbim_message_pin_response_parse:
 * @message: the #MbimMessage.
 * @out_pin_type: (out)(optional)(transfer none): return location for a #MbimPinType, or %NULL if the 'PinType' field is not needed.
 * @out_pin_state: (out)(optional)(transfer none): return location for a #MbimPinState, or %NULL if the 'PinState' field is not needed.
 * @out_remaining_attempts: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RemainingAttempts' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Pin' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_pin_response_parse (
    const MbimMessage *message,
    MbimPinType *out_pin_type,
    MbimPinState *out_pin_state,
    guint32 *out_remaining_attempts,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Pin List */

/**
 * mbim_message_pin_list_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Pin List' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_pin_list_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Pin List */

/**
 * mbim_message_pin_list_response_parse:
 * @message: the #MbimMessage.
 * @out_pin_desc_pin1: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescPin1' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_pin2: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescPin2' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_device_sim_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescDeviceSimPin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_device_first_sim_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescDeviceFirstSimPin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_network_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescNetworkPin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_network_subset_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescNetworkSubsetPin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_service_provider_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescServiceProviderPin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_corporate_pin: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescCorporatePin' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_subsidy_lock: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescSubsidyLock' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @out_pin_desc_custom: (out)(optional)(transfer full): return location for a newly allocated #MbimPinDesc, or %NULL if the 'PinDescCustom' field is not needed. Free the returned value with mbim_pin_desc_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Pin List' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_pin_list_response_parse (
    const MbimMessage *message,
    MbimPinDesc **out_pin_desc_pin1,
    MbimPinDesc **out_pin_desc_pin2,
    MbimPinDesc **out_pin_desc_device_sim_pin,
    MbimPinDesc **out_pin_desc_device_first_sim_pin,
    MbimPinDesc **out_pin_desc_network_pin,
    MbimPinDesc **out_pin_desc_network_subset_pin,
    MbimPinDesc **out_pin_desc_service_provider_pin,
    MbimPinDesc **out_pin_desc_corporate_pin,
    MbimPinDesc **out_pin_desc_subsidy_lock,
    MbimPinDesc **out_pin_desc_custom,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Home Provider */

/**
 * mbim_message_home_provider_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Home Provider' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_home_provider_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Home Provider */

/**
 * mbim_message_home_provider_set_new:
 * @provider: (in): the 'Provider' field, given as a #MbimProvider.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Home Provider' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_home_provider_set_new (
    const MbimProvider *provider,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Home Provider */

/**
 * mbim_message_home_provider_response_parse:
 * @message: the #MbimMessage.
 * @out_provider: (out)(optional)(transfer full): return location for a newly allocated #MbimProvider, or %NULL if the 'Provider' field is not needed. Free the returned value with mbim_provider_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Home Provider' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.2
 */
gboolean mbim_message_home_provider_response_parse (
    const MbimMessage *message,
    MbimProvider **out_provider,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Preferred Providers */

/**
 * mbim_message_preferred_providers_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Preferred Providers' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_preferred_providers_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Preferred Providers */

/**
 * mbim_message_preferred_providers_set_new:
 * @providers_count: (in): the 'ProvidersCount' field, given as a #guint32.
 * @providers: (in)(array zero-terminated=1)(element-type MbimProvider): the 'Providers' field, given as an array of #MbimProvider items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Preferred Providers' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_preferred_providers_set_new (
    guint32 providers_count,
    const MbimProvider *const *providers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Preferred Providers */

/**
 * mbim_message_preferred_providers_response_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvider): return location for a newly allocated array of #MbimProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Preferred Providers' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.2
 */
gboolean mbim_message_preferred_providers_response_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Preferred Providers */

/**
 * mbim_message_preferred_providers_notification_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvider): return location for a newly allocated array of #MbimProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Preferred Providers' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean mbim_message_preferred_providers_notification_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Visible Providers */

/**
 * mbim_message_visible_providers_query_new:
 * @action: (in): the 'Action' field, given as a #MbimVisibleProvidersAction.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Visible Providers' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_visible_providers_query_new (
    MbimVisibleProvidersAction action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Visible Providers */

/**
 * mbim_message_visible_providers_response_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvider): return location for a newly allocated array of #MbimProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Visible Providers' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.2
 */
gboolean mbim_message_visible_providers_response_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Register State */

/**
 * mbim_message_register_state_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Register State' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_register_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Register State */

/**
 * mbim_message_register_state_set_new:
 * @provider_id: (in): the 'ProviderId' field, given as a string.
 * @register_action: (in): the 'RegisterAction' field, given as a #MbimRegisterAction.
 * @data_class: (in): the 'DataClass' field, given as a #MbimDataClass.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Register State' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_register_state_set_new (
    const gchar *provider_id,
    MbimRegisterAction register_action,
    MbimDataClass data_class,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Register State */

/**
 * mbim_message_register_state_response_parse:
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
 * Parses and returns parameters of the 'Register State' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_register_state_response_parse (
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
/* Message (Notification): MBIM Message Register State */

/**
 * mbim_message_register_state_notification_parse:
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
 * Parses and returns parameters of the 'Register State' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_register_state_notification_parse (
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
/* Message (Query): MBIM Message Signal State */

/**
 * mbim_message_signal_state_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Signal State' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_signal_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Signal State */

/**
 * mbim_message_signal_state_set_new:
 * @signal_strength_interval: (in): the 'SignalStrengthInterval' field, given as a #guint32.
 * @rssi_threshold: (in): the 'RssiThreshold' field, given as a #guint32.
 * @error_rate_threshold: (in): the 'ErrorRateThreshold' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Signal State' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_signal_state_set_new (
    guint32 signal_strength_interval,
    guint32 rssi_threshold,
    guint32 error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Signal State */

/**
 * mbim_message_signal_state_response_parse:
 * @message: the #MbimMessage.
 * @out_rssi: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssi' field is not needed.
 * @out_error_rate: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRate' field is not needed.
 * @out_signal_strength_interval: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SignalStrengthInterval' field is not needed.
 * @out_rssi_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RssiThreshold' field is not needed.
 * @out_error_rate_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRateThreshold' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Signal State' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_signal_state_response_parse (
    const MbimMessage *message,
    guint32 *out_rssi,
    guint32 *out_error_rate,
    guint32 *out_signal_strength_interval,
    guint32 *out_rssi_threshold,
    guint32 *out_error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Signal State */

/**
 * mbim_message_signal_state_notification_parse:
 * @message: the #MbimMessage.
 * @out_rssi: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssi' field is not needed.
 * @out_error_rate: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRate' field is not needed.
 * @out_signal_strength_interval: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SignalStrengthInterval' field is not needed.
 * @out_rssi_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RssiThreshold' field is not needed.
 * @out_error_rate_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRateThreshold' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Signal State' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_signal_state_notification_parse (
    const MbimMessage *message,
    guint32 *out_rssi,
    guint32 *out_error_rate,
    guint32 *out_signal_strength_interval,
    guint32 *out_rssi_threshold,
    guint32 *out_error_rate_threshold,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Packet Service */

/**
 * mbim_message_packet_service_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Packet Service' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_packet_service_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Packet Service */

/**
 * mbim_message_packet_service_set_new:
 * @packet_service_action: (in): the 'PacketServiceAction' field, given as a #MbimPacketServiceAction.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Packet Service' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_packet_service_set_new (
    MbimPacketServiceAction packet_service_action,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Packet Service */

/**
 * mbim_message_packet_service_response_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_highest_available_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'HighestAvailableDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_packet_service_response_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClass *out_highest_available_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Packet Service */

/**
 * mbim_message_packet_service_notification_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_highest_available_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'HighestAvailableDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_packet_service_notification_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClass *out_highest_available_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Connect */

/**
 * mbim_message_connect_query_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @activation_state: (in): the 'ActivationState' field, given as a #MbimActivationState.
 * @voice_call_state: (in): the 'VoiceCallState' field, given as a #MbimVoiceCallState.
 * @ip_type: (in): the 'IpType' field, given as a #MbimContextIpType.
 * @context_type: (in): the 'ContextType' field, given as a #MbimUuid.
 * @nw_error: (in): the 'NwError' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Connect' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_connect_query_new (
    guint32 session_id,
    MbimActivationState activation_state,
    MbimVoiceCallState voice_call_state,
    MbimContextIpType ip_type,
    const MbimUuid *context_type,
    guint32 nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Connect */

/**
 * mbim_message_connect_set_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @activation_command: (in): the 'ActivationCommand' field, given as a #MbimActivationCommand.
 * @access_string: (in): the 'AccessString' field, given as a string.
 * @user_name: (in): the 'UserName' field, given as a string.
 * @password: (in): the 'Password' field, given as a string.
 * @compression: (in): the 'Compression' field, given as a #MbimCompression.
 * @auth_protocol: (in): the 'AuthProtocol' field, given as a #MbimAuthProtocol.
 * @ip_type: (in): the 'IpType' field, given as a #MbimContextIpType.
 * @context_type: (in): the 'ContextType' field, given as a #MbimUuid.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Connect' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_connect_set_new (
    guint32 session_id,
    MbimActivationCommand activation_command,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    MbimContextIpType ip_type,
    const MbimUuid *context_type,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Connect */

/**
 * mbim_message_connect_response_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_activation_state: (out)(optional)(transfer none): return location for a #MbimActivationState, or %NULL if the 'ActivationState' field is not needed.
 * @out_voice_call_state: (out)(optional)(transfer none): return location for a #MbimVoiceCallState, or %NULL if the 'VoiceCallState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_context_type: (out)(optional)(transfer none): return location for a #MbimUuid, or %NULL if the 'ContextType' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Connect' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_connect_response_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimActivationState *out_activation_state,
    MbimVoiceCallState *out_voice_call_state,
    MbimContextIpType *out_ip_type,
    const MbimUuid **out_context_type,
    guint32 *out_nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Connect */

/**
 * mbim_message_connect_notification_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_activation_state: (out)(optional)(transfer none): return location for a #MbimActivationState, or %NULL if the 'ActivationState' field is not needed.
 * @out_voice_call_state: (out)(optional)(transfer none): return location for a #MbimVoiceCallState, or %NULL if the 'VoiceCallState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_context_type: (out)(optional)(transfer none): return location for a #MbimUuid, or %NULL if the 'ContextType' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Connect' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_connect_notification_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimActivationState *out_activation_state,
    MbimVoiceCallState *out_voice_call_state,
    MbimContextIpType *out_ip_type,
    const MbimUuid **out_context_type,
    guint32 *out_nw_error,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Provisioned Contexts */

/**
 * mbim_message_provisioned_contexts_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Provisioned Contexts' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_provisioned_contexts_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Provisioned Contexts */

/**
 * mbim_message_provisioned_contexts_set_new:
 * @context_id: (in): the 'ContextId' field, given as a #guint32.
 * @context_type: (in): the 'ContextType' field, given as a #MbimUuid.
 * @access_string: (in): the 'AccessString' field, given as a string.
 * @user_name: (in): the 'UserName' field, given as a string.
 * @password: (in): the 'Password' field, given as a string.
 * @compression: (in): the 'Compression' field, given as a #MbimCompression.
 * @auth_protocol: (in): the 'AuthProtocol' field, given as a #MbimAuthProtocol.
 * @provider_id: (in): the 'ProviderId' field, given as a string.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Provisioned Contexts' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_provisioned_contexts_set_new (
    guint32 context_id,
    const MbimUuid *context_type,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    const gchar *provider_id,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Provisioned Contexts */

/**
 * mbim_message_provisioned_contexts_response_parse:
 * @message: the #MbimMessage.
 * @out_provisioned_contexts_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvisionedContextsCount' field is not needed.
 * @out_provisioned_contexts: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvisionedContextElement): return location for a newly allocated array of #MbimProvisionedContextElement items, or %NULL if the 'ProvisionedContexts' field is not needed. Free the returned value with mbim_provisioned_context_element_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Provisioned Contexts' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_provisioned_contexts_response_parse (
    const MbimMessage *message,
    guint32 *out_provisioned_contexts_count,
    MbimProvisionedContextElementArray **out_provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Provisioned Contexts */

/**
 * mbim_message_provisioned_contexts_notification_parse:
 * @message: the #MbimMessage.
 * @out_provisioned_contexts_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvisionedContextsCount' field is not needed.
 * @out_provisioned_contexts: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvisionedContextElement): return location for a newly allocated array of #MbimProvisionedContextElement items, or %NULL if the 'ProvisionedContexts' field is not needed. Free the returned value with mbim_provisioned_context_element_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Provisioned Contexts' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_provisioned_contexts_notification_parse (
    const MbimMessage *message,
    guint32 *out_provisioned_contexts_count,
    MbimProvisionedContextElementArray **out_provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Service Activation */

/**
 * mbim_message_service_activation_set_new:
 * @buffer_size: (in): size of the buffer array.
 * @buffer: (in)(element-type guint8)(array length=buffer_size): the 'Buffer' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Service Activation' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.2
 */
MbimMessage *mbim_message_service_activation_set_new (
    const guint32 buffer_size,
    const guint8 *buffer,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Service Activation */

/**
 * mbim_message_service_activation_response_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #MbimNwError, or %NULL if the 'NwError' field is not needed.
 * @out_buffer_size: (out)(optional): return location for the size of the buffer array.
 * @out_buffer: (out)(optional)(transfer none)(element-type guint8)(array length=out_buffer_size): return location for an array of #guint8 values. Do not free the returned value, it is owned by @message.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Service Activation' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.2
 */
gboolean mbim_message_service_activation_response_parse (
    const MbimMessage *message,
    MbimNwError *out_nw_error,
    guint32 *out_buffer_size,
    const guint8 **out_buffer,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message IP Configuration */

/**
 * mbim_message_ip_configuration_query_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @ipv4_configuration_available: (in): the 'IPv4ConfigurationAvailable' field, given as a #MbimIPConfigurationAvailableFlag.
 * @ipv6_configuration_available: (in): the 'IPv6ConfigurationAvailable' field, given as a #MbimIPConfigurationAvailableFlag.
 * @ipv4_address_count: (in): the 'IPv4AddressCount' field, given as a #guint32.
 * @ipv4_address: (in)(array zero-terminated=1)(element-type MbimIPv4Element): the 'IPv4Address' field, given as an array of #MbimIPv4Element items.
 * @ipv6_address_count: (in): the 'IPv6AddressCount' field, given as a #guint32.
 * @ipv6_address: (in)(array zero-terminated=1)(element-type MbimIPv6Element): the 'IPv6Address' field, given as an array of #MbimIPv6Element items.
 * @ipv4_gateway: (in): the 'IPv4Gateway' field, given as a #MbimIPv4.
 * @ipv6_gateway: (in): the 'IPv6Gateway' field, given as a #MbimIPv6.
 * @ipv4_dns_server_count: (in): the 'IPv4DnsServerCount' field, given as a #guint32.
 * @ipv4_dns_server: (in)(array zero-terminated=1)(element-type MbimIPv4): the 'IPv4DnsServer' field, given as an array of #MbimIPv4 items.
 * @ipv6_dns_server_count: (in): the 'IPv6DnsServerCount' field, given as a #guint32.
 * @ipv6_dns_server: (in)(array zero-terminated=1)(element-type MbimIPv6): the 'IPv6DnsServer' field, given as an array of #MbimIPv6 items.
 * @ipv4_mtu: (in): the 'IPv4Mtu' field, given as a #guint32.
 * @ipv6_mtu: (in): the 'IPv6Mtu' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'IP Configuration' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_ip_configuration_query_new (
    guint32 session_id,
    MbimIPConfigurationAvailableFlag ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag ipv6_configuration_available,
    guint32 ipv4_address_count,
    const MbimIPv4Element *const *ipv4_address,
    guint32 ipv6_address_count,
    const MbimIPv6Element *const *ipv6_address,
    const MbimIPv4 *ipv4_gateway,
    const MbimIPv6 *ipv6_gateway,
    guint32 ipv4_dns_server_count,
    const MbimIPv4 *ipv4_dns_server,
    guint32 ipv6_dns_server_count,
    const MbimIPv6 *ipv6_dns_server,
    guint32 ipv4_mtu,
    guint32 ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message IP Configuration */

/**
 * mbim_message_ip_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_ipv4_configuration_available: (out)(optional)(transfer none): return location for a #MbimIPConfigurationAvailableFlag, or %NULL if the 'IPv4ConfigurationAvailable' field is not needed.
 * @out_ipv6_configuration_available: (out)(optional)(transfer none): return location for a #MbimIPConfigurationAvailableFlag, or %NULL if the 'IPv6ConfigurationAvailable' field is not needed.
 * @out_ipv4_address_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4AddressCount' field is not needed.
 * @out_ipv4_address: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv4Element): return location for a newly allocated array of #MbimIPv4Element items, or %NULL if the 'IPv4Address' field is not needed. Free the returned value with mbim_ipv4_element_array_free().
 * @out_ipv6_address_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6AddressCount' field is not needed.
 * @out_ipv6_address: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv6Element): return location for a newly allocated array of #MbimIPv6Element items, or %NULL if the 'IPv6Address' field is not needed. Free the returned value with mbim_ipv6_element_array_free().
 * @out_ipv4_gateway: (out)(optional)(transfer none): return location for a #MbimIPv4, or %NULL if the 'IPv4Gateway' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_ipv6_gateway: (out)(optional)(transfer none): return location for a #MbimIPv6, or %NULL if the 'IPv6Gateway' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_ipv4_dns_server_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4DnsServerCount' field is not needed.
 * @out_ipv4_dns_server: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv4): return location for a newly allocated array of #MbimIPv4 items, or %NULL if the 'IPv4DnsServer' field is not needed. Free the returned value with g_free().
 * @out_ipv6_dns_server_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6DnsServerCount' field is not needed.
 * @out_ipv6_dns_server: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv6): return location for a newly allocated array of #MbimIPv6 items, or %NULL if the 'IPv6DnsServer' field is not needed. Free the returned value with g_free().
 * @out_ipv4_mtu: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4Mtu' field is not needed.
 * @out_ipv6_mtu: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6Mtu' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'IP Configuration' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_ip_configuration_response_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimIPConfigurationAvailableFlag *out_ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag *out_ipv6_configuration_available,
    guint32 *out_ipv4_address_count,
    MbimIPv4ElementArray **out_ipv4_address,
    guint32 *out_ipv6_address_count,
    MbimIPv6ElementArray **out_ipv6_address,
    const MbimIPv4 **out_ipv4_gateway,
    const MbimIPv6 **out_ipv6_gateway,
    guint32 *out_ipv4_dns_server_count,
    MbimIPv4 **out_ipv4_dns_server,
    guint32 *out_ipv6_dns_server_count,
    MbimIPv6 **out_ipv6_dns_server,
    guint32 *out_ipv4_mtu,
    guint32 *out_ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message IP Configuration */

/**
 * mbim_message_ip_configuration_notification_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_ipv4_configuration_available: (out)(optional)(transfer none): return location for a #MbimIPConfigurationAvailableFlag, or %NULL if the 'IPv4ConfigurationAvailable' field is not needed.
 * @out_ipv6_configuration_available: (out)(optional)(transfer none): return location for a #MbimIPConfigurationAvailableFlag, or %NULL if the 'IPv6ConfigurationAvailable' field is not needed.
 * @out_ipv4_address_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4AddressCount' field is not needed.
 * @out_ipv4_address: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv4Element): return location for a newly allocated array of #MbimIPv4Element items, or %NULL if the 'IPv4Address' field is not needed. Free the returned value with mbim_ipv4_element_array_free().
 * @out_ipv6_address_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6AddressCount' field is not needed.
 * @out_ipv6_address: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv6Element): return location for a newly allocated array of #MbimIPv6Element items, or %NULL if the 'IPv6Address' field is not needed. Free the returned value with mbim_ipv6_element_array_free().
 * @out_ipv4_gateway: (out)(optional)(transfer none): return location for a #MbimIPv4, or %NULL if the 'IPv4Gateway' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_ipv6_gateway: (out)(optional)(transfer none): return location for a #MbimIPv6, or %NULL if the 'IPv6Gateway' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_ipv4_dns_server_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4DnsServerCount' field is not needed.
 * @out_ipv4_dns_server: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv4): return location for a newly allocated array of #MbimIPv4 items, or %NULL if the 'IPv4DnsServer' field is not needed. Free the returned value with g_free().
 * @out_ipv6_dns_server_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6DnsServerCount' field is not needed.
 * @out_ipv6_dns_server: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimIPv6): return location for a newly allocated array of #MbimIPv6 items, or %NULL if the 'IPv6DnsServer' field is not needed. Free the returned value with g_free().
 * @out_ipv4_mtu: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv4Mtu' field is not needed.
 * @out_ipv6_mtu: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'IPv6Mtu' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'IP Configuration' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_ip_configuration_notification_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimIPConfigurationAvailableFlag *out_ipv4_configuration_available,
    MbimIPConfigurationAvailableFlag *out_ipv6_configuration_available,
    guint32 *out_ipv4_address_count,
    MbimIPv4ElementArray **out_ipv4_address,
    guint32 *out_ipv6_address_count,
    MbimIPv6ElementArray **out_ipv6_address,
    const MbimIPv4 **out_ipv4_gateway,
    const MbimIPv6 **out_ipv6_gateway,
    guint32 *out_ipv4_dns_server_count,
    MbimIPv4 **out_ipv4_dns_server,
    guint32 *out_ipv6_dns_server_count,
    MbimIPv6 **out_ipv6_dns_server,
    guint32 *out_ipv4_mtu,
    guint32 *out_ipv6_mtu,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Device Services */

/**
 * mbim_message_device_services_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Services' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.0
 */
MbimMessage *mbim_message_device_services_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Services */

/**
 * mbim_message_device_services_response_parse:
 * @message: the #MbimMessage.
 * @out_device_services_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'DeviceServicesCount' field is not needed.
 * @out_max_dss_sessions: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxDssSessions' field is not needed.
 * @out_device_services: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimDeviceServiceElement): return location for a newly allocated array of #MbimDeviceServiceElement items, or %NULL if the 'DeviceServices' field is not needed. Free the returned value with mbim_device_service_element_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Services' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean mbim_message_device_services_response_parse (
    const MbimMessage *message,
    guint32 *out_device_services_count,
    guint32 *out_max_dss_sessions,
    MbimDeviceServiceElementArray **out_device_services,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Device Service Subscribe List */

/**
 * mbim_message_device_service_subscribe_list_set_new:
 * @events_count: (in): the 'EventsCount' field, given as a #guint32.
 * @events: (in)(array zero-terminated=1)(element-type MbimEventEntry): the 'Events' field, given as an array of #MbimEventEntry items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Service Subscribe List' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.8
 */
MbimMessage *mbim_message_device_service_subscribe_list_set_new (
    guint32 events_count,
    const MbimEventEntry *const *events,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Device Service Subscribe List */

/**
 * mbim_message_device_service_subscribe_list_response_parse:
 * @message: the #MbimMessage.
 * @out_events_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'EventsCount' field is not needed.
 * @out_events: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimEventEntry): return location for a newly allocated array of #MbimEventEntry items, or %NULL if the 'Events' field is not needed. Free the returned value with mbim_event_entry_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Service Subscribe List' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean mbim_message_device_service_subscribe_list_response_parse (
    const MbimMessage *message,
    guint32 *out_events_count,
    MbimEventEntryArray **out_events,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Packet Statistics */

/**
 * mbim_message_packet_statistics_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Packet Statistics' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_packet_statistics_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Packet Statistics */

/**
 * mbim_message_packet_statistics_response_parse:
 * @message: the #MbimMessage.
 * @out_in_discards: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'InDiscards' field is not needed.
 * @out_in_errors: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'InErrors' field is not needed.
 * @out_in_octets: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'InOctets' field is not needed.
 * @out_in_packets: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'InPackets' field is not needed.
 * @out_out_octets: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'OutOctets' field is not needed.
 * @out_out_packets: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'OutPackets' field is not needed.
 * @out_out_errors: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'OutErrors' field is not needed.
 * @out_out_discards: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'OutDiscards' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Statistics' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_packet_statistics_response_parse (
    const MbimMessage *message,
    guint32 *out_in_discards,
    guint32 *out_in_errors,
    guint64 *out_in_octets,
    guint64 *out_in_packets,
    guint64 *out_out_octets,
    guint64 *out_out_packets,
    guint32 *out_out_errors,
    guint32 *out_out_discards,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Network Idle Hint */

/**
 * mbim_message_network_idle_hint_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Network Idle Hint' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_network_idle_hint_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Network Idle Hint */

/**
 * mbim_message_network_idle_hint_set_new:
 * @state: (in): the 'State' field, given as a #MbimNetworkIdleHintState.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Network Idle Hint' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_network_idle_hint_set_new (
    MbimNetworkIdleHintState state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Network Idle Hint */

/**
 * mbim_message_network_idle_hint_response_parse:
 * @message: the #MbimMessage.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimNetworkIdleHintState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Network Idle Hint' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_network_idle_hint_response_parse (
    const MbimMessage *message,
    MbimNetworkIdleHintState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Emergency Mode */

/**
 * mbim_message_emergency_mode_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Emergency Mode' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_emergency_mode_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Emergency Mode */

/**
 * mbim_message_emergency_mode_set_new:
 * @state: (in): the 'State' field, given as a #MbimEmergencyModeState.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Emergency Mode' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_emergency_mode_set_new (
    MbimEmergencyModeState state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Emergency Mode */

/**
 * mbim_message_emergency_mode_response_parse:
 * @message: the #MbimMessage.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimEmergencyModeState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Emergency Mode' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_emergency_mode_response_parse (
    const MbimMessage *message,
    MbimEmergencyModeState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Emergency Mode */

/**
 * mbim_message_emergency_mode_notification_parse:
 * @message: the #MbimMessage.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimEmergencyModeState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Emergency Mode' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean mbim_message_emergency_mode_notification_parse (
    const MbimMessage *message,
    MbimEmergencyModeState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message IP Packet Filters */

/**
 * mbim_message_ip_packet_filters_query_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @packet_filters_count: (in): the 'PacketFiltersCount' field, given as a #guint32.
 * @packet_filters: (in)(array zero-terminated=1)(element-type MbimPacketFilter): the 'PacketFilters' field, given as an array of #MbimPacketFilter items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'IP Packet Filters' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_ip_packet_filters_query_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilter *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message IP Packet Filters */

/**
 * mbim_message_ip_packet_filters_set_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @packet_filters_count: (in): the 'PacketFiltersCount' field, given as a #guint32.
 * @packet_filters: (in)(array zero-terminated=1)(element-type MbimPacketFilter): the 'PacketFilters' field, given as an array of #MbimPacketFilter items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'IP Packet Filters' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_ip_packet_filters_set_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilter *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message IP Packet Filters */

/**
 * mbim_message_ip_packet_filters_response_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_packet_filters_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'PacketFiltersCount' field is not needed.
 * @out_packet_filters: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimPacketFilter): return location for a newly allocated array of #MbimPacketFilter items, or %NULL if the 'PacketFilters' field is not needed. Free the returned value with mbim_packet_filter_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'IP Packet Filters' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_ip_packet_filters_response_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    guint32 *out_packet_filters_count,
    MbimPacketFilterArray **out_packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Multicarrier Providers */

/**
 * mbim_message_multicarrier_providers_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Multicarrier Providers' query command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_multicarrier_providers_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Multicarrier Providers */

/**
 * mbim_message_multicarrier_providers_set_new:
 * @providers_count: (in): the 'ProvidersCount' field, given as a #guint32.
 * @providers: (in)(array zero-terminated=1)(element-type MbimProvider): the 'Providers' field, given as an array of #MbimProvider items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Multicarrier Providers' set command in the 'Basic Connect' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_multicarrier_providers_set_new (
    guint32 providers_count,
    const MbimProvider *const *providers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Multicarrier Providers */

/**
 * mbim_message_multicarrier_providers_response_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvider): return location for a newly allocated array of #MbimProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Multicarrier Providers' response command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_multicarrier_providers_response_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Multicarrier Providers */

/**
 * mbim_message_multicarrier_providers_notification_parse:
 * @message: the #MbimMessage.
 * @out_providers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvidersCount' field is not needed.
 * @out_providers: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvider): return location for a newly allocated array of #MbimProvider items, or %NULL if the 'Providers' field is not needed. Free the returned value with mbim_provider_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Multicarrier Providers' notification command in the 'Basic Connect' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean mbim_message_multicarrier_providers_notification_parse (
    const MbimMessage *message,
    guint32 *out_providers_count,
    MbimProviderArray **out_providers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V2 Register State */

/**
 * mbim_message_ms_basic_connect_v2_register_state_response_parse:
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
 * @out_preferred_data_classes: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'PreferredDataClasses' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Register State' response command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_register_state_response_parse (
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
    MbimDataClass *out_preferred_data_classes,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V2 Register State */

/**
 * mbim_message_ms_basic_connect_v2_register_state_notification_parse:
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
 * @out_preferred_data_classes: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'PreferredDataClasses' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Register State' notification command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_register_state_notification_parse (
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
    MbimDataClass *out_preferred_data_classes,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V2 Packet Service */

/**
 * mbim_message_ms_basic_connect_v2_packet_service_response_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_current_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'CurrentDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @out_frequency_range: (out)(optional)(transfer none): return location for a #MbimFrequencyRange, or %NULL if the 'FrequencyRange' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' response command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_packet_service_response_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClass *out_current_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    MbimFrequencyRange *out_frequency_range,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V2 Packet Service */

/**
 * mbim_message_ms_basic_connect_v2_packet_service_notification_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_current_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'CurrentDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @out_frequency_range: (out)(optional)(transfer none): return location for a #MbimFrequencyRange, or %NULL if the 'FrequencyRange' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' notification command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_packet_service_notification_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClass *out_current_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    MbimFrequencyRange *out_frequency_range,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V2 Signal State */

/**
 * mbim_message_ms_basic_connect_v2_signal_state_response_parse:
 * @message: the #MbimMessage.
 * @out_rssi: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssi' field is not needed.
 * @out_error_rate: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRate' field is not needed.
 * @out_signal_strength_interval: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SignalStrengthInterval' field is not needed.
 * @out_rssi_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RssiThreshold' field is not needed.
 * @out_error_rate_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRateThreshold' field is not needed.
 * @out_rsrp_snr_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_rsrp_snr: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimRsrpSnrInfo): return location for a newly allocated array of #MbimRsrpSnrInfo items, or %NULL if the 'RsrpSnr' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_rsrp_snr_info_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Signal State' response command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_signal_state_response_parse (
    const MbimMessage *message,
    guint32 *out_rssi,
    guint32 *out_error_rate,
    guint32 *out_signal_strength_interval,
    guint32 *out_rssi_threshold,
    guint32 *out_error_rate_threshold,
    guint32 *out_rsrp_snr_count,
    MbimRsrpSnrInfoArray **out_rsrp_snr,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V2 Signal State */

/**
 * mbim_message_ms_basic_connect_v2_signal_state_notification_parse:
 * @message: the #MbimMessage.
 * @out_rssi: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Rssi' field is not needed.
 * @out_error_rate: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRate' field is not needed.
 * @out_signal_strength_interval: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SignalStrengthInterval' field is not needed.
 * @out_rssi_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'RssiThreshold' field is not needed.
 * @out_error_rate_threshold: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ErrorRateThreshold' field is not needed.
 * @out_rsrp_snr_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_rsrp_snr: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimRsrpSnrInfo): return location for a newly allocated array of #MbimRsrpSnrInfo items, or %NULL if the 'RsrpSnr' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_rsrp_snr_info_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Signal State' notification command in the 'Ms Basic Connect V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v2_signal_state_notification_parse (
    const MbimMessage *message,
    guint32 *out_rssi,
    guint32 *out_error_rate,
    guint32 *out_signal_strength_interval,
    guint32 *out_rssi_threshold,
    guint32 *out_error_rate_threshold,
    guint32 *out_rsrp_snr_count,
    MbimRsrpSnrInfoArray **out_rsrp_snr,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V3 Subscriber Ready Status */

/**
 * mbim_message_ms_basic_connect_v3_subscriber_ready_status_response_parse:
 * @message: the #MbimMessage.
 * @out_ready_state: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyState, or %NULL if the 'ReadyState' field is not needed.
 * @out_flags: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyStatusFlag, or %NULL if the 'Flags' field is not needed.
 * @out_subscriber_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SubscriberId' field is not needed. Free the returned value with g_free().
 * @out_sim_icc_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SimIccId' field is not needed. Free the returned value with g_free().
 * @out_ready_info: (out)(optional)(transfer none): return location for a #MbimReadyInfoFlag, or %NULL if the 'ReadyInfo' field is not needed.
 * @out_telephone_numbers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TelephoneNumbersCount' field is not needed.
 * @out_telephone_numbers: (out)(optional)(transfer full)(type GStrv): return location for a newly allocated array of strings, or %NULL if the 'TelephoneNumbers' field is not needed. Free the returned value with g_strfreev().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Subscriber Ready Status' response command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_subscriber_ready_status_response_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *out_ready_state,
    MbimSubscriberReadyStatusFlag *out_flags,
    gchar **out_subscriber_id,
    gchar **out_sim_icc_id,
    MbimReadyInfoFlag *out_ready_info,
    guint32 *out_telephone_numbers_count,
    gchar ***out_telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V3 Subscriber Ready Status */

/**
 * mbim_message_ms_basic_connect_v3_subscriber_ready_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_ready_state: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyState, or %NULL if the 'ReadyState' field is not needed.
 * @out_flags: (out)(optional)(transfer none): return location for a #MbimSubscriberReadyStatusFlag, or %NULL if the 'Flags' field is not needed.
 * @out_subscriber_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SubscriberId' field is not needed. Free the returned value with g_free().
 * @out_sim_icc_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'SimIccId' field is not needed. Free the returned value with g_free().
 * @out_ready_info: (out)(optional)(transfer none): return location for a #MbimReadyInfoFlag, or %NULL if the 'ReadyInfo' field is not needed.
 * @out_telephone_numbers_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TelephoneNumbersCount' field is not needed.
 * @out_telephone_numbers: (out)(optional)(transfer full)(type GStrv): return location for a newly allocated array of strings, or %NULL if the 'TelephoneNumbers' field is not needed. Free the returned value with g_strfreev().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Subscriber Ready Status' notification command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_subscriber_ready_status_notification_parse (
    const MbimMessage *message,
    MbimSubscriberReadyState *out_ready_state,
    MbimSubscriberReadyStatusFlag *out_flags,
    gchar **out_subscriber_id,
    gchar **out_sim_icc_id,
    MbimReadyInfoFlag *out_ready_info,
    guint32 *out_telephone_numbers_count,
    gchar ***out_telephone_numbers,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V3 Packet Service */

/**
 * mbim_message_ms_basic_connect_v3_packet_service_response_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_highest_available_data_class: (out)(optional)(transfer none): return location for a #MbimDataClassV3, or %NULL if the 'HighestAvailableDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @out_frequency_range: (out)(optional)(transfer none): return location for a #MbimFrequencyRange, or %NULL if the 'FrequencyRange' field is not needed.
 * @out_data_subclass: (out)(optional)(transfer none): return location for a #MbimDataSubclass, or %NULL if the 'DataSubclass' field is not needed.
 * @out_tai: (out)(optional)(transfer full): return location for a newly allocated #MbimTai, or %NULL if the 'Tai' field is not needed. Free the returned value with mbim_tai_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' response command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_packet_service_response_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClassV3 *out_highest_available_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    MbimFrequencyRange *out_frequency_range,
    MbimDataSubclass *out_data_subclass,
    MbimTai **out_tai,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V3 Packet Service */

/**
 * mbim_message_ms_basic_connect_v3_packet_service_notification_parse:
 * @message: the #MbimMessage.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_packet_service_state: (out)(optional)(transfer none): return location for a #MbimPacketServiceState, or %NULL if the 'PacketServiceState' field is not needed.
 * @out_highest_available_data_class: (out)(optional)(transfer none): return location for a #MbimDataClassV3, or %NULL if the 'HighestAvailableDataClass' field is not needed.
 * @out_uplink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'UplinkSpeed' field is not needed.
 * @out_downlink_speed: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DownlinkSpeed' field is not needed.
 * @out_frequency_range: (out)(optional)(transfer none): return location for a #MbimFrequencyRange, or %NULL if the 'FrequencyRange' field is not needed.
 * @out_data_subclass: (out)(optional)(transfer none): return location for a #MbimDataSubclass, or %NULL if the 'DataSubclass' field is not needed.
 * @out_tai: (out)(optional)(transfer full): return location for a newly allocated #MbimTai, or %NULL if the 'Tai' field is not needed. Free the returned value with mbim_tai_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Packet Service' notification command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_packet_service_notification_parse (
    const MbimMessage *message,
    guint32 *out_nw_error,
    MbimPacketServiceState *out_packet_service_state,
    MbimDataClassV3 *out_highest_available_data_class,
    guint64 *out_uplink_speed,
    guint64 *out_downlink_speed,
    MbimFrequencyRange *out_frequency_range,
    MbimDataSubclass *out_data_subclass,
    MbimTai **out_tai,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect V3 Connect */

/**
 * mbim_message_ms_basic_connect_v3_connect_query_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Connect' query command in the 'Ms Basic Connect V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_v3_connect_query_new (
    guint32 session_id,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect V3 Connect */

/**
 * mbim_message_ms_basic_connect_v3_connect_set_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @activation_command: (in): the 'ActivationCommand' field, given as a #MbimActivationCommand.
 * @compression: (in): the 'Compression' field, given as a #MbimCompression.
 * @auth_protocol: (in): the 'AuthProtocol' field, given as a #MbimAuthProtocol.
 * @ip_type: (in): the 'IpType' field, given as a #MbimContextIpType.
 * @context_type: (in): the 'ContextType' field, given as a #MbimUuid.
 * @media_preference: (in): the 'MediaPreference' field, given as a #MbimAccessMediaType.
 * @access_string: (in): the 'AccessString' field, given as a string.
 * @user_name: (in): the 'UserName' field, given as a string.
 * @password: (in): the 'Password' field, given as a string.
 * @unnamed_ies: (in)(element-type MbimTlv)(transfer none): the 'UnnamedIes' field, given as a list of # items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Connect' set command in the 'Ms Basic Connect V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_v3_connect_set_new (
    guint32 session_id,
    MbimActivationCommand activation_command,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    MbimContextIpType ip_type,
    const MbimUuid *context_type,
    MbimAccessMediaType media_preference,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    const GList *unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V3 Connect */

/**
 * mbim_message_ms_basic_connect_v3_connect_response_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_activation_state: (out)(optional)(transfer none): return location for a #MbimActivationState, or %NULL if the 'ActivationState' field is not needed.
 * @out_voice_call_state: (out)(optional)(transfer none): return location for a #MbimVoiceCallState, or %NULL if the 'VoiceCallState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_context_type: (out)(optional)(transfer none): return location for a #MbimUuid, or %NULL if the 'ContextType' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_media_preference: (out)(optional)(transfer none): return location for a #MbimAccessMediaType, or %NULL if the 'MediaPreference' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_unnamed_ies: (out)(optional)(element-type MbimTlv)(transfer full): return location for a newly allocated list of #MbimTlv items, or %NULL if the 'UnnamedIes' field is not needed. Free the returned value with g_list_free_full() using mbim_tlv_unref() as #GDestroyNotify.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Connect' response command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_connect_response_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimActivationState *out_activation_state,
    MbimVoiceCallState *out_voice_call_state,
    MbimContextIpType *out_ip_type,
    const MbimUuid **out_context_type,
    guint32 *out_nw_error,
    MbimAccessMediaType *out_media_preference,
    gchar **out_access_string,
    GList **out_unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect V3 Connect */

/**
 * mbim_message_ms_basic_connect_v3_connect_notification_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_activation_state: (out)(optional)(transfer none): return location for a #MbimActivationState, or %NULL if the 'ActivationState' field is not needed.
 * @out_voice_call_state: (out)(optional)(transfer none): return location for a #MbimVoiceCallState, or %NULL if the 'VoiceCallState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_context_type: (out)(optional)(transfer none): return location for a #MbimUuid, or %NULL if the 'ContextType' field is not needed. Do not free the returned value, it is owned by @message.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NwError' field is not needed.
 * @out_media_preference: (out)(optional)(transfer none): return location for a #MbimAccessMediaType, or %NULL if the 'MediaPreference' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_unnamed_ies: (out)(optional)(element-type MbimTlv)(transfer full): return location for a newly allocated list of #MbimTlv items, or %NULL if the 'UnnamedIes' field is not needed. Free the returned value with g_list_free_full() using mbim_tlv_unref() as #GDestroyNotify.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Connect' notification command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_connect_notification_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    MbimActivationState *out_activation_state,
    MbimVoiceCallState *out_voice_call_state,
    MbimContextIpType *out_ip_type,
    const MbimUuid **out_context_type,
    guint32 *out_nw_error,
    MbimAccessMediaType *out_media_preference,
    gchar **out_access_string,
    GList **out_unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect V3 IP Packet Filters */

/**
 * mbim_message_ms_basic_connect_v3_ip_packet_filters_query_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @packet_filters_count: (in): the 'PacketFiltersCount' field, given as a #guint32.
 * @packet_filters: (in)(array zero-terminated=1)(element-type MbimPacketFilterV3): the 'PacketFilters' field, given as an array of #MbimPacketFilterV3 items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'IP Packet Filters' query command in the 'Ms Basic Connect V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_v3_ip_packet_filters_query_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilterV3 *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect V3 IP Packet Filters */

/**
 * mbim_message_ms_basic_connect_v3_ip_packet_filters_set_new:
 * @session_id: (in): the 'SessionId' field, given as a #guint32.
 * @packet_filters_count: (in): the 'PacketFiltersCount' field, given as a #guint32.
 * @packet_filters: (in)(array zero-terminated=1)(element-type MbimPacketFilterV3): the 'PacketFilters' field, given as an array of #MbimPacketFilterV3 items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'IP Packet Filters' set command in the 'Ms Basic Connect V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_v3_ip_packet_filters_set_new (
    guint32 session_id,
    guint32 packet_filters_count,
    const MbimPacketFilterV3 *const *packet_filters,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect V3 IP Packet Filters */

/**
 * mbim_message_ms_basic_connect_v3_ip_packet_filters_response_parse:
 * @message: the #MbimMessage.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_packet_filters_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'PacketFiltersCount' field is not needed.
 * @out_packet_filters: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimPacketFilterV3): return location for a newly allocated array of #MbimPacketFilterV3 items, or %NULL if the 'PacketFilters' field is not needed. Free the returned value with mbim_packet_filter_v3_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'IP Packet Filters' response command in the 'Ms Basic Connect V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_v3_ip_packet_filters_response_parse (
    const MbimMessage *message,
    guint32 *out_session_id,
    guint32 *out_packet_filters_count,
    MbimPacketFilterV3Array **out_packet_filters,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_basic_connect_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_v2_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_v3_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_BASIC_CONNECT__ */
