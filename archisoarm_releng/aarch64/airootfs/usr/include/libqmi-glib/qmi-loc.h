
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
#include "qmi-enums-loc.h"
#include "qmi-flags64-loc.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_LOC__
#define __LIBQMI_GLIB_QMI_LOC__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_LOC_REGISTER_EVENTS
#define HAVE_QMI_MESSAGE_LOC_START
#define HAVE_QMI_MESSAGE_LOC_STOP
#define HAVE_QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA
#define HAVE_QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE
#define HAVE_QMI_MESSAGE_LOC_SET_ENGINE_LOCK
#define HAVE_QMI_MESSAGE_LOC_GET_ENGINE_LOCK
#define HAVE_QMI_MESSAGE_LOC_SET_NMEA_TYPES
#define HAVE_QMI_MESSAGE_LOC_GET_NMEA_TYPES
#define HAVE_QMI_MESSAGE_LOC_SET_SERVER
#define HAVE_QMI_MESSAGE_LOC_GET_SERVER
#define HAVE_QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA
#define HAVE_QMI_MESSAGE_LOC_SET_OPERATION_MODE
#define HAVE_QMI_MESSAGE_LOC_GET_OPERATION_MODE
#define HAVE_QMI_MESSAGE_LOC_INJECT_XTRA_DATA
#define HAVE_QMI_INDICATION_LOC_POSITION_REPORT
#define HAVE_QMI_INDICATION_LOC_NMEA
#define HAVE_QMI_INDICATION_LOC_ENGINE_STATE
#define HAVE_QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE
#define HAVE_QMI_INDICATION_LOC_GNSS_SV_INFO
#define HAVE_QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA
#define HAVE_QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE
#define HAVE_QMI_INDICATION_LOC_SET_ENGINE_LOCK
#define HAVE_QMI_INDICATION_LOC_GET_ENGINE_LOCK
#define HAVE_QMI_INDICATION_LOC_SET_NMEA_TYPES
#define HAVE_QMI_INDICATION_LOC_GET_NMEA_TYPES
#define HAVE_QMI_INDICATION_LOC_SET_SERVER
#define HAVE_QMI_INDICATION_LOC_GET_SERVER
#define HAVE_QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA
#define HAVE_QMI_INDICATION_LOC_SET_OPERATION_MODE
#define HAVE_QMI_INDICATION_LOC_GET_OPERATION_MODE
#define HAVE_QMI_INDICATION_LOC_INJECT_XTRA_DATA

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Position Report */


/**
 * SECTION: qmi-indication-loc-position-report
 * @title: LOC Position Report indication
 * @short_description: Methods to manage the LOC Position Report indication.
 *
 * Collection of methods to parse indications of the LOC Position Report message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocPositionReportOutput:
 *
 * The #QmiIndicationLocPositionReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocPositionReportOutput QmiIndicationLocPositionReportOutput;
GType qmi_indication_loc_position_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_POSITION_REPORT_OUTPUT (qmi_indication_loc_position_report_output_get_type ())


/**
 * qmi_indication_loc_position_report_output_get_altitude_assumed:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_altitude_assumed: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Altitude Assumed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_altitude_assumed (
    QmiIndicationLocPositionReportOutput *self,
    gboolean *value_altitude_assumed,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_satellites_used:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_satellites_used: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Satellites Used' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_satellites_used (
    QmiIndicationLocPositionReportOutput *self,
    GArray **value_satellites_used,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_session_fix_count:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_session_fix_count: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Fix Count' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_session_fix_count (
    QmiIndicationLocPositionReportOutput *self,
    guint32 *value_session_fix_count,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_sensor_data_usage:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_sensor_data_usage: (out)(optional): a placeholder for the output #QmiLocSensorDataUsage, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Sensor Data Usage' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_sensor_data_usage (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocSensorDataUsage *value_sensor_data_usage,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_time_source:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_time_source: (out)(optional): a placeholder for the output #QmiLocTimeSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Source' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_time_source (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocTimeSource *value_time_source,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_time_uncertainty:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_time_uncertainty: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Uncertainty' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_time_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_time_uncertainty,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_gps_date_time:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_gps_date_time_gps_weeks: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_gps_date_time_gps_time_of_week_milliseconds: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPS Date Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_loc_position_report_output_get_gps_date_time (
    QmiIndicationLocPositionReportOutput *self,
    guint16 *value_gps_date_time_gps_weeks,
    guint32 *value_gps_date_time_gps_time_of_week_milliseconds,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_leap_seconds:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_leap_seconds: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Leap Seconds' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_leap_seconds (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_leap_seconds,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_utc_timestamp:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_utc_timestamp: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UTC Timestamp' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_utc_timestamp (
    QmiIndicationLocPositionReportOutput *self,
    guint64 *value_utc_timestamp,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_dop:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_dop_pdop: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @value_dop_hdop: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @value_dop_vdop: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DOP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_loc_position_report_output_get_dop (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_dop_pdop,
    gfloat *value_dop_hdop,
    gfloat *value_dop_vdop,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_technology_used:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_technology_used: (out)(optional): a placeholder for the output #QmiLocTechnologyUsed, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Technology Used' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_technology_used (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocTechnologyUsed *value_technology_used,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_magnetic_deviation:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_magnetic_deviation: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Magnetic Deviation' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_magnetic_deviation (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_magnetic_deviation,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_heading_uncertainty:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_heading_uncertainty: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Heading Uncertainty' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_heading_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_heading_uncertainty,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_heading:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_heading: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Heading' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_heading (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_heading,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_vertical_speed:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_vertical_speed: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Vertical Speed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_vertical_speed (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_vertical_speed,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_vertical_reliability:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_vertical_reliability: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Vertical Reliability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_vertical_reliability (
    QmiIndicationLocPositionReportOutput *self,
    guint32 *value_vertical_reliability,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_vertical_confidence:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_vertical_confidence: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Vertical Confidence' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_vertical_confidence (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_vertical_confidence,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_vertical_uncertainty:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_vertical_uncertainty: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Vertical Uncertainty' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_vertical_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_vertical_uncertainty,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_altitude_from_sealevel:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_altitude_from_sealevel: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Altitude from Sealevel' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_altitude_from_sealevel (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_altitude_from_sealevel,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_altitude_from_ellipsoid:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_altitude_from_ellipsoid: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Altitude from Ellipsoid' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_altitude_from_ellipsoid (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_altitude_from_ellipsoid,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_speed_uncertainty:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_speed_uncertainty: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Speed Uncertainty' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_speed_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_speed_uncertainty,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_speed:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_speed: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Speed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_speed (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_speed,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_reliability:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_reliability: (out)(optional): a placeholder for the output #QmiLocReliability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Reliability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_reliability (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocReliability *value_horizontal_reliability,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_confidence:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_confidence: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Confidence' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_confidence (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_horizontal_confidence,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_azimuth:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_uncertainty_elliptical_azimuth: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Uncertainty Elliptical Azimuth' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_azimuth (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_azimuth,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_major:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_uncertainty_elliptical_major: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Uncertainty Elliptical Major' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_major (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_major,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_minor:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_uncertainty_elliptical_minor: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Uncertainty Elliptical Minor' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_minor (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_minor,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_horizontal_uncertainty_circular:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_horizontal_uncertainty_circular: (out)(optional): a placeholder for the output #gfloat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Horizontal Uncertainty Circular' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_horizontal_uncertainty_circular (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_circular,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_longitude:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_longitude: (out)(optional): a placeholder for the output #gdouble, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Longitude' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_longitude (
    QmiIndicationLocPositionReportOutput *self,
    gdouble *value_longitude,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_latitude:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_latitude: (out)(optional): a placeholder for the output #gdouble, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Latitude' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_latitude (
    QmiIndicationLocPositionReportOutput *self,
    gdouble *value_latitude,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_session_id:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_session_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_session_id (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_session_id,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_get_session_status:
 * @self: a #QmiIndicationLocPositionReportOutput.
 * @value_session_status: (out)(optional): a placeholder for the output #QmiLocSessionStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_position_report_output_get_session_status (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocSessionStatus *value_session_status,
    GError **error);


/**
 * qmi_indication_loc_position_report_output_ref:
 * @self: a #QmiIndicationLocPositionReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocPositionReportOutput *qmi_indication_loc_position_report_output_ref (QmiIndicationLocPositionReportOutput *self);

/**
 * qmi_indication_loc_position_report_output_unref:
 * @self: a #QmiIndicationLocPositionReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_position_report_output_unref (QmiIndicationLocPositionReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocPositionReportOutput, qmi_indication_loc_position_report_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC NMEA */


/**
 * SECTION: qmi-indication-loc-nmea
 * @title: LOC NMEA indication
 * @short_description: Methods to manage the LOC NMEA indication.
 *
 * Collection of methods to parse indications of the LOC NMEA message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocNmeaOutput:
 *
 * The #QmiIndicationLocNmeaOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocNmeaOutput QmiIndicationLocNmeaOutput;
GType qmi_indication_loc_nmea_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_NMEA_OUTPUT (qmi_indication_loc_nmea_output_get_type ())


/**
 * qmi_indication_loc_nmea_output_get_nmea_string:
 * @self: a #QmiIndicationLocNmeaOutput.
 * @value_nmea_string: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA String' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_nmea_output_get_nmea_string (
    QmiIndicationLocNmeaOutput *self,
    const gchar **value_nmea_string,
    GError **error);


/**
 * qmi_indication_loc_nmea_output_ref:
 * @self: a #QmiIndicationLocNmeaOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocNmeaOutput *qmi_indication_loc_nmea_output_ref (QmiIndicationLocNmeaOutput *self);

/**
 * qmi_indication_loc_nmea_output_unref:
 * @self: a #QmiIndicationLocNmeaOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_nmea_output_unref (QmiIndicationLocNmeaOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocNmeaOutput, qmi_indication_loc_nmea_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Engine State */


/**
 * SECTION: qmi-indication-loc-engine-state
 * @title: LOC Engine State indication
 * @short_description: Methods to manage the LOC Engine State indication.
 *
 * Collection of methods to parse indications of the LOC Engine State message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocEngineStateOutput:
 *
 * The #QmiIndicationLocEngineStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocEngineStateOutput QmiIndicationLocEngineStateOutput;
GType qmi_indication_loc_engine_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_ENGINE_STATE_OUTPUT (qmi_indication_loc_engine_state_output_get_type ())


/**
 * qmi_indication_loc_engine_state_output_get_engine_state:
 * @self: a #QmiIndicationLocEngineStateOutput.
 * @value_engine_state: (out)(optional): a placeholder for the output #QmiLocEngineState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Engine State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_engine_state_output_get_engine_state (
    QmiIndicationLocEngineStateOutput *self,
    QmiLocEngineState *value_engine_state,
    GError **error);


/**
 * qmi_indication_loc_engine_state_output_ref:
 * @self: a #QmiIndicationLocEngineStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocEngineStateOutput *qmi_indication_loc_engine_state_output_ref (QmiIndicationLocEngineStateOutput *self);

/**
 * qmi_indication_loc_engine_state_output_unref:
 * @self: a #QmiIndicationLocEngineStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_engine_state_output_unref (QmiIndicationLocEngineStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocEngineStateOutput, qmi_indication_loc_engine_state_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Fix Recurrence Type */


