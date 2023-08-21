
/* GENERATED CODE... DO NOT EDIT */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2012 Lanedo GmbH
 * Copyright (C) 2012-2022 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "qmi-enums.h"
#include "qmi-enums-wms.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WMS__
#define __LIBQMI_GLIB_QMI_WMS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_WMS_RESET
#define HAVE_QMI_MESSAGE_WMS_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_WMS_RAW_SEND
#define HAVE_QMI_MESSAGE_WMS_RAW_WRITE
#define HAVE_QMI_MESSAGE_WMS_RAW_READ
#define HAVE_QMI_MESSAGE_WMS_MODIFY_TAG
#define HAVE_QMI_MESSAGE_WMS_DELETE
#define HAVE_QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL
#define HAVE_QMI_MESSAGE_WMS_LIST_MESSAGES
#define HAVE_QMI_MESSAGE_WMS_SET_ROUTES
#define HAVE_QMI_MESSAGE_WMS_GET_ROUTES
#define HAVE_QMI_MESSAGE_WMS_SEND_ACK
#define HAVE_QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE
#define HAVE_QMI_INDICATION_WMS_EVENT_REPORT
#define HAVE_QMI_INDICATION_WMS_SMSC_ADDRESS

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS Event Report */


/**
 * SECTION: qmi-indication-wms-event-report
 * @title: WMS Event Report indication
 * @short_description: Methods to manage the WMS Event Report indication.
 *
 * Collection of methods to parse indications of the WMS Event Report message.
 */

/* --- Output -- */

/**
 * QmiIndicationWmsEventReportOutput:
 *
 * The #QmiIndicationWmsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationWmsEventReportOutput QmiIndicationWmsEventReportOutput;
GType qmi_indication_wms_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WMS_EVENT_REPORT_OUTPUT (qmi_indication_wms_event_report_output_get_type ())


/**
 * qmi_indication_wms_event_report_output_get_sms_on_ims:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_sms_on_ims: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_sms_on_ims (
    QmiIndicationWmsEventReportOutput *self,
    gboolean *value_sms_on_ims,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_smsc_address:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_smsc_address: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMSC Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_smsc_address (
    QmiIndicationWmsEventReportOutput *self,
    const gchar **value_smsc_address,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_etws_plmn_information:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_etws_plmn_information_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_etws_plmn_information_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ETWS PLMN Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_etws_plmn_information (
    QmiIndicationWmsEventReportOutput *self,
    guint16 *value_etws_plmn_information_mcc,
    guint16 *value_etws_plmn_information_mnc,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_etws_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_etws_message_notification_type: (out)(optional): a placeholder for the output #QmiWmsNotificationType, or %NULL if not required.
 * @value_etws_message_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ETWS Message' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_etws_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsNotificationType *value_etws_message_notification_type,
    GArray **value_etws_message_raw_data,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_message_mode:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_message_mode (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_transfer_route_mt_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_transfer_route_mt_message_ack_indicator: (out)(optional): a placeholder for the output #QmiWmsAckIndicator, or %NULL if not required.
 * @value_transfer_route_mt_message_transaction_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_transfer_route_mt_message_format: (out)(optional): a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_transfer_route_mt_message_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Route MT Message' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_transfer_route_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsAckIndicator *value_transfer_route_mt_message_ack_indicator,
    guint32 *value_transfer_route_mt_message_transaction_id,
    QmiWmsMessageFormat *value_transfer_route_mt_message_format,
    GArray **value_transfer_route_mt_message_raw_data,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_get_mt_message:
 * @self: a #QmiIndicationWmsEventReportOutput.
 * @value_mt_message_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_mt_message_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MT Message' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_wms_event_report_output_get_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsStorageType *value_mt_message_storage_type,
    guint32 *value_mt_message_memory_index,
    GError **error);


/**
 * qmi_indication_wms_event_report_output_ref:
 * @self: a #QmiIndicationWmsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationWmsEventReportOutput *qmi_indication_wms_event_report_output_ref (QmiIndicationWmsEventReportOutput *self);

/**
 * qmi_indication_wms_event_report_output_unref:
 * @self: a #QmiIndicationWmsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_wms_event_report_output_unref (QmiIndicationWmsEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWmsEventReportOutput, qmi_indication_wms_event_report_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS SMSC Address */


/**
 * SECTION: qmi-indication-wms-smsc-address
 * @title: WMS SMSC Address indication
 * @short_description: Methods to manage the WMS SMSC Address indication.
 *
 * Collection of methods to parse indications of the WMS SMSC Address message.
 */

/* --- Output -- */

/**
 * QmiIndicationWmsSmscAddressOutput:
 *
 * The #QmiIndicationWmsSmscAddressOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationWmsSmscAddressOutput QmiIndicationWmsSmscAddressOutput;
GType qmi_indication_wms_smsc_address_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WMS_SMSC_ADDRESS_OUTPUT (qmi_indication_wms_smsc_address_output_get_type ())


/**
 * qmi_indication_wms_smsc_address_output_get_address:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 * @value_address_type: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_address_digits: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wms_smsc_address_output_get_address (
    QmiIndicationWmsSmscAddressOutput *self,
    const gchar **value_address_type,
    const gchar **value_address_digits,
    GError **error);


/**
 * qmi_indication_wms_smsc_address_output_ref:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationWmsSmscAddressOutput *qmi_indication_wms_smsc_address_output_ref (QmiIndicationWmsSmscAddressOutput *self);

/**
 * qmi_indication_wms_smsc_address_output_unref:
 * @self: a #QmiIndicationWmsSmscAddressOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_wms_smsc_address_output_unref (QmiIndicationWmsSmscAddressOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWmsSmscAddressOutput, qmi_indication_wms_smsc_address_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Reset */


/**
 * SECTION: qmi-message-wms-reset
 * @title: WMS Reset response
 * @short_description: Methods to manage the WMS Reset response.
 *
 * Collection of methods to create requests and parse responses of the WMS Reset message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsResetOutput:
 *
 * The #QmiMessageWmsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsResetOutput QmiMessageWmsResetOutput;
GType qmi_message_wms_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RESET_OUTPUT (qmi_message_wms_reset_output_get_type ())


/**
 * qmi_message_wms_reset_output_get_result:
 * @self: a QmiMessageWmsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_reset_output_get_result (
    QmiMessageWmsResetOutput *self,
    GError **error);


/**
 * qmi_message_wms_reset_output_ref:
 * @self: a #QmiMessageWmsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsResetOutput *qmi_message_wms_reset_output_ref (QmiMessageWmsResetOutput *self);

/**
 * qmi_message_wms_reset_output_unref:
 * @self: a #QmiMessageWmsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_reset_output_unref (QmiMessageWmsResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsResetOutput, qmi_message_wms_reset_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Event Report */


