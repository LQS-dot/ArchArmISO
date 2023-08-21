
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
#include "qmi-enums-qos.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_QOS__
#define __LIBQMI_GLIB_QMI_QOS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_QOS_RESET
#define HAVE_QMI_MESSAGE_QOS_GET_FLOW_STATUS
#define HAVE_QMI_MESSAGE_QOS_GET_NETWORK_STATUS
#define HAVE_QMI_MESSAGE_QOS_SWI_READ_DATA_STATS
#define HAVE_QMI_INDICATION_QOS_FLOW_STATUS
#define HAVE_QMI_INDICATION_QOS_NETWORK_STATUS

/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Flow Status */


/**
 * SECTION: qmi-indication-qos-flow-status
 * @title: QOS Flow Status indication
 * @short_description: Methods to manage the QOS Flow Status indication.
 *
 * Collection of methods to parse indications of the QOS Flow Status message.
 */

/* --- Output -- */

/**
 * QmiIndicationQosFlowStatusOutput:
 *
 * The #QmiIndicationQosFlowStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationQosFlowStatusOutput QmiIndicationQosFlowStatusOutput;
GType qmi_indication_qos_flow_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_QOS_FLOW_STATUS_OUTPUT (qmi_indication_qos_flow_status_output_get_type ())


/**
 * qmi_indication_qos_flow_status_output_get_value:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 * @value_value_qos_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_value_status: (out)(optional): a placeholder for the output #QmiQosStatus, or %NULL if not required.
 * @value_value_event: (out)(optional): a placeholder for the output #QmiQosEvent, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_qos_flow_status_output_get_value (
    QmiIndicationQosFlowStatusOutput *self,
    guint32 *value_value_qos_id,
    QmiQosStatus *value_value_status,
    QmiQosEvent *value_value_event,
    GError **error);


/**
 * qmi_indication_qos_flow_status_output_ref:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationQosFlowStatusOutput *qmi_indication_qos_flow_status_output_ref (QmiIndicationQosFlowStatusOutput *self);

/**
 * qmi_indication_qos_flow_status_output_unref:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_qos_flow_status_output_unref (QmiIndicationQosFlowStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationQosFlowStatusOutput, qmi_indication_qos_flow_status_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Network Status */


/**
 * SECTION: qmi-indication-qos-network-status
 * @title: QOS Network Status indication
 * @short_description: Methods to manage the QOS Network Status indication.
 *
 * Collection of methods to parse indications of the QOS Network Status message.
 */

/* --- Output -- */

/**
 * QmiIndicationQosNetworkStatusOutput:
 *
 * The #QmiIndicationQosNetworkStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationQosNetworkStatusOutput QmiIndicationQosNetworkStatusOutput;
GType qmi_indication_qos_network_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_QOS_NETWORK_STATUS_OUTPUT (qmi_indication_qos_network_status_output_get_type ())


/**
 * qmi_indication_qos_network_status_output_get_qos_supported:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 * @value_qos_supported: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Supported' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_qos_network_status_output_get_qos_supported (
    QmiIndicationQosNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error);


/**
 * qmi_indication_qos_network_status_output_ref:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationQosNetworkStatusOutput *qmi_indication_qos_network_status_output_ref (QmiIndicationQosNetworkStatusOutput *self);

/**
 * qmi_indication_qos_network_status_output_unref:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_qos_network_status_output_unref (QmiIndicationQosNetworkStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationQosNetworkStatusOutput, qmi_indication_qos_network_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Reset */