/**
 * SECTION: qmi-indication-loc-fix-recurrence-type
 * @title: LOC Fix Recurrence Type indication
 * @short_description: Methods to manage the LOC Fix Recurrence Type indication.
 *
 * Collection of methods to parse indications of the LOC Fix Recurrence Type message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocFixRecurrenceTypeOutput:
 *
 * The #QmiIndicationLocFixRecurrenceTypeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocFixRecurrenceTypeOutput QmiIndicationLocFixRecurrenceTypeOutput;
GType qmi_indication_loc_fix_recurrence_type_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT (qmi_indication_loc_fix_recurrence_type_output_get_type ())


/**
 * qmi_indication_loc_fix_recurrence_type_output_get_fix_recurrence_type:
 * @self: a #QmiIndicationLocFixRecurrenceTypeOutput.
 * @value_fix_recurrence_type: (out)(optional): a placeholder for the output #QmiLocFixRecurrenceType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Fix Recurrence Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_fix_recurrence_type_output_get_fix_recurrence_type (
    QmiIndicationLocFixRecurrenceTypeOutput *self,
    QmiLocFixRecurrenceType *value_fix_recurrence_type,
    GError **error);


/**
 * qmi_indication_loc_fix_recurrence_type_output_ref:
 * @self: a #QmiIndicationLocFixRecurrenceTypeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocFixRecurrenceTypeOutput *qmi_indication_loc_fix_recurrence_type_output_ref (QmiIndicationLocFixRecurrenceTypeOutput *self);

/**
 * qmi_indication_loc_fix_recurrence_type_output_unref:
 * @self: a #QmiIndicationLocFixRecurrenceTypeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_fix_recurrence_type_output_unref (QmiIndicationLocFixRecurrenceTypeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocFixRecurrenceTypeOutput, qmi_indication_loc_fix_recurrence_type_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC GNSS Sv Info */


/**
 * SECTION: qmi-indication-loc-gnss-sv-info
 * @title: LOC GNSS Sv Info indication
 * @short_description: Methods to manage the LOC GNSS Sv Info indication.
 *
 * Collection of methods to parse indications of the LOC GNSS Sv Info message.
 */

/* --- Output -- */


/**
 * QmiIndicationLocGnssSvInfoOutputListElement:
 * @valid_information: a #QmiLocSatelliteValidInformation.
 * @system: a #QmiLocSystem.
 * @gnss_satellite_id: a #guint16.
 * @health_status: a #QmiLocHealthStatus.
 * @satellite_status: a #QmiLocSatelliteStatus.
 * @navigation_data: a #QmiLocNavigationData.
 * @elevation_degrees: a #gfloat.
 * @azimuth_degrees: a #gfloat.
 * @signal_to_noise_ratio_bhz: a #gfloat.
 *
 * A QmiIndicationLocGnssSvInfoOutputListElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocGnssSvInfoOutputListElement {
    QmiLocSatelliteValidInformation valid_information;
    QmiLocSystem system;
    guint16 gnss_satellite_id;
    QmiLocHealthStatus health_status;
    QmiLocSatelliteStatus satellite_status;
    QmiLocNavigationData navigation_data;
    gfloat elevation_degrees;
    gfloat azimuth_degrees;
    gfloat signal_to_noise_ratio_bhz;
} QmiIndicationLocGnssSvInfoOutputListElement;

GType qmi_indication_loc_gnss_sv_info_output_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationLocGnssSvInfoOutput:
 *
 * The #QmiIndicationLocGnssSvInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocGnssSvInfoOutput QmiIndicationLocGnssSvInfoOutput;
GType qmi_indication_loc_gnss_sv_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GNSS_SV_INFO_OUTPUT (qmi_indication_loc_gnss_sv_info_output_get_type ())


/**
 * qmi_indication_loc_gnss_sv_info_output_get_list: (skip)
 * @self: a #QmiIndicationLocGnssSvInfoOutput.
 * @value_list: (out)(optional)(element-type QmiIndicationLocGnssSvInfoOutputListElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationLocGnssSvInfoOutputListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_gnss_sv_info_output_get_list (
    QmiIndicationLocGnssSvInfoOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_indication_loc_gnss_sv_info_output_get_list_gir: (rename-to qmi_indication_loc_gnss_sv_info_output_get_list)
 * @self: a #QmiIndicationLocGnssSvInfoOutput.
 * @value_list_ptr: (out)(optional)(element-type QmiIndicationLocGnssSvInfoOutputListElement)(transfer none): a placeholder for the output array of #QmiIndicationLocGnssSvInfoOutputListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Version of qmi_indication_loc_gnss_sv_info_output_get_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_loc_gnss_sv_info_output_get_list_gir (
    QmiIndicationLocGnssSvInfoOutput *self,
    GPtrArray **value_list_ptr,
    GError **error);


/**
 * qmi_indication_loc_gnss_sv_info_output_get_altitude_assumed:
 * @self: a #QmiIndicationLocGnssSvInfoOutput.
 * @value_altitude_assumed: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Altitude Assumed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_gnss_sv_info_output_get_altitude_assumed (
    QmiIndicationLocGnssSvInfoOutput *self,
    gboolean *value_altitude_assumed,
    GError **error);


/**
 * qmi_indication_loc_gnss_sv_info_output_ref:
 * @self: a #QmiIndicationLocGnssSvInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocGnssSvInfoOutput *qmi_indication_loc_gnss_sv_info_output_ref (QmiIndicationLocGnssSvInfoOutput *self);

/**
 * qmi_indication_loc_gnss_sv_info_output_unref:
 * @self: a #QmiIndicationLocGnssSvInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_gnss_sv_info_output_unref (QmiIndicationLocGnssSvInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGnssSvInfoOutput, qmi_indication_loc_gnss_sv_info_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Predicted Orbits Data */


/**
 * SECTION: qmi-indication-loc-inject-predicted-orbits-data
 * @title: LOC Inject Predicted Orbits Data indication
 * @short_description: Methods to manage the LOC Inject Predicted Orbits Data indication.
 *
 * Collection of methods to parse indications of the LOC Inject Predicted Orbits Data message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocInjectPredictedOrbitsDataOutput:
 *
 * The #QmiIndicationLocInjectPredictedOrbitsDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocInjectPredictedOrbitsDataOutput QmiIndicationLocInjectPredictedOrbitsDataOutput;
GType qmi_indication_loc_inject_predicted_orbits_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT (qmi_indication_loc_inject_predicted_orbits_data_output_get_type ())


/**
 * qmi_indication_loc_inject_predicted_orbits_data_output_get_part_number:
 * @self: a #QmiIndicationLocInjectPredictedOrbitsDataOutput.
 * @value_part_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_inject_predicted_orbits_data_output_get_part_number (
    QmiIndicationLocInjectPredictedOrbitsDataOutput *self,
    guint16 *value_part_number,
    GError **error);


/**
 * qmi_indication_loc_inject_predicted_orbits_data_output_get_indication_status:
 * @self: a #QmiIndicationLocInjectPredictedOrbitsDataOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_inject_predicted_orbits_data_output_get_indication_status (
    QmiIndicationLocInjectPredictedOrbitsDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_inject_predicted_orbits_data_output_ref:
 * @self: a #QmiIndicationLocInjectPredictedOrbitsDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocInjectPredictedOrbitsDataOutput *qmi_indication_loc_inject_predicted_orbits_data_output_ref (QmiIndicationLocInjectPredictedOrbitsDataOutput *self);

/**
 * qmi_indication_loc_inject_predicted_orbits_data_output_unref:
 * @self: a #QmiIndicationLocInjectPredictedOrbitsDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_inject_predicted_orbits_data_output_unref (QmiIndicationLocInjectPredictedOrbitsDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocInjectPredictedOrbitsDataOutput, qmi_indication_loc_inject_predicted_orbits_data_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Predicted Orbits Data Source */


/**
 * SECTION: qmi-indication-loc-get-predicted-orbits-data-source
 * @title: LOC Get Predicted Orbits Data Source indication
 * @short_description: Methods to manage the LOC Get Predicted Orbits Data Source indication.
 *
 * Collection of methods to parse indications of the LOC Get Predicted Orbits Data Source message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocGetPredictedOrbitsDataSourceOutput:
 *
 * The #QmiIndicationLocGetPredictedOrbitsDataSourceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocGetPredictedOrbitsDataSourceOutput QmiIndicationLocGetPredictedOrbitsDataSourceOutput;
GType qmi_indication_loc_get_predicted_orbits_data_source_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT (qmi_indication_loc_get_predicted_orbits_data_source_output_get_type ())


/**
 * qmi_indication_loc_get_predicted_orbits_data_source_output_get_server_list:
 * @self: a #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
 * @value_server_list: (out)(optional)(element-type utf8)(transfer none): a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Server List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_predicted_orbits_data_source_output_get_server_list (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    GArray **value_server_list,
    GError **error);


/**
 * qmi_indication_loc_get_predicted_orbits_data_source_output_get_allowed_sizes:
 * @self: a #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
 * @value_allowed_sizes_max_file_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_allowed_sizes_max_part_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Allowed Sizes' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_predicted_orbits_data_source_output_get_allowed_sizes (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    guint32 *value_allowed_sizes_max_file_size,
    guint32 *value_allowed_sizes_max_part_size,
    GError **error);


/**
 * qmi_indication_loc_get_predicted_orbits_data_source_output_get_indication_status:
 * @self: a #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_predicted_orbits_data_source_output_get_indication_status (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_get_predicted_orbits_data_source_output_ref:
 * @self: a #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocGetPredictedOrbitsDataSourceOutput *qmi_indication_loc_get_predicted_orbits_data_source_output_ref (QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self);

/**
 * qmi_indication_loc_get_predicted_orbits_data_source_output_unref:
 * @self: a #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_get_predicted_orbits_data_source_output_unref (QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGetPredictedOrbitsDataSourceOutput, qmi_indication_loc_get_predicted_orbits_data_source_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Engine Lock */


/**
 * SECTION: qmi-indication-loc-set-engine-lock
 * @title: LOC Set Engine Lock indication
 * @short_description: Methods to manage the LOC Set Engine Lock indication.
 *
 * Collection of methods to parse indications of the LOC Set Engine Lock message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocSetEngineLockOutput:
 *
 * The #QmiIndicationLocSetEngineLockOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiIndicationLocSetEngineLockOutput QmiIndicationLocSetEngineLockOutput;
GType qmi_indication_loc_set_engine_lock_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_SET_ENGINE_LOCK_OUTPUT (qmi_indication_loc_set_engine_lock_output_get_type ())


/**
 * qmi_indication_loc_set_engine_lock_output_get_indication_status:
 * @self: a #QmiIndicationLocSetEngineLockOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_indication_loc_set_engine_lock_output_get_indication_status (
    QmiIndicationLocSetEngineLockOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_set_engine_lock_output_ref:
 * @self: a #QmiIndicationLocSetEngineLockOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiIndicationLocSetEngineLockOutput *qmi_indication_loc_set_engine_lock_output_ref (QmiIndicationLocSetEngineLockOutput *self);

/**
 * qmi_indication_loc_set_engine_lock_output_unref:
 * @self: a #QmiIndicationLocSetEngineLockOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_indication_loc_set_engine_lock_output_unref (QmiIndicationLocSetEngineLockOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocSetEngineLockOutput, qmi_indication_loc_set_engine_lock_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Engine Lock */


/**
 * SECTION: qmi-indication-loc-get-engine-lock
 * @title: LOC Get Engine Lock indication
 * @short_description: Methods to manage the LOC Get Engine Lock indication.
 *
 * Collection of methods to parse indications of the LOC Get Engine Lock message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocGetEngineLockOutput:
 *
 * The #QmiIndicationLocGetEngineLockOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiIndicationLocGetEngineLockOutput QmiIndicationLocGetEngineLockOutput;
GType qmi_indication_loc_get_engine_lock_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT (qmi_indication_loc_get_engine_lock_output_get_type ())


/**
 * qmi_indication_loc_get_engine_lock_output_get_lock_type:
 * @self: a #QmiIndicationLocGetEngineLockOutput.
 * @value_lock_type: (out)(optional): a placeholder for the output #QmiLocLockType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Lock Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_indication_loc_get_engine_lock_output_get_lock_type (
    QmiIndicationLocGetEngineLockOutput *self,
    QmiLocLockType *value_lock_type,
    GError **error);


/**
 * qmi_indication_loc_get_engine_lock_output_get_indication_status:
 * @self: a #QmiIndicationLocGetEngineLockOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_indication_loc_get_engine_lock_output_get_indication_status (
    QmiIndicationLocGetEngineLockOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_get_engine_lock_output_ref:
 * @self: a #QmiIndicationLocGetEngineLockOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiIndicationLocGetEngineLockOutput *qmi_indication_loc_get_engine_lock_output_ref (QmiIndicationLocGetEngineLockOutput *self);

/**
 * qmi_indication_loc_get_engine_lock_output_unref:
 * @self: a #QmiIndicationLocGetEngineLockOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_indication_loc_get_engine_lock_output_unref (QmiIndicationLocGetEngineLockOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGetEngineLockOutput, qmi_indication_loc_get_engine_lock_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set NMEA Types */