/**
 * SECTION: qmi-message-wms-set-event-report
 * @title: WMS Set Event Report response
 * @short_description: Methods to manage the WMS Set Event Report response.
 *
 * Collection of methods to create requests and parse responses of the WMS Set Event Report message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsSetEventReportInput:
 *
 * The #QmiMessageWmsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetEventReportInput QmiMessageWmsSetEventReportInput;
GType qmi_message_wms_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_EVENT_REPORT_INPUT (qmi_message_wms_set_event_report_input_get_type ())


/**
 * qmi_message_wms_set_event_report_input_get_new_mt_message_indicator:
 * @self: a #QmiMessageWmsSetEventReportInput.
 * @value_new_mt_message_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'New MT Message Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_input_get_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean *value_new_mt_message_indicator_report,
    GError **error);


/**
 * qmi_message_wms_set_event_report_input_set_new_mt_message_indicator:
 * @self: a #QmiMessageWmsSetEventReportInput.
 * @value_new_mt_message_indicator_report: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'New MT Message Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_input_set_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean value_new_mt_message_indicator_report,
    GError **error);


/**
 * qmi_message_wms_set_event_report_input_ref:
 * @self: a #QmiMessageWmsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportInput *qmi_message_wms_set_event_report_input_ref (QmiMessageWmsSetEventReportInput *self);

/**
 * qmi_message_wms_set_event_report_input_unref:
 * @self: a #QmiMessageWmsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_event_report_input_unref (QmiMessageWmsSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSetEventReportInput, qmi_message_wms_set_event_report_input_unref)

/**
 * qmi_message_wms_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageWmsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageWmsSetEventReportInput. The returned value should be freed with qmi_message_wms_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportInput *qmi_message_wms_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSetEventReportOutput:
 *
 * The #QmiMessageWmsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetEventReportOutput QmiMessageWmsSetEventReportOutput;
GType qmi_message_wms_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_EVENT_REPORT_OUTPUT (qmi_message_wms_set_event_report_output_get_type ())


/**
 * qmi_message_wms_set_event_report_output_get_result:
 * @self: a QmiMessageWmsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_event_report_output_get_result (
    QmiMessageWmsSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_wms_set_event_report_output_ref:
 * @self: a #QmiMessageWmsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportOutput *qmi_message_wms_set_event_report_output_ref (QmiMessageWmsSetEventReportOutput *self);

/**
 * qmi_message_wms_set_event_report_output_unref:
 * @self: a #QmiMessageWmsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_event_report_output_unref (QmiMessageWmsSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSetEventReportOutput, qmi_message_wms_set_event_report_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Supported Messages */


/**
 * SECTION: qmi-message-wms-get-supported-messages
 * @title: WMS Get Supported Messages response
 * @short_description: Methods to manage the WMS Get Supported Messages response.
 *
 * Collection of methods to create requests and parse responses of the WMS Get Supported Messages message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsGetSupportedMessagesOutput:
 *
 * The #QmiMessageWmsGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWmsGetSupportedMessagesOutput QmiMessageWmsGetSupportedMessagesOutput;
GType qmi_message_wms_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_wms_get_supported_messages_output_get_type ())


/**
 * qmi_message_wms_get_supported_messages_output_get_result:
 * @self: a QmiMessageWmsGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wms_get_supported_messages_output_get_result (
    QmiMessageWmsGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_wms_get_supported_messages_output_get_list:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wms_get_supported_messages_output_get_list (
    QmiMessageWmsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_wms_get_supported_messages_output_ref:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWmsGetSupportedMessagesOutput *qmi_message_wms_get_supported_messages_output_ref (QmiMessageWmsGetSupportedMessagesOutput *self);

/**
 * qmi_message_wms_get_supported_messages_output_unref:
 * @self: a #QmiMessageWmsGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wms_get_supported_messages_output_unref (QmiMessageWmsGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsGetSupportedMessagesOutput, qmi_message_wms_get_supported_messages_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Send */


/**
 * SECTION: qmi-message-wms-raw-send
 * @title: WMS Raw Send response
 * @short_description: Methods to manage the WMS Raw Send response.
 *
 * Collection of methods to create requests and parse responses of the WMS Raw Send message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsRawSendInput:
 *
 * The #QmiMessageWmsRawSendInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawSendInput QmiMessageWmsRawSendInput;
GType qmi_message_wms_raw_send_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_SEND_INPUT (qmi_message_wms_raw_send_input_get_type ())


/**
 * qmi_message_wms_raw_send_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_sms_on_ims: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_get_gsm_wcdma_link_timer:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_gsm_wcdma_link_timer: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Link Timer' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 *value_gsm_wcdma_link_timer,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_set_gsm_wcdma_link_timer:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_gsm_wcdma_link_timer: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM WCDMA Link Timer' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 value_gsm_wcdma_link_timer,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_get_cdma_follow_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_follow_on_dc_follow: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Follow On DC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_follow_on_dc_follow,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_set_cdma_follow_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_follow_on_dc_follow: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA Follow On DC' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_follow_on_dc_follow,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_get_cdma_force_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_force_on_dc_force: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_force_on_dc_service_option: (out)(optional): a placeholder for the output #QmiWmsCdmaServiceOption, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Force On DC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption *value_cdma_force_on_dc_service_option,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_set_cdma_force_on_dc:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_cdma_force_on_dc_force: a #gboolean.
 * @value_cdma_force_on_dc_service_option: a #QmiWmsCdmaServiceOption.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA Force On DC' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption value_cdma_force_on_dc_service_option,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_get_raw_message_data:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_raw_message_data_format: (out)(optional): a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_get_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_set_raw_message_data:
 * @self: a #QmiMessageWmsRawSendInput.
 * @value_raw_message_data_format: a #QmiWmsMessageFormat.
 * @value_raw_message_data_raw_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_raw_message_data_raw_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Raw Message Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_input_set_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error);


/**
 * qmi_message_wms_raw_send_input_ref:
 * @self: a #QmiMessageWmsRawSendInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendInput *qmi_message_wms_raw_send_input_ref (QmiMessageWmsRawSendInput *self);

/**
 * qmi_message_wms_raw_send_input_unref:
 * @self: a #QmiMessageWmsRawSendInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_send_input_unref (QmiMessageWmsRawSendInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawSendInput, qmi_message_wms_raw_send_input_unref)

/**
 * qmi_message_wms_raw_send_input_new:
 *
 * Allocates a new #QmiMessageWmsRawSendInput.
 *
 * Returns: the newly created #QmiMessageWmsRawSendInput. The returned value should be freed with qmi_message_wms_raw_send_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendInput *qmi_message_wms_raw_send_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawSendOutput:
 *
 * The #QmiMessageWmsRawSendOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawSendOutput QmiMessageWmsRawSendOutput;
GType qmi_message_wms_raw_send_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_SEND_OUTPUT (qmi_message_wms_raw_send_output_get_type ())


/**
 * qmi_message_wms_raw_send_output_get_result:
 * @self: a QmiMessageWmsRawSendOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_result (
    QmiMessageWmsRawSendOutput *self,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_get_message_id:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_message_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_message_id (
    QmiMessageWmsRawSendOutput *self,
    guint16 *value_message_id,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_get_cdma_cause_code:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_cdma_cause_code: (out)(optional): a placeholder for the output #QmiWmsCdmaCauseCode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Cause Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_cdma_cause_code (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_get_cdma_error_class:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_cdma_error_class: (out)(optional): a placeholder for the output #QmiWmsCdmaErrorClass, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Error Class' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_cdma_error_class (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_get_gsm_wcdma_cause_info:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_gsm_wcdma_cause_info_rp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsRpCause, or %NULL if not required.
 * @value_gsm_wcdma_cause_info_tp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsTpCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Cause Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_get_message_delivery_failure_type:
 * @self: a #QmiMessageWmsRawSendOutput.
 * @value_message_delivery_failure_type: (out)(optional): a placeholder for the output #QmiWmsMessageDeliveryFailureType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Delivery Failure Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_send_output_get_message_delivery_failure_type (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error);


/**
 * qmi_message_wms_raw_send_output_ref:
 * @self: a #QmiMessageWmsRawSendOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendOutput *qmi_message_wms_raw_send_output_ref (QmiMessageWmsRawSendOutput *self);

/**
 * qmi_message_wms_raw_send_output_unref:
 * @self: a #QmiMessageWmsRawSendOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_send_output_unref (QmiMessageWmsRawSendOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawSendOutput, qmi_message_wms_raw_send_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Write */


