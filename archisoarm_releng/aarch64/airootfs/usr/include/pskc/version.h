/*
 * pskc/version.h - PSKC header file with version macros.
 * Copyright (C) 2012-2021 Simon Josefsson
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef PSKC_VERSION_H
#define PSKC_VERSION_H

/**
 * SECTION:version
 * @short_description: Library version handling.
 *
 * The pskc_check_version() function can be used to discover the
 * library version and to test that the shared library during run-time
 * is recent enough.
 */

/**
 * PSKC_VERSION
 *
 * Pre-processor symbol with a string that describe the header file
 * version number.  Used together with pskc_check_version() to verify
 * header file and run-time library consistency.
 */
#define PSKC_VERSION "2.6.7"

/**
 * PSKC_VERSION_NUMBER
 *
 * Pre-processor symbol with a hexadecimal value describing the header
 * file version number.  For example, when the header version is 1.2.3
 * this symbol will have the value 0x01020300.  The last two digits
 * are only used between public releases, and will otherwise be 00.
 */
#define PSKC_VERSION_NUMBER 0x02060700

extern PSKCAPI const char *pskc_check_version (const char *req_version);

#endif /* PSKC_VERSION_H */