/**
 * SECTION: qmi-indication-loc-set-nmea-types
 * @title: LOC Set NMEA Types indication
 * @short_description: Methods to manage the LOC Set NMEA Types indication.
 *
 * Collection of methods to parse indications of the LOC Set NMEA Types message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocSetNmeaTypesOutput:
 *
 * The #QmiIndicationLocSetNmeaTypesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiIndicationLocSetNmeaTypesOutput QmiIndicationLocSetNmeaTypesOutput;
GType qmi_indication_loc_set_nmea_types_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_SET_NMEA_TYPES_OUTPUT (qmi_indication_loc_set_nmea_types_output_get_type ())


/**
 * qmi_indication_loc_set_nmea_types_output_get_indication_status:
 * @self: a #QmiIndicationLocSetNmeaTypesOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_loc_set_nmea_types_output_get_indication_status (
    QmiIndicationLocSetNmeaTypesOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_set_nmea_types_output_ref:
 * @self: a #QmiIndicationLocSetNmeaTypesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiIndicationLocSetNmeaTypesOutput *qmi_indication_loc_set_nmea_types_output_ref (QmiIndicationLocSetNmeaTypesOutput *self);

/**
 * qmi_indication_loc_set_nmea_types_output_unref:
 * @self: a #QmiIndicationLocSetNmeaTypesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_indication_loc_set_nmea_types_output_unref (QmiIndicationLocSetNmeaTypesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocSetNmeaTypesOutput, qmi_indication_loc_set_nmea_types_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get NMEA Types */


/**
 * SECTION: qmi-indication-loc-get-nmea-types
 * @title: LOC Get NMEA Types indication
 * @short_description: Methods to manage the LOC Get NMEA Types indication.
 *
 * Collection of methods to parse indications of the LOC Get NMEA Types message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocGetNmeaTypesOutput:
 *
 * The #QmiIndicationLocGetNmeaTypesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiIndicationLocGetNmeaTypesOutput QmiIndicationLocGetNmeaTypesOutput;
GType qmi_indication_loc_get_nmea_types_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT (qmi_indication_loc_get_nmea_types_output_get_type ())


/**
 * qmi_indication_loc_get_nmea_types_output_get_nmea_types:
 * @self: a #QmiIndicationLocGetNmeaTypesOutput.
 * @value_nmea_types: (out)(optional): a placeholder for the output #QmiLocNmeaType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA Types' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_loc_get_nmea_types_output_get_nmea_types (
    QmiIndicationLocGetNmeaTypesOutput *self,
    QmiLocNmeaType *value_nmea_types,
    GError **error);


/**
 * qmi_indication_loc_get_nmea_types_output_get_indication_status:
 * @self: a #QmiIndicationLocGetNmeaTypesOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_loc_get_nmea_types_output_get_indication_status (
    QmiIndicationLocGetNmeaTypesOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_get_nmea_types_output_ref:
 * @self: a #QmiIndicationLocGetNmeaTypesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiIndicationLocGetNmeaTypesOutput *qmi_indication_loc_get_nmea_types_output_ref (QmiIndicationLocGetNmeaTypesOutput *self);

/**
 * qmi_indication_loc_get_nmea_types_output_unref:
 * @self: a #QmiIndicationLocGetNmeaTypesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_indication_loc_get_nmea_types_output_unref (QmiIndicationLocGetNmeaTypesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGetNmeaTypesOutput, qmi_indication_loc_get_nmea_types_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Server */


/**
 * SECTION: qmi-indication-loc-set-server
 * @title: LOC Set Server indication
 * @short_description: Methods to manage the LOC Set Server indication.
 *
 * Collection of methods to parse indications of the LOC Set Server message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocSetServerOutput:
 *
 * The #QmiIndicationLocSetServerOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocSetServerOutput QmiIndicationLocSetServerOutput;
GType qmi_indication_loc_set_server_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_SET_SERVER_OUTPUT (qmi_indication_loc_set_server_output_get_type ())


/**
 * qmi_indication_loc_set_server_output_get_indication_status:
 * @self: a #QmiIndicationLocSetServerOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_set_server_output_get_indication_status (
    QmiIndicationLocSetServerOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_set_server_output_ref:
 * @self: a #QmiIndicationLocSetServerOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocSetServerOutput *qmi_indication_loc_set_server_output_ref (QmiIndicationLocSetServerOutput *self);

/**
 * qmi_indication_loc_set_server_output_unref:
 * @self: a #QmiIndicationLocSetServerOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_set_server_output_unref (QmiIndicationLocSetServerOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocSetServerOutput, qmi_indication_loc_set_server_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Server */


/**
 * SECTION: qmi-indication-loc-get-server
 * @title: LOC Get Server indication
 * @short_description: Methods to manage the LOC Get Server indication.
 *
 * Collection of methods to parse indications of the LOC Get Server message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocGetServerOutput:
 *
 * The #QmiIndicationLocGetServerOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocGetServerOutput QmiIndicationLocGetServerOutput;
GType qmi_indication_loc_get_server_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GET_SERVER_OUTPUT (qmi_indication_loc_get_server_output_get_type ())


/**
 * qmi_indication_loc_get_server_output_get_url:
 * @self: a #QmiIndicationLocGetServerOutput.
 * @value_url: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'URL' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_server_output_get_url (
    QmiIndicationLocGetServerOutput *self,
    const gchar **value_url,
    GError **error);


/**
 * qmi_indication_loc_get_server_output_get_ipv6:
 * @self: a #QmiIndicationLocGetServerOutput.
 * @value_ipv6_ipv6_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_ipv6_port: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_server_output_get_ipv6 (
    QmiIndicationLocGetServerOutput *self,
    GArray **value_ipv6_ipv6_address,
    guint32 *value_ipv6_ipv6_port,
    GError **error);


/**
 * qmi_indication_loc_get_server_output_get_ipv4:
 * @self: a #QmiIndicationLocGetServerOutput.
 * @value_ipv4_ipv4_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_ipv4_ipv4_port: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_server_output_get_ipv4 (
    QmiIndicationLocGetServerOutput *self,
    guint32 *value_ipv4_ipv4_address,
    guint16 *value_ipv4_ipv4_port,
    GError **error);


/**
 * qmi_indication_loc_get_server_output_get_server_type:
 * @self: a #QmiIndicationLocGetServerOutput.
 * @value_server_type: (out)(optional): a placeholder for the output #QmiLocServerType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Server Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_server_output_get_server_type (
    QmiIndicationLocGetServerOutput *self,
    QmiLocServerType *value_server_type,
    GError **error);


/**
 * qmi_indication_loc_get_server_output_get_indication_status:
 * @self: a #QmiIndicationLocGetServerOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_server_output_get_indication_status (
    QmiIndicationLocGetServerOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_get_server_output_ref:
 * @self: a #QmiIndicationLocGetServerOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocGetServerOutput *qmi_indication_loc_get_server_output_ref (QmiIndicationLocGetServerOutput *self);

/**
 * qmi_indication_loc_get_server_output_unref:
 * @self: a #QmiIndicationLocGetServerOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_get_server_output_unref (QmiIndicationLocGetServerOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGetServerOutput, qmi_indication_loc_get_server_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Delete Assistance Data */


/**
 * SECTION: qmi-indication-loc-delete-assistance-data
 * @title: LOC Delete Assistance Data indication
 * @short_description: Methods to manage the LOC Delete Assistance Data indication.
 *
 * Collection of methods to parse indications of the LOC Delete Assistance Data message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocDeleteAssistanceDataOutput:
 *
 * The #QmiIndicationLocDeleteAssistanceDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocDeleteAssistanceDataOutput QmiIndicationLocDeleteAssistanceDataOutput;
GType qmi_indication_loc_delete_assistance_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_DELETE_ASSISTANCE_DATA_OUTPUT (qmi_indication_loc_delete_assistance_data_output_get_type ())


/**
 * qmi_indication_loc_delete_assistance_data_output_get_indication_status:
 * @self: a #QmiIndicationLocDeleteAssistanceDataOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_delete_assistance_data_output_get_indication_status (
    QmiIndicationLocDeleteAssistanceDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_delete_assistance_data_output_ref:
 * @self: a #QmiIndicationLocDeleteAssistanceDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocDeleteAssistanceDataOutput *qmi_indication_loc_delete_assistance_data_output_ref (QmiIndicationLocDeleteAssistanceDataOutput *self);

/**
 * qmi_indication_loc_delete_assistance_data_output_unref:
 * @self: a #QmiIndicationLocDeleteAssistanceDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_delete_assistance_data_output_unref (QmiIndicationLocDeleteAssistanceDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocDeleteAssistanceDataOutput, qmi_indication_loc_delete_assistance_data_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Operation Mode */


/**
 * SECTION: qmi-indication-loc-set-operation-mode
 * @title: LOC Set Operation Mode indication
 * @short_description: Methods to manage the LOC Set Operation Mode indication.
 *
 * Collection of methods to parse indications of the LOC Set Operation Mode message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocSetOperationModeOutput:
 *
 * The #QmiIndicationLocSetOperationModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocSetOperationModeOutput QmiIndicationLocSetOperationModeOutput;
GType qmi_indication_loc_set_operation_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_SET_OPERATION_MODE_OUTPUT (qmi_indication_loc_set_operation_mode_output_get_type ())


/**
 * qmi_indication_loc_set_operation_mode_output_get_indication_status:
 * @self: a #QmiIndicationLocSetOperationModeOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_set_operation_mode_output_get_indication_status (
    QmiIndicationLocSetOperationModeOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_set_operation_mode_output_ref:
 * @self: a #QmiIndicationLocSetOperationModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocSetOperationModeOutput *qmi_indication_loc_set_operation_mode_output_ref (QmiIndicationLocSetOperationModeOutput *self);

/**
 * qmi_indication_loc_set_operation_mode_output_unref:
 * @self: a #QmiIndicationLocSetOperationModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_set_operation_mode_output_unref (QmiIndicationLocSetOperationModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocSetOperationModeOutput, qmi_indication_loc_set_operation_mode_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Operation Mode */


/**
 * SECTION: qmi-indication-loc-get-operation-mode
 * @title: LOC Get Operation Mode indication
 * @short_description: Methods to manage the LOC Get Operation Mode indication.
 *
 * Collection of methods to parse indications of the LOC Get Operation Mode message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocGetOperationModeOutput:
 *
 * The #QmiIndicationLocGetOperationModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocGetOperationModeOutput QmiIndicationLocGetOperationModeOutput;
GType qmi_indication_loc_get_operation_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT (qmi_indication_loc_get_operation_mode_output_get_type ())


/**
 * qmi_indication_loc_get_operation_mode_output_get_operation_mode:
 * @self: a #QmiIndicationLocGetOperationModeOutput.
 * @value_operation_mode: (out)(optional): a placeholder for the output #QmiLocOperationMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operation Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_operation_mode_output_get_operation_mode (
    QmiIndicationLocGetOperationModeOutput *self,
    QmiLocOperationMode *value_operation_mode,
    GError **error);


/**
 * qmi_indication_loc_get_operation_mode_output_get_indication_status:
 * @self: a #QmiIndicationLocGetOperationModeOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_get_operation_mode_output_get_indication_status (
    QmiIndicationLocGetOperationModeOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_get_operation_mode_output_ref:
 * @self: a #QmiIndicationLocGetOperationModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocGetOperationModeOutput *qmi_indication_loc_get_operation_mode_output_ref (QmiIndicationLocGetOperationModeOutput *self);

/**
 * qmi_indication_loc_get_operation_mode_output_unref:
 * @self: a #QmiIndicationLocGetOperationModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_get_operation_mode_output_unref (QmiIndicationLocGetOperationModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocGetOperationModeOutput, qmi_indication_loc_get_operation_mode_output_unref)

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Xtra Data */