/**
 * SECTION: qmi-message-wms-raw-write
 * @title: WMS Raw Write response
 * @short_description: Methods to manage the WMS Raw Write response.
 *
 * Collection of methods to create requests and parse responses of the WMS Raw Write message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsRawWriteInput:
 *
 * The #QmiMessageWmsRawWriteInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawWriteInput QmiMessageWmsRawWriteInput;
GType qmi_message_wms_raw_write_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_WRITE_INPUT (qmi_message_wms_raw_write_input_get_type ())


/**
 * qmi_message_wms_raw_write_input_get_raw_message_data:
 * @self: a #QmiMessageWmsRawWriteInput.
 * @value_raw_message_data_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_raw_message_data_format: (out)(optional): a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_input_get_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType *value_raw_message_data_storage_type,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);


/**
 * qmi_message_wms_raw_write_input_set_raw_message_data:
 * @self: a #QmiMessageWmsRawWriteInput.
 * @value_raw_message_data_storage_type: a #QmiWmsStorageType.
 * @value_raw_message_data_format: a #QmiWmsMessageFormat.
 * @value_raw_message_data_raw_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_raw_message_data_raw_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Raw Message Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_input_set_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType value_raw_message_data_storage_type,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error);


/**
 * qmi_message_wms_raw_write_input_ref:
 * @self: a #QmiMessageWmsRawWriteInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteInput *qmi_message_wms_raw_write_input_ref (QmiMessageWmsRawWriteInput *self);

/**
 * qmi_message_wms_raw_write_input_unref:
 * @self: a #QmiMessageWmsRawWriteInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_write_input_unref (QmiMessageWmsRawWriteInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawWriteInput, qmi_message_wms_raw_write_input_unref)

/**
 * qmi_message_wms_raw_write_input_new:
 *
 * Allocates a new #QmiMessageWmsRawWriteInput.
 *
 * Returns: the newly created #QmiMessageWmsRawWriteInput. The returned value should be freed with qmi_message_wms_raw_write_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteInput *qmi_message_wms_raw_write_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawWriteOutput:
 *
 * The #QmiMessageWmsRawWriteOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawWriteOutput QmiMessageWmsRawWriteOutput;
GType qmi_message_wms_raw_write_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_WRITE_OUTPUT (qmi_message_wms_raw_write_output_get_type ())


/**
 * qmi_message_wms_raw_write_output_get_result:
 * @self: a QmiMessageWmsRawWriteOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_output_get_result (
    QmiMessageWmsRawWriteOutput *self,
    GError **error);


/**
 * qmi_message_wms_raw_write_output_get_memory_index:
 * @self: a #QmiMessageWmsRawWriteOutput.
 * @value_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_write_output_get_memory_index (
    QmiMessageWmsRawWriteOutput *self,
    guint32 *value_memory_index,
    GError **error);


/**
 * qmi_message_wms_raw_write_output_ref:
 * @self: a #QmiMessageWmsRawWriteOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteOutput *qmi_message_wms_raw_write_output_ref (QmiMessageWmsRawWriteOutput *self);

/**
 * qmi_message_wms_raw_write_output_unref:
 * @self: a #QmiMessageWmsRawWriteOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_write_output_unref (QmiMessageWmsRawWriteOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawWriteOutput, qmi_message_wms_raw_write_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Read */


/**
 * SECTION: qmi-message-wms-raw-read
 * @title: WMS Raw Read response
 * @short_description: Methods to manage the WMS Raw Read response.
 *
 * Collection of methods to create requests and parse responses of the WMS Raw Read message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsRawReadInput:
 *
 * The #QmiMessageWmsRawReadInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawReadInput QmiMessageWmsRawReadInput;
GType qmi_message_wms_raw_read_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_READ_INPUT (qmi_message_wms_raw_read_input_get_type ())


/**
 * qmi_message_wms_raw_read_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_sms_on_ims: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean *value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_get_message_mode:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_set_message_mode:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_get_message_memory_storage_id:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_memory_storage_id_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_message_memory_storage_id_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Memory Storage ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_get_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType *value_message_memory_storage_id_storage_type,
    guint32 *value_message_memory_storage_id_memory_index,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_set_message_memory_storage_id:
 * @self: a #QmiMessageWmsRawReadInput.
 * @value_message_memory_storage_id_storage_type: a #QmiWmsStorageType.
 * @value_message_memory_storage_id_memory_index: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Memory Storage ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_input_set_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType value_message_memory_storage_id_storage_type,
    guint32 value_message_memory_storage_id_memory_index,
    GError **error);


/**
 * qmi_message_wms_raw_read_input_ref:
 * @self: a #QmiMessageWmsRawReadInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadInput *qmi_message_wms_raw_read_input_ref (QmiMessageWmsRawReadInput *self);

/**
 * qmi_message_wms_raw_read_input_unref:
 * @self: a #QmiMessageWmsRawReadInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_read_input_unref (QmiMessageWmsRawReadInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawReadInput, qmi_message_wms_raw_read_input_unref)

/**
 * qmi_message_wms_raw_read_input_new:
 *
 * Allocates a new #QmiMessageWmsRawReadInput.
 *
 * Returns: the newly created #QmiMessageWmsRawReadInput. The returned value should be freed with qmi_message_wms_raw_read_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadInput *qmi_message_wms_raw_read_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsRawReadOutput:
 *
 * The #QmiMessageWmsRawReadOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsRawReadOutput QmiMessageWmsRawReadOutput;
GType qmi_message_wms_raw_read_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_RAW_READ_OUTPUT (qmi_message_wms_raw_read_output_get_type ())


/**
 * qmi_message_wms_raw_read_output_get_result:
 * @self: a QmiMessageWmsRawReadOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_output_get_result (
    QmiMessageWmsRawReadOutput *self,
    GError **error);


/**
 * qmi_message_wms_raw_read_output_get_raw_message_data:
 * @self: a #QmiMessageWmsRawReadOutput.
 * @value_raw_message_data_message_tag: (out)(optional): a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @value_raw_message_data_format: (out)(optional): a placeholder for the output #QmiWmsMessageFormat, or %NULL if not required.
 * @value_raw_message_data_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Raw Message Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_raw_read_output_get_raw_message_data (
    QmiMessageWmsRawReadOutput *self,
    QmiWmsMessageTagType *value_raw_message_data_message_tag,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error);


/**
 * qmi_message_wms_raw_read_output_ref:
 * @self: a #QmiMessageWmsRawReadOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadOutput *qmi_message_wms_raw_read_output_ref (QmiMessageWmsRawReadOutput *self);

/**
 * qmi_message_wms_raw_read_output_unref:
 * @self: a #QmiMessageWmsRawReadOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_raw_read_output_unref (QmiMessageWmsRawReadOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsRawReadOutput, qmi_message_wms_raw_read_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Modify Tag */