/**
 * SECTION: qmi-message-qos-reset
 * @title: QOS Reset response
 * @short_description: Methods to manage the QOS Reset response.
 *
 * Collection of methods to create requests and parse responses of the QOS Reset message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageQosResetOutput:
 *
 * The #QmiMessageQosResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosResetOutput QmiMessageQosResetOutput;
GType qmi_message_qos_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_RESET_OUTPUT (qmi_message_qos_reset_output_get_type ())


/**
 * qmi_message_qos_reset_output_get_result:
 * @self: a QmiMessageQosResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_reset_output_get_result (
    QmiMessageQosResetOutput *self,
    GError **error);


/**
 * qmi_message_qos_reset_output_ref:
 * @self: a #QmiMessageQosResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosResetOutput *qmi_message_qos_reset_output_ref (QmiMessageQosResetOutput *self);

/**
 * qmi_message_qos_reset_output_unref:
 * @self: a #QmiMessageQosResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_reset_output_unref (QmiMessageQosResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosResetOutput, qmi_message_qos_reset_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Flow Status */


/**
 * SECTION: qmi-message-qos-get-flow-status
 * @title: QOS Get Flow Status response
 * @short_description: Methods to manage the QOS Get Flow Status response.
 *
 * Collection of methods to create requests and parse responses of the QOS Get Flow Status message.
 */

/* --- Input -- */

/**
 * QmiMessageQosGetFlowStatusInput:
 *
 * The #QmiMessageQosGetFlowStatusInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetFlowStatusInput QmiMessageQosGetFlowStatusInput;
GType qmi_message_qos_get_flow_status_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_FLOW_STATUS_INPUT (qmi_message_qos_get_flow_status_input_get_type ())


/**
 * qmi_message_qos_get_flow_status_input_get_qos_id:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 * @value_qos_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Qos Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_input_get_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 *value_qos_id,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_input_set_qos_id:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 * @value_qos_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Qos Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_input_set_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 value_qos_id,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_input_ref:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusInput *qmi_message_qos_get_flow_status_input_ref (QmiMessageQosGetFlowStatusInput *self);

/**
 * qmi_message_qos_get_flow_status_input_unref:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_flow_status_input_unref (QmiMessageQosGetFlowStatusInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetFlowStatusInput, qmi_message_qos_get_flow_status_input_unref)

/**
 * qmi_message_qos_get_flow_status_input_new:
 *
 * Allocates a new #QmiMessageQosGetFlowStatusInput.
 *
 * Returns: the newly created #QmiMessageQosGetFlowStatusInput. The returned value should be freed with qmi_message_qos_get_flow_status_input_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusInput *qmi_message_qos_get_flow_status_input_new (void);

/* --- Output -- */

/**
 * QmiMessageQosGetFlowStatusOutput:
 *
 * The #QmiMessageQosGetFlowStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetFlowStatusOutput QmiMessageQosGetFlowStatusOutput;
GType qmi_message_qos_get_flow_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT (qmi_message_qos_get_flow_status_output_get_type ())


/**
 * qmi_message_qos_get_flow_status_output_get_result:
 * @self: a QmiMessageQosGetFlowStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_output_get_result (
    QmiMessageQosGetFlowStatusOutput *self,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_output_get_value:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 * @value_value: (out)(optional): a placeholder for the output #QmiQosStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_output_get_value (
    QmiMessageQosGetFlowStatusOutput *self,
    QmiQosStatus *value_value,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_output_ref:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusOutput *qmi_message_qos_get_flow_status_output_ref (QmiMessageQosGetFlowStatusOutput *self);

/**
 * qmi_message_qos_get_flow_status_output_unref:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_flow_status_output_unref (QmiMessageQosGetFlowStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetFlowStatusOutput, qmi_message_qos_get_flow_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Network Status */