/**
 * SECTION: qmi-indication-loc-inject-xtra-data
 * @title: LOC Inject Xtra Data indication
 * @short_description: Methods to manage the LOC Inject Xtra Data indication.
 *
 * Collection of methods to parse indications of the LOC Inject Xtra Data message.
 */

/* --- Output -- */

/**
 * QmiIndicationLocInjectXtraDataOutput:
 *
 * The #QmiIndicationLocInjectXtraDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationLocInjectXtraDataOutput QmiIndicationLocInjectXtraDataOutput;
GType qmi_indication_loc_inject_xtra_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT (qmi_indication_loc_inject_xtra_data_output_get_type ())


/**
 * qmi_indication_loc_inject_xtra_data_output_get_part_number:
 * @self: a #QmiIndicationLocInjectXtraDataOutput.
 * @value_part_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_inject_xtra_data_output_get_part_number (
    QmiIndicationLocInjectXtraDataOutput *self,
    guint16 *value_part_number,
    GError **error);


/**
 * qmi_indication_loc_inject_xtra_data_output_get_indication_status:
 * @self: a #QmiIndicationLocInjectXtraDataOutput.
 * @value_indication_status: (out)(optional): a placeholder for the output #QmiLocIndicationStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_loc_inject_xtra_data_output_get_indication_status (
    QmiIndicationLocInjectXtraDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error);


/**
 * qmi_indication_loc_inject_xtra_data_output_ref:
 * @self: a #QmiIndicationLocInjectXtraDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationLocInjectXtraDataOutput *qmi_indication_loc_inject_xtra_data_output_ref (QmiIndicationLocInjectXtraDataOutput *self);

/**
 * qmi_indication_loc_inject_xtra_data_output_unref:
 * @self: a #QmiIndicationLocInjectXtraDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_loc_inject_xtra_data_output_unref (QmiIndicationLocInjectXtraDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationLocInjectXtraDataOutput, qmi_indication_loc_inject_xtra_data_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Register Events */


/**
 * SECTION: qmi-message-loc-register-events
 * @title: LOC Register Events response
 * @short_description: Methods to manage the LOC Register Events response.
 *
 * Collection of methods to create requests and parse responses of the LOC Register Events message.
 */

/* --- Input -- */

/**
 * QmiMessageLocRegisterEventsInput:
 *
 * The #QmiMessageLocRegisterEventsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocRegisterEventsInput QmiMessageLocRegisterEventsInput;
GType qmi_message_loc_register_events_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_REGISTER_EVENTS_INPUT (qmi_message_loc_register_events_input_get_type ())


/**
 * qmi_message_loc_register_events_input_get_event_registration_mask:
 * @self: a #QmiMessageLocRegisterEventsInput.
 * @value_event_registration_mask: (out)(optional): a placeholder for the output #QmiLocEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_register_events_input_get_event_registration_mask (
    QmiMessageLocRegisterEventsInput *self,
    QmiLocEventRegistrationFlag *value_event_registration_mask,
    GError **error);


/**
 * qmi_message_loc_register_events_input_set_event_registration_mask:
 * @self: a #QmiMessageLocRegisterEventsInput.
 * @value_event_registration_mask: a #QmiLocEventRegistrationFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Event Registration Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_register_events_input_set_event_registration_mask (
    QmiMessageLocRegisterEventsInput *self,
    QmiLocEventRegistrationFlag value_event_registration_mask,
    GError **error);


/**
 * qmi_message_loc_register_events_input_ref:
 * @self: a #QmiMessageLocRegisterEventsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocRegisterEventsInput *qmi_message_loc_register_events_input_ref (QmiMessageLocRegisterEventsInput *self);

/**
 * qmi_message_loc_register_events_input_unref:
 * @self: a #QmiMessageLocRegisterEventsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_register_events_input_unref (QmiMessageLocRegisterEventsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocRegisterEventsInput, qmi_message_loc_register_events_input_unref)

/**
 * qmi_message_loc_register_events_input_new:
 *
 * Allocates a new #QmiMessageLocRegisterEventsInput.
 *
 * Returns: the newly created #QmiMessageLocRegisterEventsInput. The returned value should be freed with qmi_message_loc_register_events_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocRegisterEventsInput *qmi_message_loc_register_events_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocRegisterEventsOutput:
 *
 * The #QmiMessageLocRegisterEventsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocRegisterEventsOutput QmiMessageLocRegisterEventsOutput;
GType qmi_message_loc_register_events_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_REGISTER_EVENTS_OUTPUT (qmi_message_loc_register_events_output_get_type ())


/**
 * qmi_message_loc_register_events_output_get_result:
 * @self: a QmiMessageLocRegisterEventsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_register_events_output_get_result (
    QmiMessageLocRegisterEventsOutput *self,
    GError **error);


/**
 * qmi_message_loc_register_events_output_ref:
 * @self: a #QmiMessageLocRegisterEventsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocRegisterEventsOutput *qmi_message_loc_register_events_output_ref (QmiMessageLocRegisterEventsOutput *self);

/**
 * qmi_message_loc_register_events_output_unref:
 * @self: a #QmiMessageLocRegisterEventsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_register_events_output_unref (QmiMessageLocRegisterEventsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocRegisterEventsOutput, qmi_message_loc_register_events_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Start */


/**
 * SECTION: qmi-message-loc-start
 * @title: LOC Start response
 * @short_description: Methods to manage the LOC Start response.
 *
 * Collection of methods to create requests and parse responses of the LOC Start message.
 */

/* --- Input -- */

/**
 * QmiMessageLocStartInput:
 *
 * The #QmiMessageLocStartInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStartInput QmiMessageLocStartInput;
GType qmi_message_loc_start_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_START_INPUT (qmi_message_loc_start_input_get_type ())


/**
 * qmi_message_loc_start_input_get_minimum_interval_between_position_reports:
 * @self: a #QmiMessageLocStartInput.
 * @value_minimum_interval_between_position_reports: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Minimum Interval between Position Reports' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_start_input_get_minimum_interval_between_position_reports (
    QmiMessageLocStartInput *self,
    guint32 *value_minimum_interval_between_position_reports,
    GError **error);


/**
 * qmi_message_loc_start_input_set_minimum_interval_between_position_reports:
 * @self: a #QmiMessageLocStartInput.
 * @value_minimum_interval_between_position_reports: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Minimum Interval between Position Reports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_start_input_set_minimum_interval_between_position_reports (
    QmiMessageLocStartInput *self,
    guint32 value_minimum_interval_between_position_reports,
    GError **error);


/**
 * qmi_message_loc_start_input_get_intermediate_report_state:
 * @self: a #QmiMessageLocStartInput.
 * @value_intermediate_report_state: (out)(optional): a placeholder for the output #QmiLocIntermediateReportState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Intermediate Report State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_get_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState *value_intermediate_report_state,
    GError **error);


/**
 * qmi_message_loc_start_input_set_intermediate_report_state:
 * @self: a #QmiMessageLocStartInput.
 * @value_intermediate_report_state: a #QmiLocIntermediateReportState.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Intermediate Report State' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_set_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState value_intermediate_report_state,
    GError **error);


/**
 * qmi_message_loc_start_input_get_fix_recurrence_type:
 * @self: a #QmiMessageLocStartInput.
 * @value_fix_recurrence_type: (out)(optional): a placeholder for the output #QmiLocFixRecurrenceType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Fix Recurrence Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_get_fix_recurrence_type (
    QmiMessageLocStartInput *self,
    QmiLocFixRecurrenceType *value_fix_recurrence_type,
    GError **error);


/**
 * qmi_message_loc_start_input_set_fix_recurrence_type:
 * @self: a #QmiMessageLocStartInput.
 * @value_fix_recurrence_type: a #QmiLocFixRecurrenceType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Fix Recurrence Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_set_fix_recurrence_type (
    QmiMessageLocStartInput *self,
    QmiLocFixRecurrenceType value_fix_recurrence_type,
    GError **error);


/**
 * qmi_message_loc_start_input_get_session_id:
 * @self: a #QmiMessageLocStartInput.
 * @value_session_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_get_session_id (
    QmiMessageLocStartInput *self,
    guint8 *value_session_id,
    GError **error);


/**
 * qmi_message_loc_start_input_set_session_id:
 * @self: a #QmiMessageLocStartInput.
 * @value_session_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_input_set_session_id (
    QmiMessageLocStartInput *self,
    guint8 value_session_id,
    GError **error);


/**
 * qmi_message_loc_start_input_ref:
 * @self: a #QmiMessageLocStartInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStartInput *qmi_message_loc_start_input_ref (QmiMessageLocStartInput *self);

/**
 * qmi_message_loc_start_input_unref:
 * @self: a #QmiMessageLocStartInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_start_input_unref (QmiMessageLocStartInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocStartInput, qmi_message_loc_start_input_unref)

/**
 * qmi_message_loc_start_input_new:
 *
 * Allocates a new #QmiMessageLocStartInput.
 *
 * Returns: the newly created #QmiMessageLocStartInput. The returned value should be freed with qmi_message_loc_start_input_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStartInput *qmi_message_loc_start_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocStartOutput:
 *
 * The #QmiMessageLocStartOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStartOutput QmiMessageLocStartOutput;
GType qmi_message_loc_start_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_START_OUTPUT (qmi_message_loc_start_output_get_type ())


/**
 * qmi_message_loc_start_output_get_result:
 * @self: a QmiMessageLocStartOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_start_output_get_result (
    QmiMessageLocStartOutput *self,
    GError **error);


/**
 * qmi_message_loc_start_output_ref:
 * @self: a #QmiMessageLocStartOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStartOutput *qmi_message_loc_start_output_ref (QmiMessageLocStartOutput *self);

/**
 * qmi_message_loc_start_output_unref:
 * @self: a #QmiMessageLocStartOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_start_output_unref (QmiMessageLocStartOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocStartOutput, qmi_message_loc_start_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Stop */


/**
 * SECTION: qmi-message-loc-stop
 * @title: LOC Stop response
 * @short_description: Methods to manage the LOC Stop response.
 *
 * Collection of methods to create requests and parse responses of the LOC Stop message.
 */

/* --- Input -- */