/**
 * SECTION: qmi-message-wms-modify-tag
 * @title: WMS Modify Tag response
 * @short_description: Methods to manage the WMS Modify Tag response.
 *
 * Collection of methods to create requests and parse responses of the WMS Modify Tag message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsModifyTagInput:
 *
 * The #QmiMessageWmsModifyTagInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsModifyTagInput QmiMessageWmsModifyTagInput;
GType qmi_message_wms_modify_tag_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_MODIFY_TAG_INPUT (qmi_message_wms_modify_tag_input_get_type ())


/**
 * qmi_message_wms_modify_tag_input_get_message_mode:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_get_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);


/**
 * qmi_message_wms_modify_tag_input_set_message_mode:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_set_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);


/**
 * qmi_message_wms_modify_tag_input_get_message_tag:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_tag_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_message_tag_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_message_tag_message_tag: (out)(optional): a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_get_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType *value_message_tag_storage_type,
    guint32 *value_message_tag_memory_index,
    QmiWmsMessageTagType *value_message_tag_message_tag,
    GError **error);


/**
 * qmi_message_wms_modify_tag_input_set_message_tag:
 * @self: a #QmiMessageWmsModifyTagInput.
 * @value_message_tag_storage_type: a #QmiWmsStorageType.
 * @value_message_tag_memory_index: a #guint32.
 * @value_message_tag_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_input_set_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType value_message_tag_storage_type,
    guint32 value_message_tag_memory_index,
    QmiWmsMessageTagType value_message_tag_message_tag,
    GError **error);


/**
 * qmi_message_wms_modify_tag_input_ref:
 * @self: a #QmiMessageWmsModifyTagInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagInput *qmi_message_wms_modify_tag_input_ref (QmiMessageWmsModifyTagInput *self);

/**
 * qmi_message_wms_modify_tag_input_unref:
 * @self: a #QmiMessageWmsModifyTagInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_modify_tag_input_unref (QmiMessageWmsModifyTagInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsModifyTagInput, qmi_message_wms_modify_tag_input_unref)

/**
 * qmi_message_wms_modify_tag_input_new:
 *
 * Allocates a new #QmiMessageWmsModifyTagInput.
 *
 * Returns: the newly created #QmiMessageWmsModifyTagInput. The returned value should be freed with qmi_message_wms_modify_tag_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagInput *qmi_message_wms_modify_tag_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsModifyTagOutput:
 *
 * The #QmiMessageWmsModifyTagOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsModifyTagOutput QmiMessageWmsModifyTagOutput;
GType qmi_message_wms_modify_tag_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_MODIFY_TAG_OUTPUT (qmi_message_wms_modify_tag_output_get_type ())


/**
 * qmi_message_wms_modify_tag_output_get_result:
 * @self: a QmiMessageWmsModifyTagOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_modify_tag_output_get_result (
    QmiMessageWmsModifyTagOutput *self,
    GError **error);


/**
 * qmi_message_wms_modify_tag_output_ref:
 * @self: a #QmiMessageWmsModifyTagOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagOutput *qmi_message_wms_modify_tag_output_ref (QmiMessageWmsModifyTagOutput *self);

/**
 * qmi_message_wms_modify_tag_output_unref:
 * @self: a #QmiMessageWmsModifyTagOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_modify_tag_output_unref (QmiMessageWmsModifyTagOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsModifyTagOutput, qmi_message_wms_modify_tag_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Delete */


/**
 * SECTION: qmi-message-wms-delete
 * @title: WMS Delete response
 * @short_description: Methods to manage the WMS Delete response.
 *
 * Collection of methods to create requests and parse responses of the WMS Delete message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsDeleteInput:
 *
 * The #QmiMessageWmsDeleteInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsDeleteInput QmiMessageWmsDeleteInput;
GType qmi_message_wms_delete_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_DELETE_INPUT (qmi_message_wms_delete_input_get_type ())


/**
 * qmi_message_wms_delete_input_get_message_mode:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);


/**
 * qmi_message_wms_delete_input_set_message_mode:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);


/**
 * qmi_message_wms_delete_input_get_message_tag:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_tag: (out)(optional): a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error);


/**
 * qmi_message_wms_delete_input_set_message_tag:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error);


/**
 * qmi_message_wms_delete_input_get_memory_index:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 *value_memory_index,
    GError **error);


/**
 * qmi_message_wms_delete_input_set_memory_index:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_index: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Memory Index' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 value_memory_index,
    GError **error);


/**
 * qmi_message_wms_delete_input_get_memory_storage:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_storage: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Memory Storage' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_get_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType *value_memory_storage,
    GError **error);


/**
 * qmi_message_wms_delete_input_set_memory_storage:
 * @self: a #QmiMessageWmsDeleteInput.
 * @value_memory_storage: a #QmiWmsStorageType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Memory Storage' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_input_set_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType value_memory_storage,
    GError **error);


/**
 * qmi_message_wms_delete_input_ref:
 * @self: a #QmiMessageWmsDeleteInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteInput *qmi_message_wms_delete_input_ref (QmiMessageWmsDeleteInput *self);

/**
 * qmi_message_wms_delete_input_unref:
 * @self: a #QmiMessageWmsDeleteInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_delete_input_unref (QmiMessageWmsDeleteInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsDeleteInput, qmi_message_wms_delete_input_unref)

/**
 * qmi_message_wms_delete_input_new:
 *
 * Allocates a new #QmiMessageWmsDeleteInput.
 *
 * Returns: the newly created #QmiMessageWmsDeleteInput. The returned value should be freed with qmi_message_wms_delete_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteInput *qmi_message_wms_delete_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsDeleteOutput:
 *
 * The #QmiMessageWmsDeleteOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsDeleteOutput QmiMessageWmsDeleteOutput;
GType qmi_message_wms_delete_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_DELETE_OUTPUT (qmi_message_wms_delete_output_get_type ())


/**
 * qmi_message_wms_delete_output_get_result:
 * @self: a QmiMessageWmsDeleteOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_delete_output_get_result (
    QmiMessageWmsDeleteOutput *self,
    GError **error);


/**
 * qmi_message_wms_delete_output_ref:
 * @self: a #QmiMessageWmsDeleteOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteOutput *qmi_message_wms_delete_output_ref (QmiMessageWmsDeleteOutput *self);

/**
 * qmi_message_wms_delete_output_unref:
 * @self: a #QmiMessageWmsDeleteOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_delete_output_unref (QmiMessageWmsDeleteOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsDeleteOutput, qmi_message_wms_delete_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Message Protocol */


