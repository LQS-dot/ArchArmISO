/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
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
 * Copyright (C) 2013 Lanedo GmbH
 */

#ifndef _MM_VERSION_H_
#define _MM_VERSION_H_

/**
 * SECTION:mm-version
 * @short_description: Version information in the API.
 *
 * This section defines types that are used to identify the ModemManager version.
 **/

/**
 * MM_MAJOR_VERSION:
 *
 * Evaluates to the major version number of ModemManager which this source
 * is compiled against.
 *
 * Since: 1.0
 */
#define MM_MAJOR_VERSION (1)

/**
 * MM_MINOR_VERSION:
 *
 * Evaluates to the minor version number of ModemManager which this source
 * is compiled against.
 *
 * Since: 1.0
 */
#define MM_MINOR_VERSION (20)

/**
 * MM_MICRO_VERSION:
 *
 * Evaluates to the micro version number of ModemManager which this source
 * compiled against.
 *
 * Since: 1.0
 */
#define MM_MICRO_VERSION (6)

/**
 * MM_CHECK_VERSION:
 * @major: major version (e.g. 1 for version 1.2.5)
 * @minor: minor version (e.g. 2 for version 1.2.5)
 * @micro: micro version (e.g. 5 for version 1.2.5)
 *
 * Checks the version of ModemManager at compile time.
 *
 * Returns: %TRUE if the version of the ModemManager header files
 * is the same as or newer than the passed-in version.
 *
 * Since: 1.0
 */
#define MM_CHECK_VERSION(major,minor,micro)                         \
    (MM_MAJOR_VERSION > (major) ||                                  \
     (MM_MAJOR_VERSION == (major) && MM_MINOR_VERSION > (minor)) || \
     (MM_MAJOR_VERSION == (major) && MM_MINOR_VERSION == (minor) && MM_MICRO_VERSION >= (micro)))

#endif /* _MM_VERSION_H_ */
