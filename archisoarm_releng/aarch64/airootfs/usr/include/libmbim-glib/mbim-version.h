/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * Copyright (C) 2013 Lanedo GmbH
 * Copyright (C) 2013 - 2014 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _MBIM_VERSION_H_
#define _MBIM_VERSION_H_

/**
 * SECTION:mbim-version
 * @short_description: Version information in the API.
 *
 * This section defines types that are used to identify the libmbim-glib version.
 **/

/**
 * MBIM_MAJOR_VERSION:
 *
 * Evaluates to the major version number of libmbim-glib which this source
 * is compiled against.
 *
 * Since: 1.2
 */
#define MBIM_MAJOR_VERSION (1)

/**
 * MBIM_MINOR_VERSION:
 *
 * Evaluates to the minor version number of libmbim-glib which this source
 * is compiled against.
 *
 * Since: 1.2
 */
#define MBIM_MINOR_VERSION (28)

/**
 * MBIM_MICRO_VERSION:
 *
 * Evaluates to the micro version number of libmbim-glib which this source
 * compiled against.
 *
 * Since: 1.2
 */
#define MBIM_MICRO_VERSION (4)

/**
 * MBIM_CHECK_VERSION:
 * @major: major version (e.g. 1 for version 1.2.5)
 * @minor: minor version (e.g. 2 for version 1.2.5)
 * @micro: micro version (e.g. 5 for version 1.2.5)
 *
 * Checks the version of the library that is being compiled against.
 *
 * Returns: %TRUE if the version of the libmbim-glib header files
 * is the same as or newer than the passed-in version.
 *
 * Since: 1.2
 */
#define MBIM_CHECK_VERSION(major,minor,micro)                         \
    (MBIM_MAJOR_VERSION > (major) ||                                  \
     (MBIM_MAJOR_VERSION == (major) && MBIM_MINOR_VERSION > (minor)) || \
     (MBIM_MAJOR_VERSION == (major) && MBIM_MINOR_VERSION == (minor) && MBIM_MICRO_VERSION >= (micro)))

#endif /* _MBIM_VERSION_H_ */
