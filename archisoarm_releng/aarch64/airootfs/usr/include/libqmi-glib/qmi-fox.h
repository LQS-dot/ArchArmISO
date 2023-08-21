
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
#include "qmi-enums-fox.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_FOX__
#define __LIBQMI_GLIB_QMI_FOX__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message FOX Get Firmware Version */


/**
 * SECTION: qmi-message-fox-get-firmware-version
 * @title: FOX Get Firmware Version response
 * @short_description: Methods to manage the FOX Get Firmware Version response.
 *
 * Collection of methods to create requests and parse responses of the FOX Get Firmware Version message.
 */

/* --- Input -- */

/**
 * QmiMessageFoxGetFirmwareVersionInput:
 *
 * The #QmiMessageFoxGetFirmwareVersionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageFoxGetFirmwareVersionInput QmiMessageFoxGetFirmwareVersionInput;
GType qmi_message_fox_get_firmware_version_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_FOX_GET_FIRMWARE_VERSION_INPUT (qmi_message_fox_get_firmware_version_input_get_type ())


/**
 * qmi_message_fox_get_firmware_version_input_get_version_type:
 * @self: a #QmiMessageFoxGetFirmwareVersionInput.
 * @value_version_type: (out)(optional): a placeholder for the output #QmiFoxFirmwareVersionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_fox_get_firmware_version_input_get_version_type (
    QmiMessageFoxGetFirmwareVersionInput *self,
    QmiFoxFirmwareVersionType *value_version_type,
    GError **error);


/**
 * qmi_message_fox_get_firmware_version_input_set_version_type:
 * @self: a #QmiMessageFoxGetFirmwareVersionInput.
 * @value_version_type: a #QmiFoxFirmwareVersionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Version Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_fox_get_firmware_version_input_set_version_type (
    QmiMessageFoxGetFirmwareVersionInput *self,
    QmiFoxFirmwareVersionType value_version_type,
    GError **error);


/**
 * qmi_message_fox_get_firmware_version_input_ref:
 * @self: a #QmiMessageFoxGetFirmwareVersionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageFoxGetFirmwareVersionInput *qmi_message_fox_get_firmware_version_input_ref (QmiMessageFoxGetFirmwareVersionInput *self);

/**
 * qmi_message_fox_get_firmware_version_input_unref:
 * @self: a #QmiMessageFoxGetFirmwareVersionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_fox_get_firmware_version_input_unref (QmiMessageFoxGetFirmwareVersionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageFoxGetFirmwareVersionInput, qmi_message_fox_get_firmware_version_input_unref)

/**
 * qmi_message_fox_get_firmware_version_input_new:
 *
 * Allocates a new #QmiMessageFoxGetFirmwareVersionInput.
 *
 * Returns: the newly created #QmiMessageFoxGetFirmwareVersionInput. The returned value should be freed with qmi_message_fox_get_firmware_version_input_unref().
 *
 * Since: 1.32
 */
QmiMessageFoxGetFirmwareVersionInput *qmi_message_fox_get_firmware_version_input_new (void);

/* --- Output -- */

/**
 * QmiMessageFoxGetFirmwareVersionOutput:
 *
 * The #QmiMessageFoxGetFirmwareVersionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageFoxGetFirmwareVersionOutput QmiMessageFoxGetFirmwareVersionOutput;
GType qmi_message_fox_get_firmware_version_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT (qmi_message_fox_get_firmware_version_output_get_type ())


/**
 * qmi_message_fox_get_firmware_version_output_get_result:
 * @self: a QmiMessageFoxGetFirmwareVersionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_fox_get_firmware_version_output_get_result (
    QmiMessageFoxGetFirmwareVersionOutput *self,
    GError **error);


/**
 * qmi_message_fox_get_firmware_version_output_get_version:
 * @self: a #QmiMessageFoxGetFirmwareVersionOutput.
 * @value_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_fox_get_firmware_version_output_get_version (
    QmiMessageFoxGetFirmwareVersionOutput *self,
    const gchar **value_version,
    GError **error);


/**
 * qmi_message_fox_get_firmware_version_output_ref:
 * @self: a #QmiMessageFoxGetFirmwareVersionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageFoxGetFirmwareVersionOutput *qmi_message_fox_get_firmware_version_output_ref (QmiMessageFoxGetFirmwareVersionOutput *self);

/**
 * qmi_message_fox_get_firmware_version_output_unref:
 * @self: a #QmiMessageFoxGetFirmwareVersionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_fox_get_firmware_version_output_unref (QmiMessageFoxGetFirmwareVersionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageFoxGetFirmwareVersionOutput, qmi_message_fox_get_firmware_version_output_unref)

/*****************************************************************************/
/* Service-specific utils: FOX */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_fox_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_FOX

/*****************************************************************************/
/* CLIENT: QMI Client FOX */

#define QMI_TYPE_CLIENT_FOX            (qmi_client_fox_get_type ())
#define QMI_CLIENT_FOX(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_FOX, QmiClientFox))
#define QMI_CLIENT_FOX_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_FOX, QmiClientFoxClass))
#define QMI_IS_CLIENT_FOX(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_FOX))
#define QMI_IS_CLIENT_FOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_FOX))
#define QMI_CLIENT_FOX_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_FOX, QmiClientFoxClass))

typedef struct _QmiClientFox QmiClientFox;
typedef struct _QmiClientFoxClass QmiClientFoxClass;

/**
 * QmiClientFox:
 *
 * The #QmiClientFox structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
struct _QmiClientFox {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientFoxClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_fox_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientFox, g_object_unref)

/**
 * qmi_client_fox_get_firmware_version:
 * @self: a #QmiClientFox.
 * @input: a #QmiMessageFoxGetFirmwareVersionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Firmware Version request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_fox_get_firmware_version_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_fox_get_firmware_version (
    QmiClientFox *self,
    QmiMessageFoxGetFirmwareVersionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_fox_get_firmware_version_finish:
 * @self: a #QmiClientFox.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_fox_get_firmware_version().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_fox_get_firmware_version().
 *
 * Returns: a #QmiMessageFoxGetFirmwareVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_fox_get_firmware_version_output_unref().
 *
 * Since: 1.32
 */
QmiMessageFoxGetFirmwareVersionOutput *qmi_client_fox_get_firmware_version_finish (
    QmiClientFox *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_FOX__ */