/**
 * QmiMessageLocStopInput:
 *
 * The #QmiMessageLocStopInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStopInput QmiMessageLocStopInput;
GType qmi_message_loc_stop_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_STOP_INPUT (qmi_message_loc_stop_input_get_type ())


/**
 * qmi_message_loc_stop_input_get_session_id:
 * @self: a #QmiMessageLocStopInput.
 * @value_session_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_stop_input_get_session_id (
    QmiMessageLocStopInput *self,
    guint8 *value_session_id,
    GError **error);


/**
 * qmi_message_loc_stop_input_set_session_id:
 * @self: a #QmiMessageLocStopInput.
 * @value_session_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_stop_input_set_session_id (
    QmiMessageLocStopInput *self,
    guint8 value_session_id,
    GError **error);


/**
 * qmi_message_loc_stop_input_ref:
 * @self: a #QmiMessageLocStopInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStopInput *qmi_message_loc_stop_input_ref (QmiMessageLocStopInput *self);

/**
 * qmi_message_loc_stop_input_unref:
 * @self: a #QmiMessageLocStopInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_stop_input_unref (QmiMessageLocStopInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocStopInput, qmi_message_loc_stop_input_unref)

/**
 * qmi_message_loc_stop_input_new:
 *
 * Allocates a new #QmiMessageLocStopInput.
 *
 * Returns: the newly created #QmiMessageLocStopInput. The returned value should be freed with qmi_message_loc_stop_input_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStopInput *qmi_message_loc_stop_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocStopOutput:
 *
 * The #QmiMessageLocStopOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageLocStopOutput QmiMessageLocStopOutput;
GType qmi_message_loc_stop_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_STOP_OUTPUT (qmi_message_loc_stop_output_get_type ())


/**
 * qmi_message_loc_stop_output_get_result:
 * @self: a QmiMessageLocStopOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_loc_stop_output_get_result (
    QmiMessageLocStopOutput *self,
    GError **error);


/**
 * qmi_message_loc_stop_output_ref:
 * @self: a #QmiMessageLocStopOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageLocStopOutput *qmi_message_loc_stop_output_ref (QmiMessageLocStopOutput *self);

/**
 * qmi_message_loc_stop_output_unref:
 * @self: a #QmiMessageLocStopOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_loc_stop_output_unref (QmiMessageLocStopOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocStopOutput, qmi_message_loc_stop_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject Predicted Orbits Data */


/**
 * SECTION: qmi-message-loc-inject-predicted-orbits-data
 * @title: LOC Inject Predicted Orbits Data response
 * @short_description: Methods to manage the LOC Inject Predicted Orbits Data response.
 *
 * Collection of methods to create requests and parse responses of the LOC Inject Predicted Orbits Data message.
 */

/* --- Input -- */

/**
 * QmiMessageLocInjectPredictedOrbitsDataInput:
 *
 * The #QmiMessageLocInjectPredictedOrbitsDataInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocInjectPredictedOrbitsDataInput QmiMessageLocInjectPredictedOrbitsDataInput;
GType qmi_message_loc_inject_predicted_orbits_data_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT (qmi_message_loc_inject_predicted_orbits_data_input_get_type ())


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_get_format_type:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_format_type: (out)(optional): a placeholder for the output #QmiLocPredictedOrbitsDataFormat, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Format Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_get_format_type (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    QmiLocPredictedOrbitsDataFormat *value_format_type,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_set_format_type:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_format_type: a #QmiLocPredictedOrbitsDataFormat.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Format Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_set_format_type (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    QmiLocPredictedOrbitsDataFormat value_format_type,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_get_part_data:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_part_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_get_part_data (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    GArray **value_part_data,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_set_part_data:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_part_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_part_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Part Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_set_part_data (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    GArray *value_part_data,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_get_part_number:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_part_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_get_part_number (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 *value_part_number,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_set_part_number:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_part_number: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Part Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_set_part_number (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 value_part_number,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_get_total_parts:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_total_parts: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Parts' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_get_total_parts (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 *value_total_parts,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_set_total_parts:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_total_parts: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Total Parts' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_set_total_parts (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 value_total_parts,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_get_total_size:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_total_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_get_total_size (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint32 *value_total_size,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_set_total_size:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @value_total_size: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Total Size' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_input_set_total_size (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint32 value_total_size,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_input_ref:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocInjectPredictedOrbitsDataInput *qmi_message_loc_inject_predicted_orbits_data_input_ref (QmiMessageLocInjectPredictedOrbitsDataInput *self);

/**
 * qmi_message_loc_inject_predicted_orbits_data_input_unref:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_inject_predicted_orbits_data_input_unref (QmiMessageLocInjectPredictedOrbitsDataInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocInjectPredictedOrbitsDataInput, qmi_message_loc_inject_predicted_orbits_data_input_unref)

/**
 * qmi_message_loc_inject_predicted_orbits_data_input_new:
 *
 * Allocates a new #QmiMessageLocInjectPredictedOrbitsDataInput.
 *
 * Returns: the newly created #QmiMessageLocInjectPredictedOrbitsDataInput. The returned value should be freed with qmi_message_loc_inject_predicted_orbits_data_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocInjectPredictedOrbitsDataInput *qmi_message_loc_inject_predicted_orbits_data_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocInjectPredictedOrbitsDataOutput:
 *
 * The #QmiMessageLocInjectPredictedOrbitsDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocInjectPredictedOrbitsDataOutput QmiMessageLocInjectPredictedOrbitsDataOutput;
GType qmi_message_loc_inject_predicted_orbits_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT (qmi_message_loc_inject_predicted_orbits_data_output_get_type ())


/**
 * qmi_message_loc_inject_predicted_orbits_data_output_get_result:
 * @self: a QmiMessageLocInjectPredictedOrbitsDataOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_predicted_orbits_data_output_get_result (
    QmiMessageLocInjectPredictedOrbitsDataOutput *self,
    GError **error);


/**
 * qmi_message_loc_inject_predicted_orbits_data_output_ref:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocInjectPredictedOrbitsDataOutput *qmi_message_loc_inject_predicted_orbits_data_output_ref (QmiMessageLocInjectPredictedOrbitsDataOutput *self);

/**
 * qmi_message_loc_inject_predicted_orbits_data_output_unref:
 * @self: a #QmiMessageLocInjectPredictedOrbitsDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_inject_predicted_orbits_data_output_unref (QmiMessageLocInjectPredictedOrbitsDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocInjectPredictedOrbitsDataOutput, qmi_message_loc_inject_predicted_orbits_data_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Predicted Orbits Data Source */


/**
 * SECTION: qmi-message-loc-get-predicted-orbits-data-source
 * @title: LOC Get Predicted Orbits Data Source response
 * @short_description: Methods to manage the LOC Get Predicted Orbits Data Source response.
 *
 * Collection of methods to create requests and parse responses of the LOC Get Predicted Orbits Data Source message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageLocGetPredictedOrbitsDataSourceOutput:
 *
 * The #QmiMessageLocGetPredictedOrbitsDataSourceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocGetPredictedOrbitsDataSourceOutput QmiMessageLocGetPredictedOrbitsDataSourceOutput;
GType qmi_message_loc_get_predicted_orbits_data_source_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT (qmi_message_loc_get_predicted_orbits_data_source_output_get_type ())


/**
 * qmi_message_loc_get_predicted_orbits_data_source_output_get_result:
 * @self: a QmiMessageLocGetPredictedOrbitsDataSourceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_predicted_orbits_data_source_output_get_result (
    QmiMessageLocGetPredictedOrbitsDataSourceOutput *self,
    GError **error);


/**
 * qmi_message_loc_get_predicted_orbits_data_source_output_ref:
 * @self: a #QmiMessageLocGetPredictedOrbitsDataSourceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocGetPredictedOrbitsDataSourceOutput *qmi_message_loc_get_predicted_orbits_data_source_output_ref (QmiMessageLocGetPredictedOrbitsDataSourceOutput *self);

/**
 * qmi_message_loc_get_predicted_orbits_data_source_output_unref:
 * @self: a #QmiMessageLocGetPredictedOrbitsDataSourceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_get_predicted_orbits_data_source_output_unref (QmiMessageLocGetPredictedOrbitsDataSourceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetPredictedOrbitsDataSourceOutput, qmi_message_loc_get_predicted_orbits_data_source_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Engine Lock */


/**
 * SECTION: qmi-message-loc-set-engine-lock
 * @title: LOC Set Engine Lock response
 * @short_description: Methods to manage the LOC Set Engine Lock response.
 *
 * Collection of methods to create requests and parse responses of the LOC Set Engine Lock message.
 */

/* --- Input -- */

/**
 * QmiMessageLocSetEngineLockInput:
 *
 * The #QmiMessageLocSetEngineLockInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageLocSetEngineLockInput QmiMessageLocSetEngineLockInput;
GType qmi_message_loc_set_engine_lock_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_ENGINE_LOCK_INPUT (qmi_message_loc_set_engine_lock_input_get_type ())


/**
 * qmi_message_loc_set_engine_lock_input_get_lock_type:
 * @self: a #QmiMessageLocSetEngineLockInput.
 * @value_lock_type: (out)(optional): a placeholder for the output #QmiLocLockType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Lock Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_loc_set_engine_lock_input_get_lock_type (
    QmiMessageLocSetEngineLockInput *self,
    QmiLocLockType *value_lock_type,
    GError **error);


/**
 * qmi_message_loc_set_engine_lock_input_set_lock_type:
 * @self: a #QmiMessageLocSetEngineLockInput.
 * @value_lock_type: a #QmiLocLockType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Lock Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_loc_set_engine_lock_input_set_lock_type (
    QmiMessageLocSetEngineLockInput *self,
    QmiLocLockType value_lock_type,
    GError **error);


/**
 * qmi_message_loc_set_engine_lock_input_ref:
 * @self: a #QmiMessageLocSetEngineLockInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageLocSetEngineLockInput *qmi_message_loc_set_engine_lock_input_ref (QmiMessageLocSetEngineLockInput *self);

/**
 * qmi_message_loc_set_engine_lock_input_unref:
 * @self: a #QmiMessageLocSetEngineLockInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_loc_set_engine_lock_input_unref (QmiMessageLocSetEngineLockInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetEngineLockInput, qmi_message_loc_set_engine_lock_input_unref)

/**
 * qmi_message_loc_set_engine_lock_input_new:
 *
 * Allocates a new #QmiMessageLocSetEngineLockInput.
 *
 * Returns: the newly created #QmiMessageLocSetEngineLockInput. The returned value should be freed with qmi_message_loc_set_engine_lock_input_unref().
 *
 * Since: 1.28
 */
QmiMessageLocSetEngineLockInput *qmi_message_loc_set_engine_lock_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocSetEngineLockOutput:
 *
 * The #QmiMessageLocSetEngineLockOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageLocSetEngineLockOutput QmiMessageLocSetEngineLockOutput;
GType qmi_message_loc_set_engine_lock_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_ENGINE_LOCK_OUTPUT (qmi_message_loc_set_engine_lock_output_get_type ())


/**
 * qmi_message_loc_set_engine_lock_output_get_result:
 * @self: a QmiMessageLocSetEngineLockOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_loc_set_engine_lock_output_get_result (
    QmiMessageLocSetEngineLockOutput *self,
    GError **error);


/**
 * qmi_message_loc_set_engine_lock_output_ref:
 * @self: a #QmiMessageLocSetEngineLockOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageLocSetEngineLockOutput *qmi_message_loc_set_engine_lock_output_ref (QmiMessageLocSetEngineLockOutput *self);

/**
 * qmi_message_loc_set_engine_lock_output_unref:
 * @self: a #QmiMessageLocSetEngineLockOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_loc_set_engine_lock_output_unref (QmiMessageLocSetEngineLockOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetEngineLockOutput, qmi_message_loc_set_engine_lock_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Engine Lock */


/**
 * SECTION: qmi-message-loc-get-engine-lock
 * @title: LOC Get Engine Lock response
 * @short_description: Methods to manage the LOC Get Engine Lock response.
 *
 * Collection of methods to create requests and parse responses of the LOC Get Engine Lock message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageLocGetEngineLockOutput:
 *
 * The #QmiMessageLocGetEngineLockOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageLocGetEngineLockOutput QmiMessageLocGetEngineLockOutput;
GType qmi_message_loc_get_engine_lock_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_ENGINE_LOCK_OUTPUT (qmi_message_loc_get_engine_lock_output_get_type ())


/**
 * qmi_message_loc_get_engine_lock_output_get_result:
 * @self: a QmiMessageLocGetEngineLockOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_loc_get_engine_lock_output_get_result (
    QmiMessageLocGetEngineLockOutput *self,
    GError **error);


/**
 * qmi_message_loc_get_engine_lock_output_ref:
 * @self: a #QmiMessageLocGetEngineLockOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageLocGetEngineLockOutput *qmi_message_loc_get_engine_lock_output_ref (QmiMessageLocGetEngineLockOutput *self);

/**
 * qmi_message_loc_get_engine_lock_output_unref:
 * @self: a #QmiMessageLocGetEngineLockOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_loc_get_engine_lock_output_unref (QmiMessageLocGetEngineLockOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetEngineLockOutput, qmi_message_loc_get_engine_lock_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set NMEA Types */