/**
 * SECTION: qmi-message-qos-get-network-status
 * @title: QOS Get Network Status response
 * @short_description: Methods to manage the QOS Get Network Status response.
 *
 * Collection of methods to create requests and parse responses of the QOS Get Network Status message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageQosGetNetworkStatusOutput:
 *
 * The #QmiMessageQosGetNetworkStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetNetworkStatusOutput QmiMessageQosGetNetworkStatusOutput;
GType qmi_message_qos_get_network_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT (qmi_message_qos_get_network_status_output_get_type ())


/**
 * qmi_message_qos_get_network_status_output_get_result:
 * @self: a QmiMessageQosGetNetworkStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_network_status_output_get_result (
    QmiMessageQosGetNetworkStatusOutput *self,
    GError **error);


/**
 * qmi_message_qos_get_network_status_output_get_qos_supported:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 * @value_qos_supported: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Supported' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_network_status_output_get_qos_supported (
    QmiMessageQosGetNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error);


/**
 * qmi_message_qos_get_network_status_output_ref:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetNetworkStatusOutput *qmi_message_qos_get_network_status_output_ref (QmiMessageQosGetNetworkStatusOutput *self);

/**
 * qmi_message_qos_get_network_status_output_unref:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_network_status_output_unref (QmiMessageQosGetNetworkStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetNetworkStatusOutput, qmi_message_qos_get_network_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Swi Read Data Stats */


/**
 * SECTION: qmi-message-qos-swi-read-data-stats
 * @title: QOS Swi Read Data Stats response
 * @short_description: Methods to manage the QOS Swi Read Data Stats response.
 *
 * Collection of methods to create requests and parse responses of the QOS Swi Read Data Stats message.
 */

/* --- Input -- */

/**
 * QmiMessageQosSwiReadDataStatsInput:
 *
 * The #QmiMessageQosSwiReadDataStatsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsInput QmiMessageQosSwiReadDataStatsInput;
GType qmi_message_qos_swi_read_data_stats_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT (qmi_message_qos_swi_read_data_stats_input_get_type ())


/**
 * qmi_message_qos_swi_read_data_stats_input_get_apn_id:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 * @value_apn_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Apn Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_input_get_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 *value_apn_id,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_input_set_apn_id:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 * @value_apn_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Apn Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_input_set_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 value_apn_id,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_input_ref:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsInput *qmi_message_qos_swi_read_data_stats_input_ref (QmiMessageQosSwiReadDataStatsInput *self);

/**
 * qmi_message_qos_swi_read_data_stats_input_unref:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_swi_read_data_stats_input_unref (QmiMessageQosSwiReadDataStatsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosSwiReadDataStatsInput, qmi_message_qos_swi_read_data_stats_input_unref)

/**
 * qmi_message_qos_swi_read_data_stats_input_new:
 *
 * Allocates a new #QmiMessageQosSwiReadDataStatsInput.
 *
 * Returns: the newly created #QmiMessageQosSwiReadDataStatsInput. The returned value should be freed with qmi_message_qos_swi_read_data_stats_input_unref().
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsInput *qmi_message_qos_swi_read_data_stats_input_new (void);

/* --- Output -- */


