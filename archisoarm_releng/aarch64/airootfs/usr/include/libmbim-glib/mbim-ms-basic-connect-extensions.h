
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

#ifndef __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__
#define __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__

G_BEGIN_DECLS

/**
 * SECTION:mbim-ms-basic-connect-extensions
 * @title: Ms Basic Connect Extensions service
 * @short_description: Support for the Ms Basic Connect Extensions service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Basic Connect Extensions service.
 */

/**
 * SECTION:mbim-ms-basic-connect-extensions-v2
 * @title: Ms Basic Connect Extensions V2 service
 * @short_description: Support for the Ms Basic Connect Extensions V2 service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Basic Connect Extensions V2 service.
 */

/**
 * SECTION:mbim-ms-basic-connect-extensions-v3
 * @title: Ms Basic Connect Extensions V3 service
 * @short_description: Support for the Ms Basic Connect Extensions V3 service.
 *
 * This section implements support for requests, responses and notifications in the
 * Ms Basic Connect Extensions V3 service.
 */

/*****************************************************************************/
/* Struct: MbimPcoValue */

/**
 * MbimPcoValue:
 * @session_id: a #guint32.
 * @pco_data_size: a #guint32.
 * @pco_data_type: a #MbimPcoType given as a #guint32.
 * @pco_data_buffer: an array of #guint8 values.
 *
 * A MbimPcoValue element.
 *
 * Since: 1.18
 */
typedef struct {
    guint32 session_id;
    guint32 pco_data_size;
    guint32 pco_data_type;
    guint8 *pco_data_buffer;
} MbimPcoValue;

/**
 * mbim_pco_value_free:
 * @var: a #MbimPcoValue.
 *
 * Frees the memory allocated for the #MbimPcoValue.
 *
 * Since: 1.18
 */
void mbim_pco_value_free (MbimPcoValue *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPcoValue, mbim_pco_value_free)

/*****************************************************************************/
/* Struct: MbimLteAttachConfiguration */

/**
 * MbimLteAttachConfiguration:
 * @ip_type: a #MbimContextIpType given as a #guint32.
 * @roaming: a #MbimLteAttachContextRoamingControl given as a #guint32.
 * @source: a #MbimContextSource given as a #guint32.
 * @access_string: a string.
 * @user_name: a string.
 * @password: a string.
 * @compression: a #MbimCompression given as a #guint32.
 * @auth_protocol: a #MbimAuthProtocol given as a #guint32.
 *
 * A MbimLteAttachConfiguration element.
 *
 * Since: 1.18
 */
typedef struct {
    guint32 ip_type;
    guint32 roaming;
    guint32 source;
    gchar *access_string;
    gchar *user_name;
    gchar *password;
    guint32 compression;
    guint32 auth_protocol;
} MbimLteAttachConfiguration;

/**
 * MbimLteAttachConfigurationArray:
 *
 * A NULL-terminated array of MbimLteAttachConfiguration elements.
 *
 * Since: 1.24
 */
typedef MbimLteAttachConfiguration *MbimLteAttachConfigurationArray;
/**
 * mbim_lte_attach_configuration_array_free:
 * @array: a #NULL terminated array of #MbimLteAttachConfiguration structs.
 *
 * Frees the memory allocated for the array of #MbimLteAttachConfiguration structs.
 *
 * Since: 1.18
 */
void mbim_lte_attach_configuration_array_free (MbimLteAttachConfigurationArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimLteAttachConfigurationArray, mbim_lte_attach_configuration_array_free)

/*****************************************************************************/
/* Struct: MbimSlot */

/**
 * MbimSlot:
 * @slot: a #guint32.
 *
 * A MbimSlot element.
 *
 * Since: 1.26
 */
typedef struct {
    guint32 slot;
} MbimSlot;

/**
 * MbimSlotArray:
 *
 * A NULL-terminated array of MbimSlot elements.
 *
 * Since: 1.26
 */
typedef MbimSlot *MbimSlotArray;
/**
 * mbim_slot_array_free:
 * @array: a #NULL terminated array of #MbimSlot structs.
 *
 * Frees the memory allocated for the array of #MbimSlot structs.
 *
 * Since: 1.26
 */
void mbim_slot_array_free (MbimSlotArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSlotArray, mbim_slot_array_free)

/*****************************************************************************/
/* Struct: MbimProvisionedContextElementV2 */

/**
 * MbimProvisionedContextElementV2:
 * @context_id: a #guint32.
 * @context_type: a #MbimUuid.
 * @ip_type: a #MbimContextIpType given as a #guint32.
 * @state: a #MbimContextState given as a #guint32.
 * @roaming: a #MbimContextRoamingControl given as a #guint32.
 * @media_type: a #MbimContextMediaType given as a #guint32.
 * @source: a #MbimContextSource given as a #guint32.
 * @access_string: a string.
 * @user_name: a string.
 * @password: a string.
 * @compression: a #MbimCompression given as a #guint32.
 * @auth_protocol: a #MbimAuthProtocol given as a #guint32.
 *
 * A MbimProvisionedContextElementV2 element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 context_id;
    MbimUuid context_type;
    guint32 ip_type;
    guint32 state;
    guint32 roaming;
    guint32 media_type;
    guint32 source;
    gchar *access_string;
    gchar *user_name;
    gchar *password;
    guint32 compression;
    guint32 auth_protocol;
} MbimProvisionedContextElementV2;

/**
 * MbimProvisionedContextElementV2Array:
 *
 * A NULL-terminated array of MbimProvisionedContextElementV2 elements.
 *
 * Since: 1.28
 */
typedef MbimProvisionedContextElementV2 *MbimProvisionedContextElementV2Array;
/**
 * mbim_provisioned_context_element_v2_array_free:
 * @array: a #NULL terminated array of #MbimProvisionedContextElementV2 structs.
 *
 * Frees the memory allocated for the array of #MbimProvisionedContextElementV2 structs.
 *
 * Since: 1.28
 */