/**
 * SECTION: qmi-message-wms-get-message-protocol
 * @title: WMS Get Message Protocol response
 * @short_description: Methods to manage the WMS Get Message Protocol response.
 *
 * Collection of methods to create requests and parse responses of the WMS Get Message Protocol message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWmsGetMessageProtocolOutput:
 *
 * The #QmiMessageWmsGetMessageProtocolOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetMessageProtocolOutput QmiMessageWmsGetMessageProtocolOutput;
GType qmi_message_wms_get_message_protocol_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT (qmi_message_wms_get_message_protocol_output_get_type ())


/**
 * qmi_message_wms_get_message_protocol_output_get_result:
 * @self: a QmiMessageWmsGetMessageProtocolOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_message_protocol_output_get_result (
    QmiMessageWmsGetMessageProtocolOutput *self,
    GError **error);


/**
 * qmi_message_wms_get_message_protocol_output_get_message_protocol:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 * @value_message_protocol: (out)(optional): a placeholder for the output #QmiWmsMessageProtocol, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Protocol' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_message_protocol_output_get_message_protocol (
    QmiMessageWmsGetMessageProtocolOutput *self,
    QmiWmsMessageProtocol *value_message_protocol,
    GError **error);


/**
 * qmi_message_wms_get_message_protocol_output_ref:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsGetMessageProtocolOutput *qmi_message_wms_get_message_protocol_output_ref (QmiMessageWmsGetMessageProtocolOutput *self);

/**
 * qmi_message_wms_get_message_protocol_output_unref:
 * @self: a #QmiMessageWmsGetMessageProtocolOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_get_message_protocol_output_unref (QmiMessageWmsGetMessageProtocolOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsGetMessageProtocolOutput, qmi_message_wms_get_message_protocol_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS List Messages */


/**
 * SECTION: qmi-message-wms-list-messages
 * @title: WMS List Messages response
 * @short_description: Methods to manage the WMS List Messages response.
 *
 * Collection of methods to create requests and parse responses of the WMS List Messages message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsListMessagesInput:
 *
 * The #QmiMessageWmsListMessagesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesInput QmiMessageWmsListMessagesInput;
GType qmi_message_wms_list_messages_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_LIST_MESSAGES_INPUT (qmi_message_wms_list_messages_input_get_type ())


/**
 * qmi_message_wms_list_messages_input_get_message_mode:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_set_message_mode:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_get_message_tag:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_tag: (out)(optional): a placeholder for the output #QmiWmsMessageTagType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Tag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_set_message_tag:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_message_tag: a #QmiWmsMessageTagType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message Tag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_get_storage_type:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Storage Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_get_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType *value_storage_type,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_set_storage_type:
 * @self: a #QmiMessageWmsListMessagesInput.
 * @value_storage_type: a #QmiWmsStorageType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Storage Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_input_set_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType value_storage_type,
    GError **error);


/**
 * qmi_message_wms_list_messages_input_ref:
 * @self: a #QmiMessageWmsListMessagesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesInput *qmi_message_wms_list_messages_input_ref (QmiMessageWmsListMessagesInput *self);

/**
 * qmi_message_wms_list_messages_input_unref:
 * @self: a #QmiMessageWmsListMessagesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_list_messages_input_unref (QmiMessageWmsListMessagesInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsListMessagesInput, qmi_message_wms_list_messages_input_unref)

/**
 * qmi_message_wms_list_messages_input_new:
 *
 * Allocates a new #QmiMessageWmsListMessagesInput.
 *
 * Returns: the newly created #QmiMessageWmsListMessagesInput. The returned value should be freed with qmi_message_wms_list_messages_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesInput *qmi_message_wms_list_messages_input_new (void);

/* --- Output -- */


/**
 * QmiMessageWmsListMessagesOutputMessageListElement:
 * @memory_index: a #guint32.
 * @message_tag: a #QmiWmsMessageTagType.
 *
 * A QmiMessageWmsListMessagesOutputMessageListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesOutputMessageListElement {
    guint32 memory_index;
    QmiWmsMessageTagType message_tag;
} QmiMessageWmsListMessagesOutputMessageListElement;

GType qmi_message_wms_list_messages_output_message_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWmsListMessagesOutput:
 *
 * The #QmiMessageWmsListMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsListMessagesOutput QmiMessageWmsListMessagesOutput;
GType qmi_message_wms_list_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_LIST_MESSAGES_OUTPUT (qmi_message_wms_list_messages_output_get_type ())


/**
 * qmi_message_wms_list_messages_output_get_result:
 * @self: a QmiMessageWmsListMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_output_get_result (
    QmiMessageWmsListMessagesOutput *self,
    GError **error);


/**
 * qmi_message_wms_list_messages_output_get_message_list: (skip)
 * @self: a #QmiMessageWmsListMessagesOutput.
 * @value_message_list: (out)(optional)(element-type QmiMessageWmsListMessagesOutputMessageListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageWmsListMessagesOutputMessageListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_list_messages_output_get_message_list (
    QmiMessageWmsListMessagesOutput *self,
    GArray **value_message_list,
    GError **error);


/**
 * qmi_message_wms_list_messages_output_get_message_list_gir: (rename-to qmi_message_wms_list_messages_output_get_message_list)
 * @self: a #QmiMessageWmsListMessagesOutput.
 * @value_message_list_ptr: (out)(optional)(element-type QmiMessageWmsListMessagesOutputMessageListElement)(transfer none): a placeholder for the output array of #QmiMessageWmsListMessagesOutputMessageListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message List' field from @self.
 *
 * Version of qmi_message_wms_list_messages_output_get_message_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wms_list_messages_output_get_message_list_gir (
    QmiMessageWmsListMessagesOutput *self,
    GPtrArray **value_message_list_ptr,
    GError **error);


/**
 * qmi_message_wms_list_messages_output_ref:
 * @self: a #QmiMessageWmsListMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesOutput *qmi_message_wms_list_messages_output_ref (QmiMessageWmsListMessagesOutput *self);

/**
 * qmi_message_wms_list_messages_output_unref:
 * @self: a #QmiMessageWmsListMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_list_messages_output_unref (QmiMessageWmsListMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsListMessagesOutput, qmi_message_wms_list_messages_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Routes */


/**
 * SECTION: qmi-message-wms-set-routes
 * @title: WMS Set Routes response
 * @short_description: Methods to manage the WMS Set Routes response.
 *
 * Collection of methods to create requests and parse responses of the WMS Set Routes message.
 */

/* --- Input -- */