/**
 * QmiMessageQosSwiReadDataStatsOutputFlowElement:
 * @bearer_id: a #guint32.
 * @tx_packets: a #guint32.
 * @tx_packets_dropped: a #guint32.
 * @tx_bytes: a #guint64.
 * @tx_bytes_dropped: a #guint64.
 *
 * A QmiMessageQosSwiReadDataStatsOutputFlowElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsOutputFlowElement {
    guint32 bearer_id;
    guint32 tx_packets;
    guint32 tx_packets_dropped;
    guint64 tx_bytes;
    guint64 tx_bytes_dropped;
} QmiMessageQosSwiReadDataStatsOutputFlowElement;

GType qmi_message_qos_swi_read_data_stats_output_flow_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageQosSwiReadDataStatsOutput:
 *
 * The #QmiMessageQosSwiReadDataStatsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsOutput QmiMessageQosSwiReadDataStatsOutput;
GType qmi_message_qos_swi_read_data_stats_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT (qmi_message_qos_swi_read_data_stats_output_get_type ())


/**
 * qmi_message_qos_swi_read_data_stats_output_get_result:
 * @self: a QmiMessageQosSwiReadDataStatsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_result (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_apn:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_apn_apn_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_packets: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_rx_packets: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_bytes: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_apn_tx_bytes_dropped: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_apn_rx_bytes: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Apn' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_apn (
    QmiMessageQosSwiReadDataStatsOutput *self,
    guint32 *value_apn_apn_id,
    guint32 *value_apn_tx_packets,
    guint32 *value_apn_tx_packets_dropped,
    guint32 *value_apn_rx_packets,
    guint64 *value_apn_tx_bytes,
    guint64 *value_apn_tx_bytes_dropped,
    guint64 *value_apn_rx_bytes,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_flow: (skip)
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_flow: (out)(optional)(element-type QmiMessageQosSwiReadDataStatsOutputFlowElement)(transfer none): a placeholder for the output #GArray of #QmiMessageQosSwiReadDataStatsOutputFlowElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Flow' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_flow (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GArray **value_flow,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_flow_gir: (rename-to qmi_message_qos_swi_read_data_stats_output_get_flow)
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_flow_ptr: (out)(optional)(element-type QmiMessageQosSwiReadDataStatsOutputFlowElement)(transfer none): a placeholder for the output array of #QmiMessageQosSwiReadDataStatsOutputFlowElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Flow' field from @self.
 *
 * Version of qmi_message_qos_swi_read_data_stats_output_get_flow() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_flow_gir (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GPtrArray **value_flow_ptr,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_ref:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsOutput *qmi_message_qos_swi_read_data_stats_output_ref (QmiMessageQosSwiReadDataStatsOutput *self);

/**
 * qmi_message_qos_swi_read_data_stats_output_unref:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_swi_read_data_stats_output_unref (QmiMessageQosSwiReadDataStatsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosSwiReadDataStatsOutput, qmi_message_qos_swi_read_data_stats_output_unref)

/*****************************************************************************/
/* Service-specific utils: QOS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_qos_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_QOS

/*****************************************************************************/
/* CLIENT: QMI Client QOS */

#define QMI_TYPE_CLIENT_QOS            (qmi_client_qos_get_type ())
#define QMI_CLIENT_QOS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_QOS, QmiClientQos))
#define QMI_CLIENT_QOS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_QOS, QmiClientQosClass))
#define QMI_IS_CLIENT_QOS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_QOS))
#define QMI_IS_CLIENT_QOS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_QOS))
#define QMI_CLIENT_QOS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_QOS, QmiClientQosClass))

typedef struct _QmiClientQos QmiClientQos;
typedef struct _QmiClientQosClass QmiClientQosClass;

/**
 * QmiClientQos:
 *
 * The #QmiClientQos structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientQos {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientQosClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_qos_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientQos, g_object_unref)

/**
 * qmi_client_qos_reset:
 * @self: a #QmiClientQos.
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
 * You can then call qmi_client_qos_reset_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_reset (
    QmiClientQos *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_reset_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_reset().
 *
 * Returns: a #QmiMessageQosResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_reset_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosResetOutput *qmi_client_qos_reset_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_get_flow_status:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosGetFlowStatusInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Flow Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_get_flow_status_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_get_flow_status (
    QmiClientQos *self,
    QmiMessageQosGetFlowStatusInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_get_flow_status_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_get_flow_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_get_flow_status().
 *
 * Returns: a #QmiMessageQosGetFlowStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_flow_status_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusOutput *qmi_client_qos_get_flow_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_get_network_status:
 * @self: a #QmiClientQos.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Network Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_get_network_status_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_get_network_status (
    QmiClientQos *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_get_network_status_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_get_network_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_get_network_status().
 *
 * Returns: a #QmiMessageQosGetNetworkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_network_status_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetNetworkStatusOutput *qmi_client_qos_get_network_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_swi_read_data_stats:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosSwiReadDataStatsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Read Data Stats request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_swi_read_data_stats_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_swi_read_data_stats (
    QmiClientQos *self,
    QmiMessageQosSwiReadDataStatsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_swi_read_data_stats_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_swi_read_data_stats().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_swi_read_data_stats().
 *
 * Returns: a #QmiMessageQosSwiReadDataStatsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_swi_read_data_stats_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsOutput *qmi_client_qos_swi_read_data_stats_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_QOS__ */