void mbim_provisioned_context_element_v2_array_free (MbimProvisionedContextElementV2Array *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimProvisionedContextElementV2Array, mbim_provisioned_context_element_v2_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoServingGsm */

/**
 * MbimCellInfoServingGsm:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @timing_advance: a #guint32.
 * @arfcn: a #guint32.
 * @base_station_id: a #guint32.
 * @rx_level: a #guint32.
 *
 * A MbimCellInfoServingGsm element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 timing_advance;
    guint32 arfcn;
    guint32 base_station_id;
    guint32 rx_level;
} MbimCellInfoServingGsm;

/**
 * mbim_cell_info_serving_gsm_free:
 * @var: a #MbimCellInfoServingGsm.
 *
 * Frees the memory allocated for the #MbimCellInfoServingGsm.
 *
 * Since: 1.28
 */
void mbim_cell_info_serving_gsm_free (MbimCellInfoServingGsm *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoServingGsm, mbim_cell_info_serving_gsm_free)

/*****************************************************************************/
/* Struct: MbimCellInfoServingUmts */

/**
 * MbimCellInfoServingUmts:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @frequency_info_ul: a #guint32.
 * @frequency_info_dl: a #guint32.
 * @frequency_info_nt: a #guint32.
 * @uarfcn: a #guint32.
 * @primary_scrambling_code: a #guint32.
 * @rscp: a #gint32.
 * @ecno: a #gint32.
 * @path_loss: a #guint32.
 *
 * A MbimCellInfoServingUmts element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 frequency_info_ul;
    guint32 frequency_info_dl;
    guint32 frequency_info_nt;
    guint32 uarfcn;
    guint32 primary_scrambling_code;
    gint32 rscp;
    gint32 ecno;
    guint32 path_loss;
} MbimCellInfoServingUmts;

/**
 * mbim_cell_info_serving_umts_free:
 * @var: a #MbimCellInfoServingUmts.
 *
 * Frees the memory allocated for the #MbimCellInfoServingUmts.
 *
 * Since: 1.28
 */
void mbim_cell_info_serving_umts_free (MbimCellInfoServingUmts *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoServingUmts, mbim_cell_info_serving_umts_free)

/*****************************************************************************/
/* Struct: MbimCellInfoServingTdscdma */

/**
 * MbimCellInfoServingTdscdma:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @uarfcn: a #guint32.
 * @cell_parameter_id: a #guint32.
 * @timing_advance: a #guint32.
 * @rscp: a #gint32.
 * @path_loss: a #guint32.
 *
 * A MbimCellInfoServingTdscdma element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 uarfcn;
    guint32 cell_parameter_id;
    guint32 timing_advance;
    gint32 rscp;
    guint32 path_loss;
} MbimCellInfoServingTdscdma;

/**
 * mbim_cell_info_serving_tdscdma_free:
 * @var: a #MbimCellInfoServingTdscdma.
 *
 * Frees the memory allocated for the #MbimCellInfoServingTdscdma.
 *
 * Since: 1.28
 */
void mbim_cell_info_serving_tdscdma_free (MbimCellInfoServingTdscdma *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoServingTdscdma, mbim_cell_info_serving_tdscdma_free)

/*****************************************************************************/
/* Struct: MbimCellInfoServingLte */

/**
 * MbimCellInfoServingLte:
 * @provider_id: a string.
 * @cell_id: a #guint32.
 * @earfcn: a #guint32.
 * @physical_cell_id: a #guint32.
 * @tac: a #guint32.
 * @rsrp: a #gint32.
 * @rsrq: a #gint32.
 * @timing_advance: a #guint32.
 *
 * A MbimCellInfoServingLte element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 cell_id;
    guint32 earfcn;
    guint32 physical_cell_id;
    guint32 tac;
    gint32 rsrp;
    gint32 rsrq;
    guint32 timing_advance;
} MbimCellInfoServingLte;

/**
 * mbim_cell_info_serving_lte_free:
 * @var: a #MbimCellInfoServingLte.
 *
 * Frees the memory allocated for the #MbimCellInfoServingLte.
 *
 * Since: 1.28
 */
void mbim_cell_info_serving_lte_free (MbimCellInfoServingLte *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoServingLte, mbim_cell_info_serving_lte_free)

/*****************************************************************************/
/* Struct: MbimCellInfoNeighboringGsm */

/**
 * MbimCellInfoNeighboringGsm:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @arfcn: a #guint32.
 * @base_station_id: a #guint32.
 * @rx_level: a #guint32.
 *
 * A MbimCellInfoNeighboringGsm element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 arfcn;
    guint32 base_station_id;
    guint32 rx_level;
} MbimCellInfoNeighboringGsm;

/**
 * MbimCellInfoNeighboringGsmArray:
 *
 * A NULL-terminated array of MbimCellInfoNeighboringGsm elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoNeighboringGsm *MbimCellInfoNeighboringGsmArray;
/**
 * mbim_cell_info_neighboring_gsm_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoNeighboringGsm structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoNeighboringGsm structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_neighboring_gsm_array_free (MbimCellInfoNeighboringGsmArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoNeighboringGsmArray, mbim_cell_info_neighboring_gsm_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoNeighboringUmts */

/**
 * MbimCellInfoNeighboringUmts:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @uarfcn: a #guint32.
 * @primary_scrambling_code: a #guint32.
 * @rscp: a #gint32.
 * @ecno: a #gint32.
 * @path_loss: a #guint32.
 *
 * A MbimCellInfoNeighboringUmts element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 uarfcn;
    guint32 primary_scrambling_code;
    gint32 rscp;
    gint32 ecno;
    guint32 path_loss;
} MbimCellInfoNeighboringUmts;

/**
 * MbimCellInfoNeighboringUmtsArray:
 *
 * A NULL-terminated array of MbimCellInfoNeighboringUmts elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoNeighboringUmts *MbimCellInfoNeighboringUmtsArray;
/**
 * mbim_cell_info_neighboring_umts_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoNeighboringUmts structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoNeighboringUmts structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_neighboring_umts_array_free (MbimCellInfoNeighboringUmtsArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoNeighboringUmtsArray, mbim_cell_info_neighboring_umts_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoNeighboringTdscdma */

/**
 * MbimCellInfoNeighboringTdscdma:
 * @provider_id: a string.
 * @location_area_code: a #guint32.
 * @cell_id: a #guint32.
 * @uarfcn: a #guint32.
 * @cell_parameter_id: a #guint32.
 * @timing_advance: a #guint32.
 * @rscp: a #gint32.
 * @path_loss: a #guint32.
 *
 * A MbimCellInfoNeighboringTdscdma element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 location_area_code;
    guint32 cell_id;
    guint32 uarfcn;
    guint32 cell_parameter_id;
    guint32 timing_advance;
    gint32 rscp;
    guint32 path_loss;
} MbimCellInfoNeighboringTdscdma;

/**
 * MbimCellInfoNeighboringTdscdmaArray:
 *
 * A NULL-terminated array of MbimCellInfoNeighboringTdscdma elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoNeighboringTdscdma *MbimCellInfoNeighboringTdscdmaArray;
/**
 * mbim_cell_info_neighboring_tdscdma_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoNeighboringTdscdma structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoNeighboringTdscdma structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_neighboring_tdscdma_array_free (MbimCellInfoNeighboringTdscdmaArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoNeighboringTdscdmaArray, mbim_cell_info_neighboring_tdscdma_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoNeighboringLte */

/**
 * MbimCellInfoNeighboringLte:
 * @provider_id: a string.
 * @cell_id: a #guint32.
 * @earfcn: a #guint32.
 * @physical_cell_id: a #guint32.
 * @tac: a #guint32.
 * @rsrp: a #gint32.
 * @rsrq: a #gint32.
 *
 * A MbimCellInfoNeighboringLte element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint32 cell_id;
    guint32 earfcn;
    guint32 physical_cell_id;
    guint32 tac;
    gint32 rsrp;
    gint32 rsrq;
} MbimCellInfoNeighboringLte;

/**
 * MbimCellInfoNeighboringLteArray:
 *
 * A NULL-terminated array of MbimCellInfoNeighboringLte elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoNeighboringLte *MbimCellInfoNeighboringLteArray;
/**
 * mbim_cell_info_neighboring_lte_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoNeighboringLte structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoNeighboringLte structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_neighboring_lte_array_free (MbimCellInfoNeighboringLteArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoNeighboringLteArray, mbim_cell_info_neighboring_lte_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoCdma */

/**
 * MbimCellInfoCdma:
 * @serving_cell_flag: a #guint32.
 * @nid: a #guint32.
 * @sid: a #guint32.
 * @base_station_id: a #guint32.
 * @base_latitude: a #guint32.
 * @base_longitude: a #guint32.
 * @ref_pn: a #guint32.
 * @gps_seconds: a #guint32.
 * @pilot_strength: a #guint32.
 *
 * A MbimCellInfoCdma element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 serving_cell_flag;
    guint32 nid;
    guint32 sid;
    guint32 base_station_id;
    guint32 base_latitude;
    guint32 base_longitude;
    guint32 ref_pn;
    guint32 gps_seconds;
    guint32 pilot_strength;
} MbimCellInfoCdma;

/**
 * MbimCellInfoCdmaArray:
 *
 * A NULL-terminated array of MbimCellInfoCdma elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoCdma *MbimCellInfoCdmaArray;
/**
 * mbim_cell_info_cdma_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoCdma structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoCdma structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_cdma_array_free (MbimCellInfoCdmaArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoCdmaArray, mbim_cell_info_cdma_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoServingNr */

/**
 * MbimCellInfoServingNr:
 * @provider_id: a string.
 * @nci: a #guint64.
 * @physical_cell_id: a #guint32.
 * @nrarfcn: a #guint32.
 * @tac: a #guint32.
 * @rsrp: a #guint32.
 * @rsrq: a #guint32.
 * @sinr: a #guint32.
 * @timing_advance: a #guint64.
 *
 * A MbimCellInfoServingNr element.
 *
 * Since: 1.28
 */
typedef struct {
    gchar *provider_id;
    guint64 nci;
    guint32 physical_cell_id;
    guint32 nrarfcn;
    guint32 tac;
    guint32 rsrp;
    guint32 rsrq;
    guint32 sinr;
    guint64 timing_advance;
} MbimCellInfoServingNr;

/**
 * MbimCellInfoServingNrArray:
 *
 * A NULL-terminated array of MbimCellInfoServingNr elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoServingNr *MbimCellInfoServingNrArray;
/**
 * mbim_cell_info_serving_nr_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoServingNr structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoServingNr structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_serving_nr_array_free (MbimCellInfoServingNrArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoServingNrArray, mbim_cell_info_serving_nr_array_free)

/*****************************************************************************/
/* Struct: MbimCellInfoNeighboringNr */

/**
 * MbimCellInfoNeighboringNr:
 * @system_sub_type: a #MbimDataSubclass given as a #guint32.
 * @provider_id: a string.
 * @cell_id: a string.
 * @physical_cell_id: a #guint32.
 * @tac: a #guint32.
 * @rsrp: a #guint32.
 * @rsrq: a #guint32.
 * @sinr: a #guint32.
 *
 * A MbimCellInfoNeighboringNr element.
 *
 * Since: 1.28
 */
typedef struct {
    guint32 system_sub_type;
    gchar *provider_id;
    gchar *cell_id;
    guint32 physical_cell_id;
    guint32 tac;
    guint32 rsrp;
    guint32 rsrq;
    guint32 sinr;
} MbimCellInfoNeighboringNr;

/**
 * MbimCellInfoNeighboringNrArray:
 *
 * A NULL-terminated array of MbimCellInfoNeighboringNr elements.
 *
 * Since: 1.28
 */
typedef MbimCellInfoNeighboringNr *MbimCellInfoNeighboringNrArray;
/**
 * mbim_cell_info_neighboring_nr_array_free:
 * @array: a #NULL terminated array of #MbimCellInfoNeighboringNr structs.
 *
 * Frees the memory allocated for the array of #MbimCellInfoNeighboringNr structs.
 *
 * Since: 1.28
 */
void mbim_cell_info_neighboring_nr_array_free (MbimCellInfoNeighboringNrArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimCellInfoNeighboringNrArray, mbim_cell_info_neighboring_nr_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_query_new:
 * @pco_value: (in): the 'PcoValue' field, given as a #MbimPcoValue.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'PCO' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_pco_query_new (
    const MbimPcoValue *pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_response_parse:
 * @message: the #MbimMessage.
 * @out_pco_value: (out)(optional)(transfer full): return location for a newly allocated #MbimPcoValue, or %NULL if the 'PcoValue' field is not needed. Free the returned value with mbim_pco_value_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'PCO' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_pco_response_parse (
    const MbimMessage *message,
    MbimPcoValue **out_pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_notification_parse:
 * @message: the #MbimMessage.
 * @out_pco_value: (out)(optional)(transfer full): return location for a newly allocated #MbimPcoValue, or %NULL if the 'PcoValue' field is not needed. Free the returned value with mbim_pco_value_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'PCO' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_pco_notification_parse (
    const MbimMessage *message,
    MbimPcoValue **out_pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Configuration' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_set_new:
 * @operation: (in): the 'Operation' field, given as a #MbimLteAttachContextOperation.
 * @configuration_count: (in): the 'ConfigurationCount' field, given as a #guint32.
 * @configurations: (in)(array zero-terminated=1)(element-type MbimLteAttachConfiguration): the 'Configurations' field, given as an array of #MbimLteAttachConfiguration items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Configuration' set command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_configuration_set_new (
    MbimLteAttachContextOperation operation,
    guint32 configuration_count,
    const MbimLteAttachConfiguration *const *configurations,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_configuration_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ConfigurationCount' field is not needed.
 * @out_configurations: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimLteAttachConfiguration): return location for a newly allocated array of #MbimLteAttachConfiguration items, or %NULL if the 'Configurations' field is not needed. Free the returned value with mbim_lte_attach_configuration_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Configuration' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_configuration_response_parse (
    const MbimMessage *message,
    guint32 *out_configuration_count,
    MbimLteAttachConfigurationArray **out_configurations,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_notification_parse:
 * @message: the #MbimMessage.
 * @out_configuration_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ConfigurationCount' field is not needed.
 * @out_configurations: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimLteAttachConfiguration): return location for a newly allocated array of #MbimLteAttachConfiguration items, or %NULL if the 'Configurations' field is not needed. Free the returned value with mbim_lte_attach_configuration_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Configuration' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_configuration_notification_parse (
    const MbimMessage *message,
    guint32 *out_configuration_count,
    MbimLteAttachConfigurationArray **out_configurations,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Info' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_info_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_response_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_info_response_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_notification_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_info_notification_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Sys Caps */