/**
 * SECTION: qmi-message-loc-set-nmea-types
 * @title: LOC Set NMEA Types response
 * @short_description: Methods to manage the LOC Set NMEA Types response.
 *
 * Collection of methods to create requests and parse responses of the LOC Set NMEA Types message.
 */

/* --- Input -- */

/**
 * QmiMessageLocSetNmeaTypesInput:
 *
 * The #QmiMessageLocSetNmeaTypesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageLocSetNmeaTypesInput QmiMessageLocSetNmeaTypesInput;
GType qmi_message_loc_set_nmea_types_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_NMEA_TYPES_INPUT (qmi_message_loc_set_nmea_types_input_get_type ())


/**
 * qmi_message_loc_set_nmea_types_input_get_nmea_types:
 * @self: a #QmiMessageLocSetNmeaTypesInput.
 * @value_nmea_types: (out)(optional): a placeholder for the output #QmiLocNmeaType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA Types' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_loc_set_nmea_types_input_get_nmea_types (
    QmiMessageLocSetNmeaTypesInput *self,
    QmiLocNmeaType *value_nmea_types,
    GError **error);


/**
 * qmi_message_loc_set_nmea_types_input_set_nmea_types:
 * @self: a #QmiMessageLocSetNmeaTypesInput.
 * @value_nmea_types: a #QmiLocNmeaType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NMEA Types' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_loc_set_nmea_types_input_set_nmea_types (
    QmiMessageLocSetNmeaTypesInput *self,
    QmiLocNmeaType value_nmea_types,
    GError **error);


/**
 * qmi_message_loc_set_nmea_types_input_ref:
 * @self: a #QmiMessageLocSetNmeaTypesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageLocSetNmeaTypesInput *qmi_message_loc_set_nmea_types_input_ref (QmiMessageLocSetNmeaTypesInput *self);

/**
 * qmi_message_loc_set_nmea_types_input_unref:
 * @self: a #QmiMessageLocSetNmeaTypesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_loc_set_nmea_types_input_unref (QmiMessageLocSetNmeaTypesInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetNmeaTypesInput, qmi_message_loc_set_nmea_types_input_unref)

/**
 * qmi_message_loc_set_nmea_types_input_new:
 *
 * Allocates a new #QmiMessageLocSetNmeaTypesInput.
 *
 * Returns: the newly created #QmiMessageLocSetNmeaTypesInput. The returned value should be freed with qmi_message_loc_set_nmea_types_input_unref().
 *
 * Since: 1.26
 */
QmiMessageLocSetNmeaTypesInput *qmi_message_loc_set_nmea_types_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocSetNmeaTypesOutput:
 *
 * The #QmiMessageLocSetNmeaTypesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageLocSetNmeaTypesOutput QmiMessageLocSetNmeaTypesOutput;
GType qmi_message_loc_set_nmea_types_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_NMEA_TYPES_OUTPUT (qmi_message_loc_set_nmea_types_output_get_type ())


/**
 * qmi_message_loc_set_nmea_types_output_get_result:
 * @self: a QmiMessageLocSetNmeaTypesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_loc_set_nmea_types_output_get_result (
    QmiMessageLocSetNmeaTypesOutput *self,
    GError **error);


/**
 * qmi_message_loc_set_nmea_types_output_ref:
 * @self: a #QmiMessageLocSetNmeaTypesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageLocSetNmeaTypesOutput *qmi_message_loc_set_nmea_types_output_ref (QmiMessageLocSetNmeaTypesOutput *self);

/**
 * qmi_message_loc_set_nmea_types_output_unref:
 * @self: a #QmiMessageLocSetNmeaTypesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_loc_set_nmea_types_output_unref (QmiMessageLocSetNmeaTypesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetNmeaTypesOutput, qmi_message_loc_set_nmea_types_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get NMEA Types */


/**
 * SECTION: qmi-message-loc-get-nmea-types
 * @title: LOC Get NMEA Types response
 * @short_description: Methods to manage the LOC Get NMEA Types response.
 *
 * Collection of methods to create requests and parse responses of the LOC Get NMEA Types message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageLocGetNmeaTypesOutput:
 *
 * The #QmiMessageLocGetNmeaTypesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageLocGetNmeaTypesOutput QmiMessageLocGetNmeaTypesOutput;
GType qmi_message_loc_get_nmea_types_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_NMEA_TYPES_OUTPUT (qmi_message_loc_get_nmea_types_output_get_type ())


/**
 * qmi_message_loc_get_nmea_types_output_get_result:
 * @self: a QmiMessageLocGetNmeaTypesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_loc_get_nmea_types_output_get_result (
    QmiMessageLocGetNmeaTypesOutput *self,
    GError **error);


/**
 * qmi_message_loc_get_nmea_types_output_ref:
 * @self: a #QmiMessageLocGetNmeaTypesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageLocGetNmeaTypesOutput *qmi_message_loc_get_nmea_types_output_ref (QmiMessageLocGetNmeaTypesOutput *self);

/**
 * qmi_message_loc_get_nmea_types_output_unref:
 * @self: a #QmiMessageLocGetNmeaTypesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_loc_get_nmea_types_output_unref (QmiMessageLocGetNmeaTypesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetNmeaTypesOutput, qmi_message_loc_get_nmea_types_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Server */


/**
 * SECTION: qmi-message-loc-set-server
 * @title: LOC Set Server response
 * @short_description: Methods to manage the LOC Set Server response.
 *
 * Collection of methods to create requests and parse responses of the LOC Set Server message.
 */

/* --- Input -- */

/**
 * QmiMessageLocSetServerInput:
 *
 * The #QmiMessageLocSetServerInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocSetServerInput QmiMessageLocSetServerInput;
GType qmi_message_loc_set_server_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_SERVER_INPUT (qmi_message_loc_set_server_input_get_type ())


/**
 * qmi_message_loc_set_server_input_get_url:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_url: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'URL' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_get_url (
    QmiMessageLocSetServerInput *self,
    const gchar **value_url,
    GError **error);


/**
 * qmi_message_loc_set_server_input_set_url:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_url: a constant string with a maximum length of 256 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'URL' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_set_url (
    QmiMessageLocSetServerInput *self,
    const gchar *value_url,
    GError **error);


/**
 * qmi_message_loc_set_server_input_get_ipv6:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_ipv6_ipv6_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_ipv6_port: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_get_ipv6 (
    QmiMessageLocSetServerInput *self,
    GArray **value_ipv6_ipv6_address,
    guint32 *value_ipv6_ipv6_port,
    GError **error);


/**
 * qmi_message_loc_set_server_input_set_ipv6:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_ipv6_ipv6_address: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_ipv6_address will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @value_ipv6_ipv6_port: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_set_ipv6 (
    QmiMessageLocSetServerInput *self,
    GArray *value_ipv6_ipv6_address,
    guint32 value_ipv6_ipv6_port,
    GError **error);


/**
 * qmi_message_loc_set_server_input_get_ipv4:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_ipv4_ipv4_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_ipv4_ipv4_port: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_get_ipv4 (
    QmiMessageLocSetServerInput *self,
    guint32 *value_ipv4_ipv4_address,
    guint16 *value_ipv4_ipv4_port,
    GError **error);


/**
 * qmi_message_loc_set_server_input_set_ipv4:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_ipv4_ipv4_address: a #guint32.
 * @value_ipv4_ipv4_port: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_set_ipv4 (
    QmiMessageLocSetServerInput *self,
    guint32 value_ipv4_ipv4_address,
    guint16 value_ipv4_ipv4_port,
    GError **error);


/**
 * qmi_message_loc_set_server_input_get_server_type:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_server_type: (out)(optional): a placeholder for the output #QmiLocServerType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Server Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_get_server_type (
    QmiMessageLocSetServerInput *self,
    QmiLocServerType *value_server_type,
    GError **error);


/**
 * qmi_message_loc_set_server_input_set_server_type:
 * @self: a #QmiMessageLocSetServerInput.
 * @value_server_type: a #QmiLocServerType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Server Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_input_set_server_type (
    QmiMessageLocSetServerInput *self,
    QmiLocServerType value_server_type,
    GError **error);


/**
 * qmi_message_loc_set_server_input_ref:
 * @self: a #QmiMessageLocSetServerInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocSetServerInput *qmi_message_loc_set_server_input_ref (QmiMessageLocSetServerInput *self);

/**
 * qmi_message_loc_set_server_input_unref:
 * @self: a #QmiMessageLocSetServerInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_set_server_input_unref (QmiMessageLocSetServerInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetServerInput, qmi_message_loc_set_server_input_unref)

/**
 * qmi_message_loc_set_server_input_new:
 *
 * Allocates a new #QmiMessageLocSetServerInput.
 *
 * Returns: the newly created #QmiMessageLocSetServerInput. The returned value should be freed with qmi_message_loc_set_server_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocSetServerInput *qmi_message_loc_set_server_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocSetServerOutput:
 *
 * The #QmiMessageLocSetServerOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocSetServerOutput QmiMessageLocSetServerOutput;
GType qmi_message_loc_set_server_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_SERVER_OUTPUT (qmi_message_loc_set_server_output_get_type ())


/**
 * qmi_message_loc_set_server_output_get_result:
 * @self: a QmiMessageLocSetServerOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_server_output_get_result (
    QmiMessageLocSetServerOutput *self,
    GError **error);


/**
 * qmi_message_loc_set_server_output_ref:
 * @self: a #QmiMessageLocSetServerOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocSetServerOutput *qmi_message_loc_set_server_output_ref (QmiMessageLocSetServerOutput *self);

/**
 * qmi_message_loc_set_server_output_unref:
 * @self: a #QmiMessageLocSetServerOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_set_server_output_unref (QmiMessageLocSetServerOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetServerOutput, qmi_message_loc_set_server_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Server */


/**
 * SECTION: qmi-message-loc-get-server
 * @title: LOC Get Server response
 * @short_description: Methods to manage the LOC Get Server response.
 *
 * Collection of methods to create requests and parse responses of the LOC Get Server message.
 */

/* --- Input -- */

