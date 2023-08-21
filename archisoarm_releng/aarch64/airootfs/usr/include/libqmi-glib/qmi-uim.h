
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
#include "qmi-enums-uim.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_UIM__
#define __LIBQMI_GLIB_QMI_UIM__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_UIM_RESET
#define HAVE_QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_UIM_READ_TRANSPARENT
#define HAVE_QMI_MESSAGE_UIM_READ_RECORD
#define HAVE_QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES
#define HAVE_QMI_MESSAGE_UIM_SET_PIN_PROTECTION
#define HAVE_QMI_MESSAGE_UIM_VERIFY_PIN
#define HAVE_QMI_MESSAGE_UIM_UNBLOCK_PIN
#define HAVE_QMI_MESSAGE_UIM_CHANGE_PIN
#define HAVE_QMI_MESSAGE_UIM_REFRESH_REGISTER
#define HAVE_QMI_MESSAGE_UIM_REFRESH_COMPLETE
#define HAVE_QMI_MESSAGE_UIM_REGISTER_EVENTS
#define HAVE_QMI_MESSAGE_UIM_GET_CARD_STATUS
#define HAVE_QMI_MESSAGE_UIM_POWER_OFF_SIM
#define HAVE_QMI_MESSAGE_UIM_POWER_ON_SIM
#define HAVE_QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION
#define HAVE_QMI_MESSAGE_UIM_DEPERSONALIZATION
#define HAVE_QMI_MESSAGE_UIM_GET_CONFIGURATION
#define HAVE_QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL
#define HAVE_QMI_MESSAGE_UIM_SWITCH_SLOT
#define HAVE_QMI_MESSAGE_UIM_GET_SLOT_STATUS
#define HAVE_QMI_MESSAGE_UIM_REMOTE_UNLOCK
#define HAVE_QMI_INDICATION_UIM_CARD_STATUS
#define HAVE_QMI_INDICATION_UIM_REFRESH
#define HAVE_QMI_INDICATION_UIM_SLOT_STATUS

/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Card Status */


/**
 * SECTION: qmi-indication-uim-card-status
 * @title: UIM Card Status indication
 * @short_description: Methods to manage the UIM Card Status indication.
 *
 * Collection of methods to parse indications of the UIM Card Status message.
 */

/* --- Output -- */


/**
 * QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement:
 * @type: a #QmiUimCardApplicationType.
 * @state: a #QmiUimCardApplicationState.
 * @personalization_state: a #QmiUimCardApplicationPersonalizationState.
 * @personalization_feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @personalization_retries: a #guint8.
 * @personalization_unblock_retries: a #guint8.
 * @application_identifier_value: a #GArray of #guint8 elements.
 * @upin_replaces_pin1: a #gboolean.
 * @pin1_state: a #QmiUimPinState.
 * @pin1_retries: a #guint8.
 * @puk1_retries: a #guint8.
 * @pin2_state: a #QmiUimPinState.
 * @pin2_retries: a #guint8.
 * @puk2_retries: a #guint8.
 *
 * A QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement {
    QmiUimCardApplicationType type;
    QmiUimCardApplicationState state;
    QmiUimCardApplicationPersonalizationState personalization_state;
    QmiUimCardApplicationPersonalizationFeature personalization_feature;
    guint8 personalization_retries;
    guint8 personalization_unblock_retries;
    GArray *application_identifier_value;
    gboolean upin_replaces_pin1;
    QmiUimPinState pin1_state;
    guint8 pin1_retries;
    guint8 puk1_retries;
    QmiUimPinState pin2_state;
    guint8 pin2_retries;
    guint8 puk2_retries;
} QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement;


/**
 * QmiIndicationUimCardStatusOutputCardStatusCardsElement: (skip)
 * @card_state: a #QmiUimCardState.
 * @upin_state: a #QmiUimPinState.
 * @upin_retries: a #guint8.
 * @upuk_retries: a #guint8.
 * @error_code: a #QmiUimCardError.
 * @applications: a #GArray of #QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement elements.
 *
 * A QmiIndicationUimCardStatusOutputCardStatusCardsElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationUimCardStatusOutputCardStatusCardsElement {
    QmiUimCardState card_state;
    QmiUimPinState upin_state;
    guint8 upin_retries;
    guint8 upuk_retries;
    QmiUimCardError error_code;
    GArray *applications;
} QmiIndicationUimCardStatusOutputCardStatusCardsElement;

GType qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationUimCardStatusOutputCardStatusCardsElementGir: (rename-to QmiIndicationUimCardStatusOutputCardStatusCardsElement)
 * @card_state: a #QmiUimCardState.
 * @upin_state: a #QmiUimPinState.
 * @upin_retries: a #guint8.
 * @upuk_retries: a #guint8.
 * @error_code: a #QmiUimCardError.
 * @applications: (element-type QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement): an array of #QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElement elements.
 *
 * A QmiIndicationUimCardStatusOutputCardStatusCardsElementGir struct.
 *
 * This type is a version of #QmiIndicationUimCardStatusOutputCardStatusCardsElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiIndicationUimCardStatusOutputCardStatusCardsElementGir {
    QmiUimCardState card_state;
    QmiUimPinState upin_state;
    guint8 upin_retries;
    guint8 upuk_retries;
    QmiUimCardError error_code;
    GPtrArray *applications;
} QmiIndicationUimCardStatusOutputCardStatusCardsElementGir;

GType qmi_indication_uim_card_status_output_card_status_cards_element_gir_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationUimCardStatusOutput:
 *
 * The #QmiIndicationUimCardStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationUimCardStatusOutput QmiIndicationUimCardStatusOutput;
GType qmi_indication_uim_card_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_UIM_CARD_STATUS_OUTPUT (qmi_indication_uim_card_status_output_get_type ())


/**
 * qmi_indication_uim_card_status_output_get_card_status: (skip)
 * @self: a #QmiIndicationUimCardStatusOutput.
 * @value_card_status_index_gw_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_gw_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_cards: (out)(optional)(element-type QmiIndicationUimCardStatusOutputCardStatusCardsElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationUimCardStatusOutputCardStatusCardsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_uim_card_status_output_get_card_status (
    QmiIndicationUimCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GArray **value_card_status_cards,
    GError **error);


/**
 * qmi_indication_uim_card_status_output_get_card_status_gir: (rename-to qmi_indication_uim_card_status_output_get_card_status)
 * @self: a #QmiIndicationUimCardStatusOutput.
 * @value_card_status_index_gw_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_gw_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_cards_ptr: (out)(optional)(element-type QmiIndicationUimCardStatusOutputCardStatusCardsElementGir)(transfer none): a placeholder for the output array of #QmiIndicationUimCardStatusOutputCardStatusCardsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Status' field from @self.
 *
 * Version of qmi_indication_uim_card_status_output_get_card_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_card_status_output_get_card_status_gir (
    QmiIndicationUimCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GPtrArray **value_card_status_cards_ptr,
    GError **error);


/**
 * qmi_indication_uim_card_status_output_ref:
 * @self: a #QmiIndicationUimCardStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationUimCardStatusOutput *qmi_indication_uim_card_status_output_ref (QmiIndicationUimCardStatusOutput *self);

/**
 * qmi_indication_uim_card_status_output_unref:
 * @self: a #QmiIndicationUimCardStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_uim_card_status_output_unref (QmiIndicationUimCardStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationUimCardStatusOutput, qmi_indication_uim_card_status_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Refresh */


/**
 * SECTION: qmi-indication-uim-refresh
 * @title: UIM Refresh indication
 * @short_description: Methods to manage the UIM Refresh indication.
 *
 * Collection of methods to parse indications of the UIM Refresh message.
 */

/* --- Output -- */


/**
 * QmiIndicationUimRefreshOutputEventFilesElement:
 * @file_id: a #guint16.
 * @path: a #GArray of #guint8 elements.
 *
 * A QmiIndicationUimRefreshOutputEventFilesElement struct.
 *
 * Since: 1.28
 */
typedef struct _QmiIndicationUimRefreshOutputEventFilesElement {
    guint16 file_id;
    GArray *path;
} QmiIndicationUimRefreshOutputEventFilesElement;

GType qmi_indication_uim_refresh_output_event_files_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationUimRefreshOutput:
 *
 * The #QmiIndicationUimRefreshOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiIndicationUimRefreshOutput QmiIndicationUimRefreshOutput;
GType qmi_indication_uim_refresh_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_UIM_REFRESH_OUTPUT (qmi_indication_uim_refresh_output_get_type ())


/**
 * qmi_indication_uim_refresh_output_get_event: (skip)
 * @self: a #QmiIndicationUimRefreshOutput.
 * @value_event_stage: (out)(optional): a placeholder for the output #QmiUimRefreshStage, or %NULL if not required.
 * @value_event_mode: (out)(optional): a placeholder for the output #QmiUimRefreshMode, or %NULL if not required.
 * @value_event_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_event_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_event_files: (out)(optional)(element-type QmiIndicationUimRefreshOutputEventFilesElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationUimRefreshOutputEventFilesElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_indication_uim_refresh_output_get_event (
    QmiIndicationUimRefreshOutput *self,
    QmiUimRefreshStage *value_event_stage,
    QmiUimRefreshMode *value_event_mode,
    QmiUimSessionType *value_event_session_type,
    GArray **value_event_application_identifier,
    GArray **value_event_files,
    GError **error);


/**
 * qmi_indication_uim_refresh_output_get_event_gir: (rename-to qmi_indication_uim_refresh_output_get_event)
 * @self: a #QmiIndicationUimRefreshOutput.
 * @value_event_stage: (out)(optional): a placeholder for the output #QmiUimRefreshStage, or %NULL if not required.
 * @value_event_mode: (out)(optional): a placeholder for the output #QmiUimRefreshMode, or %NULL if not required.
 * @value_event_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_event_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_event_files_ptr: (out)(optional)(element-type QmiIndicationUimRefreshOutputEventFilesElement)(transfer none): a placeholder for the output array of #QmiIndicationUimRefreshOutputEventFilesElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event' field from @self.
 *
 * Version of qmi_indication_uim_refresh_output_get_event() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_refresh_output_get_event_gir (
    QmiIndicationUimRefreshOutput *self,
    QmiUimRefreshStage *value_event_stage,
    QmiUimRefreshMode *value_event_mode,
    QmiUimSessionType *value_event_session_type,
    GArray **value_event_application_identifier,
    GPtrArray **value_event_files_ptr,
    GError **error);


/**
 * qmi_indication_uim_refresh_output_ref:
 * @self: a #QmiIndicationUimRefreshOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiIndicationUimRefreshOutput *qmi_indication_uim_refresh_output_ref (QmiIndicationUimRefreshOutput *self);

/**
 * qmi_indication_uim_refresh_output_unref:
 * @self: a #QmiIndicationUimRefreshOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_indication_uim_refresh_output_unref (QmiIndicationUimRefreshOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationUimRefreshOutput, qmi_indication_uim_refresh_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Slot Status */


/**
 * SECTION: qmi-indication-uim-slot-status
 * @title: UIM Slot Status indication
 * @short_description: Methods to manage the UIM Slot Status indication.
 *
 * Collection of methods to parse indications of the UIM Slot Status message.
 */

/* --- Output -- */


/**
 * QmiSlotEidElement:
 * @eid: a #GArray of #guint8 elements.
 *
 * A QmiSlotEidElement struct.
 *
 * Since: 1.32
 */
typedef struct _QmiSlotEidElement {
    GArray *eid;
} QmiSlotEidElement;

GType qmi_slot_eid_element_get_type (void) G_GNUC_CONST;


/**
 * QmiPhysicalSlotInformationSlot:
 * @card_protocol: a #QmiUimCardProtocol.
 * @valid_applications: a #guint8.
 * @atr_value: a #GArray of #guint8 elements.
 * @is_euicc: a #gboolean.
 *
 * A QmiPhysicalSlotInformationSlot struct.
 *
 * Since: 1.26
 */
typedef struct _QmiPhysicalSlotInformationSlot {
    QmiUimCardProtocol card_protocol;
    guint8 valid_applications;
    GArray *atr_value;
    gboolean is_euicc;
} QmiPhysicalSlotInformationSlot;

GType qmi_physical_slot_information_slot_get_type (void) G_GNUC_CONST;


/**
 * QmiPhysicalSlotStatusSlot:
 * @physical_card_status: a #QmiUimPhysicalCardState.
 * @physical_slot_status: a #QmiUimSlotState.
 * @logical_slot: a #guint8.
 * @iccid: a #GArray of #guint8 elements.
 *
 * A QmiPhysicalSlotStatusSlot struct.
 *
 * Since: 1.26
 */
typedef struct _QmiPhysicalSlotStatusSlot {
    QmiUimPhysicalCardState physical_card_status;
    QmiUimSlotState physical_slot_status;
    guint8 logical_slot;
    GArray *iccid;
} QmiPhysicalSlotStatusSlot;

GType qmi_physical_slot_status_slot_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationUimSlotStatusOutput:
 *
 * The #QmiIndicationUimSlotStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiIndicationUimSlotStatusOutput QmiIndicationUimSlotStatusOutput;
GType qmi_indication_uim_slot_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_UIM_SLOT_STATUS_OUTPUT (qmi_indication_uim_slot_status_output_get_type ())
G_GNUC_INTERNAL
gpointer qmi_indication_uim_slot_status_output_get_compat_context (QmiIndicationUimSlotStatusOutput *self);
G_GNUC_INTERNAL
void qmi_indication_uim_slot_status_output_set_compat_context (
    QmiIndicationUimSlotStatusOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free);