/**
 * mbim_message_ms_basic_connect_extensions_sys_caps_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Sys Caps' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_sys_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Sys Caps */

/**
 * mbim_message_ms_basic_connect_extensions_sys_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_number_of_executors: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfExecutors' field is not needed.
 * @out_number_of_slots: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfSlots' field is not needed.
 * @out_concurrency: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Concurrency' field is not needed.
 * @out_modem_id: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'ModemId' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Sys Caps' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_sys_caps_response_parse (
    const MbimMessage *message,
    guint32 *out_number_of_executors,
    guint32 *out_number_of_slots,
    guint32 *out_concurrency,
    guint64 *out_modem_id,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_query_new:
 * @slot_index: (in): the 'SlotIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Slot Info Status' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_slot_info_status_query_new (
    guint32 slot_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_response_parse:
 * @message: the #MbimMessage.
 * @out_slot_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SlotIndex' field is not needed.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimUiccSlotState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Slot Info Status' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_slot_info_status_response_parse (
    const MbimMessage *message,
    guint32 *out_slot_index,
    MbimUiccSlotState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_slot_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SlotIndex' field is not needed.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimUiccSlotState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Slot Info Status' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_slot_info_status_notification_parse (
    const MbimMessage *message,
    guint32 *out_slot_index,
    MbimUiccSlotState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Slot Mappings' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_slot_mappings_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_set_new:
 * @map_count: (in): the 'MapCount' field, given as a #guint32.
 * @slot_map: (in)(array zero-terminated=1)(element-type MbimSlot): the 'SlotMap' field, given as an array of #MbimSlot items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Slot Mappings' set command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_slot_mappings_set_new (
    guint32 map_count,
    const MbimSlot *const *slot_map,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_response_parse:
 * @message: the #MbimMessage.
 * @out_map_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MapCount' field is not needed.
 * @out_slot_map: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSlot): return location for a newly allocated array of #MbimSlot items, or %NULL if the 'SlotMap' field is not needed. Free the returned value with mbim_slot_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Slot Mappings' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_device_slot_mappings_response_parse (
    const MbimMessage *message,
    guint32 *out_map_count,
    MbimSlotArray **out_slot_map,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Device Caps */