/**
 * QmiMessageLocGetServerInput:
 *
 * The #QmiMessageLocGetServerInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocGetServerInput QmiMessageLocGetServerInput;
GType qmi_message_loc_get_server_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_SERVER_INPUT (qmi_message_loc_get_server_input_get_type ())


/**
 * qmi_message_loc_get_server_input_get_server_address_type:
 * @self: a #QmiMessageLocGetServerInput.
 * @value_server_address_type: (out)(optional): a placeholder for the output #QmiLocServerAddressType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Server Address Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_server_input_get_server_address_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerAddressType *value_server_address_type,
    GError **error);


/**
 * qmi_message_loc_get_server_input_set_server_address_type:
 * @self: a #QmiMessageLocGetServerInput.
 * @value_server_address_type: a #QmiLocServerAddressType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Server Address Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_server_input_set_server_address_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerAddressType value_server_address_type,
    GError **error);


/**
 * qmi_message_loc_get_server_input_get_server_type:
 * @self: a #QmiMessageLocGetServerInput.
 * @value_server_type: (out)(optional): a placeholder for the output #QmiLocServerType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Server Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_server_input_get_server_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerType *value_server_type,
    GError **error);


/**
 * qmi_message_loc_get_server_input_set_server_type:
 * @self: a #QmiMessageLocGetServerInput.
 * @value_server_type: a #QmiLocServerType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Server Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_server_input_set_server_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerType value_server_type,
    GError **error);


/**
 * qmi_message_loc_get_server_input_ref:
 * @self: a #QmiMessageLocGetServerInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocGetServerInput *qmi_message_loc_get_server_input_ref (QmiMessageLocGetServerInput *self);

/**
 * qmi_message_loc_get_server_input_unref:
 * @self: a #QmiMessageLocGetServerInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_get_server_input_unref (QmiMessageLocGetServerInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetServerInput, qmi_message_loc_get_server_input_unref)

/**
 * qmi_message_loc_get_server_input_new:
 *
 * Allocates a new #QmiMessageLocGetServerInput.
 *
 * Returns: the newly created #QmiMessageLocGetServerInput. The returned value should be freed with qmi_message_loc_get_server_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocGetServerInput *qmi_message_loc_get_server_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocGetServerOutput:
 *
 * The #QmiMessageLocGetServerOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocGetServerOutput QmiMessageLocGetServerOutput;
GType qmi_message_loc_get_server_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_SERVER_OUTPUT (qmi_message_loc_get_server_output_get_type ())


/**
 * qmi_message_loc_get_server_output_get_result:
 * @self: a QmiMessageLocGetServerOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_server_output_get_result (
    QmiMessageLocGetServerOutput *self,
    GError **error);


/**
 * qmi_message_loc_get_server_output_ref:
 * @self: a #QmiMessageLocGetServerOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocGetServerOutput *qmi_message_loc_get_server_output_ref (QmiMessageLocGetServerOutput *self);

/**
 * qmi_message_loc_get_server_output_unref:
 * @self: a #QmiMessageLocGetServerOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_get_server_output_unref (QmiMessageLocGetServerOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetServerOutput, qmi_message_loc_get_server_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Delete Assistance Data */


/**
 * SECTION: qmi-message-loc-delete-assistance-data
 * @title: LOC Delete Assistance Data response
 * @short_description: Methods to manage the LOC Delete Assistance Data response.
 *
 * Collection of methods to create requests and parse responses of the LOC Delete Assistance Data message.
 */

/* --- Input -- */


/**
 * QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement:
 * @gnss_sv_id: a #guint16.
 * @system: a #QmiLocSystem.
 * @delete_sv_info_mask: a #QmiLocDeleteSvInfo.
 *
 * A QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement {
    guint16 gnss_sv_id;
    QmiLocSystem system;
    QmiLocDeleteSvInfo delete_sv_info_mask;
} QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement;

GType qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageLocDeleteAssistanceDataInput:
 *
 * The #QmiMessageLocDeleteAssistanceDataInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocDeleteAssistanceDataInput QmiMessageLocDeleteAssistanceDataInput;
GType qmi_message_loc_delete_assistance_data_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT (qmi_message_loc_delete_assistance_data_input_get_type ())


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_clock_info_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_clock_info_mask: (out)(optional): a placeholder for the output #QmiLocDeleteClockInfo, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete Clock Info Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_clock_info_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteClockInfo *value_delete_clock_info_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_clock_info_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_clock_info_mask: a #QmiLocDeleteClockInfo.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete Clock Info Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_clock_info_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteClockInfo value_delete_clock_info_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_cell_database_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_cell_database_mask: (out)(optional): a placeholder for the output #QmiLocDeleteCellDatabase, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete Cell Database Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_cell_database_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteCellDatabase *value_delete_cell_database_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_cell_database_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_cell_database_mask: a #QmiLocDeleteCellDatabase.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete Cell Database Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_cell_database_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteCellDatabase value_delete_cell_database_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_gnss_data_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_gnss_data_mask: (out)(optional): a placeholder for the output #QmiLocDeleteGnssData, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete GNSS Data Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_gnss_data_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteGnssData *value_delete_gnss_data_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_gnss_data_mask:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_gnss_data_mask: a #QmiLocDeleteGnssData.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete GNSS Data Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_gnss_data_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteGnssData value_delete_gnss_data_mask,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_sv_info: (skip)
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_sv_info: (out)(optional)(element-type QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement)(transfer none): a placeholder for the output #GArray of #QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete SV Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_sv_info (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GArray **value_delete_sv_info,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_sv_info_gir: (rename-to qmi_message_loc_delete_assistance_data_input_get_delete_sv_info)
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_sv_info_ptr: (out)(optional)(element-type QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement)(transfer none): a placeholder for the output array of #QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete SV Info' field from @self.
 *
 * Version of qmi_message_loc_delete_assistance_data_input_get_delete_sv_info() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_sv_info_gir (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GPtrArray **value_delete_sv_info_ptr,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_sv_info: (skip)
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_sv_info: (in)(element-type QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement)(transfer none): a #GArray of #QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement elements. A new reference to @value_delete_sv_info will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete SV Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_sv_info (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GArray *value_delete_sv_info,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_sv_info_gir: (rename-to qmi_message_loc_delete_assistance_data_input_set_delete_sv_info)
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_sv_info_ptr: (in)(element-type QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement)(transfer none): array of #QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete SV Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_sv_info_gir (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GPtrArray *value_delete_sv_info_ptr,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_get_delete_all:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_all: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Delete All' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_get_delete_all (
    QmiMessageLocDeleteAssistanceDataInput *self,
    gboolean *value_delete_all,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_set_delete_all:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 * @value_delete_all: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Delete All' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_input_set_delete_all (
    QmiMessageLocDeleteAssistanceDataInput *self,
    gboolean value_delete_all,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_input_ref:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocDeleteAssistanceDataInput *qmi_message_loc_delete_assistance_data_input_ref (QmiMessageLocDeleteAssistanceDataInput *self);

/**
 * qmi_message_loc_delete_assistance_data_input_unref:
 * @self: a #QmiMessageLocDeleteAssistanceDataInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_delete_assistance_data_input_unref (QmiMessageLocDeleteAssistanceDataInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocDeleteAssistanceDataInput, qmi_message_loc_delete_assistance_data_input_unref)

/**
 * qmi_message_loc_delete_assistance_data_input_new:
 *
 * Allocates a new #QmiMessageLocDeleteAssistanceDataInput.
 *
 * Returns: the newly created #QmiMessageLocDeleteAssistanceDataInput. The returned value should be freed with qmi_message_loc_delete_assistance_data_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocDeleteAssistanceDataInput *qmi_message_loc_delete_assistance_data_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocDeleteAssistanceDataOutput:
 *
 * The #QmiMessageLocDeleteAssistanceDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocDeleteAssistanceDataOutput QmiMessageLocDeleteAssistanceDataOutput;
GType qmi_message_loc_delete_assistance_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_OUTPUT (qmi_message_loc_delete_assistance_data_output_get_type ())


/**
 * qmi_message_loc_delete_assistance_data_output_get_result:
 * @self: a QmiMessageLocDeleteAssistanceDataOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_delete_assistance_data_output_get_result (
    QmiMessageLocDeleteAssistanceDataOutput *self,
    GError **error);


/**
 * qmi_message_loc_delete_assistance_data_output_ref:
 * @self: a #QmiMessageLocDeleteAssistanceDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocDeleteAssistanceDataOutput *qmi_message_loc_delete_assistance_data_output_ref (QmiMessageLocDeleteAssistanceDataOutput *self);

/**
 * qmi_message_loc_delete_assistance_data_output_unref:
 * @self: a #QmiMessageLocDeleteAssistanceDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_delete_assistance_data_output_unref (QmiMessageLocDeleteAssistanceDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocDeleteAssistanceDataOutput, qmi_message_loc_delete_assistance_data_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Operation Mode */


/**
 * SECTION: qmi-message-loc-set-operation-mode
 * @title: LOC Set Operation Mode response
 * @short_description: Methods to manage the LOC Set Operation Mode response.
 *
 * Collection of methods to create requests and parse responses of the LOC Set Operation Mode message.
 */

/* --- Input -- */

/**
 * QmiMessageLocSetOperationModeInput:
 *
 * The #QmiMessageLocSetOperationModeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocSetOperationModeInput QmiMessageLocSetOperationModeInput;
GType qmi_message_loc_set_operation_mode_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_OPERATION_MODE_INPUT (qmi_message_loc_set_operation_mode_input_get_type ())


/**
 * qmi_message_loc_set_operation_mode_input_get_operation_mode:
 * @self: a #QmiMessageLocSetOperationModeInput.
 * @value_operation_mode: (out)(optional): a placeholder for the output #QmiLocOperationMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operation Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_operation_mode_input_get_operation_mode (
    QmiMessageLocSetOperationModeInput *self,
    QmiLocOperationMode *value_operation_mode,
    GError **error);


/**
 * qmi_message_loc_set_operation_mode_input_set_operation_mode:
 * @self: a #QmiMessageLocSetOperationModeInput.
 * @value_operation_mode: a #QmiLocOperationMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Operation Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_operation_mode_input_set_operation_mode (
    QmiMessageLocSetOperationModeInput *self,
    QmiLocOperationMode value_operation_mode,
    GError **error);


/**
 * qmi_message_loc_set_operation_mode_input_ref:
 * @self: a #QmiMessageLocSetOperationModeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocSetOperationModeInput *qmi_message_loc_set_operation_mode_input_ref (QmiMessageLocSetOperationModeInput *self);

/**
 * qmi_message_loc_set_operation_mode_input_unref:
 * @self: a #QmiMessageLocSetOperationModeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_set_operation_mode_input_unref (QmiMessageLocSetOperationModeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetOperationModeInput, qmi_message_loc_set_operation_mode_input_unref)

/**
 * qmi_message_loc_set_operation_mode_input_new:
 *
 * Allocates a new #QmiMessageLocSetOperationModeInput.
 *
 * Returns: the newly created #QmiMessageLocSetOperationModeInput. The returned value should be freed with qmi_message_loc_set_operation_mode_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocSetOperationModeInput *qmi_message_loc_set_operation_mode_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocSetOperationModeOutput:
 *
 * The #QmiMessageLocSetOperationModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocSetOperationModeOutput QmiMessageLocSetOperationModeOutput;
GType qmi_message_loc_set_operation_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_SET_OPERATION_MODE_OUTPUT (qmi_message_loc_set_operation_mode_output_get_type ())


/**
 * qmi_message_loc_set_operation_mode_output_get_result:
 * @self: a QmiMessageLocSetOperationModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_set_operation_mode_output_get_result (
    QmiMessageLocSetOperationModeOutput *self,
    GError **error);


/**
 * qmi_message_loc_set_operation_mode_output_ref:
 * @self: a #QmiMessageLocSetOperationModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocSetOperationModeOutput *qmi_message_loc_set_operation_mode_output_ref (QmiMessageLocSetOperationModeOutput *self);

/**
 * qmi_message_loc_set_operation_mode_output_unref:
 * @self: a #QmiMessageLocSetOperationModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_set_operation_mode_output_unref (QmiMessageLocSetOperationModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocSetOperationModeOutput, qmi_message_loc_set_operation_mode_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Operation Mode */


/**
 * SECTION: qmi-message-loc-get-operation-mode
 * @title: LOC Get Operation Mode response
 * @short_description: Methods to manage the LOC Get Operation Mode response.
 *
 * Collection of methods to create requests and parse responses of the LOC Get Operation Mode message.
 */

/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageLocGetOperationModeOutput:
 *
 * The #QmiMessageLocGetOperationModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocGetOperationModeOutput QmiMessageLocGetOperationModeOutput;
GType qmi_message_loc_get_operation_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_GET_OPERATION_MODE_OUTPUT (qmi_message_loc_get_operation_mode_output_get_type ())


/**
 * qmi_message_loc_get_operation_mode_output_get_result:
 * @self: a QmiMessageLocGetOperationModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_get_operation_mode_output_get_result (
    QmiMessageLocGetOperationModeOutput *self,
    GError **error);


/**
 * qmi_message_loc_get_operation_mode_output_ref:
 * @self: a #QmiMessageLocGetOperationModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocGetOperationModeOutput *qmi_message_loc_get_operation_mode_output_ref (QmiMessageLocGetOperationModeOutput *self);

/**
 * qmi_message_loc_get_operation_mode_output_unref:
 * @self: a #QmiMessageLocGetOperationModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_get_operation_mode_output_unref (QmiMessageLocGetOperationModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocGetOperationModeOutput, qmi_message_loc_get_operation_mode_output_unref)

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject Xtra Data */