/**
 * qmi_indication_uim_slot_status_output_get_slot_eid: (skip)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_slot_eid: (out)(optional)(element-type QmiSlotEidElement)(transfer none): a placeholder for the output #GArray of #QmiSlotEidElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot EID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_slot_status_output_get_slot_eid (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_slot_eid,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_get_slot_eid_gir: (rename-to qmi_indication_uim_slot_status_output_get_slot_eid)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_slot_eid_ptr: (out)(optional)(element-type QmiSlotEidElement)(transfer none): a placeholder for the output array of #QmiSlotEidElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot EID' field from @self.
 *
 * Version of qmi_indication_uim_slot_status_output_get_slot_eid() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_slot_status_output_get_slot_eid_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_slot_eid_ptr,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_get_physical_slot_information: (skip)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_physical_slot_information: (out)(optional)(element-type QmiPhysicalSlotInformationSlot)(transfer none): a placeholder for the output #GArray of #QmiPhysicalSlotInformationSlot elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_uim_slot_status_output_get_physical_slot_information (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_physical_slot_information,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_get_physical_slot_information_gir: (rename-to qmi_indication_uim_slot_status_output_get_physical_slot_information)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_physical_slot_information_ptr: (out)(optional)(element-type QmiPhysicalSlotInformationSlot)(transfer none): a placeholder for the output array of #QmiPhysicalSlotInformationSlot elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Information' field from @self.
 *
 * Version of qmi_indication_uim_slot_status_output_get_physical_slot_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_slot_status_output_get_physical_slot_information_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_physical_slot_information_ptr,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_get_physical_slot_status: (skip)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_physical_slot_status: (out)(optional)(element-type QmiPhysicalSlotStatusSlot)(transfer none): a placeholder for the output #GArray of #QmiPhysicalSlotStatusSlot elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_uim_slot_status_output_get_physical_slot_status (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_physical_slot_status,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_get_physical_slot_status_gir: (rename-to qmi_indication_uim_slot_status_output_get_physical_slot_status)
 * @self: a #QmiIndicationUimSlotStatusOutput.
 * @value_physical_slot_status_ptr: (out)(optional)(element-type QmiPhysicalSlotStatusSlot)(transfer none): a placeholder for the output array of #QmiPhysicalSlotStatusSlot elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Status' field from @self.
 *
 * Version of qmi_indication_uim_slot_status_output_get_physical_slot_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_uim_slot_status_output_get_physical_slot_status_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_physical_slot_status_ptr,
    GError **error);


/**
 * qmi_indication_uim_slot_status_output_ref:
 * @self: a #QmiIndicationUimSlotStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiIndicationUimSlotStatusOutput *qmi_indication_uim_slot_status_output_ref (QmiIndicationUimSlotStatusOutput *self);

/**
 * qmi_indication_uim_slot_status_output_unref:
 * @self: a #QmiIndicationUimSlotStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_indication_uim_slot_status_output_unref (QmiIndicationUimSlotStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationUimSlotStatusOutput, qmi_indication_uim_slot_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Reset */


/**
 * SECTION: qmi-message-uim-reset
 * @title: UIM Reset response
 * @short_description: Methods to manage the UIM Reset response.
 *
 * Collection of methods to create requests and parse responses of the UIM Reset message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimResetOutput:
 *
 * The #QmiMessageUimResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimResetOutput QmiMessageUimResetOutput;
GType qmi_message_uim_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_RESET_OUTPUT (qmi_message_uim_reset_output_get_type ())


/**
 * qmi_message_uim_reset_output_get_result:
 * @self: a QmiMessageUimResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_reset_output_get_result (
    QmiMessageUimResetOutput *self,
    GError **error);


/**
 * qmi_message_uim_reset_output_ref:
 * @self: a #QmiMessageUimResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimResetOutput *qmi_message_uim_reset_output_ref (QmiMessageUimResetOutput *self);

/**
 * qmi_message_uim_reset_output_unref:
 * @self: a #QmiMessageUimResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_reset_output_unref (QmiMessageUimResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimResetOutput, qmi_message_uim_reset_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Supported Messages */


/**
 * SECTION: qmi-message-uim-get-supported-messages
 * @title: UIM Get Supported Messages response
 * @short_description: Methods to manage the UIM Get Supported Messages response.
 *
 * Collection of methods to create requests and parse responses of the UIM Get Supported Messages message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimGetSupportedMessagesOutput:
 *
 * The #QmiMessageUimGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimGetSupportedMessagesOutput QmiMessageUimGetSupportedMessagesOutput;
GType qmi_message_uim_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_uim_get_supported_messages_output_get_type ())


/**
 * qmi_message_uim_get_supported_messages_output_get_result:
 * @self: a QmiMessageUimGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_get_supported_messages_output_get_result (
    QmiMessageUimGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_uim_get_supported_messages_output_get_list:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_get_supported_messages_output_get_list (
    QmiMessageUimGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_uim_get_supported_messages_output_ref:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimGetSupportedMessagesOutput *qmi_message_uim_get_supported_messages_output_ref (QmiMessageUimGetSupportedMessagesOutput *self);

/**
 * qmi_message_uim_get_supported_messages_output_unref:
 * @self: a #QmiMessageUimGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_get_supported_messages_output_unref (QmiMessageUimGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetSupportedMessagesOutput, qmi_message_uim_get_supported_messages_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Transparent */


/**
 * SECTION: qmi-message-uim-read-transparent
 * @title: UIM Read Transparent response
 * @short_description: Methods to manage the UIM Read Transparent response.
 *
 * Collection of methods to create requests and parse responses of the UIM Read Transparent message.
 */

/* --- Input -- */

/**
 * QmiMessageUimReadTransparentInput:
 *
 * The #QmiMessageUimReadTransparentInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadTransparentInput QmiMessageUimReadTransparentInput;
GType qmi_message_uim_read_transparent_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_TRANSPARENT_INPUT (qmi_message_uim_read_transparent_input_get_type ())


/**
 * qmi_message_uim_read_transparent_input_get_encrypt_data:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_encrypt_data: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Encrypt Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean *value_encrypt_data,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_set_encrypt_data:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_encrypt_data: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Encrypt Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean value_encrypt_data,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_get_read_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_read_information_offset: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_read_information_length: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_read_information_offset,
    guint16 *value_read_information_length,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_set_read_information:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_read_information_offset: a #guint16.
 * @value_read_information_length: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Read Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_read_information_offset,
    guint16 value_read_information_length,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_get_file:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_file_file_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_get_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_set_file:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_input_set_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_get_session:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_read_transparent_input_get_session (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_set_session:
 * @self: a #QmiMessageUimReadTransparentInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_read_transparent_input_set_session (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_read_transparent_input_ref:
 * @self: a #QmiMessageUimReadTransparentInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentInput *qmi_message_uim_read_transparent_input_ref (QmiMessageUimReadTransparentInput *self);

/**
 * qmi_message_uim_read_transparent_input_unref:
 * @self: a #QmiMessageUimReadTransparentInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_transparent_input_unref (QmiMessageUimReadTransparentInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimReadTransparentInput, qmi_message_uim_read_transparent_input_unref)

/**
 * qmi_message_uim_read_transparent_input_new:
 *
 * Allocates a new #QmiMessageUimReadTransparentInput.
 *
 * Returns: the newly created #QmiMessageUimReadTransparentInput. The returned value should be freed with qmi_message_uim_read_transparent_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentInput *qmi_message_uim_read_transparent_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimReadTransparentOutput:
 *
 * The #QmiMessageUimReadTransparentOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadTransparentOutput QmiMessageUimReadTransparentOutput;
GType qmi_message_uim_read_transparent_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT (qmi_message_uim_read_transparent_output_get_type ())


/**
 * qmi_message_uim_read_transparent_output_get_card_result:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_card_result (
    QmiMessageUimReadTransparentOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_read_transparent_output_get_result:
 * @self: a QmiMessageUimReadTransparentOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_result (
    QmiMessageUimReadTransparentOutput *self,
    GError **error);


/**
 * qmi_message_uim_read_transparent_output_get_read_result:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_read_result: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_read_result (
    QmiMessageUimReadTransparentOutput *self,
    GArray **value_read_result,
    GError **error);


/**
 * qmi_message_uim_read_transparent_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_response_in_indication_token (
    QmiMessageUimReadTransparentOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_transparent_output_get_encrypted_data:
 * @self: a #QmiMessageUimReadTransparentOutput.
 * @value_encrypted_data: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Encrypted Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_transparent_output_get_encrypted_data (
    QmiMessageUimReadTransparentOutput *self,
    gboolean *value_encrypted_data,
    GError **error);


/**
 * qmi_message_uim_read_transparent_output_ref:
 * @self: a #QmiMessageUimReadTransparentOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentOutput *qmi_message_uim_read_transparent_output_ref (QmiMessageUimReadTransparentOutput *self);

/**
 * qmi_message_uim_read_transparent_output_unref:
 * @self: a #QmiMessageUimReadTransparentOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_transparent_output_unref (QmiMessageUimReadTransparentOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimReadTransparentOutput, qmi_message_uim_read_transparent_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Record */


/**
 * SECTION: qmi-message-uim-read-record
 * @title: UIM Read Record response
 * @short_description: Methods to manage the UIM Read Record response.
 *
 * Collection of methods to create requests and parse responses of the UIM Read Record message.
 */

/* --- Input -- */

/**
 * QmiMessageUimReadRecordInput:
 *
 * The #QmiMessageUimReadRecordInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadRecordInput QmiMessageUimReadRecordInput;
GType qmi_message_uim_read_record_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_RECORD_INPUT (qmi_message_uim_read_record_input_get_type ())


/**
 * qmi_message_uim_read_record_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_record_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_record_input_get_last_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_last_record: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Record' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_last_record,
    GError **error);


/**
 * qmi_message_uim_read_record_input_set_last_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_last_record: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Last Record' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_last_record,
    GError **error);


/**
 * qmi_message_uim_read_record_input_get_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_record_record_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_record_record_length: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Record' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_record_record_number,
    guint16 *value_record_record_length,
    GError **error);


/**
 * qmi_message_uim_read_record_input_set_record:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_record_record_number: a #guint16.
 * @value_record_record_length: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Record' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_record_record_number,
    guint16 value_record_record_length,
    GError **error);


/**
 * qmi_message_uim_read_record_input_get_file:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_file_file_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_get_file (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_read_record_input_set_file:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_input_set_file (
    QmiMessageUimReadRecordInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_read_record_input_get_session:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_read_record_input_get_session (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_read_record_input_set_session:
 * @self: a #QmiMessageUimReadRecordInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_read_record_input_set_session (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_read_record_input_ref:
 * @self: a #QmiMessageUimReadRecordInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordInput *qmi_message_uim_read_record_input_ref (QmiMessageUimReadRecordInput *self);

/**
 * qmi_message_uim_read_record_input_unref:
 * @self: a #QmiMessageUimReadRecordInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_record_input_unref (QmiMessageUimReadRecordInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimReadRecordInput, qmi_message_uim_read_record_input_unref)

/**
 * qmi_message_uim_read_record_input_new:
 *
 * Allocates a new #QmiMessageUimReadRecordInput.
 *
 * Returns: the newly created #QmiMessageUimReadRecordInput. The returned value should be freed with qmi_message_uim_read_record_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordInput *qmi_message_uim_read_record_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimReadRecordOutput:
 *
 * The #QmiMessageUimReadRecordOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimReadRecordOutput QmiMessageUimReadRecordOutput;
GType qmi_message_uim_read_record_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_READ_RECORD_OUTPUT (qmi_message_uim_read_record_output_get_type ())


/**
 * qmi_message_uim_read_record_output_get_card_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_card_result (
    QmiMessageUimReadRecordOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_read_record_output_get_result:
 * @self: a QmiMessageUimReadRecordOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_result (
    QmiMessageUimReadRecordOutput *self,
    GError **error);


/**
 * qmi_message_uim_read_record_output_get_read_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_read_result: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Read Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_read_result,
    GError **error);


/**
 * qmi_message_uim_read_record_output_get_additional_read_result:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_additional_read_result: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Read Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_additional_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_additional_read_result,
    GError **error);


/**
 * qmi_message_uim_read_record_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimReadRecordOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_read_record_output_get_response_in_indication_token (
    QmiMessageUimReadRecordOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_read_record_output_ref:
 * @self: a #QmiMessageUimReadRecordOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordOutput *qmi_message_uim_read_record_output_ref (QmiMessageUimReadRecordOutput *self);

/**
 * qmi_message_uim_read_record_output_unref:
 * @self: a #QmiMessageUimReadRecordOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_read_record_output_unref (QmiMessageUimReadRecordOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimReadRecordOutput, qmi_message_uim_read_record_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get File Attributes */


/**
 * SECTION: qmi-message-uim-get-file-attributes
 * @title: UIM Get File Attributes response
 * @short_description: Methods to manage the UIM Get File Attributes response.
 *
 * Collection of methods to create requests and parse responses of the UIM Get File Attributes message.
 */

/* --- Input -- */