/**
 * mbim_message_ms_basic_connect_extensions_device_caps_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Caps' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Device Caps */

/**
 * mbim_message_ms_basic_connect_extensions_device_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_device_type: (out)(optional)(transfer none): return location for a #MbimDeviceType, or %NULL if the 'DeviceType' field is not needed.
 * @out_cellular_class: (out)(optional)(transfer none): return location for a #MbimCellularClass, or %NULL if the 'CellularClass' field is not needed.
 * @out_voice_class: (out)(optional)(transfer none): return location for a #MbimVoiceClass, or %NULL if the 'VoiceClass' field is not needed.
 * @out_sms_class: (out)(optional)(transfer none): return location for a #MbimSimClass, or %NULL if the 'SmsClass' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'DataClass' field is not needed.
 * @out_sms_caps: (out)(optional)(transfer none): return location for a #MbimSmsCaps, or %NULL if the 'SmsCaps' field is not needed.
 * @out_control_caps: (out)(optional)(transfer none): return location for a #MbimCtrlCaps, or %NULL if the 'ControlCaps' field is not needed.
 * @out_max_sessions: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxSessions' field is not needed.
 * @out_custom_data_class: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'CustomDataClass' field is not needed. Free the returned value with g_free().
 * @out_device_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'DeviceId' field is not needed. Free the returned value with g_free().
 * @out_firmware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'FirmwareInfo' field is not needed. Free the returned value with g_free().
 * @out_hardware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'HardwareInfo' field is not needed. Free the returned value with g_free().
 * @out_executor_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ExecutorIndex' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Caps' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_device_caps_response_parse (
    const MbimMessage *message,
    MbimDeviceType *out_device_type,
    MbimCellularClass *out_cellular_class,
    MbimVoiceClass *out_voice_class,
    MbimSimClass *out_sms_class,
    MbimDataClass *out_data_class,
    MbimSmsCaps *out_sms_caps,
    MbimCtrlCaps *out_control_caps,
    guint32 *out_max_sessions,
    gchar **out_custom_data_class,
    gchar **out_device_id,
    gchar **out_firmware_info,
    gchar **out_hardware_info,
    guint32 *out_executor_index,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Location Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_location_info_status_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Location Info Status' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_location_info_status_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Location Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_location_info_status_response_parse:
 * @message: the #MbimMessage.
 * @out_location_area_code: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'LocationAreaCode' field is not needed.
 * @out_tracking_area_code: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TrackingAreaCode' field is not needed.
 * @out_cell_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'CellID' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Location Info Status' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_location_info_status_response_parse (
    const MbimMessage *message,
    guint32 *out_location_area_code,
    guint32 *out_tracking_area_code,
    guint32 *out_cell_id,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Location Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_location_info_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_location_area_code: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'LocationAreaCode' field is not needed.
 * @out_tracking_area_code: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'TrackingAreaCode' field is not needed.
 * @out_cell_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'CellID' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Location Info Status' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_location_info_status_notification_parse (
    const MbimMessage *message,
    guint32 *out_location_area_code,
    guint32 *out_tracking_area_code,
    guint32 *out_cell_id,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Provisioned Contexts */