/**
 * QmiMessageWmsSetRoutesInputRouteListElement:
 * @message_type: a #QmiWmsMessageType.
 * @message_class: a #QmiWmsMessageClass.
 * @storage: a #QmiWmsStorageType.
 * @receipt_action: a #QmiWmsReceiptAction.
 *
 * A QmiMessageWmsSetRoutesInputRouteListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesInputRouteListElement {
    QmiWmsMessageType message_type;
    QmiWmsMessageClass message_class;
    QmiWmsStorageType storage;
    QmiWmsReceiptAction receipt_action;
} QmiMessageWmsSetRoutesInputRouteListElement;

GType qmi_message_wms_set_routes_input_route_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWmsSetRoutesInput:
 *
 * The #QmiMessageWmsSetRoutesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesInput QmiMessageWmsSetRoutesInput;
GType qmi_message_wms_set_routes_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_ROUTES_INPUT (qmi_message_wms_set_routes_input_get_type ())


/**
 * qmi_message_wms_set_routes_input_get_transfer_status_report:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_transfer_status_report: (out)(optional): a placeholder for the output #QmiWmsTransferIndication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Status Report' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_get_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_set_transfer_status_report:
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_transfer_status_report: a #QmiWmsTransferIndication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Transfer Status Report' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_set_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication value_transfer_status_report,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_get_route_list: (skip)
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list: (out)(optional)(element-type QmiMessageWmsSetRoutesInputRouteListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageWmsSetRoutesInputRouteListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_get_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray **value_route_list,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_get_route_list_gir: (rename-to qmi_message_wms_set_routes_input_get_route_list)
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list_ptr: (out)(optional)(element-type QmiMessageWmsSetRoutesInputRouteListElement)(transfer none): a placeholder for the output array of #QmiMessageWmsSetRoutesInputRouteListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Version of qmi_message_wms_set_routes_input_get_route_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wms_set_routes_input_get_route_list_gir (
    QmiMessageWmsSetRoutesInput *self,
    GPtrArray **value_route_list_ptr,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_set_route_list: (skip)
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list: (in)(element-type QmiMessageWmsSetRoutesInputRouteListElement)(transfer none): a #GArray of #QmiMessageWmsSetRoutesInputRouteListElement elements. A new reference to @value_route_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Route List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_input_set_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray *value_route_list,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_set_route_list_gir: (rename-to qmi_message_wms_set_routes_input_set_route_list)
 * @self: a #QmiMessageWmsSetRoutesInput.
 * @value_route_list_ptr: (in)(element-type QmiMessageWmsSetRoutesInputRouteListElement)(transfer none): array of #QmiMessageWmsSetRoutesInputRouteListElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Route List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wms_set_routes_input_set_route_list_gir (
    QmiMessageWmsSetRoutesInput *self,
    GPtrArray *value_route_list_ptr,
    GError **error);


/**
 * qmi_message_wms_set_routes_input_ref:
 * @self: a #QmiMessageWmsSetRoutesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesInput *qmi_message_wms_set_routes_input_ref (QmiMessageWmsSetRoutesInput *self);

/**
 * qmi_message_wms_set_routes_input_unref:
 * @self: a #QmiMessageWmsSetRoutesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_routes_input_unref (QmiMessageWmsSetRoutesInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSetRoutesInput, qmi_message_wms_set_routes_input_unref)

/**
 * qmi_message_wms_set_routes_input_new:
 *
 * Allocates a new #QmiMessageWmsSetRoutesInput.
 *
 * Returns: the newly created #QmiMessageWmsSetRoutesInput. The returned value should be freed with qmi_message_wms_set_routes_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesInput *qmi_message_wms_set_routes_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSetRoutesOutput:
 *
 * The #QmiMessageWmsSetRoutesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSetRoutesOutput QmiMessageWmsSetRoutesOutput;
GType qmi_message_wms_set_routes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SET_ROUTES_OUTPUT (qmi_message_wms_set_routes_output_get_type ())


/**
 * qmi_message_wms_set_routes_output_get_result:
 * @self: a QmiMessageWmsSetRoutesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_set_routes_output_get_result (
    QmiMessageWmsSetRoutesOutput *self,
    GError **error);


/**
 * qmi_message_wms_set_routes_output_ref:
 * @self: a #QmiMessageWmsSetRoutesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesOutput *qmi_message_wms_set_routes_output_ref (QmiMessageWmsSetRoutesOutput *self);

/**
 * qmi_message_wms_set_routes_output_unref:
 * @self: a #QmiMessageWmsSetRoutesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_set_routes_output_unref (QmiMessageWmsSetRoutesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSetRoutesOutput, qmi_message_wms_set_routes_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Routes */


/**
 * SECTION: qmi-message-wms-get-routes
 * @title: WMS Get Routes response
 * @short_description: Methods to manage the WMS Get Routes response.
 *
 * Collection of methods to create requests and parse responses of the WMS Get Routes message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageWmsGetRoutesOutputRouteListElement:
 * @message_type: a #QmiWmsMessageType.
 * @message_class: a #QmiWmsMessageClass.
 * @storage: a #QmiWmsStorageType.
 * @receipt_action: a #QmiWmsReceiptAction.
 *
 * A QmiMessageWmsGetRoutesOutputRouteListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetRoutesOutputRouteListElement {
    QmiWmsMessageType message_type;
    QmiWmsMessageClass message_class;
    QmiWmsStorageType storage;
    QmiWmsReceiptAction receipt_action;
} QmiMessageWmsGetRoutesOutputRouteListElement;

GType qmi_message_wms_get_routes_output_route_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWmsGetRoutesOutput:
 *
 * The #QmiMessageWmsGetRoutesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsGetRoutesOutput QmiMessageWmsGetRoutesOutput;
GType qmi_message_wms_get_routes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_GET_ROUTES_OUTPUT (qmi_message_wms_get_routes_output_get_type ())


/**
 * qmi_message_wms_get_routes_output_get_result:
 * @self: a QmiMessageWmsGetRoutesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_result (
    QmiMessageWmsGetRoutesOutput *self,
    GError **error);


/**
 * qmi_message_wms_get_routes_output_get_route_list: (skip)
 * @self: a #QmiMessageWmsGetRoutesOutput.
 * @value_route_list: (out)(optional)(element-type QmiMessageWmsGetRoutesOutputRouteListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageWmsGetRoutesOutputRouteListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_route_list (
    QmiMessageWmsGetRoutesOutput *self,
    GArray **value_route_list,
    GError **error);


/**
 * qmi_message_wms_get_routes_output_get_route_list_gir: (rename-to qmi_message_wms_get_routes_output_get_route_list)
 * @self: a #QmiMessageWmsGetRoutesOutput.
 * @value_route_list_ptr: (out)(optional)(element-type QmiMessageWmsGetRoutesOutputRouteListElement)(transfer none): a placeholder for the output array of #QmiMessageWmsGetRoutesOutputRouteListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Route List' field from @self.
 *
 * Version of qmi_message_wms_get_routes_output_get_route_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wms_get_routes_output_get_route_list_gir (
    QmiMessageWmsGetRoutesOutput *self,
    GPtrArray **value_route_list_ptr,
    GError **error);


/**
 * qmi_message_wms_get_routes_output_get_transfer_status_report:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 * @value_transfer_status_report: (out)(optional): a placeholder for the output #QmiWmsTransferIndication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Status Report' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_get_routes_output_get_transfer_status_report (
    QmiMessageWmsGetRoutesOutput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error);


/**
 * qmi_message_wms_get_routes_output_ref:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsGetRoutesOutput *qmi_message_wms_get_routes_output_ref (QmiMessageWmsGetRoutesOutput *self);

/**
 * qmi_message_wms_get_routes_output_unref:
 * @self: a #QmiMessageWmsGetRoutesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_get_routes_output_unref (QmiMessageWmsGetRoutesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsGetRoutesOutput, qmi_message_wms_get_routes_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Send Ack */