/**
 * QmiMessageUimGetFileAttributesInput:
 *
 * The #QmiMessageUimGetFileAttributesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimGetFileAttributesInput QmiMessageUimGetFileAttributesInput;
GType qmi_message_uim_get_file_attributes_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT (qmi_message_uim_get_file_attributes_input_get_type ())


/**
 * qmi_message_uim_get_file_attributes_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_set_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_get_file:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_file_file_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_file_path: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_get_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_set_file:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_file_file_id: a #guint16.
 * @value_file_file_path: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_file_file_path will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'File' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_input_set_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_get_session:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_get_file_attributes_input_get_session (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_set_session:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_get_file_attributes_input_set_session (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_input_ref:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesInput *qmi_message_uim_get_file_attributes_input_ref (QmiMessageUimGetFileAttributesInput *self);

/**
 * qmi_message_uim_get_file_attributes_input_unref:
 * @self: a #QmiMessageUimGetFileAttributesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_get_file_attributes_input_unref (QmiMessageUimGetFileAttributesInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetFileAttributesInput, qmi_message_uim_get_file_attributes_input_unref)

/**
 * qmi_message_uim_get_file_attributes_input_new:
 *
 * Allocates a new #QmiMessageUimGetFileAttributesInput.
 *
 * Returns: the newly created #QmiMessageUimGetFileAttributesInput. The returned value should be freed with qmi_message_uim_get_file_attributes_input_unref().
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesInput *qmi_message_uim_get_file_attributes_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimGetFileAttributesOutput:
 *
 * The #QmiMessageUimGetFileAttributesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageUimGetFileAttributesOutput QmiMessageUimGetFileAttributesOutput;
GType qmi_message_uim_get_file_attributes_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT (qmi_message_uim_get_file_attributes_output_get_type ())


/**
 * qmi_message_uim_get_file_attributes_output_get_card_result:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_card_result (
    QmiMessageUimGetFileAttributesOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_output_get_result:
 * @self: a QmiMessageUimGetFileAttributesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_result (
    QmiMessageUimGetFileAttributesOutput *self,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_output_get_file_attributes:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_file_attributes_file_size: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_file_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_file_type: (out)(optional): a placeholder for the output #QmiUimFileType, or %NULL if not required.
 * @value_file_attributes_record_size: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_record_count: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_file_attributes_read_security_attributes_logic: (out)(optional): a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_read_security_attributes: (out)(optional): a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_write_security_attributes_logic: (out)(optional): a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_write_security_attributes: (out)(optional): a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_increase_security_attributes_logic: (out)(optional): a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_increase_security_attributes: (out)(optional): a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_deactivate_security_attributes_logic: (out)(optional): a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_deactivate_security_attributes: (out)(optional): a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_activate_security_attributes_logic: (out)(optional): a placeholder for the output #QmiUimSecurityAttributeLogic, or %NULL if not required.
 * @value_file_attributes_activate_security_attributes: (out)(optional): a placeholder for the output #QmiUimSecurityAttribute, or %NULL if not required.
 * @value_file_attributes_raw_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'File Attributes' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_file_attributes (
    QmiMessageUimGetFileAttributesOutput *self,
    guint16 *value_file_attributes_file_size,
    guint16 *value_file_attributes_file_id,
    QmiUimFileType *value_file_attributes_file_type,
    guint16 *value_file_attributes_record_size,
    guint16 *value_file_attributes_record_count,
    QmiUimSecurityAttributeLogic *value_file_attributes_read_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_read_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_write_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_write_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_increase_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_increase_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_deactivate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_deactivate_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_activate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_activate_security_attributes,
    GArray **value_file_attributes_raw_data,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_uim_get_file_attributes_output_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_get_file_attributes_output_ref:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesOutput *qmi_message_uim_get_file_attributes_output_ref (QmiMessageUimGetFileAttributesOutput *self);

/**
 * qmi_message_uim_get_file_attributes_output_unref:
 * @self: a #QmiMessageUimGetFileAttributesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_uim_get_file_attributes_output_unref (QmiMessageUimGetFileAttributesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetFileAttributesOutput, qmi_message_uim_get_file_attributes_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Set PIN Protection */


/**
 * SECTION: qmi-message-uim-set-pin-protection
 * @title: UIM Set PIN Protection response
 * @short_description: Methods to manage the UIM Set PIN Protection response.
 *
 * Collection of methods to create requests and parse responses of the UIM Set PIN Protection message.
 */

/* --- Input -- */

/**
 * QmiMessageUimSetPinProtectionInput:
 *
 * The #QmiMessageUimSetPinProtectionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimSetPinProtectionInput QmiMessageUimSetPinProtectionInput;
GType qmi_message_uim_set_pin_protection_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT (qmi_message_uim_set_pin_protection_input_get_type ())


/**
 * qmi_message_uim_set_pin_protection_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_set_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_get_info:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_pin_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_pin_value: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_get_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId *value_info_pin_id,
    gboolean *value_info_pin_enabled,
    const gchar **value_info_pin_value,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_set_info:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_pin_enabled: a #gboolean.
 * @value_info_pin_value: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_input_set_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId value_info_pin_id,
    gboolean value_info_pin_enabled,
    const gchar *value_info_pin_value,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_get_session:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_set_pin_protection_input_get_session (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_set_session:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_set_pin_protection_input_set_session (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_input_ref:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionInput *qmi_message_uim_set_pin_protection_input_ref (QmiMessageUimSetPinProtectionInput *self);

/**
 * qmi_message_uim_set_pin_protection_input_unref:
 * @self: a #QmiMessageUimSetPinProtectionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_set_pin_protection_input_unref (QmiMessageUimSetPinProtectionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimSetPinProtectionInput, qmi_message_uim_set_pin_protection_input_unref)

/**
 * qmi_message_uim_set_pin_protection_input_new:
 *
 * Allocates a new #QmiMessageUimSetPinProtectionInput.
 *
 * Returns: the newly created #QmiMessageUimSetPinProtectionInput. The returned value should be freed with qmi_message_uim_set_pin_protection_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionInput *qmi_message_uim_set_pin_protection_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimSetPinProtectionOutput:
 *
 * The #QmiMessageUimSetPinProtectionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimSetPinProtectionOutput QmiMessageUimSetPinProtectionOutput;
GType qmi_message_uim_set_pin_protection_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT (qmi_message_uim_set_pin_protection_output_get_type ())


/**
 * qmi_message_uim_set_pin_protection_output_get_result:
 * @self: a QmiMessageUimSetPinProtectionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_result (
    QmiMessageUimSetPinProtectionOutput *self,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_output_get_retries_remaining:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 * @value_retries_remaining_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_retries_remaining (
    QmiMessageUimSetPinProtectionOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_set_pin_protection_output_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_set_pin_protection_output_ref:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionOutput *qmi_message_uim_set_pin_protection_output_ref (QmiMessageUimSetPinProtectionOutput *self);

/**
 * qmi_message_uim_set_pin_protection_output_unref:
 * @self: a #QmiMessageUimSetPinProtectionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_set_pin_protection_output_unref (QmiMessageUimSetPinProtectionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimSetPinProtectionOutput, qmi_message_uim_set_pin_protection_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Verify PIN */


/**
 * SECTION: qmi-message-uim-verify-pin
 * @title: UIM Verify PIN response
 * @short_description: Methods to manage the UIM Verify PIN response.
 *
 * Collection of methods to create requests and parse responses of the UIM Verify PIN message.
 */

/* --- Input -- */

/**
 * QmiMessageUimVerifyPinInput:
 *
 * The #QmiMessageUimVerifyPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimVerifyPinInput QmiMessageUimVerifyPinInput;
GType qmi_message_uim_verify_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_VERIFY_PIN_INPUT (qmi_message_uim_verify_pin_input_get_type ())


/**
 * qmi_message_uim_verify_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_get_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_set_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_get_info:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_pin_value: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_get_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_pin_value,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_set_info:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_pin_value: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_input_set_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_pin_value,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_get_session:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_verify_pin_input_get_session (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_set_session:
 * @self: a #QmiMessageUimVerifyPinInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_verify_pin_input_set_session (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_verify_pin_input_ref:
 * @self: a #QmiMessageUimVerifyPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinInput *qmi_message_uim_verify_pin_input_ref (QmiMessageUimVerifyPinInput *self);

/**
 * qmi_message_uim_verify_pin_input_unref:
 * @self: a #QmiMessageUimVerifyPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_verify_pin_input_unref (QmiMessageUimVerifyPinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimVerifyPinInput, qmi_message_uim_verify_pin_input_unref)

/**
 * qmi_message_uim_verify_pin_input_new:
 *
 * Allocates a new #QmiMessageUimVerifyPinInput.
 *
 * Returns: the newly created #QmiMessageUimVerifyPinInput. The returned value should be freed with qmi_message_uim_verify_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinInput *qmi_message_uim_verify_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimVerifyPinOutput:
 *
 * The #QmiMessageUimVerifyPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimVerifyPinOutput QmiMessageUimVerifyPinOutput;
GType qmi_message_uim_verify_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_VERIFY_PIN_OUTPUT (qmi_message_uim_verify_pin_output_get_type ())


/**
 * qmi_message_uim_verify_pin_output_get_card_result:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_card_result (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_verify_pin_output_get_result:
 * @self: a QmiMessageUimVerifyPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_result (
    QmiMessageUimVerifyPinOutput *self,
    GError **error);


/**
 * qmi_message_uim_verify_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_retries_remaining_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_retries_remaining (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);


/**
 * qmi_message_uim_verify_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimVerifyPinOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_verify_pin_output_get_response_in_indication_token (
    QmiMessageUimVerifyPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_verify_pin_output_ref:
 * @self: a #QmiMessageUimVerifyPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinOutput *qmi_message_uim_verify_pin_output_ref (QmiMessageUimVerifyPinOutput *self);

/**
 * qmi_message_uim_verify_pin_output_unref:
 * @self: a #QmiMessageUimVerifyPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_verify_pin_output_unref (QmiMessageUimVerifyPinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimVerifyPinOutput, qmi_message_uim_verify_pin_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Unblock PIN */


/**
 * SECTION: qmi-message-uim-unblock-pin
 * @title: UIM Unblock PIN response
 * @short_description: Methods to manage the UIM Unblock PIN response.
 *
 * Collection of methods to create requests and parse responses of the UIM Unblock PIN message.
 */

/* --- Input -- */

/**
 * QmiMessageUimUnblockPinInput:
 *
 * The #QmiMessageUimUnblockPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimUnblockPinInput QmiMessageUimUnblockPinInput;
GType qmi_message_uim_unblock_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_UNBLOCK_PIN_INPUT (qmi_message_uim_unblock_pin_input_get_type ())


/**
 * qmi_message_uim_unblock_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_get_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_set_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_get_info:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_puk: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_get_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_puk,
    const gchar **value_info_new_pin,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_set_info:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_puk: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_input_set_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_puk,
    const gchar *value_info_new_pin,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_get_session:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_unblock_pin_input_get_session (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_set_session:
 * @self: a #QmiMessageUimUnblockPinInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_unblock_pin_input_set_session (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_input_ref:
 * @self: a #QmiMessageUimUnblockPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinInput *qmi_message_uim_unblock_pin_input_ref (QmiMessageUimUnblockPinInput *self);

/**
 * qmi_message_uim_unblock_pin_input_unref:
 * @self: a #QmiMessageUimUnblockPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_unblock_pin_input_unref (QmiMessageUimUnblockPinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimUnblockPinInput, qmi_message_uim_unblock_pin_input_unref)

/**
 * qmi_message_uim_unblock_pin_input_new:
 *
 * Allocates a new #QmiMessageUimUnblockPinInput.
 *
 * Returns: the newly created #QmiMessageUimUnblockPinInput. The returned value should be freed with qmi_message_uim_unblock_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinInput *qmi_message_uim_unblock_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimUnblockPinOutput:
 *
 * The #QmiMessageUimUnblockPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimUnblockPinOutput QmiMessageUimUnblockPinOutput;
GType qmi_message_uim_unblock_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT (qmi_message_uim_unblock_pin_output_get_type ())


/**
 * qmi_message_uim_unblock_pin_output_get_card_result:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_card_result (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_output_get_result:
 * @self: a QmiMessageUimUnblockPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_result (
    QmiMessageUimUnblockPinOutput *self,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_retries_remaining_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_retries_remaining (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimUnblockPinOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_unblock_pin_output_get_response_in_indication_token (
    QmiMessageUimUnblockPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_unblock_pin_output_ref:
 * @self: a #QmiMessageUimUnblockPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinOutput *qmi_message_uim_unblock_pin_output_ref (QmiMessageUimUnblockPinOutput *self);

/**
 * qmi_message_uim_unblock_pin_output_unref:
 * @self: a #QmiMessageUimUnblockPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_unblock_pin_output_unref (QmiMessageUimUnblockPinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimUnblockPinOutput, qmi_message_uim_unblock_pin_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Change PIN */


/**
 * SECTION: qmi-message-uim-change-pin
 * @title: UIM Change PIN response
 * @short_description: Methods to manage the UIM Change PIN response.
 *
 * Collection of methods to create requests and parse responses of the UIM Change PIN message.
 */

/* --- Input -- */

/**
 * QmiMessageUimChangePinInput:
 *
 * The #QmiMessageUimChangePinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimChangePinInput QmiMessageUimChangePinInput;
GType qmi_message_uim_change_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PIN_INPUT (qmi_message_uim_change_pin_input_get_type ())


/**
 * qmi_message_uim_change_pin_input_get_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_get_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_set_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_response_in_indication_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Response In Indication Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_set_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_get_info:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiUimPinId, or %NULL if not required.
 * @value_info_old_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_get_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_old_pin,
    const gchar **value_info_new_pin,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_set_info:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_info_pin_id: a #QmiUimPinId.
 * @value_info_old_pin: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_input_set_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_old_pin,
    const gchar *value_info_new_pin,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_get_session:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_change_pin_input_get_session (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_set_session:
 * @self: a #QmiMessageUimChangePinInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_uim_change_pin_input_set_session (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_change_pin_input_ref:
 * @self: a #QmiMessageUimChangePinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimChangePinInput *qmi_message_uim_change_pin_input_ref (QmiMessageUimChangePinInput *self);

/**
 * qmi_message_uim_change_pin_input_unref:
 * @self: a #QmiMessageUimChangePinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_change_pin_input_unref (QmiMessageUimChangePinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimChangePinInput, qmi_message_uim_change_pin_input_unref)

/**
 * qmi_message_uim_change_pin_input_new:
 *
 * Allocates a new #QmiMessageUimChangePinInput.
 *
 * Returns: the newly created #QmiMessageUimChangePinInput. The returned value should be freed with qmi_message_uim_change_pin_input_unref().
 *
 * Since: 1.14
 */