/**
 * mbim_message_ms_basic_connect_extensions_provisioned_contexts_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Provisioned Contexts' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_provisioned_contexts_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions Provisioned Contexts */

/**
 * mbim_message_ms_basic_connect_extensions_provisioned_contexts_set_new:
 * @operation: (in): the 'Operation' field, given as a #MbimContextOperation.
 * @context_type: (in): the 'ContextType' field, given as a #MbimUuid.
 * @ip_type: (in): the 'IpType' field, given as a #MbimContextIpType.
 * @state: (in): the 'State' field, given as a #MbimContextState.
 * @roaming: (in): the 'Roaming' field, given as a #MbimContextRoamingControl.
 * @media_type: (in): the 'MediaType' field, given as a #MbimContextMediaType.
 * @source: (in): the 'Source' field, given as a #MbimContextSource.
 * @access_string: (in): the 'AccessString' field, given as a string.
 * @user_name: (in): the 'UserName' field, given as a string.
 * @password: (in): the 'Password' field, given as a string.
 * @compression: (in): the 'Compression' field, given as a #MbimCompression.
 * @auth_protocol: (in): the 'AuthProtocol' field, given as a #MbimAuthProtocol.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Provisioned Contexts' set command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_provisioned_contexts_set_new (
    MbimContextOperation operation,
    const MbimUuid *context_type,
    MbimContextIpType ip_type,
    MbimContextState state,
    MbimContextRoamingControl roaming,
    MbimContextMediaType media_type,
    MbimContextSource source,
    const gchar *access_string,
    const gchar *user_name,
    const gchar *password,
    MbimCompression compression,
    MbimAuthProtocol auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Provisioned Contexts */

/**
 * mbim_message_ms_basic_connect_extensions_provisioned_contexts_response_parse:
 * @message: the #MbimMessage.
 * @out_provisioned_contexts_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvisionedContextsCount' field is not needed.
 * @out_provisioned_contexts: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvisionedContextElementV2): return location for a newly allocated array of #MbimProvisionedContextElementV2 items, or %NULL if the 'ProvisionedContexts' field is not needed. Free the returned value with mbim_provisioned_context_element_v2_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Provisioned Contexts' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_provisioned_contexts_response_parse (
    const MbimMessage *message,
    guint32 *out_provisioned_contexts_count,
    MbimProvisionedContextElementV2Array **out_provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Provisioned Contexts */

/**
 * mbim_message_ms_basic_connect_extensions_provisioned_contexts_notification_parse:
 * @message: the #MbimMessage.
 * @out_provisioned_contexts_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ProvisionedContextsCount' field is not needed.
 * @out_provisioned_contexts: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimProvisionedContextElementV2): return location for a newly allocated array of #MbimProvisionedContextElementV2 items, or %NULL if the 'ProvisionedContexts' field is not needed. Free the returned value with mbim_provisioned_context_element_v2_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Provisioned Contexts' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_provisioned_contexts_notification_parse (
    const MbimMessage *message,
    guint32 *out_provisioned_contexts_count,
    MbimProvisionedContextElementV2Array **out_provisioned_contexts,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Base Stations Info */

/**
 * mbim_message_ms_basic_connect_extensions_base_stations_info_query_new:
 * @max_gsm_count: (in): the 'MaxGsmCount' field, given as a #guint32.
 * @max_umts_count: (in): the 'MaxUmtsCount' field, given as a #guint32.
 * @max_tdscdma_count: (in): the 'MaxTdscdmaCount' field, given as a #guint32.
 * @max_lte_count: (in): the 'MaxLteCount' field, given as a #guint32.
 * @max_cdma_count: (in): the 'MaxCdmaCount' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Base Stations Info' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_base_stations_info_query_new (
    guint32 max_gsm_count,
    guint32 max_umts_count,
    guint32 max_tdscdma_count,
    guint32 max_lte_count,
    guint32 max_cdma_count,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Base Stations Info */