/**
 * SECTION: qmi-message-wms-send-ack
 * @title: WMS Send Ack response
 * @short_description: Methods to manage the WMS Send Ack response.
 *
 * Collection of methods to create requests and parse responses of the WMS Send Ack message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsSendAckInput:
 *
 * The #QmiMessageWmsSendAckInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWmsSendAckInput QmiMessageWmsSendAckInput;
GType qmi_message_wms_send_ack_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_ACK_INPUT (qmi_message_wms_send_ack_input_get_type ())


/**
 * qmi_message_wms_send_ack_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_sms_on_ims: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_get_sms_on_ims (
    QmiMessageWmsSendAckInput *self,
    gboolean *value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_set_sms_on_ims (
    QmiMessageWmsSendAckInput *self,
    gboolean value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_get_3gpp_failure_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_3gpp_failure_information_rp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsRpCause, or %NULL if not required.
 * @value_3gpp_failure_information_tp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsTpCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '3GPP Failure Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_get_3gpp_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsGsmUmtsRpCause *value_3gpp_failure_information_rp_cause,
    QmiWmsGsmUmtsTpCause *value_3gpp_failure_information_tp_cause,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_set_3gpp_failure_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_3gpp_failure_information_rp_cause: a #QmiWmsGsmUmtsRpCause.
 * @value_3gpp_failure_information_tp_cause: a #QmiWmsGsmUmtsTpCause.
 * @error: Return location for error or %NULL.
 *
 * Set the '3GPP Failure Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_set_3gpp_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsGsmUmtsRpCause value_3gpp_failure_information_rp_cause,
    QmiWmsGsmUmtsTpCause value_3gpp_failure_information_tp_cause,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_get_3gpp2_failure_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_3gpp2_failure_information_error_class: (out)(optional): a placeholder for the output #QmiWmsCdmaErrorClass, or %NULL if not required.
 * @value_3gpp2_failure_information_cause_code: (out)(optional): a placeholder for the output #QmiWmsCdmaCauseCode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '3GPP2 Failure Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_get_3gpp2_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsCdmaErrorClass *value_3gpp2_failure_information_error_class,
    QmiWmsCdmaCauseCode *value_3gpp2_failure_information_cause_code,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_set_3gpp2_failure_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_3gpp2_failure_information_error_class: a #QmiWmsCdmaErrorClass.
 * @value_3gpp2_failure_information_cause_code: a #QmiWmsCdmaCauseCode.
 * @error: Return location for error or %NULL.
 *
 * Set the '3GPP2 Failure Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_set_3gpp2_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsCdmaErrorClass value_3gpp2_failure_information_error_class,
    QmiWmsCdmaCauseCode value_3gpp2_failure_information_cause_code,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_get_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_information_transaction_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_information_message_protocol: (out)(optional): a placeholder for the output #QmiWmsMessageProtocol, or %NULL if not required.
 * @value_information_success: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_get_information (
    QmiMessageWmsSendAckInput *self,
    guint32 *value_information_transaction_id,
    QmiWmsMessageProtocol *value_information_message_protocol,
    gboolean *value_information_success,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_set_information:
 * @self: a #QmiMessageWmsSendAckInput.
 * @value_information_transaction_id: a #guint32.
 * @value_information_message_protocol: a #QmiWmsMessageProtocol.
 * @value_information_success: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_input_set_information (
    QmiMessageWmsSendAckInput *self,
    guint32 value_information_transaction_id,
    QmiWmsMessageProtocol value_information_message_protocol,
    gboolean value_information_success,
    GError **error);


/**
 * qmi_message_wms_send_ack_input_ref:
 * @self: a #QmiMessageWmsSendAckInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWmsSendAckInput *qmi_message_wms_send_ack_input_ref (QmiMessageWmsSendAckInput *self);

/**
 * qmi_message_wms_send_ack_input_unref:
 * @self: a #QmiMessageWmsSendAckInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wms_send_ack_input_unref (QmiMessageWmsSendAckInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSendAckInput, qmi_message_wms_send_ack_input_unref)

/**
 * qmi_message_wms_send_ack_input_new:
 *
 * Allocates a new #QmiMessageWmsSendAckInput.
 *
 * Returns: the newly created #QmiMessageWmsSendAckInput. The returned value should be freed with qmi_message_wms_send_ack_input_unref().
 *
 * Since: 1.28
 */
QmiMessageWmsSendAckInput *qmi_message_wms_send_ack_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSendAckOutput:
 *
 * The #QmiMessageWmsSendAckOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWmsSendAckOutput QmiMessageWmsSendAckOutput;
GType qmi_message_wms_send_ack_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_ACK_OUTPUT (qmi_message_wms_send_ack_output_get_type ())


/**
 * qmi_message_wms_send_ack_output_get_result:
 * @self: a QmiMessageWmsSendAckOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_output_get_result (
    QmiMessageWmsSendAckOutput *self,
    GError **error);


/**
 * qmi_message_wms_send_ack_output_get_failure_cause:
 * @self: a #QmiMessageWmsSendAckOutput.
 * @value_failure_cause: (out)(optional): a placeholder for the output #QmiWmsAckFailureCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Failure Cause' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wms_send_ack_output_get_failure_cause (
    QmiMessageWmsSendAckOutput *self,
    QmiWmsAckFailureCause *value_failure_cause,
    GError **error);


/**
 * qmi_message_wms_send_ack_output_ref:
 * @self: a #QmiMessageWmsSendAckOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWmsSendAckOutput *qmi_message_wms_send_ack_output_ref (QmiMessageWmsSendAckOutput *self);

/**
 * qmi_message_wms_send_ack_output_unref:
 * @self: a #QmiMessageWmsSendAckOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wms_send_ack_output_unref (QmiMessageWmsSendAckOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSendAckOutput, qmi_message_wms_send_ack_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Send From Memory Storage */


/**
 * SECTION: qmi-message-wms-send-from-memory-storage
 * @title: WMS Send From Memory Storage response
 * @short_description: Methods to manage the WMS Send From Memory Storage response.
 *
 * Collection of methods to create requests and parse responses of the WMS Send From Memory Storage message.
 */

/* --- Input -- */

/**
 * QmiMessageWmsSendFromMemoryStorageInput:
 *
 * The #QmiMessageWmsSendFromMemoryStorageInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSendFromMemoryStorageInput QmiMessageWmsSendFromMemoryStorageInput;
GType qmi_message_wms_send_from_memory_storage_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT (qmi_message_wms_send_from_memory_storage_input_get_type ())


/**
 * qmi_message_wms_send_from_memory_storage_input_get_sms_on_ims:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_sms_on_ims: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SMS on IMS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_get_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean *value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_input_set_sms_on_ims:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_sms_on_ims: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SMS on IMS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_set_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean value_sms_on_ims,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_input_get_information:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_information_storage_type: (out)(optional): a placeholder for the output #QmiWmsStorageType, or %NULL if not required.
 * @value_information_memory_index: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_information_message_mode: (out)(optional): a placeholder for the output #QmiWmsMessageMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_get_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType *value_information_storage_type,
    guint32 *value_information_memory_index,
    QmiWmsMessageMode *value_information_message_mode,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_input_set_information:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @value_information_storage_type: a #QmiWmsStorageType.
 * @value_information_memory_index: a #guint32.
 * @value_information_message_mode: a #QmiWmsMessageMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_input_set_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType value_information_storage_type,
    guint32 value_information_memory_index,
    QmiWmsMessageMode value_information_message_mode,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_input_ref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageInput *qmi_message_wms_send_from_memory_storage_input_ref (QmiMessageWmsSendFromMemoryStorageInput *self);

/**
 * qmi_message_wms_send_from_memory_storage_input_unref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_send_from_memory_storage_input_unref (QmiMessageWmsSendFromMemoryStorageInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSendFromMemoryStorageInput, qmi_message_wms_send_from_memory_storage_input_unref)

/**
 * qmi_message_wms_send_from_memory_storage_input_new:
 *
 * Allocates a new #QmiMessageWmsSendFromMemoryStorageInput.
 *
 * Returns: the newly created #QmiMessageWmsSendFromMemoryStorageInput. The returned value should be freed with qmi_message_wms_send_from_memory_storage_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageInput *qmi_message_wms_send_from_memory_storage_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWmsSendFromMemoryStorageOutput:
 *
 * The #QmiMessageWmsSendFromMemoryStorageOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWmsSendFromMemoryStorageOutput QmiMessageWmsSendFromMemoryStorageOutput;
GType qmi_message_wms_send_from_memory_storage_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT (qmi_message_wms_send_from_memory_storage_output_get_type ())


/**
 * qmi_message_wms_send_from_memory_storage_output_get_result:
 * @self: a QmiMessageWmsSendFromMemoryStorageOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_result (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_get_message_id:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_message_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_message_id (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    guint16 *value_message_id,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_get_cdma_cause_code:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_cdma_cause_code: (out)(optional): a placeholder for the output #QmiWmsCdmaCauseCode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Cause Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_cdma_cause_code (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_get_cdma_error_class:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_cdma_error_class: (out)(optional): a placeholder for the output #QmiWmsCdmaErrorClass, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Error Class' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_cdma_error_class (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_get_gsm_wcdma_cause_info:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_gsm_wcdma_cause_info_rp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsRpCause, or %NULL if not required.
 * @value_gsm_wcdma_cause_info_tp_cause: (out)(optional): a placeholder for the output #QmiWmsGsmUmtsTpCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Cause Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_get_message_delivery_failure_type:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 * @value_message_delivery_failure_type: (out)(optional): a placeholder for the output #QmiWmsMessageDeliveryFailureType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message Delivery Failure Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wms_send_from_memory_storage_output_get_message_delivery_failure_type (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error);


/**
 * qmi_message_wms_send_from_memory_storage_output_ref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageOutput *qmi_message_wms_send_from_memory_storage_output_ref (QmiMessageWmsSendFromMemoryStorageOutput *self);

/**
 * qmi_message_wms_send_from_memory_storage_output_unref:
 * @self: a #QmiMessageWmsSendFromMemoryStorageOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wms_send_from_memory_storage_output_unref (QmiMessageWmsSendFromMemoryStorageOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWmsSendFromMemoryStorageOutput, qmi_message_wms_send_from_memory_storage_output_unref)

/*****************************************************************************/
/* Service-specific utils: WMS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wms_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_WMS

/*****************************************************************************/
/* CLIENT: QMI Client WMS */