QmiMessageUimChangePinInput *qmi_message_uim_change_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimChangePinOutput:
 *
 * The #QmiMessageUimChangePinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageUimChangePinOutput QmiMessageUimChangePinOutput;
GType qmi_message_uim_change_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PIN_OUTPUT (qmi_message_uim_change_pin_output_get_type ())


/**
 * qmi_message_uim_change_pin_output_get_card_result:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_card_result_sw1: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_card_result_sw2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_card_result (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error);


/**
 * qmi_message_uim_change_pin_output_get_result:
 * @self: a QmiMessageUimChangePinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_result (
    QmiMessageUimChangePinOutput *self,
    GError **error);


/**
 * qmi_message_uim_change_pin_output_get_retries_remaining:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_retries_remaining_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_retries_remaining (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error);


/**
 * qmi_message_uim_change_pin_output_get_response_in_indication_token:
 * @self: a #QmiMessageUimChangePinOutput.
 * @value_response_in_indication_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response In Indication Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_uim_change_pin_output_get_response_in_indication_token (
    QmiMessageUimChangePinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error);


/**
 * qmi_message_uim_change_pin_output_ref:
 * @self: a #QmiMessageUimChangePinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageUimChangePinOutput *qmi_message_uim_change_pin_output_ref (QmiMessageUimChangePinOutput *self);

/**
 * qmi_message_uim_change_pin_output_unref:
 * @self: a #QmiMessageUimChangePinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_uim_change_pin_output_unref (QmiMessageUimChangePinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimChangePinOutput, qmi_message_uim_change_pin_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Register */


/**
 * SECTION: qmi-message-uim-refresh-register
 * @title: UIM Refresh Register response
 * @short_description: Methods to manage the UIM Refresh Register response.
 *
 * Collection of methods to create requests and parse responses of the UIM Refresh Register message.
 */

/* --- Input -- */


/**
 * QmiMessageUimRefreshRegisterInputInfoFilesElement:
 * @file_id: a #guint16.
 * @path: a #GArray of #guint8 elements.
 *
 * A QmiMessageUimRefreshRegisterInputInfoFilesElement struct.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshRegisterInputInfoFilesElement {
    guint16 file_id;
    GArray *path;
} QmiMessageUimRefreshRegisterInputInfoFilesElement;

GType qmi_message_uim_refresh_register_input_info_files_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageUimRefreshRegisterInput:
 *
 * The #QmiMessageUimRefreshRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshRegisterInput QmiMessageUimRefreshRegisterInput;
GType qmi_message_uim_refresh_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_REGISTER_INPUT (qmi_message_uim_refresh_register_input_get_type ())


/**
 * qmi_message_uim_refresh_register_input_get_info: (skip)
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_info_register_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_vote_for_init: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_files: (out)(optional)(element-type QmiMessageUimRefreshRegisterInputInfoFilesElement)(transfer none): a placeholder for the output #GArray of #QmiMessageUimRefreshRegisterInputInfoFilesElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_input_get_info (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean *value_info_register_flag,
    gboolean *value_info_vote_for_init,
    GArray **value_info_files,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_get_info_gir: (rename-to qmi_message_uim_refresh_register_input_get_info)
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_info_register_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_vote_for_init: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_files_ptr: (out)(optional)(element-type QmiMessageUimRefreshRegisterInputInfoFilesElement)(transfer none): a placeholder for the output array of #QmiMessageUimRefreshRegisterInputInfoFilesElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Version of qmi_message_uim_refresh_register_input_get_info() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_refresh_register_input_get_info_gir (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean *value_info_register_flag,
    gboolean *value_info_vote_for_init,
    GPtrArray **value_info_files_ptr,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_set_info: (skip)
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_info_register_flag: a #gboolean.
 * @value_info_vote_for_init: a #gboolean.
 * @value_info_files: (in)(element-type QmiMessageUimRefreshRegisterInputInfoFilesElement)(transfer none): a #GArray of #QmiMessageUimRefreshRegisterInputInfoFilesElement elements. A new reference to @value_info_files will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_input_set_info (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean value_info_register_flag,
    gboolean value_info_vote_for_init,
    GArray *value_info_files,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_set_info_gir: (rename-to qmi_message_uim_refresh_register_input_set_info)
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_info_register_flag: a #gboolean.
 * @value_info_vote_for_init: a #gboolean.
 * @value_info_files_ptr: (in)(element-type QmiMessageUimRefreshRegisterInputInfoFilesElement)(transfer none): array of #QmiMessageUimRefreshRegisterInputInfoFilesElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_refresh_register_input_set_info_gir (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean value_info_register_flag,
    gboolean value_info_vote_for_init,
    GPtrArray *value_info_files_ptr,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_get_session:
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_input_get_session (
    QmiMessageUimRefreshRegisterInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_set_session:
 * @self: a #QmiMessageUimRefreshRegisterInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_input_set_session (
    QmiMessageUimRefreshRegisterInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_register_input_ref:
 * @self: a #QmiMessageUimRefreshRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterInput *qmi_message_uim_refresh_register_input_ref (QmiMessageUimRefreshRegisterInput *self);

/**
 * qmi_message_uim_refresh_register_input_unref:
 * @self: a #QmiMessageUimRefreshRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_register_input_unref (QmiMessageUimRefreshRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshRegisterInput, qmi_message_uim_refresh_register_input_unref)

/**
 * qmi_message_uim_refresh_register_input_new:
 *
 * Allocates a new #QmiMessageUimRefreshRegisterInput.
 *
 * Returns: the newly created #QmiMessageUimRefreshRegisterInput. The returned value should be freed with qmi_message_uim_refresh_register_input_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterInput *qmi_message_uim_refresh_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimRefreshRegisterOutput:
 *
 * The #QmiMessageUimRefreshRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshRegisterOutput QmiMessageUimRefreshRegisterOutput;
GType qmi_message_uim_refresh_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_REGISTER_OUTPUT (qmi_message_uim_refresh_register_output_get_type ())


/**
 * qmi_message_uim_refresh_register_output_get_result:
 * @self: a QmiMessageUimRefreshRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_output_get_result (
    QmiMessageUimRefreshRegisterOutput *self,
    GError **error);


/**
 * qmi_message_uim_refresh_register_output_ref:
 * @self: a #QmiMessageUimRefreshRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterOutput *qmi_message_uim_refresh_register_output_ref (QmiMessageUimRefreshRegisterOutput *self);

/**
 * qmi_message_uim_refresh_register_output_unref:
 * @self: a #QmiMessageUimRefreshRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_register_output_unref (QmiMessageUimRefreshRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshRegisterOutput, qmi_message_uim_refresh_register_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Complete */


/**
 * SECTION: qmi-message-uim-refresh-complete
 * @title: UIM Refresh Complete response
 * @short_description: Methods to manage the UIM Refresh Complete response.
 *
 * Collection of methods to create requests and parse responses of the UIM Refresh Complete message.
 */

/* --- Input -- */

/**
 * QmiMessageUimRefreshCompleteInput:
 *
 * The #QmiMessageUimRefreshCompleteInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshCompleteInput QmiMessageUimRefreshCompleteInput;
GType qmi_message_uim_refresh_complete_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_COMPLETE_INPUT (qmi_message_uim_refresh_complete_input_get_type ())


/**
 * qmi_message_uim_refresh_complete_input_get_info:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 * @value_info_refresh_success: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_complete_input_get_info (
    QmiMessageUimRefreshCompleteInput *self,
    gboolean *value_info_refresh_success,
    GError **error);


/**
 * qmi_message_uim_refresh_complete_input_set_info:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 * @value_info_refresh_success: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_complete_input_set_info (
    QmiMessageUimRefreshCompleteInput *self,
    gboolean value_info_refresh_success,
    GError **error);


/**
 * qmi_message_uim_refresh_complete_input_get_session:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_complete_input_get_session (
    QmiMessageUimRefreshCompleteInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_complete_input_set_session:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_complete_input_set_session (
    QmiMessageUimRefreshCompleteInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_complete_input_ref:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshCompleteInput *qmi_message_uim_refresh_complete_input_ref (QmiMessageUimRefreshCompleteInput *self);

/**
 * qmi_message_uim_refresh_complete_input_unref:
 * @self: a #QmiMessageUimRefreshCompleteInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_complete_input_unref (QmiMessageUimRefreshCompleteInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshCompleteInput, qmi_message_uim_refresh_complete_input_unref)

/**
 * qmi_message_uim_refresh_complete_input_new:
 *
 * Allocates a new #QmiMessageUimRefreshCompleteInput.
 *
 * Returns: the newly created #QmiMessageUimRefreshCompleteInput. The returned value should be freed with qmi_message_uim_refresh_complete_input_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshCompleteInput *qmi_message_uim_refresh_complete_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimRefreshCompleteOutput:
 *
 * The #QmiMessageUimRefreshCompleteOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshCompleteOutput QmiMessageUimRefreshCompleteOutput;
GType qmi_message_uim_refresh_complete_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_COMPLETE_OUTPUT (qmi_message_uim_refresh_complete_output_get_type ())


/**
 * qmi_message_uim_refresh_complete_output_get_result:
 * @self: a QmiMessageUimRefreshCompleteOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_complete_output_get_result (
    QmiMessageUimRefreshCompleteOutput *self,
    GError **error);


/**
 * qmi_message_uim_refresh_complete_output_ref:
 * @self: a #QmiMessageUimRefreshCompleteOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshCompleteOutput *qmi_message_uim_refresh_complete_output_ref (QmiMessageUimRefreshCompleteOutput *self);

/**
 * qmi_message_uim_refresh_complete_output_unref:
 * @self: a #QmiMessageUimRefreshCompleteOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_complete_output_unref (QmiMessageUimRefreshCompleteOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshCompleteOutput, qmi_message_uim_refresh_complete_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Register Events */


/**
 * SECTION: qmi-message-uim-register-events
 * @title: UIM Register Events response
 * @short_description: Methods to manage the UIM Register Events response.
 *
 * Collection of methods to create requests and parse responses of the UIM Register Events message.
 */

/* --- Input -- */

/**
 * QmiMessageUimRegisterEventsInput:
 *
 * The #QmiMessageUimRegisterEventsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22.4
 */
typedef struct _QmiMessageUimRegisterEventsInput QmiMessageUimRegisterEventsInput;
GType qmi_message_uim_register_events_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REGISTER_EVENTS_INPUT (qmi_message_uim_register_events_input_get_type ())


/**
 * qmi_message_uim_register_events_input_get_event_registration_mask:
 * @self: a #QmiMessageUimRegisterEventsInput.
 * @value_event_registration_mask: (out)(optional): a placeholder for the output #QmiUimEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22.4
 */
gboolean qmi_message_uim_register_events_input_get_event_registration_mask (
    QmiMessageUimRegisterEventsInput *self,
    QmiUimEventRegistrationFlag *value_event_registration_mask,
    GError **error);


/**
 * qmi_message_uim_register_events_input_set_event_registration_mask:
 * @self: a #QmiMessageUimRegisterEventsInput.
 * @value_event_registration_mask: a #QmiUimEventRegistrationFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Event Registration Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22.4
 */
gboolean qmi_message_uim_register_events_input_set_event_registration_mask (
    QmiMessageUimRegisterEventsInput *self,
    QmiUimEventRegistrationFlag value_event_registration_mask,
    GError **error);


/**
 * qmi_message_uim_register_events_input_ref:
 * @self: a #QmiMessageUimRegisterEventsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22.4
 */
QmiMessageUimRegisterEventsInput *qmi_message_uim_register_events_input_ref (QmiMessageUimRegisterEventsInput *self);

/**
 * qmi_message_uim_register_events_input_unref:
 * @self: a #QmiMessageUimRegisterEventsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22.4
 */
void qmi_message_uim_register_events_input_unref (QmiMessageUimRegisterEventsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRegisterEventsInput, qmi_message_uim_register_events_input_unref)

/**
 * qmi_message_uim_register_events_input_new:
 *
 * Allocates a new #QmiMessageUimRegisterEventsInput.
 *
 * Returns: the newly created #QmiMessageUimRegisterEventsInput. The returned value should be freed with qmi_message_uim_register_events_input_unref().
 *
 * Since: 1.22.4
 */
QmiMessageUimRegisterEventsInput *qmi_message_uim_register_events_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimRegisterEventsOutput:
 *
 * The #QmiMessageUimRegisterEventsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22.4
 */
typedef struct _QmiMessageUimRegisterEventsOutput QmiMessageUimRegisterEventsOutput;
GType qmi_message_uim_register_events_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT (qmi_message_uim_register_events_output_get_type ())


/**
 * qmi_message_uim_register_events_output_get_result:
 * @self: a QmiMessageUimRegisterEventsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22.4
 */
gboolean qmi_message_uim_register_events_output_get_result (
    QmiMessageUimRegisterEventsOutput *self,
    GError **error);


/**
 * qmi_message_uim_register_events_output_get_event_registration_mask:
 * @self: a #QmiMessageUimRegisterEventsOutput.
 * @value_event_registration_mask: (out)(optional): a placeholder for the output #QmiUimEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22.4
 */