/**
 * mbim_message_ms_basic_connect_extensions_base_stations_info_response_parse:
 * @message: the #MbimMessage.
 * @out_system_type: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'SystemType' field is not needed.
 * @out_gsm_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingGsm, or %NULL if the 'GsmServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_gsm_free().
 * @out_umts_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingUmts, or %NULL if the 'UmtsServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_umts_free().
 * @out_tdscdma_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingTdscdma, or %NULL if the 'TdscdmaServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_tdscdma_free().
 * @out_lte_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingLte, or %NULL if the 'LteServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_lte_free().
 * @out_gsm_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_gsm_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringGsm): return location for a newly allocated array of #MbimCellInfoNeighboringGsm items, or %NULL if the 'GsmNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_gsm_array_free().
 * @out_umts_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_umts_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringUmts): return location for a newly allocated array of #MbimCellInfoNeighboringUmts items, or %NULL if the 'UmtsNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_umts_array_free().
 * @out_tdscdma_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_tdscdma_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringTdscdma): return location for a newly allocated array of #MbimCellInfoNeighboringTdscdma items, or %NULL if the 'TdscdmaNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_tdscdma_array_free().
 * @out_lte_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_lte_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringLte): return location for a newly allocated array of #MbimCellInfoNeighboringLte items, or %NULL if the 'LteNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_lte_array_free().
 * @out_cdma_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_cdma_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoCdma): return location for a newly allocated array of #MbimCellInfoCdma items, or %NULL if the 'CdmaCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_cdma_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Base Stations Info' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_base_stations_info_response_parse (
    const MbimMessage *message,
    MbimDataClass *out_system_type,
    MbimCellInfoServingGsm **out_gsm_serving_cell,
    MbimCellInfoServingUmts **out_umts_serving_cell,
    MbimCellInfoServingTdscdma **out_tdscdma_serving_cell,
    MbimCellInfoServingLte **out_lte_serving_cell,
    guint32 *out_gsm_neighboring_cells_count,
    MbimCellInfoNeighboringGsmArray **out_gsm_neighboring_cells,
    guint32 *out_umts_neighboring_cells_count,
    MbimCellInfoNeighboringUmtsArray **out_umts_neighboring_cells,
    guint32 *out_tdscdma_neighboring_cells_count,
    MbimCellInfoNeighboringTdscdmaArray **out_tdscdma_neighboring_cells,
    guint32 *out_lte_neighboring_cells_count,
    MbimCellInfoNeighboringLteArray **out_lte_neighboring_cells,
    guint32 *out_cdma_cells_count,
    MbimCellInfoCdmaArray **out_cdma_cells,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions V2 Version */

/**
 * mbim_message_ms_basic_connect_extensions_v2_version_query_new:
 * @mbim_version: (in): the 'MbimVersion' field, given as a #guint16.
 * @mbim_extended_version: (in): the 'MbimExtendedVersion' field, given as a #guint16.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Version' query command in the 'Ms Basic Connect Extensions V2' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v2_version_query_new (
    guint16 mbim_version,
    guint16 mbim_extended_version,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V2 Version */

/**
 * mbim_message_ms_basic_connect_extensions_v2_version_response_parse:
 * @message: the #MbimMessage.
 * @out_mbim_version: (out)(optional)(transfer none): return location for a #guint16, or %NULL if the 'MbimVersion' field is not needed.
 * @out_mbim_extended_version: (out)(optional)(transfer none): return location for a #guint16, or %NULL if the 'MbimExtendedVersion' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Version' response command in the 'Ms Basic Connect Extensions V2' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v2_version_response_parse (
    const MbimMessage *message,
    guint16 *out_mbim_version,
    guint16 *out_mbim_extended_version,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Device Caps */