/**
 * SECTION: qmi-message-loc-inject-xtra-data
 * @title: LOC Inject Xtra Data response
 * @short_description: Methods to manage the LOC Inject Xtra Data response.
 *
 * Collection of methods to create requests and parse responses of the LOC Inject Xtra Data message.
 */

/* --- Input -- */

/**
 * QmiMessageLocInjectXtraDataInput:
 *
 * The #QmiMessageLocInjectXtraDataInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocInjectXtraDataInput QmiMessageLocInjectXtraDataInput;
GType qmi_message_loc_inject_xtra_data_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT (qmi_message_loc_inject_xtra_data_input_get_type ())


/**
 * qmi_message_loc_inject_xtra_data_input_get_part_data:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_part_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_get_part_data (
    QmiMessageLocInjectXtraDataInput *self,
    GArray **value_part_data,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_set_part_data:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_part_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_part_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Part Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_set_part_data (
    QmiMessageLocInjectXtraDataInput *self,
    GArray *value_part_data,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_get_part_number:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_part_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Part Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_get_part_number (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 *value_part_number,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_set_part_number:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_part_number: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Part Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_set_part_number (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 value_part_number,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_get_total_parts:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_total_parts: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Parts' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_get_total_parts (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 *value_total_parts,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_set_total_parts:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_total_parts: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Total Parts' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_set_total_parts (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 value_total_parts,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_get_total_size:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_total_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_get_total_size (
    QmiMessageLocInjectXtraDataInput *self,
    guint32 *value_total_size,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_set_total_size:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 * @value_total_size: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Total Size' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_input_set_total_size (
    QmiMessageLocInjectXtraDataInput *self,
    guint32 value_total_size,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_input_ref:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocInjectXtraDataInput *qmi_message_loc_inject_xtra_data_input_ref (QmiMessageLocInjectXtraDataInput *self);

/**
 * qmi_message_loc_inject_xtra_data_input_unref:
 * @self: a #QmiMessageLocInjectXtraDataInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_inject_xtra_data_input_unref (QmiMessageLocInjectXtraDataInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocInjectXtraDataInput, qmi_message_loc_inject_xtra_data_input_unref)

/**
 * qmi_message_loc_inject_xtra_data_input_new:
 *
 * Allocates a new #QmiMessageLocInjectXtraDataInput.
 *
 * Returns: the newly created #QmiMessageLocInjectXtraDataInput. The returned value should be freed with qmi_message_loc_inject_xtra_data_input_unref().
 *
 * Since: 1.22
 */
QmiMessageLocInjectXtraDataInput *qmi_message_loc_inject_xtra_data_input_new (void);

/* --- Output -- */

/**
 * QmiMessageLocInjectXtraDataOutput:
 *
 * The #QmiMessageLocInjectXtraDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageLocInjectXtraDataOutput QmiMessageLocInjectXtraDataOutput;
GType qmi_message_loc_inject_xtra_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_LOC_INJECT_XTRA_DATA_OUTPUT (qmi_message_loc_inject_xtra_data_output_get_type ())


/**
 * qmi_message_loc_inject_xtra_data_output_get_result:
 * @self: a QmiMessageLocInjectXtraDataOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_loc_inject_xtra_data_output_get_result (
    QmiMessageLocInjectXtraDataOutput *self,
    GError **error);


/**
 * qmi_message_loc_inject_xtra_data_output_ref:
 * @self: a #QmiMessageLocInjectXtraDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageLocInjectXtraDataOutput *qmi_message_loc_inject_xtra_data_output_ref (QmiMessageLocInjectXtraDataOutput *self);

/**
 * qmi_message_loc_inject_xtra_data_output_unref:
 * @self: a #QmiMessageLocInjectXtraDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_loc_inject_xtra_data_output_unref (QmiMessageLocInjectXtraDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageLocInjectXtraDataOutput, qmi_message_loc_inject_xtra_data_output_unref)

/*****************************************************************************/
/* Service-specific utils: LOC */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_loc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_LOC

/*****************************************************************************/
/* CLIENT: QMI Client LOC */

#define QMI_TYPE_CLIENT_LOC            (qmi_client_loc_get_type ())
#define QMI_CLIENT_LOC(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_LOC, QmiClientLoc))
#define QMI_CLIENT_LOC_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_LOC, QmiClientLocClass))
#define QMI_IS_CLIENT_LOC(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_LOC))
#define QMI_IS_CLIENT_LOC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_LOC))
#define QMI_CLIENT_LOC_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_LOC, QmiClientLocClass))

typedef struct _QmiClientLoc QmiClientLoc;
typedef struct _QmiClientLocClass QmiClientLocClass;

/**
 * QmiClientLoc:
 *
 * The #QmiClientLoc structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientLoc {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientLocClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_loc_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientLoc, g_object_unref)

/**
 * qmi_client_loc_register_events:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocRegisterEventsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Register Events request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_register_events_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_register_events (
    QmiClientLoc *self,
    QmiMessageLocRegisterEventsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_register_events_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_register_events().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_register_events().
 *
 * Returns: a #QmiMessageLocRegisterEventsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_register_events_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocRegisterEventsOutput *qmi_client_loc_register_events_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_start:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocStartInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_start_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_loc_start (
    QmiClientLoc *self,
    QmiMessageLocStartInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_start_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_start().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_start().
 *
 * Returns: a #QmiMessageLocStartOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_start_output_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStartOutput *qmi_client_loc_start_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_stop:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocStopInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Stop request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_stop_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_loc_stop (
    QmiClientLoc *self,
    QmiMessageLocStopInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_stop_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_stop().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_stop().
 *
 * Returns: a #QmiMessageLocStopOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_stop_output_unref().
 *
 * Since: 1.20
 */
QmiMessageLocStopOutput *qmi_client_loc_stop_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_inject_predicted_orbits_data:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocInjectPredictedOrbitsDataInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Inject Predicted Orbits Data request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_inject_predicted_orbits_data_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_inject_predicted_orbits_data (
    QmiClientLoc *self,
    QmiMessageLocInjectPredictedOrbitsDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_inject_predicted_orbits_data_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_inject_predicted_orbits_data().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_inject_predicted_orbits_data().
 *
 * Returns: a #QmiMessageLocInjectPredictedOrbitsDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_inject_predicted_orbits_data_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocInjectPredictedOrbitsDataOutput *qmi_client_loc_inject_predicted_orbits_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_get_predicted_orbits_data_source:
 * @self: a #QmiClientLoc.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Predicted Orbits Data Source request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_get_predicted_orbits_data_source_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_get_predicted_orbits_data_source (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_get_predicted_orbits_data_source_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_get_predicted_orbits_data_source().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_get_predicted_orbits_data_source().
 *
 * Returns: a #QmiMessageLocGetPredictedOrbitsDataSourceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_get_predicted_orbits_data_source_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocGetPredictedOrbitsDataSourceOutput *qmi_client_loc_get_predicted_orbits_data_source_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_set_engine_lock:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocSetEngineLockInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Engine Lock request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_set_engine_lock_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_loc_set_engine_lock (
    QmiClientLoc *self,
    QmiMessageLocSetEngineLockInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_set_engine_lock_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_set_engine_lock().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_set_engine_lock().
 *
 * Returns: a #QmiMessageLocSetEngineLockOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_set_engine_lock_output_unref().
 *
 * Since: 1.28
 */
QmiMessageLocSetEngineLockOutput *qmi_client_loc_set_engine_lock_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_get_engine_lock:
 * @self: a #QmiClientLoc.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Engine Lock request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_get_engine_lock_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_loc_get_engine_lock (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_get_engine_lock_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_get_engine_lock().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_get_engine_lock().
 *
 * Returns: a #QmiMessageLocGetEngineLockOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_get_engine_lock_output_unref().
 *
 * Since: 1.28
 */
QmiMessageLocGetEngineLockOutput *qmi_client_loc_get_engine_lock_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_set_nmea_types:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocSetNmeaTypesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set NMEA Types request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_set_nmea_types_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_loc_set_nmea_types (
    QmiClientLoc *self,
    QmiMessageLocSetNmeaTypesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_set_nmea_types_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_set_nmea_types().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_set_nmea_types().
 *
 * Returns: a #QmiMessageLocSetNmeaTypesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_set_nmea_types_output_unref().
 *
 * Since: 1.26
 */
QmiMessageLocSetNmeaTypesOutput *qmi_client_loc_set_nmea_types_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_get_nmea_types:
 * @self: a #QmiClientLoc.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get NMEA Types request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_get_nmea_types_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_loc_get_nmea_types (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_get_nmea_types_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_get_nmea_types().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_get_nmea_types().
 *
 * Returns: a #QmiMessageLocGetNmeaTypesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_get_nmea_types_output_unref().
 *
 * Since: 1.26
 */
QmiMessageLocGetNmeaTypesOutput *qmi_client_loc_get_nmea_types_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_set_server:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocSetServerInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Server request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_set_server_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_set_server (
    QmiClientLoc *self,
    QmiMessageLocSetServerInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_set_server_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_set_server().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_set_server().
 *
 * Returns: a #QmiMessageLocSetServerOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_set_server_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocSetServerOutput *qmi_client_loc_set_server_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_get_server:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocGetServerInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Server request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_get_server_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_get_server (
    QmiClientLoc *self,
    QmiMessageLocGetServerInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_get_server_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_get_server().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_get_server().
 *
 * Returns: a #QmiMessageLocGetServerOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_get_server_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocGetServerOutput *qmi_client_loc_get_server_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_delete_assistance_data:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocDeleteAssistanceDataInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete Assistance Data request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_delete_assistance_data_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_delete_assistance_data (
    QmiClientLoc *self,
    QmiMessageLocDeleteAssistanceDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_delete_assistance_data_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_delete_assistance_data().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_delete_assistance_data().
 *
 * Returns: a #QmiMessageLocDeleteAssistanceDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_delete_assistance_data_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocDeleteAssistanceDataOutput *qmi_client_loc_delete_assistance_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_set_operation_mode:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocSetOperationModeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Operation Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_set_operation_mode_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_set_operation_mode (
    QmiClientLoc *self,
    QmiMessageLocSetOperationModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_set_operation_mode_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_set_operation_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_set_operation_mode().
 *
 * Returns: a #QmiMessageLocSetOperationModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_set_operation_mode_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocSetOperationModeOutput *qmi_client_loc_set_operation_mode_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_get_operation_mode:
 * @self: a #QmiClientLoc.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Operation Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_get_operation_mode_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_get_operation_mode (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_get_operation_mode_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_get_operation_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_get_operation_mode().
 *
 * Returns: a #QmiMessageLocGetOperationModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_get_operation_mode_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocGetOperationModeOutput *qmi_client_loc_get_operation_mode_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_loc_inject_xtra_data:
 * @self: a #QmiClientLoc.
 * @input: a #QmiMessageLocInjectXtraDataInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Inject Xtra Data request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_loc_inject_xtra_data_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_loc_inject_xtra_data (
    QmiClientLoc *self,
    QmiMessageLocInjectXtraDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_loc_inject_xtra_data_finish:
 * @self: a #QmiClientLoc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_loc_inject_xtra_data().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_loc_inject_xtra_data().
 *
 * Returns: a #QmiMessageLocInjectXtraDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_loc_inject_xtra_data_output_unref().
 *
 * Since: 1.22
 */
QmiMessageLocInjectXtraDataOutput *qmi_client_loc_inject_xtra_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_LOC__ */