#define QMI_TYPE_CLIENT_WMS            (qmi_client_wms_get_type ())
#define QMI_CLIENT_WMS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WMS, QmiClientWms))
#define QMI_CLIENT_WMS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WMS, QmiClientWmsClass))
#define QMI_IS_CLIENT_WMS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WMS))
#define QMI_IS_CLIENT_WMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WMS))
#define QMI_CLIENT_WMS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WMS, QmiClientWmsClass))

typedef struct _QmiClientWms QmiClientWms;
typedef struct _QmiClientWmsClass QmiClientWmsClass;

/**
 * QmiClientWms:
 *
 * The #QmiClientWms structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientWms {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWmsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wms_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientWms, g_object_unref)

/**
 * qmi_client_wms_reset:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Reset request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_reset (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_reset_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_reset().
 *
 * Returns: a #QmiMessageWmsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsResetOutput *qmi_client_wms_reset_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_set_event_report:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_set_event_report (
    QmiClientWms *self,
    QmiMessageWmsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_set_event_report_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_set_event_report().
 *
 * Returns: a #QmiMessageWmsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetEventReportOutput *qmi_client_wms_set_event_report_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_supported_messages:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Supported Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wms_get_supported_messages (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_supported_messages_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_supported_messages().
 *
 * Returns: a #QmiMessageWmsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWmsGetSupportedMessagesOutput *qmi_client_wms_get_supported_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_send:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawSendInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Send request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_send_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_send (
    QmiClientWms *self,
    QmiMessageWmsRawSendInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_send_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_send().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_send().
 *
 * Returns: a #QmiMessageWmsRawSendOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_send_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawSendOutput *qmi_client_wms_raw_send_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_write:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawWriteInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Write request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_write_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_write (
    QmiClientWms *self,
    QmiMessageWmsRawWriteInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_write_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_write().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_write().
 *
 * Returns: a #QmiMessageWmsRawWriteOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_write_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawWriteOutput *qmi_client_wms_raw_write_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_raw_read:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsRawReadInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Raw Read request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_raw_read_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_raw_read (
    QmiClientWms *self,
    QmiMessageWmsRawReadInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_raw_read_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_raw_read().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_raw_read().
 *
 * Returns: a #QmiMessageWmsRawReadOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_raw_read_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsRawReadOutput *qmi_client_wms_raw_read_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_modify_tag:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsModifyTagInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Modify Tag request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_modify_tag_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_modify_tag (
    QmiClientWms *self,
    QmiMessageWmsModifyTagInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_modify_tag_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_modify_tag().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_modify_tag().
 *
 * Returns: a #QmiMessageWmsModifyTagOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_modify_tag_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsModifyTagOutput *qmi_client_wms_modify_tag_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_delete:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsDeleteInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_delete_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_delete (
    QmiClientWms *self,
    QmiMessageWmsDeleteInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_delete_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_delete().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_delete().
 *
 * Returns: a #QmiMessageWmsDeleteOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_delete_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsDeleteOutput *qmi_client_wms_delete_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_message_protocol:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Message Protocol request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_get_message_protocol_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_get_message_protocol (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_message_protocol_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_message_protocol().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_message_protocol().
 *
 * Returns: a #QmiMessageWmsGetMessageProtocolOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_message_protocol_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsGetMessageProtocolOutput *qmi_client_wms_get_message_protocol_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_list_messages:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsListMessagesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a List Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_list_messages_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_list_messages (
    QmiClientWms *self,
    QmiMessageWmsListMessagesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_list_messages_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_list_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_list_messages().
 *
 * Returns: a #QmiMessageWmsListMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_list_messages_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsListMessagesOutput *qmi_client_wms_list_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_set_routes:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSetRoutesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Routes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_set_routes_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_set_routes (
    QmiClientWms *self,
    QmiMessageWmsSetRoutesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_set_routes_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_set_routes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_set_routes().
 *
 * Returns: a #QmiMessageWmsSetRoutesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_set_routes_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSetRoutesOutput *qmi_client_wms_set_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_get_routes:
 * @self: a #QmiClientWms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Routes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_get_routes_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_get_routes (
    QmiClientWms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_get_routes_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_get_routes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_get_routes().
 *
 * Returns: a #QmiMessageWmsGetRoutesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_get_routes_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsGetRoutesOutput *qmi_client_wms_get_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_send_ack:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSendAckInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Send Ack request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_send_ack_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wms_send_ack (
    QmiClientWms *self,
    QmiMessageWmsSendAckInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_send_ack_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_send_ack().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_send_ack().
 *
 * Returns: a #QmiMessageWmsSendAckOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_send_ack_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWmsSendAckOutput *qmi_client_wms_send_ack_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wms_send_from_memory_storage:
 * @self: a #QmiClientWms.
 * @input: a #QmiMessageWmsSendFromMemoryStorageInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Send From Memory Storage request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wms_send_from_memory_storage_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wms_send_from_memory_storage (
    QmiClientWms *self,
    QmiMessageWmsSendFromMemoryStorageInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wms_send_from_memory_storage_finish:
 * @self: a #QmiClientWms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wms_send_from_memory_storage().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wms_send_from_memory_storage().
 *
 * Returns: a #QmiMessageWmsSendFromMemoryStorageOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wms_send_from_memory_storage_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWmsSendFromMemoryStorageOutput *qmi_client_wms_send_from_memory_storage_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WMS__ */