/**
 * mbim_message_ms_basic_connect_extensions_v3_device_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_device_type: (out)(optional)(transfer none): return location for a #MbimDeviceType, or %NULL if the 'DeviceType' field is not needed.
 * @out_cellular_class: (out)(optional)(transfer none): return location for a #MbimCellularClass, or %NULL if the 'CellularClass' field is not needed.
 * @out_voice_class: (out)(optional)(transfer none): return location for a #MbimVoiceClass, or %NULL if the 'VoiceClass' field is not needed.
 * @out_sim_class: (out)(optional)(transfer none): return location for a #MbimSimClass, or %NULL if the 'SimClass' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClassV3, or %NULL if the 'DataClass' field is not needed.
 * @out_sms_caps: (out)(optional)(transfer none): return location for a #MbimSmsCaps, or %NULL if the 'SmsCaps' field is not needed.
 * @out_control_caps: (out)(optional)(transfer none): return location for a #MbimCtrlCaps, or %NULL if the 'ControlCaps' field is not needed.
 * @out_data_subclass: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'DataSubclass' field is not needed.
 * @out_max_sessions: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxSessions' field is not needed.
 * @out_executor_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ExecutorIndex' field is not needed.
 * @out_wcdma_band_class: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'WcdmaBandClass' field is not needed.
 * @out_lte_band_class_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_lte_band_class: (out)(optional)(nullable)(transfer full): return location for a newly allocated array of #guint16 items, or %NULL if the 'LteBandClass' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with g_free().
 * @out_nr_band_class_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_nr_band_class: (out)(optional)(nullable)(transfer full): return location for a newly allocated array of #guint16 items, or %NULL if the 'NrBandClass' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with g_free().
 * @out_custom_data_class: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'CustomDataClass' field is not needed. Free the returned value with g_free().
 * @out_device_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'DeviceId' field is not needed. Free the returned value with g_free().
 * @out_firmware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'FirmwareInfo' field is not needed. Free the returned value with g_free().
 * @out_hardware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'HardwareInfo' field is not needed. Free the returned value with g_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Caps' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_device_caps_response_parse (
    const MbimMessage *message,
    MbimDeviceType *out_device_type,
    MbimCellularClass *out_cellular_class,
    MbimVoiceClass *out_voice_class,
    MbimSimClass *out_sim_class,
    MbimDataClassV3 *out_data_class,
    MbimSmsCaps *out_sms_caps,
    MbimCtrlCaps *out_control_caps,
    MbimDataSubclass *out_data_subclass,
    guint32 *out_max_sessions,
    guint32 *out_executor_index,
    guint32 *out_wcdma_band_class,
    guint32 *out_lte_band_class_count,
    guint16 **out_lte_band_class,
    guint32 *out_nr_band_class_count,
    guint16 **out_nr_band_class,
    gchar **out_custom_data_class,
    gchar **out_device_id,
    gchar **out_firmware_info,
    gchar **out_hardware_info,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions V3 Modem Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_v3_modem_configuration_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Modem Configuration' query command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v3_modem_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Modem Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_v3_modem_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_configuration_status: (out)(optional)(transfer none): return location for a #MbimModemConfigurationStatus, or %NULL if the 'ConfigurationStatus' field is not needed.
 * @out_configuration_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'ConfigurationName' field is not needed. Free the returned value with g_free().
 * @out_unnamed_ies: (out)(optional)(element-type MbimTlv)(transfer full): return location for a newly allocated list of #MbimTlv items, or %NULL if the 'UnnamedIes' field is not needed. Free the returned value with g_list_free_full() using mbim_tlv_unref() as #GDestroyNotify.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Modem Configuration' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_modem_configuration_response_parse (
    const MbimMessage *message,
    MbimModemConfigurationStatus *out_configuration_status,
    gchar **out_configuration_name,
    GList **out_unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions V3 Modem Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_v3_modem_configuration_notification_parse:
 * @message: the #MbimMessage.
 * @out_modem_configuration_status: (out)(optional)(transfer none): return location for a #MbimModemConfigurationStatus, or %NULL if the 'ModemConfigurationStatus' field is not needed.
 * @out_configuration_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'ConfigurationName' field is not needed. Free the returned value with g_free().
 * @out_unnamed_ies: (out)(optional)(element-type MbimTlv)(transfer full): return location for a newly allocated list of #MbimTlv items, or %NULL if the 'UnnamedIes' field is not needed. Free the returned value with g_list_free_full() using mbim_tlv_unref() as #GDestroyNotify.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Modem Configuration' notification command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_modem_configuration_notification_parse (
    const MbimMessage *message,
    MbimModemConfigurationStatus *out_modem_configuration_status,
    gchar **out_configuration_name,
    GList **out_unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions V3 Registration Parameters */

/**
 * mbim_message_ms_basic_connect_extensions_v3_registration_parameters_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Registration Parameters' query command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v3_registration_parameters_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions V3 Registration Parameters */

/**
 * mbim_message_ms_basic_connect_extensions_v3_registration_parameters_set_new:
 * @mico_mode: (in): the 'MicoMode' field, given as a #MbimMicoMode.
 * @drx_cycle: (in): the 'DrxCycle' field, given as a #MbimDrxCycle.
 * @ladn_info: (in): the 'LadnInfo' field, given as a #MbimLadnInfo.
 * @default_pdu_activation_hint: (in): the 'DefaultPduActivationHint' field, given as a #MbimDefaultPduActivationHint.
 * @re_register_if_nedeed: (in): the 'ReRegisterIfNedeed' field, given as a #gboolean.
 * @unnamed_ies: (in)(element-type MbimTlv)(transfer none): the 'UnnamedIes' field, given as a list of # items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Registration Parameters' set command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v3_registration_parameters_set_new (
    MbimMicoMode mico_mode,
    MbimDrxCycle drx_cycle,
    MbimLadnInfo ladn_info,
    MbimDefaultPduActivationHint default_pdu_activation_hint,
    gboolean re_register_if_nedeed,
    const GList *unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Registration Parameters */

/**
 * mbim_message_ms_basic_connect_extensions_v3_registration_parameters_response_parse:
 * @message: the #MbimMessage.
 * @out_mico_mode: (out)(optional)(transfer none): return location for a #MbimMicoMode, or %NULL if the 'MicoMode' field is not needed.
 * @out_drx_cycle: (out)(optional)(transfer none): return location for a #MbimDrxCycle, or %NULL if the 'DrxCycle' field is not needed.
 * @out_ladn_info: (out)(optional)(transfer none): return location for a #MbimLadnInfo, or %NULL if the 'LadnInfo' field is not needed.
 * @out_default_pdu_activation_hint: (out)(optional)(transfer none): return location for a #MbimDefaultPduActivationHint, or %NULL if the 'DefaultPduActivationHint' field is not needed.
 * @out_re_register_if_nedeed: (out)(optional)(transfer none): return location for a #gboolean, or %NULL if the 'ReRegisterIfNedeed' field is not needed.
 * @out_unnamed_ies: (out)(optional)(element-type MbimTlv)(transfer full): return location for a newly allocated list of #MbimTlv items, or %NULL if the 'UnnamedIes' field is not needed. Free the returned value with g_list_free_full() using mbim_tlv_unref() as #GDestroyNotify.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Registration Parameters' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_registration_parameters_response_parse (
    const MbimMessage *message,
    MbimMicoMode *out_mico_mode,
    MbimDrxCycle *out_drx_cycle,
    MbimLadnInfo *out_ladn_info,
    MbimDefaultPduActivationHint *out_default_pdu_activation_hint,
    gboolean *out_re_register_if_nedeed,
    GList **out_unnamed_ies,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_v3_lte_attach_info_response_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #MbimNwError, or %NULL if the 'NwError' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_lte_attach_info_response_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimNwError *out_nw_error,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions V3 Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_v3_lte_attach_info_notification_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_nw_error: (out)(optional)(transfer none): return location for a #MbimNwError, or %NULL if the 'NwError' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' notification command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_lte_attach_info_notification_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimNwError *out_nw_error,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions V3 Base Stations Info */