gboolean qmi_message_uim_register_events_output_get_event_registration_mask (
    QmiMessageUimRegisterEventsOutput *self,
    QmiUimEventRegistrationFlag *value_event_registration_mask,
    GError **error);


/**
 * qmi_message_uim_register_events_output_ref:
 * @self: a #QmiMessageUimRegisterEventsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22.4
 */
QmiMessageUimRegisterEventsOutput *qmi_message_uim_register_events_output_ref (QmiMessageUimRegisterEventsOutput *self);

/**
 * qmi_message_uim_register_events_output_unref:
 * @self: a #QmiMessageUimRegisterEventsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22.4
 */
void qmi_message_uim_register_events_output_unref (QmiMessageUimRegisterEventsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRegisterEventsOutput, qmi_message_uim_register_events_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Card Status */


/**
 * SECTION: qmi-message-uim-get-card-status
 * @title: UIM Get Card Status response
 * @short_description: Methods to manage the UIM Get Card Status response.
 *
 * Collection of methods to create requests and parse responses of the UIM Get Card Status message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement:
 * @type: a #QmiUimCardApplicationType.
 * @state: a #QmiUimCardApplicationState.
 * @personalization_state: a #QmiUimCardApplicationPersonalizationState.
 * @personalization_feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @personalization_retries: a #guint8.
 * @personalization_unblock_retries: a #guint8.
 * @application_identifier_value: a #GArray of #guint8 elements.
 * @upin_replaces_pin1: a #gboolean.
 * @pin1_state: a #QmiUimPinState.
 * @pin1_retries: a #guint8.
 * @puk1_retries: a #guint8.
 * @pin2_state: a #QmiUimPinState.
 * @pin2_retries: a #guint8.
 * @puk2_retries: a #guint8.
 *
 * A QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement {
    QmiUimCardApplicationType type;
    QmiUimCardApplicationState state;
    QmiUimCardApplicationPersonalizationState personalization_state;
    QmiUimCardApplicationPersonalizationFeature personalization_feature;
    guint8 personalization_retries;
    guint8 personalization_unblock_retries;
    GArray *application_identifier_value;
    gboolean upin_replaces_pin1;
    QmiUimPinState pin1_state;
    guint8 pin1_retries;
    guint8 puk1_retries;
    QmiUimPinState pin2_state;
    guint8 pin2_retries;
    guint8 puk2_retries;
} QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement;


/**
 * QmiMessageUimGetCardStatusOutputCardStatusCardsElement: (skip)
 * @card_state: a #QmiUimCardState.
 * @upin_state: a #QmiUimPinState.
 * @upin_retries: a #guint8.
 * @upuk_retries: a #guint8.
 * @error_code: a #QmiUimCardError.
 * @applications: a #GArray of #QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement elements.
 *
 * A QmiMessageUimGetCardStatusOutputCardStatusCardsElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutputCardStatusCardsElement {
    QmiUimCardState card_state;
    QmiUimPinState upin_state;
    guint8 upin_retries;
    guint8 upuk_retries;
    QmiUimCardError error_code;
    GArray *applications;
} QmiMessageUimGetCardStatusOutputCardStatusCardsElement;

GType qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir: (rename-to QmiMessageUimGetCardStatusOutputCardStatusCardsElement)
 * @card_state: a #QmiUimCardState.
 * @upin_state: a #QmiUimPinState.
 * @upin_retries: a #guint8.
 * @upuk_retries: a #guint8.
 * @error_code: a #QmiUimCardError.
 * @applications: (element-type QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement): an array of #QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElement elements.
 *
 * A QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir struct.
 *
 * This type is a version of #QmiMessageUimGetCardStatusOutputCardStatusCardsElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir {
    QmiUimCardState card_state;
    QmiUimPinState upin_state;
    guint8 upin_retries;
    guint8 upuk_retries;
    QmiUimCardError error_code;
    GPtrArray *applications;
} QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir;

GType qmi_message_uim_get_card_status_output_card_status_cards_element_gir_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageUimGetCardStatusOutput:
 *
 * The #QmiMessageUimGetCardStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageUimGetCardStatusOutput QmiMessageUimGetCardStatusOutput;
GType qmi_message_uim_get_card_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT (qmi_message_uim_get_card_status_output_get_type ())


/**
 * qmi_message_uim_get_card_status_output_get_card_status: (skip)
 * @self: a #QmiMessageUimGetCardStatusOutput.
 * @value_card_status_index_gw_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_gw_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_cards: (out)(optional)(element-type QmiMessageUimGetCardStatusOutputCardStatusCardsElement)(transfer none): a placeholder for the output #GArray of #QmiMessageUimGetCardStatusOutputCardStatusCardsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_uim_get_card_status_output_get_card_status (
    QmiMessageUimGetCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GArray **value_card_status_cards,
    GError **error);


/**
 * qmi_message_uim_get_card_status_output_get_card_status_gir: (rename-to qmi_message_uim_get_card_status_output_get_card_status)
 * @self: a #QmiMessageUimGetCardStatusOutput.
 * @value_card_status_index_gw_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_primary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_gw_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_index_1x_secondary: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_card_status_cards_ptr: (out)(optional)(element-type QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir)(transfer none): a placeholder for the output array of #QmiMessageUimGetCardStatusOutputCardStatusCardsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Status' field from @self.
 *
 * Version of qmi_message_uim_get_card_status_output_get_card_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_card_status_output_get_card_status_gir (
    QmiMessageUimGetCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GPtrArray **value_card_status_cards_ptr,
    GError **error);


/**
 * qmi_message_uim_get_card_status_output_get_result:
 * @self: a QmiMessageUimGetCardStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_uim_get_card_status_output_get_result (
    QmiMessageUimGetCardStatusOutput *self,
    GError **error);


/**
 * qmi_message_uim_get_card_status_output_ref:
 * @self: a #QmiMessageUimGetCardStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageUimGetCardStatusOutput *qmi_message_uim_get_card_status_output_ref (QmiMessageUimGetCardStatusOutput *self);

/**
 * qmi_message_uim_get_card_status_output_unref:
 * @self: a #QmiMessageUimGetCardStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_uim_get_card_status_output_unref (QmiMessageUimGetCardStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetCardStatusOutput, qmi_message_uim_get_card_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power Off SIM */


/**
 * SECTION: qmi-message-uim-power-off-sim
 * @title: UIM Power Off SIM response
 * @short_description: Methods to manage the UIM Power Off SIM response.
 *
 * Collection of methods to create requests and parse responses of the UIM Power Off SIM message.
 */

/* --- Input -- */

/**
 * QmiMessageUimPowerOffSimInput:
 *
 * The #QmiMessageUimPowerOffSimInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOffSimInput QmiMessageUimPowerOffSimInput;
GType qmi_message_uim_power_off_sim_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_OFF_SIM_INPUT (qmi_message_uim_power_off_sim_input_get_type ())


/**
 * qmi_message_uim_power_off_sim_input_get_slot:
 * @self: a #QmiMessageUimPowerOffSimInput.
 * @value_slot: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_input_get_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 *value_slot,
    GError **error);


/**
 * qmi_message_uim_power_off_sim_input_set_slot:
 * @self: a #QmiMessageUimPowerOffSimInput.
 * @value_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Slot' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_input_set_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 value_slot,
    GError **error);


/**
 * qmi_message_uim_power_off_sim_input_ref:
 * @self: a #QmiMessageUimPowerOffSimInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimInput *qmi_message_uim_power_off_sim_input_ref (QmiMessageUimPowerOffSimInput *self);

/**
 * qmi_message_uim_power_off_sim_input_unref:
 * @self: a #QmiMessageUimPowerOffSimInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_off_sim_input_unref (QmiMessageUimPowerOffSimInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimPowerOffSimInput, qmi_message_uim_power_off_sim_input_unref)

/**
 * qmi_message_uim_power_off_sim_input_new:
 *
 * Allocates a new #QmiMessageUimPowerOffSimInput.
 *
 * Returns: the newly created #QmiMessageUimPowerOffSimInput. The returned value should be freed with qmi_message_uim_power_off_sim_input_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimInput *qmi_message_uim_power_off_sim_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimPowerOffSimOutput:
 *
 * The #QmiMessageUimPowerOffSimOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOffSimOutput QmiMessageUimPowerOffSimOutput;
GType qmi_message_uim_power_off_sim_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_OFF_SIM_OUTPUT (qmi_message_uim_power_off_sim_output_get_type ())


/**
 * qmi_message_uim_power_off_sim_output_get_result:
 * @self: a QmiMessageUimPowerOffSimOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_off_sim_output_get_result (
    QmiMessageUimPowerOffSimOutput *self,
    GError **error);


/**
 * qmi_message_uim_power_off_sim_output_ref:
 * @self: a #QmiMessageUimPowerOffSimOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimOutput *qmi_message_uim_power_off_sim_output_ref (QmiMessageUimPowerOffSimOutput *self);

/**
 * qmi_message_uim_power_off_sim_output_unref:
 * @self: a #QmiMessageUimPowerOffSimOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_off_sim_output_unref (QmiMessageUimPowerOffSimOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimPowerOffSimOutput, qmi_message_uim_power_off_sim_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power On SIM */


/**
 * SECTION: qmi-message-uim-power-on-sim
 * @title: UIM Power On SIM response
 * @short_description: Methods to manage the UIM Power On SIM response.
 *
 * Collection of methods to create requests and parse responses of the UIM Power On SIM message.
 */

/* --- Input -- */

/**
 * QmiMessageUimPowerOnSimInput:
 *
 * The #QmiMessageUimPowerOnSimInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOnSimInput QmiMessageUimPowerOnSimInput;
GType qmi_message_uim_power_on_sim_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_ON_SIM_INPUT (qmi_message_uim_power_on_sim_input_get_type ())


/**
 * qmi_message_uim_power_on_sim_input_get_slot:
 * @self: a #QmiMessageUimPowerOnSimInput.
 * @value_slot: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_input_get_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 *value_slot,
    GError **error);


/**
 * qmi_message_uim_power_on_sim_input_set_slot:
 * @self: a #QmiMessageUimPowerOnSimInput.
 * @value_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Slot' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_input_set_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 value_slot,
    GError **error);


/**
 * qmi_message_uim_power_on_sim_input_ref:
 * @self: a #QmiMessageUimPowerOnSimInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimInput *qmi_message_uim_power_on_sim_input_ref (QmiMessageUimPowerOnSimInput *self);

/**
 * qmi_message_uim_power_on_sim_input_unref:
 * @self: a #QmiMessageUimPowerOnSimInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_on_sim_input_unref (QmiMessageUimPowerOnSimInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimPowerOnSimInput, qmi_message_uim_power_on_sim_input_unref)

/**
 * qmi_message_uim_power_on_sim_input_new:
 *
 * Allocates a new #QmiMessageUimPowerOnSimInput.
 *
 * Returns: the newly created #QmiMessageUimPowerOnSimInput. The returned value should be freed with qmi_message_uim_power_on_sim_input_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimInput *qmi_message_uim_power_on_sim_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimPowerOnSimOutput:
 *
 * The #QmiMessageUimPowerOnSimOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageUimPowerOnSimOutput QmiMessageUimPowerOnSimOutput;
GType qmi_message_uim_power_on_sim_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_POWER_ON_SIM_OUTPUT (qmi_message_uim_power_on_sim_output_get_type ())


/**
 * qmi_message_uim_power_on_sim_output_get_result:
 * @self: a QmiMessageUimPowerOnSimOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_uim_power_on_sim_output_get_result (
    QmiMessageUimPowerOnSimOutput *self,
    GError **error);


/**
 * qmi_message_uim_power_on_sim_output_ref:
 * @self: a #QmiMessageUimPowerOnSimOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimOutput *qmi_message_uim_power_on_sim_output_ref (QmiMessageUimPowerOnSimOutput *self);

/**
 * qmi_message_uim_power_on_sim_output_unref:
 * @self: a #QmiMessageUimPowerOnSimOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_uim_power_on_sim_output_unref (QmiMessageUimPowerOnSimOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimPowerOnSimOutput, qmi_message_uim_power_on_sim_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Change Provisioning Session */


/**
 * SECTION: qmi-message-uim-change-provisioning-session
 * @title: UIM Change Provisioning Session response
 * @short_description: Methods to manage the UIM Change Provisioning Session response.
 *
 * Collection of methods to create requests and parse responses of the UIM Change Provisioning Session message.
 */

/* --- Input -- */

/**
 * QmiMessageUimChangeProvisioningSessionInput:
 *
 * The #QmiMessageUimChangeProvisioningSessionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.24
 */
typedef struct _QmiMessageUimChangeProvisioningSessionInput QmiMessageUimChangeProvisioningSessionInput;
GType qmi_message_uim_change_provisioning_session_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT (qmi_message_uim_change_provisioning_session_input_get_type ())


/**
 * qmi_message_uim_change_provisioning_session_input_get_application_information:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 * @value_application_information_slot: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_application_information_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Application Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_uim_change_provisioning_session_input_get_application_information (
    QmiMessageUimChangeProvisioningSessionInput *self,
    guint8 *value_application_information_slot,
    GArray **value_application_information_application_identifier,
    GError **error);


/**
 * qmi_message_uim_change_provisioning_session_input_set_application_information:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 * @value_application_information_slot: a #guint8.
 * @value_application_information_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_application_information_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Application Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_uim_change_provisioning_session_input_set_application_information (
    QmiMessageUimChangeProvisioningSessionInput *self,
    guint8 value_application_information_slot,
    GArray *value_application_information_application_identifier,
    GError **error);


/**
 * qmi_message_uim_change_provisioning_session_input_get_session_change:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 * @value_session_change_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_change_activate: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Change' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_uim_change_provisioning_session_input_get_session_change (
    QmiMessageUimChangeProvisioningSessionInput *self,
    QmiUimSessionType *value_session_change_session_type,
    gboolean *value_session_change_activate,
    GError **error);


/**
 * qmi_message_uim_change_provisioning_session_input_set_session_change:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 * @value_session_change_session_type: a #QmiUimSessionType.
 * @value_session_change_activate: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Change' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_uim_change_provisioning_session_input_set_session_change (
    QmiMessageUimChangeProvisioningSessionInput *self,
    QmiUimSessionType value_session_change_session_type,
    gboolean value_session_change_activate,
    GError **error);


/**
 * qmi_message_uim_change_provisioning_session_input_ref:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.24
 */
QmiMessageUimChangeProvisioningSessionInput *qmi_message_uim_change_provisioning_session_input_ref (QmiMessageUimChangeProvisioningSessionInput *self);

/**
 * qmi_message_uim_change_provisioning_session_input_unref:
 * @self: a #QmiMessageUimChangeProvisioningSessionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.24
 */
void qmi_message_uim_change_provisioning_session_input_unref (QmiMessageUimChangeProvisioningSessionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimChangeProvisioningSessionInput, qmi_message_uim_change_provisioning_session_input_unref)

/**
 * qmi_message_uim_change_provisioning_session_input_new:
 *
 * Allocates a new #QmiMessageUimChangeProvisioningSessionInput.
 *
 * Returns: the newly created #QmiMessageUimChangeProvisioningSessionInput. The returned value should be freed with qmi_message_uim_change_provisioning_session_input_unref().
 *
 * Since: 1.24
 */
QmiMessageUimChangeProvisioningSessionInput *qmi_message_uim_change_provisioning_session_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimChangeProvisioningSessionOutput:
 *
 * The #QmiMessageUimChangeProvisioningSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.24
 */
typedef struct _QmiMessageUimChangeProvisioningSessionOutput QmiMessageUimChangeProvisioningSessionOutput;
GType qmi_message_uim_change_provisioning_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_OUTPUT (qmi_message_uim_change_provisioning_session_output_get_type ())


/**
 * qmi_message_uim_change_provisioning_session_output_get_result:
 * @self: a QmiMessageUimChangeProvisioningSessionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.24
 */
gboolean qmi_message_uim_change_provisioning_session_output_get_result (
    QmiMessageUimChangeProvisioningSessionOutput *self,
    GError **error);


/**
 * qmi_message_uim_change_provisioning_session_output_ref:
 * @self: a #QmiMessageUimChangeProvisioningSessionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.24
 */
QmiMessageUimChangeProvisioningSessionOutput *qmi_message_uim_change_provisioning_session_output_ref (QmiMessageUimChangeProvisioningSessionOutput *self);

/**
 * qmi_message_uim_change_provisioning_session_output_unref:
 * @self: a #QmiMessageUimChangeProvisioningSessionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.24
 */
void qmi_message_uim_change_provisioning_session_output_unref (QmiMessageUimChangeProvisioningSessionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimChangeProvisioningSessionOutput, qmi_message_uim_change_provisioning_session_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Depersonalization */


/**
 * SECTION: qmi-message-uim-depersonalization
 * @title: UIM Depersonalization response
 * @short_description: Methods to manage the UIM Depersonalization response.
 *
 * Collection of methods to create requests and parse responses of the UIM Depersonalization message.
 */

/* --- Input -- */

/**
 * QmiMessageUimDepersonalizationInput:
 *
 * The #QmiMessageUimDepersonalizationInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageUimDepersonalizationInput QmiMessageUimDepersonalizationInput;
GType qmi_message_uim_depersonalization_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_DEPERSONALIZATION_INPUT (qmi_message_uim_depersonalization_input_get_type ())


/**
 * qmi_message_uim_depersonalization_input_get_slot:
 * @self: a #QmiMessageUimDepersonalizationInput.
 * @value_slot: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_input_get_slot (
    QmiMessageUimDepersonalizationInput *self,
    guint8 *value_slot,
    GError **error);


/**
 * qmi_message_uim_depersonalization_input_set_slot:
 * @self: a #QmiMessageUimDepersonalizationInput.
 * @value_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Slot' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_input_set_slot (
    QmiMessageUimDepersonalizationInput *self,
    guint8 value_slot,
    GError **error);


/**
 * qmi_message_uim_depersonalization_input_get_info:
 * @self: a #QmiMessageUimDepersonalizationInput.
 * @value_info_feature: (out)(optional): a placeholder for the output #QmiUimCardApplicationPersonalizationFeature, or %NULL if not required.
 * @value_info_operation: (out)(optional): a placeholder for the output #QmiUimDepersonalizationOperation, or %NULL if not required.
 * @value_info_control_key: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_input_get_info (
    QmiMessageUimDepersonalizationInput *self,
    QmiUimCardApplicationPersonalizationFeature *value_info_feature,
    QmiUimDepersonalizationOperation *value_info_operation,
    const gchar **value_info_control_key,
    GError **error);


/**
 * qmi_message_uim_depersonalization_input_set_info:
 * @self: a #QmiMessageUimDepersonalizationInput.
 * @value_info_feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @value_info_operation: a #QmiUimDepersonalizationOperation.
 * @value_info_control_key: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_input_set_info (
    QmiMessageUimDepersonalizationInput *self,
    QmiUimCardApplicationPersonalizationFeature value_info_feature,
    QmiUimDepersonalizationOperation value_info_operation,
    const gchar *value_info_control_key,
    GError **error);


/**
 * qmi_message_uim_depersonalization_input_ref:
 * @self: a #QmiMessageUimDepersonalizationInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageUimDepersonalizationInput *qmi_message_uim_depersonalization_input_ref (QmiMessageUimDepersonalizationInput *self);

/**
 * qmi_message_uim_depersonalization_input_unref:
 * @self: a #QmiMessageUimDepersonalizationInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_uim_depersonalization_input_unref (QmiMessageUimDepersonalizationInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimDepersonalizationInput, qmi_message_uim_depersonalization_input_unref)

/**
 * qmi_message_uim_depersonalization_input_new:
 *
 * Allocates a new #QmiMessageUimDepersonalizationInput.
 *
 * Returns: the newly created #QmiMessageUimDepersonalizationInput. The returned value should be freed with qmi_message_uim_depersonalization_input_unref().
 *
 * Since: 1.30
 */
QmiMessageUimDepersonalizationInput *qmi_message_uim_depersonalization_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimDepersonalizationOutput:
 *
 * The #QmiMessageUimDepersonalizationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageUimDepersonalizationOutput QmiMessageUimDepersonalizationOutput;
GType qmi_message_uim_depersonalization_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT (qmi_message_uim_depersonalization_output_get_type ())


/**
 * qmi_message_uim_depersonalization_output_get_result:
 * @self: a QmiMessageUimDepersonalizationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_output_get_result (
    QmiMessageUimDepersonalizationOutput *self,
    GError **error);


/**
 * qmi_message_uim_depersonalization_output_get_retries_remaining:
 * @self: a #QmiMessageUimDepersonalizationOutput.
 * @value_retries_remaining_verify_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retries_remaining_unblock_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retries Remaining' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_depersonalization_output_get_retries_remaining (
    QmiMessageUimDepersonalizationOutput *self,
    guint8 *value_retries_remaining_verify_left,
    guint8 *value_retries_remaining_unblock_left,
    GError **error);


/**
 * qmi_message_uim_depersonalization_output_ref:
 * @self: a #QmiMessageUimDepersonalizationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageUimDepersonalizationOutput *qmi_message_uim_depersonalization_output_ref (QmiMessageUimDepersonalizationOutput *self);

/**
 * qmi_message_uim_depersonalization_output_unref:
 * @self: a #QmiMessageUimDepersonalizationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_uim_depersonalization_output_unref (QmiMessageUimDepersonalizationOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimDepersonalizationOutput, qmi_message_uim_depersonalization_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Configuration */


/**
 * SECTION: qmi-message-uim-get-configuration
 * @title: UIM Get Configuration response
 * @short_description: Methods to manage the UIM Get Configuration response.
 *
 * Collection of methods to create requests and parse responses of the UIM Get Configuration message.
 */

/* --- Input -- */

/**
 * QmiMessageUimGetConfigurationInput:
 *
 * The #QmiMessageUimGetConfigurationInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageUimGetConfigurationInput QmiMessageUimGetConfigurationInput;
GType qmi_message_uim_get_configuration_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_CONFIGURATION_INPUT (qmi_message_uim_get_configuration_input_get_type ())


/**
 * qmi_message_uim_get_configuration_input_get_configuration_mask:
 * @self: a #QmiMessageUimGetConfigurationInput.
 * @value_configuration_mask: (out)(optional): a placeholder for the output #QmiUimConfiguration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Configuration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_input_get_configuration_mask (
    QmiMessageUimGetConfigurationInput *self,
    QmiUimConfiguration *value_configuration_mask,
    GError **error);


/**
 * qmi_message_uim_get_configuration_input_set_configuration_mask:
 * @self: a #QmiMessageUimGetConfigurationInput.
 * @value_configuration_mask: a #QmiUimConfiguration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Configuration Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_input_set_configuration_mask (
    QmiMessageUimGetConfigurationInput *self,
    QmiUimConfiguration value_configuration_mask,
    GError **error);


/**
 * qmi_message_uim_get_configuration_input_ref:
 * @self: a #QmiMessageUimGetConfigurationInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageUimGetConfigurationInput *qmi_message_uim_get_configuration_input_ref (QmiMessageUimGetConfigurationInput *self);

/**
 * qmi_message_uim_get_configuration_input_unref:
 * @self: a #QmiMessageUimGetConfigurationInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_uim_get_configuration_input_unref (QmiMessageUimGetConfigurationInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetConfigurationInput, qmi_message_uim_get_configuration_input_unref)

/**
 * qmi_message_uim_get_configuration_input_new:
 *
 * Allocates a new #QmiMessageUimGetConfigurationInput.
 *
 * Returns: the newly created #QmiMessageUimGetConfigurationInput. The returned value should be freed with qmi_message_uim_get_configuration_input_unref().
 *
 * Since: 1.30
 */
QmiMessageUimGetConfigurationInput *qmi_message_uim_get_configuration_input_new (void);

/* --- Output -- */


/**
 * QmiMessageUimGetConfigurationOutputPersonalizationStatusElement:
 * @feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @verify_left: a #guint8.
 * @unblock_left: a #guint8.
 *
 * A QmiMessageUimGetConfigurationOutputPersonalizationStatusElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageUimGetConfigurationOutputPersonalizationStatusElement {
    QmiUimCardApplicationPersonalizationFeature feature;
    guint8 verify_left;
    guint8 unblock_left;
} QmiMessageUimGetConfigurationOutputPersonalizationStatusElement;

GType qmi_message_uim_get_configuration_output_personalization_status_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement:
 * @feature: a #QmiUimCardApplicationPersonalizationFeature.
 * @verify_left: a #guint8.
 * @unblock_left: a #guint8.
 *
 * A QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement struct.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement {
    QmiUimCardApplicationPersonalizationFeature feature;
    guint8 verify_left;
    guint8 unblock_left;
} QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement;


/**
 * QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement: (skip)
 * @slot: a #GArray of #QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement elements.
 *
 * A QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement struct.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement {
    GArray *slot;
} QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement;

GType qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir: (rename-to QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement)
 * @slot: (element-type QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement): an array of #QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement elements.
 *
 * A QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir struct.
 *
 * This type is a version of #QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir {
    GPtrArray *slot;
} QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir;

GType qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageUimGetConfigurationOutput:
 *
 * The #QmiMessageUimGetConfigurationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageUimGetConfigurationOutput QmiMessageUimGetConfigurationOutput;
GType qmi_message_uim_get_configuration_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT (qmi_message_uim_get_configuration_output_get_type ())
G_GNUC_INTERNAL
gpointer qmi_message_uim_get_configuration_output_get_compat_context (QmiMessageUimGetConfigurationOutput *self);
G_GNUC_INTERNAL
void qmi_message_uim_get_configuration_output_set_compat_context (
    QmiMessageUimGetConfigurationOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free);


/**
 * qmi_message_uim_get_configuration_output_get_result:
 * @self: a QmiMessageUimGetConfigurationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_output_get_result (
    QmiMessageUimGetConfigurationOutput *self,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_automatic_selection:
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_automatic_selection: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Automatic Selection' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_output_get_automatic_selection (
    QmiMessageUimGetConfigurationOutput *self,
    gboolean *value_automatic_selection,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_personalization_status: (skip)
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_personalization_status: (out)(optional)(element-type QmiMessageUimGetConfigurationOutputPersonalizationStatusElement)(transfer none): a placeholder for the output #GArray of #QmiMessageUimGetConfigurationOutputPersonalizationStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Personalization Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_output_get_personalization_status (
    QmiMessageUimGetConfigurationOutput *self,
    GArray **value_personalization_status,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_personalization_status_gir: (rename-to qmi_message_uim_get_configuration_output_get_personalization_status)
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_personalization_status_ptr: (out)(optional)(element-type QmiMessageUimGetConfigurationOutputPersonalizationStatusElement)(transfer none): a placeholder for the output array of #QmiMessageUimGetConfigurationOutputPersonalizationStatusElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Personalization Status' field from @self.
 *
 * Version of qmi_message_uim_get_configuration_output_get_personalization_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_configuration_output_get_personalization_status_gir (
    QmiMessageUimGetConfigurationOutput *self,
    GPtrArray **value_personalization_status_ptr,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_halt_subscription:
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_halt_subscription: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Halt Subscription' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_uim_get_configuration_output_get_halt_subscription (
    QmiMessageUimGetConfigurationOutput *self,
    gboolean *value_halt_subscription,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_personalization_status_other: (skip)
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_personalization_status_other: (out)(optional)(element-type QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement)(transfer none): a placeholder for the output #GArray of #QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Personalization Status Other' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_configuration_output_get_personalization_status_other (
    QmiMessageUimGetConfigurationOutput *self,
    GArray **value_personalization_status_other,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_get_personalization_status_other_gir: (rename-to qmi_message_uim_get_configuration_output_get_personalization_status_other)
 * @self: a #QmiMessageUimGetConfigurationOutput.
 * @value_personalization_status_other_ptr: (out)(optional)(element-type QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir)(transfer none): a placeholder for the output array of #QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Personalization Status Other' field from @self.
 *
 * Version of qmi_message_uim_get_configuration_output_get_personalization_status_other() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_configuration_output_get_personalization_status_other_gir (
    QmiMessageUimGetConfigurationOutput *self,
    GPtrArray **value_personalization_status_other_ptr,
    GError **error);


/**
 * qmi_message_uim_get_configuration_output_ref:
 * @self: a #QmiMessageUimGetConfigurationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageUimGetConfigurationOutput *qmi_message_uim_get_configuration_output_ref (QmiMessageUimGetConfigurationOutput *self);

/**
 * qmi_message_uim_get_configuration_output_unref:
 * @self: a #QmiMessageUimGetConfigurationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_uim_get_configuration_output_unref (QmiMessageUimGetConfigurationOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetConfigurationOutput, qmi_message_uim_get_configuration_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Register All */


/**
 * SECTION: qmi-message-uim-refresh-register-all
 * @title: UIM Refresh Register All response
 * @short_description: Methods to manage the UIM Refresh Register All response.
 *
 * Collection of methods to create requests and parse responses of the UIM Refresh Register All message.
 */

/* --- Input -- */

/**
 * QmiMessageUimRefreshRegisterAllInput:
 *
 * The #QmiMessageUimRefreshRegisterAllInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshRegisterAllInput QmiMessageUimRefreshRegisterAllInput;
GType qmi_message_uim_refresh_register_all_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT (qmi_message_uim_refresh_register_all_input_get_type ())


/**
 * qmi_message_uim_refresh_register_all_input_get_info:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 * @value_info_register_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_all_input_get_info (
    QmiMessageUimRefreshRegisterAllInput *self,
    gboolean *value_info_register_flag,
    GError **error);


/**
 * qmi_message_uim_refresh_register_all_input_set_info:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 * @value_info_register_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_all_input_set_info (
    QmiMessageUimRefreshRegisterAllInput *self,
    gboolean value_info_register_flag,
    GError **error);


/**
 * qmi_message_uim_refresh_register_all_input_get_session:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 * @value_session_session_type: (out)(optional): a placeholder for the output #QmiUimSessionType, or %NULL if not required.
 * @value_session_application_identifier: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_all_input_get_session (
    QmiMessageUimRefreshRegisterAllInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_register_all_input_set_session:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 * @value_session_session_type: a #QmiUimSessionType.
 * @value_session_application_identifier: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_session_application_identifier will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_all_input_set_session (
    QmiMessageUimRefreshRegisterAllInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error);


/**
 * qmi_message_uim_refresh_register_all_input_ref:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterAllInput *qmi_message_uim_refresh_register_all_input_ref (QmiMessageUimRefreshRegisterAllInput *self);

/**
 * qmi_message_uim_refresh_register_all_input_unref:
 * @self: a #QmiMessageUimRefreshRegisterAllInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_register_all_input_unref (QmiMessageUimRefreshRegisterAllInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshRegisterAllInput, qmi_message_uim_refresh_register_all_input_unref)

/**
 * qmi_message_uim_refresh_register_all_input_new:
 *
 * Allocates a new #QmiMessageUimRefreshRegisterAllInput.
 *
 * Returns: the newly created #QmiMessageUimRefreshRegisterAllInput. The returned value should be freed with qmi_message_uim_refresh_register_all_input_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterAllInput *qmi_message_uim_refresh_register_all_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimRefreshRegisterAllOutput:
 *
 * The #QmiMessageUimRefreshRegisterAllOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageUimRefreshRegisterAllOutput QmiMessageUimRefreshRegisterAllOutput;
GType qmi_message_uim_refresh_register_all_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REFRESH_REGISTER_ALL_OUTPUT (qmi_message_uim_refresh_register_all_output_get_type ())


/**
 * qmi_message_uim_refresh_register_all_output_get_result:
 * @self: a QmiMessageUimRefreshRegisterAllOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_uim_refresh_register_all_output_get_result (
    QmiMessageUimRefreshRegisterAllOutput *self,
    GError **error);


/**
 * qmi_message_uim_refresh_register_all_output_ref:
 * @self: a #QmiMessageUimRefreshRegisterAllOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterAllOutput *qmi_message_uim_refresh_register_all_output_ref (QmiMessageUimRefreshRegisterAllOutput *self);

/**
 * qmi_message_uim_refresh_register_all_output_unref:
 * @self: a #QmiMessageUimRefreshRegisterAllOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_uim_refresh_register_all_output_unref (QmiMessageUimRefreshRegisterAllOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRefreshRegisterAllOutput, qmi_message_uim_refresh_register_all_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Switch Slot */


/**
 * SECTION: qmi-message-uim-switch-slot
 * @title: UIM Switch Slot response
 * @short_description: Methods to manage the UIM Switch Slot response.
 *
 * Collection of methods to create requests and parse responses of the UIM Switch Slot message.
 */

/* --- Input -- */

/**
 * QmiMessageUimSwitchSlotInput:
 *
 * The #QmiMessageUimSwitchSlotInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageUimSwitchSlotInput QmiMessageUimSwitchSlotInput;
GType qmi_message_uim_switch_slot_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SWITCH_SLOT_INPUT (qmi_message_uim_switch_slot_input_get_type ())


/**
 * qmi_message_uim_switch_slot_input_get_physical_slot:
 * @self: a #QmiMessageUimSwitchSlotInput.
 * @value_physical_slot: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_switch_slot_input_get_physical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint32 *value_physical_slot,
    GError **error);


/**
 * qmi_message_uim_switch_slot_input_set_physical_slot:
 * @self: a #QmiMessageUimSwitchSlotInput.
 * @value_physical_slot: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Physical Slot' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_switch_slot_input_set_physical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint32 value_physical_slot,
    GError **error);


/**
 * qmi_message_uim_switch_slot_input_get_logical_slot:
 * @self: a #QmiMessageUimSwitchSlotInput.
 * @value_logical_slot: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Logical Slot' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_switch_slot_input_get_logical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint8 *value_logical_slot,
    GError **error);


/**
 * qmi_message_uim_switch_slot_input_set_logical_slot:
 * @self: a #QmiMessageUimSwitchSlotInput.
 * @value_logical_slot: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Logical Slot' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_switch_slot_input_set_logical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint8 value_logical_slot,
    GError **error);


/**
 * qmi_message_uim_switch_slot_input_ref:
 * @self: a #QmiMessageUimSwitchSlotInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageUimSwitchSlotInput *qmi_message_uim_switch_slot_input_ref (QmiMessageUimSwitchSlotInput *self);

/**
 * qmi_message_uim_switch_slot_input_unref:
 * @self: a #QmiMessageUimSwitchSlotInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_uim_switch_slot_input_unref (QmiMessageUimSwitchSlotInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimSwitchSlotInput, qmi_message_uim_switch_slot_input_unref)

/**
 * qmi_message_uim_switch_slot_input_new:
 *
 * Allocates a new #QmiMessageUimSwitchSlotInput.
 *
 * Returns: the newly created #QmiMessageUimSwitchSlotInput. The returned value should be freed with qmi_message_uim_switch_slot_input_unref().
 *
 * Since: 1.26
 */
QmiMessageUimSwitchSlotInput *qmi_message_uim_switch_slot_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimSwitchSlotOutput:
 *
 * The #QmiMessageUimSwitchSlotOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageUimSwitchSlotOutput QmiMessageUimSwitchSlotOutput;
GType qmi_message_uim_switch_slot_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_SWITCH_SLOT_OUTPUT (qmi_message_uim_switch_slot_output_get_type ())


/**
 * qmi_message_uim_switch_slot_output_get_result:
 * @self: a QmiMessageUimSwitchSlotOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_switch_slot_output_get_result (
    QmiMessageUimSwitchSlotOutput *self,
    GError **error);


/**
 * qmi_message_uim_switch_slot_output_ref:
 * @self: a #QmiMessageUimSwitchSlotOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageUimSwitchSlotOutput *qmi_message_uim_switch_slot_output_ref (QmiMessageUimSwitchSlotOutput *self);

/**
 * qmi_message_uim_switch_slot_output_unref:
 * @self: a #QmiMessageUimSwitchSlotOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_uim_switch_slot_output_unref (QmiMessageUimSwitchSlotOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimSwitchSlotOutput, qmi_message_uim_switch_slot_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Slot Status */


/**
 * SECTION: qmi-message-uim-get-slot-status
 * @title: UIM Get Slot Status response
 * @short_description: Methods to manage the UIM Get Slot Status response.
 *
 * Collection of methods to create requests and parse responses of the UIM Get Slot Status message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageUimGetSlotStatusOutput:
 *
 * The #QmiMessageUimGetSlotStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageUimGetSlotStatusOutput QmiMessageUimGetSlotStatusOutput;
GType qmi_message_uim_get_slot_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT (qmi_message_uim_get_slot_status_output_get_type ())
G_GNUC_INTERNAL
gpointer qmi_message_uim_get_slot_status_output_get_compat_context (QmiMessageUimGetSlotStatusOutput *self);
G_GNUC_INTERNAL
void qmi_message_uim_get_slot_status_output_set_compat_context (
    QmiMessageUimGetSlotStatusOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free);


/**
 * qmi_message_uim_get_slot_status_output_get_slot_eid: (skip)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_slot_eid: (out)(optional)(element-type QmiSlotEidElement)(transfer none): a placeholder for the output #GArray of #QmiSlotEidElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot EID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_slot_status_output_get_slot_eid (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_slot_eid,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_slot_eid_gir: (rename-to qmi_message_uim_get_slot_status_output_get_slot_eid)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_slot_eid_ptr: (out)(optional)(element-type QmiSlotEidElement)(transfer none): a placeholder for the output array of #QmiSlotEidElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot EID' field from @self.
 *
 * Version of qmi_message_uim_get_slot_status_output_get_slot_eid() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_slot_status_output_get_slot_eid_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_slot_eid_ptr,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_physical_slot_information: (skip)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_physical_slot_information: (out)(optional)(element-type QmiPhysicalSlotInformationSlot)(transfer none): a placeholder for the output #GArray of #QmiPhysicalSlotInformationSlot elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_get_slot_status_output_get_physical_slot_information (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_physical_slot_information,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_physical_slot_information_gir: (rename-to qmi_message_uim_get_slot_status_output_get_physical_slot_information)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_physical_slot_information_ptr: (out)(optional)(element-type QmiPhysicalSlotInformationSlot)(transfer none): a placeholder for the output array of #QmiPhysicalSlotInformationSlot elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Information' field from @self.
 *
 * Version of qmi_message_uim_get_slot_status_output_get_physical_slot_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_slot_status_output_get_physical_slot_information_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_physical_slot_information_ptr,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_physical_slot_status: (skip)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_physical_slot_status: (out)(optional)(element-type QmiPhysicalSlotStatusSlot)(transfer none): a placeholder for the output #GArray of #QmiPhysicalSlotStatusSlot elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_get_slot_status_output_get_physical_slot_status (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_physical_slot_status,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_physical_slot_status_gir: (rename-to qmi_message_uim_get_slot_status_output_get_physical_slot_status)
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 * @value_physical_slot_status_ptr: (out)(optional)(element-type QmiPhysicalSlotStatusSlot)(transfer none): a placeholder for the output array of #QmiPhysicalSlotStatusSlot elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Physical Slot Status' field from @self.
 *
 * Version of qmi_message_uim_get_slot_status_output_get_physical_slot_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_get_slot_status_output_get_physical_slot_status_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_physical_slot_status_ptr,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_get_result:
 * @self: a QmiMessageUimGetSlotStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_uim_get_slot_status_output_get_result (
    QmiMessageUimGetSlotStatusOutput *self,
    GError **error);


/**
 * qmi_message_uim_get_slot_status_output_ref:
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageUimGetSlotStatusOutput *qmi_message_uim_get_slot_status_output_ref (QmiMessageUimGetSlotStatusOutput *self);

/**
 * qmi_message_uim_get_slot_status_output_unref:
 * @self: a #QmiMessageUimGetSlotStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_uim_get_slot_status_output_unref (QmiMessageUimGetSlotStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimGetSlotStatusOutput, qmi_message_uim_get_slot_status_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Remote Unlock */


/**
 * SECTION: qmi-message-uim-remote-unlock
 * @title: UIM Remote Unlock response
 * @short_description: Methods to manage the UIM Remote Unlock response.
 *
 * Collection of methods to create requests and parse responses of the UIM Remote Unlock message.
 */

/* --- Input -- */

/**
 * QmiMessageUimRemoteUnlockInput:
 *
 * The #QmiMessageUimRemoteUnlockInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimRemoteUnlockInput QmiMessageUimRemoteUnlockInput;
GType qmi_message_uim_remote_unlock_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REMOTE_UNLOCK_INPUT (qmi_message_uim_remote_unlock_input_get_type ())


/**
 * qmi_message_uim_remote_unlock_input_get_simlock_extended_data:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 * @value_simlock_extended_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SimLock Extended Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_remote_unlock_input_get_simlock_extended_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray **value_simlock_extended_data,
    GError **error);


/**
 * qmi_message_uim_remote_unlock_input_set_simlock_extended_data:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 * @value_simlock_extended_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_simlock_extended_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SimLock Extended Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_remote_unlock_input_set_simlock_extended_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray *value_simlock_extended_data,
    GError **error);


/**
 * qmi_message_uim_remote_unlock_input_get_simlock_data:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 * @value_simlock_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SimLock Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_remote_unlock_input_get_simlock_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray **value_simlock_data,
    GError **error);


/**
 * qmi_message_uim_remote_unlock_input_set_simlock_data:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 * @value_simlock_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_simlock_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SimLock Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_remote_unlock_input_set_simlock_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray *value_simlock_data,
    GError **error);


/**
 * qmi_message_uim_remote_unlock_input_ref:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageUimRemoteUnlockInput *qmi_message_uim_remote_unlock_input_ref (QmiMessageUimRemoteUnlockInput *self);

/**
 * qmi_message_uim_remote_unlock_input_unref:
 * @self: a #QmiMessageUimRemoteUnlockInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_uim_remote_unlock_input_unref (QmiMessageUimRemoteUnlockInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRemoteUnlockInput, qmi_message_uim_remote_unlock_input_unref)

/**
 * qmi_message_uim_remote_unlock_input_new:
 *
 * Allocates a new #QmiMessageUimRemoteUnlockInput.
 *
 * Returns: the newly created #QmiMessageUimRemoteUnlockInput. The returned value should be freed with qmi_message_uim_remote_unlock_input_unref().
 *
 * Since: 1.32
 */
QmiMessageUimRemoteUnlockInput *qmi_message_uim_remote_unlock_input_new (void);

/* --- Output -- */

/**
 * QmiMessageUimRemoteUnlockOutput:
 *
 * The #QmiMessageUimRemoteUnlockOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageUimRemoteUnlockOutput QmiMessageUimRemoteUnlockOutput;
GType qmi_message_uim_remote_unlock_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_UIM_REMOTE_UNLOCK_OUTPUT (qmi_message_uim_remote_unlock_output_get_type ())


/**
 * qmi_message_uim_remote_unlock_output_get_result:
 * @self: a QmiMessageUimRemoteUnlockOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_uim_remote_unlock_output_get_result (
    QmiMessageUimRemoteUnlockOutput *self,
    GError **error);


/**
 * qmi_message_uim_remote_unlock_output_ref:
 * @self: a #QmiMessageUimRemoteUnlockOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageUimRemoteUnlockOutput *qmi_message_uim_remote_unlock_output_ref (QmiMessageUimRemoteUnlockOutput *self);

/**
 * qmi_message_uim_remote_unlock_output_unref:
 * @self: a #QmiMessageUimRemoteUnlockOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_uim_remote_unlock_output_unref (QmiMessageUimRemoteUnlockOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageUimRemoteUnlockOutput, qmi_message_uim_remote_unlock_output_unref)

/*****************************************************************************/
/* Service-specific utils: UIM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_uim_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_UIM

/*****************************************************************************/
/* CLIENT: QMI Client UIM */

#define QMI_TYPE_CLIENT_UIM            (qmi_client_uim_get_type ())
#define QMI_CLIENT_UIM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_UIM, QmiClientUim))
#define QMI_CLIENT_UIM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_UIM, QmiClientUimClass))
#define QMI_IS_CLIENT_UIM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_UIM))
#define QMI_IS_CLIENT_UIM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_UIM))
#define QMI_CLIENT_UIM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_UIM, QmiClientUimClass))

typedef struct _QmiClientUim QmiClientUim;
typedef struct _QmiClientUimClass QmiClientUimClass;

/**
 * QmiClientUim:
 *
 * The #QmiClientUim structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
struct _QmiClientUim {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientUimClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_uim_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientUim, g_object_unref)

/**
 * qmi_client_uim_reset:
 * @self: a #QmiClientUim.
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
 * You can then call qmi_client_uim_reset_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_reset (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_reset_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_reset().
 *
 * Returns: a #QmiMessageUimResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_reset_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimResetOutput *qmi_client_uim_reset_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_supported_messages:
 * @self: a #QmiClientUim.
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
 * You can then call qmi_client_uim_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_get_supported_messages (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_supported_messages_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_supported_messages().
 *
 * Returns: a #QmiMessageUimGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimGetSupportedMessagesOutput *qmi_client_uim_get_supported_messages_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_read_transparent:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimReadTransparentInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read Transparent request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_read_transparent_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_read_transparent (
    QmiClientUim *self,
    QmiMessageUimReadTransparentInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_read_transparent_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_read_transparent().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_read_transparent().
 *
 * Returns: a #QmiMessageUimReadTransparentOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_read_transparent_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadTransparentOutput *qmi_client_uim_read_transparent_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_read_record:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimReadRecordInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read Record request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_read_record_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_read_record (
    QmiClientUim *self,
    QmiMessageUimReadRecordInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_read_record_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_read_record().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_read_record().
 *
 * Returns: a #QmiMessageUimReadRecordOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_read_record_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimReadRecordOutput *qmi_client_uim_read_record_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_file_attributes:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimGetFileAttributesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get File Attributes request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_file_attributes_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_uim_get_file_attributes (
    QmiClientUim *self,
    QmiMessageUimGetFileAttributesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_file_attributes_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_file_attributes().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_file_attributes().
 *
 * Returns: a #QmiMessageUimGetFileAttributesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_file_attributes_output_unref().
 *
 * Since: 1.6
 */
QmiMessageUimGetFileAttributesOutput *qmi_client_uim_get_file_attributes_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_set_pin_protection:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimSetPinProtectionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set PIN Protection request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_set_pin_protection_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_set_pin_protection (
    QmiClientUim *self,
    QmiMessageUimSetPinProtectionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_set_pin_protection_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_set_pin_protection().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_set_pin_protection().
 *
 * Returns: a #QmiMessageUimSetPinProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_set_pin_protection_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimSetPinProtectionOutput *qmi_client_uim_set_pin_protection_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_verify_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimVerifyPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Verify PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_verify_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_verify_pin (
    QmiClientUim *self,
    QmiMessageUimVerifyPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_verify_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_verify_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_verify_pin().
 *
 * Returns: a #QmiMessageUimVerifyPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_verify_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimVerifyPinOutput *qmi_client_uim_verify_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_unblock_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimUnblockPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Unblock PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_unblock_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_unblock_pin (
    QmiClientUim *self,
    QmiMessageUimUnblockPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_unblock_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_unblock_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_unblock_pin().
 *
 * Returns: a #QmiMessageUimUnblockPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_unblock_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimUnblockPinOutput *qmi_client_uim_unblock_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_change_pin:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimChangePinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Change PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_change_pin_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_uim_change_pin (
    QmiClientUim *self,
    QmiMessageUimChangePinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_change_pin_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_change_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_change_pin().
 *
 * Returns: a #QmiMessageUimChangePinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_change_pin_output_unref().
 *
 * Since: 1.14
 */
QmiMessageUimChangePinOutput *qmi_client_uim_change_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_refresh_register:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimRefreshRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Refresh Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_refresh_register_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_uim_refresh_register (
    QmiClientUim *self,
    QmiMessageUimRefreshRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_refresh_register_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_refresh_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_refresh_register().
 *
 * Returns: a #QmiMessageUimRefreshRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_refresh_register_output_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterOutput *qmi_client_uim_refresh_register_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_refresh_complete:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimRefreshCompleteInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Refresh Complete request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_refresh_complete_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_uim_refresh_complete (
    QmiClientUim *self,
    QmiMessageUimRefreshCompleteInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_refresh_complete_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_refresh_complete().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_refresh_complete().
 *
 * Returns: a #QmiMessageUimRefreshCompleteOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_refresh_complete_output_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshCompleteOutput *qmi_client_uim_refresh_complete_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_register_events:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimRegisterEventsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Register Events request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_register_events_finish() to get the result of the operation.
 *
 * Since: 1.22.4
 */
void qmi_client_uim_register_events (
    QmiClientUim *self,
    QmiMessageUimRegisterEventsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_register_events_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_register_events().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_register_events().
 *
 * Returns: a #QmiMessageUimRegisterEventsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_register_events_output_unref().
 *
 * Since: 1.22.4
 */
QmiMessageUimRegisterEventsOutput *qmi_client_uim_register_events_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_card_status:
 * @self: a #QmiClientUim.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Card Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_card_status_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_uim_get_card_status (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_card_status_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_card_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_card_status().
 *
 * Returns: a #QmiMessageUimGetCardStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_card_status_output_unref().
 *
 * Since: 1.10
 */
QmiMessageUimGetCardStatusOutput *qmi_client_uim_get_card_status_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_power_off_sim:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimPowerOffSimInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Power Off SIM request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_power_off_sim_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_uim_power_off_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOffSimInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_power_off_sim_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_power_off_sim().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_power_off_sim().
 *
 * Returns: a #QmiMessageUimPowerOffSimOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_power_off_sim_output_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOffSimOutput *qmi_client_uim_power_off_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_power_on_sim:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimPowerOnSimInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Power On SIM request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_power_on_sim_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_uim_power_on_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOnSimInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_power_on_sim_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_power_on_sim().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_power_on_sim().
 *
 * Returns: a #QmiMessageUimPowerOnSimOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_power_on_sim_output_unref().
 *
 * Since: 1.18
 */
QmiMessageUimPowerOnSimOutput *qmi_client_uim_power_on_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_change_provisioning_session:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimChangeProvisioningSessionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Change Provisioning Session request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_change_provisioning_session_finish() to get the result of the operation.
 *
 * Since: 1.24
 */
void qmi_client_uim_change_provisioning_session (
    QmiClientUim *self,
    QmiMessageUimChangeProvisioningSessionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_change_provisioning_session_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_change_provisioning_session().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_change_provisioning_session().
 *
 * Returns: a #QmiMessageUimChangeProvisioningSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_change_provisioning_session_output_unref().
 *
 * Since: 1.24
 */
QmiMessageUimChangeProvisioningSessionOutput *qmi_client_uim_change_provisioning_session_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_depersonalization:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimDepersonalizationInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Depersonalization request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_depersonalization_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_uim_depersonalization (
    QmiClientUim *self,
    QmiMessageUimDepersonalizationInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_depersonalization_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_depersonalization().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_depersonalization().
 *
 * Returns: a #QmiMessageUimDepersonalizationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_depersonalization_output_unref().
 *
 * Since: 1.30
 */
QmiMessageUimDepersonalizationOutput *qmi_client_uim_depersonalization_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_configuration:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimGetConfigurationInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Configuration request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_configuration_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_uim_get_configuration (
    QmiClientUim *self,
    QmiMessageUimGetConfigurationInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_configuration_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_configuration().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_configuration().
 *
 * Returns: a #QmiMessageUimGetConfigurationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_configuration_output_unref().
 *
 * Since: 1.30
 */
QmiMessageUimGetConfigurationOutput *qmi_client_uim_get_configuration_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_refresh_register_all:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimRefreshRegisterAllInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Refresh Register All request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_refresh_register_all_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_uim_refresh_register_all (
    QmiClientUim *self,
    QmiMessageUimRefreshRegisterAllInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_refresh_register_all_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_refresh_register_all().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_refresh_register_all().
 *
 * Returns: a #QmiMessageUimRefreshRegisterAllOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_refresh_register_all_output_unref().
 *
 * Since: 1.28
 */
QmiMessageUimRefreshRegisterAllOutput *qmi_client_uim_refresh_register_all_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_switch_slot:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimSwitchSlotInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Switch Slot request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_switch_slot_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_uim_switch_slot (
    QmiClientUim *self,
    QmiMessageUimSwitchSlotInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_switch_slot_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_switch_slot().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_switch_slot().
 *
 * Returns: a #QmiMessageUimSwitchSlotOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_switch_slot_output_unref().
 *
 * Since: 1.26
 */
QmiMessageUimSwitchSlotOutput *qmi_client_uim_switch_slot_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_get_slot_status:
 * @self: a #QmiClientUim.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Slot Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_get_slot_status_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_uim_get_slot_status (
    QmiClientUim *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_get_slot_status_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_get_slot_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_get_slot_status().
 *
 * Returns: a #QmiMessageUimGetSlotStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_get_slot_status_output_unref().
 *
 * Since: 1.26
 */
QmiMessageUimGetSlotStatusOutput *qmi_client_uim_get_slot_status_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_uim_remote_unlock:
 * @self: a #QmiClientUim.
 * @input: a #QmiMessageUimRemoteUnlockInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Remote Unlock request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_uim_remote_unlock_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_uim_remote_unlock (
    QmiClientUim *self,
    QmiMessageUimRemoteUnlockInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_uim_remote_unlock_finish:
 * @self: a #QmiClientUim.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_uim_remote_unlock().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_uim_remote_unlock().
 *
 * Returns: a #QmiMessageUimRemoteUnlockOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_uim_remote_unlock_output_unref().
 *
 * Since: 1.32
 */
QmiMessageUimRemoteUnlockOutput *qmi_client_uim_remote_unlock_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_UIM__ */
