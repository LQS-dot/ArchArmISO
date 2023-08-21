
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

#ifndef __LIBMBIM_GLIB_MBIM_PHONEBOOK__
#define __LIBMBIM_GLIB_MBIM_PHONEBOOK__

G_BEGIN_DECLS

/**
 * SECTION:mbim-phonebook
 * @title: Phonebook service
 * @short_description: Support for the Phonebook service.
 *
 * This section implements support for requests, responses and notifications in the
 * Phonebook service.
 */

/*****************************************************************************/
/* Struct: MbimPhonebookEntry */

/**
 * MbimPhonebookEntry:
 * @entry_index: a #guint32.
 * @number: a string.
 * @name: a string.
 *
 * A MbimPhonebookEntry element.
 *
 * Since: 1.4
 */
typedef struct {
    guint32 entry_index;
    gchar *number;
    gchar *name;
} MbimPhonebookEntry;

/**
 * MbimPhonebookEntryArray:
 *
 * A NULL-terminated array of MbimPhonebookEntry elements.
 *
 * Since: 1.24
 */
typedef MbimPhonebookEntry *MbimPhonebookEntryArray;
/**
 * mbim_phonebook_entry_array_free:
 * @array: a #NULL terminated array of #MbimPhonebookEntry structs.
 *
 * Frees the memory allocated for the array of #MbimPhonebookEntry structs.
 *
 * Since: 1.4
 */
void mbim_phonebook_entry_array_free (MbimPhonebookEntryArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPhonebookEntryArray, mbim_phonebook_entry_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message Phonebook Configuration */

/**
 * mbim_message_phonebook_configuration_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Configuration' query command in the 'Phonebook' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_phonebook_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Configuration */

/**
 * mbim_message_phonebook_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimPhonebookState, or %NULL if the 'State' field is not needed.
 * @out_number_of_entries: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfEntries' field is not needed.
 * @out_used_entries: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'UsedEntries' field is not needed.
 * @out_max_number_length: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxNumberLength' field is not needed.
 * @out_max_name: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxName' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Configuration' response command in the 'Phonebook' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_phonebook_configuration_response_parse (
    const MbimMessage *message,
    MbimPhonebookState *out_state,
    guint32 *out_number_of_entries,
    guint32 *out_used_entries,
    guint32 *out_max_number_length,
    guint32 *out_max_name,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Phonebook Configuration */

/**
 * mbim_message_phonebook_configuration_notification_parse:
 * @message: the #MbimMessage.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimPhonebookState, or %NULL if the 'State' field is not needed.
 * @out_number_of_entries: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfEntries' field is not needed.
 * @out_used_entries: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'UsedEntries' field is not needed.
 * @out_max_number_length: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxNumberLength' field is not needed.
 * @out_max_name: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxName' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Configuration' notification command in the 'Phonebook' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_phonebook_configuration_notification_parse (
    const MbimMessage *message,
    MbimPhonebookState *out_state,
    guint32 *out_number_of_entries,
    guint32 *out_used_entries,
    guint32 *out_max_number_length,
    guint32 *out_max_name,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Phonebook Read */

/**
 * mbim_message_phonebook_read_query_new:
 * @filter_flag: (in): the 'FilterFlag' field, given as a #MbimPhonebookFlag.
 * @filter_message_index: (in): the 'FilterMessageIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Read' query command in the 'Phonebook' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_phonebook_read_query_new (
    MbimPhonebookFlag filter_flag,
    guint32 filter_message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Read */

/**
 * mbim_message_phonebook_read_response_parse:
 * @message: the #MbimMessage.
 * @out_entry_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'EntryCount' field is not needed.
 * @out_entries: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimPhonebookEntry): return location for a newly allocated array of #MbimPhonebookEntry items, or %NULL if the 'Entries' field is not needed. Free the returned value with mbim_phonebook_entry_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Read' response command in the 'Phonebook' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_phonebook_read_response_parse (
    const MbimMessage *message,
    guint32 *out_entry_count,
    MbimPhonebookEntryArray **out_entries,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Phonebook Delete */

/**
 * mbim_message_phonebook_delete_set_new:
 * @filter_flag: (in): the 'FilterFlag' field, given as a #MbimPhonebookFlag.
 * @filter_message_index: (in): the 'FilterMessageIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Delete' set command in the 'Phonebook' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_phonebook_delete_set_new (
    MbimPhonebookFlag filter_flag,
    guint32 filter_message_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Delete */

/**
 * mbim_message_phonebook_delete_response_parse:
 * @message: the #MbimMessage.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Delete' response command in the 'Phonebook' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_phonebook_delete_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Phonebook Write */

/**
 * mbim_message_phonebook_write_set_new:
 * @save_flag: (in): the 'SaveFlag' field, given as a #MbimPhonebookWriteFlag.
 * @save_index: (in): the 'SaveIndex' field, given as a #guint32.
 * @number: (in): the 'Number' field, given as a string.
 * @name: (in): the 'Name' field, given as a string.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Write' set command in the 'Phonebook' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.4
 */
MbimMessage *mbim_message_phonebook_write_set_new (
    MbimPhonebookWriteFlag save_flag,
    guint32 save_index,
    const gchar *number,
    const gchar *name,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Phonebook Write */

/**
 * mbim_message_phonebook_write_response_parse:
 * @message: the #MbimMessage.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Write' response command in the 'Phonebook' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.4
 */
gboolean mbim_message_phonebook_write_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Service helpers for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_phonebook_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_PHONEBOOK__ */