/**
 * mbim_message_ms_basic_connect_extensions_v3_base_stations_info_query_new:
 * @max_gsm_count: (in): the 'MaxGsmCount' field, given as a #guint32.
 * @max_umts_count: (in): the 'MaxUmtsCount' field, given as a #guint32.
 * @max_tdscdma_count: (in): the 'MaxTdscdmaCount' field, given as a #guint32.
 * @max_lte_count: (in): the 'MaxLteCount' field, given as a #guint32.
 * @max_cdma_count: (in): the 'MaxCdmaCount' field, given as a #guint32.
 * @max_nr_count: (in): the 'MaxNrCount' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Base Stations Info' query command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v3_base_stations_info_query_new (
    guint32 max_gsm_count,
    guint32 max_umts_count,
    guint32 max_tdscdma_count,
    guint32 max_lte_count,
    guint32 max_cdma_count,
    guint32 max_nr_count,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Base Stations Info */

/**
 * mbim_message_ms_basic_connect_extensions_v3_base_stations_info_response_parse:
 * @message: the #MbimMessage.
 * @out_system_type: (out)(optional)(transfer none): return location for a #MbimDataClassV3, or %NULL if the 'SystemType' field is not needed.
 * @out_system_sub_type: (out)(optional)(transfer none): return location for a #MbimDataSubclass, or %NULL if the 'SystemSubType' field is not needed.
 * @out_gsm_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingGsm, or %NULL if the 'GsmServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_gsm_free().
 * @out_umts_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingUmts, or %NULL if the 'UmtsServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_umts_free().
 * @out_tdscdma_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingTdscdma, or %NULL if the 'TdscdmaServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_tdscdma_free().
 * @out_lte_serving_cell: (out)(optional)(nullable)(transfer full): return location for a newly allocated #MbimCellInfoServingLte, or %NULL if the 'LteServingCell' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_lte_free().
 * @out_gsm_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_gsm_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringGsm): return location for a newly allocated array of #MbimCellInfoNeighboringGsm items, or %NULL if the 'GsmNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_gsm_array_free().
 * @out_umts_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_umts_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringUmts): return location for a newly allocated array of #MbimCellInfoNeighboringUmts items, or %NULL if the 'UmtsNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_umts_array_free().
 * @out_tdscdma_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_tdscdma_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringTdscdma): return location for a newly allocated array of #MbimCellInfoNeighboringTdscdma items, or %NULL if the 'TdscdmaNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_tdscdma_array_free().
 * @out_lte_neighboring_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_lte_neighboring_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringLte): return location for a newly allocated array of #MbimCellInfoNeighboringLte items, or %NULL if the 'LteNeighboringCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_lte_array_free().
 * @out_cdma_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_cdma_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoCdma): return location for a newly allocated array of #MbimCellInfoCdma items, or %NULL if the 'CdmaCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_cdma_array_free().
 * @out_nr_serving_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_nr_serving_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoServingNr): return location for a newly allocated array of #MbimCellInfoServingNr items, or %NULL if the 'NrServingCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_serving_nr_array_free().
 * @out_nr_neighbor_cells_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the field is not needed.
 * @out_nr_neighbor_cells: (out)(optional)(nullable)(transfer full)(array zero-terminated=1)(element-type MbimCellInfoNeighboringNr): return location for a newly allocated array of #MbimCellInfoNeighboringNr items, or %NULL if the 'NrNeighborCells' field is not needed. The availability of this field is not always guaranteed, and therefore %NULL may be given as a valid output. Free the returned value with mbim_cell_info_neighboring_nr_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Base Stations Info' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_base_stations_info_response_parse (
    const MbimMessage *message,
    MbimDataClassV3 *out_system_type,
    MbimDataSubclass *out_system_sub_type,
    MbimCellInfoServingGsm **out_gsm_serving_cell,
    MbimCellInfoServingUmts **out_umts_serving_cell,
    MbimCellInfoServingTdscdma **out_tdscdma_serving_cell,
    MbimCellInfoServingLte **out_lte_serving_cell,
    guint32 *out_gsm_neighboring_cells_count,
    MbimCellInfoNeighboringGsmArray **out_gsm_neighboring_cells,
    guint32 *out_umts_neighboring_cells_count,
    MbimCellInfoNeighboringUmtsArray **out_umts_neighboring_cells,
    guint32 *out_tdscdma_neighboring_cells_count,
    MbimCellInfoNeighboringTdscdmaArray **out_tdscdma_neighboring_cells,
    guint32 *out_lte_neighboring_cells_count,
    MbimCellInfoNeighboringLteArray **out_lte_neighboring_cells,
    guint32 *out_cdma_cells_count,
    MbimCellInfoCdmaArray **out_cdma_cells,
    guint32 *out_nr_serving_cells_count,
    MbimCellInfoServingNrArray **out_nr_serving_cells,
    guint32 *out_nr_neighbor_cells_count,
    MbimCellInfoNeighboringNrArray **out_nr_neighbor_cells,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions V3 Wake Reason */

/**
 * mbim_message_ms_basic_connect_extensions_v3_wake_reason_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Wake Reason' query command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.28
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_v3_wake_reason_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions V3 Wake Reason */

/**
 * mbim_message_ms_basic_connect_extensions_v3_wake_reason_response_parse:
 * @message: the #MbimMessage.
 * @out_wake_type: (out)(optional)(transfer none): return location for a #MbimWakeType, or %NULL if the 'WakeType' field is not needed.
 * @out_session_id: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SessionId' field is not needed.
 * @out_wake_tlv: (out)(optional)(transfer full): return location for a newly allocated #MbimTlv, or %NULL if the 'WakeTlv' field is not needed. Free the returned value with mbim_tlv_unref().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Wake Reason' response command in the 'Ms Basic Connect Extensions V3' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean mbim_message_ms_basic_connect_extensions_v3_wake_reason_response_parse (
    const MbimMessage *message,
    MbimWakeType *out_wake_type,
    guint32 *out_session_id,
    MbimTlv **out_wake_tlv,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_extensions_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_extensions_v2_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_extensions_v3_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__ */
