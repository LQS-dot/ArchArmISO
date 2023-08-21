#!/bin/sh
# brltty-config.sh.  Generated from brltty-config.sh.in by configure.
###############################################################################
# BRLTTY - A background process providing access to the console screen (when in
#          text mode) for a blind person using a refreshable braille display.
#
# Copyright (C) 1995-2022 by The BRLTTY Developers.
#
# BRLTTY comes with ABSOLUTELY NO WARRANTY.
#
# This is free software, placed under the terms of the
# GNU Lesser General Public License, as published by the Free Software
# Foundation; either version 2.1 of the License, or (at your option) any
# later version. Please see the file LICENSE-LGPL for details.
#
# Web Page: http://brltty.app/
#
# This software is maintained by Dave Mielke <dave@mielke.cc>.
###############################################################################

brlttyConfig_assignVariable() {
   eval "${1}"'="${2}"'
}

brlttyConfig_defineVariable() {
   local name="${1}"
   local value="${2}"

   while true
   do
      eval local 'new="'${value}'"'
      [ "${new}" != "${value}" ] || break
      value="${new}"
   done

   brlttyConfig_assignVariable "${name}" "${value}"
}

brlttyConfig_defineVariables() {
   local prefix='/usr'
   local sysconfdir='/etc'
   local datarootdir='${prefix}/share'
   local datadir='${datarootdir}'
   local sharedstatedir='${prefix}/com'
   local localstatedir='/var'
   local includedir='${prefix}/include'
   local oldincludedir='/usr/include'

   local exec_prefix='${prefix}'
   local bindir='${exec_prefix}/bin'
   local sbindir='${exec_prefix}/sbin'
   local libdir='${exec_prefix}/lib'
   local libexecdir='${exec_prefix}/libexec'

   local localedir='${datarootdir}/locale'
   local mandir='/usr/share/man'
   local docdir='${datarootdir}/doc/${PACKAGE_TARNAME}'
   local infodir='${datarootdir}/info'
   local htmldir='${docdir}'
   local pdfdir='${docdir}'
   local psdir='${docdir}'
   local dvidir='${docdir}'

   local PACKAGE_TARNAME='brltty'
   local PACKAGE_NAME='BRLTTY'
   local PACKAGE_VERSION='6.5'
   local PACKAGE_URL='https://brltty.app/'
   local PACKAGE_BUGREPORT='BRLTTY@brltty.app'

   local execute_root=''
   local program_directory='${exec_prefix}/bin'
   local drivers_directory='${exec_prefix}/lib/brltty'
   local tables_directory='/usr/share/brltty'
   local updatable_directory='/var/lib/brltty'
   local writable_directory='/run/brltty'
   local manpage_directory='/usr/share/man'
   local include_directory='${prefix}/include/brltty'

   local privilege_parameters=''

   local api_version='0.8'
   local api_release='0.8.4'
   local api_authkeyfile='brlapi.key'

   brlttyConfig_defineVariable BRLTTY_PREFIX "${prefix}"
   brlttyConfig_defineVariable BRLTTY_SYSCONFDIR "${sysconfdir}"
   brlttyConfig_defineVariable BRLTTY_DATAROOTDIR "${datarootdir}"
   brlttyConfig_defineVariable BRLTTY_DATADIR "${datadir}"
   brlttyConfig_defineVariable BRLTTY_SHAREDSTATEDIR "${sharedstatedir}"
   brlttyConfig_defineVariable BRLTTY_LOCALSTATEDIR "${localstatedir}"
   brlttyConfig_defineVariable BRLTTY_INCLUDEDIR "${includedir}"
   brlttyConfig_defineVariable BRLTTY_OLDINCLUDEDIR "${oldincludedir}"

   brlttyConfig_defineVariable BRLTTY_EXEC_PREFIX "${exec_prefix}"
   brlttyConfig_defineVariable BRLTTY_BINDIR "${bindir}"
   brlttyConfig_defineVariable BRLTTY_SBINDIR "${sbindir}"
   brlttyConfig_defineVariable BRLTTY_LIBDIR "${libdir}"
   brlttyConfig_defineVariable BRLTTY_LIBEXECDIR "${libexecdir}"

   brlttyConfig_defineVariable BRLTTY_LOCALEDIR "${localedir}"
   brlttyConfig_defineVariable BRLTTY_MANDIR "${mandir}"
   brlttyConfig_defineVariable BRLTTY_INFODIR "${infodir}"
   brlttyConfig_defineVariable BRLTTY_DOCDIR "${docdir}"
   brlttyConfig_defineVariable BRLTTY_HTMLDIR "${htmldir}"
   brlttyConfig_defineVariable BRLTTY_PDFDIR "${pdfdir}"
   brlttyConfig_defineVariable BRLTTY_PSDIR "${psdir}"
   brlttyConfig_defineVariable BRLTTY_DVIDIR "${dvidir}"

   brlttyConfig_defineVariable BRLTTY_TARNAME "${PACKAGE_TARNAME}"
   brlttyConfig_defineVariable BRLTTY_NAME "${PACKAGE_NAME}"
   brlttyConfig_defineVariable BRLTTY_VERSION "${PACKAGE_VERSION}"
   brlttyConfig_defineVariable BRLTTY_URL "${PACKAGE_URL}"
   brlttyConfig_defineVariable BRLTTY_BUGREPORT "${PACKAGE_BUGREPORT}"

   brlttyConfig_defineVariable BRLTTY_ROOT "${execute_root}"
   brlttyConfig_defineVariable BRLTTY_PROGRAMS_DIRECTORY "${program_directory}"
   brlttyConfig_defineVariable BRLTTY_DRIVERS_DIRECTORY "${drivers_directory}"
   brlttyConfig_defineVariable BRLTTY_TABLES_DIRECTORY "${tables_directory}"
   brlttyConfig_defineVariable BRLTTY_UPDATABLE_DIRECTORY "${updatable_directory}"
   brlttyConfig_defineVariable BRLTTY_WRITABLE_DIRECTORY "${writable_directory}"
   brlttyConfig_defineVariable BRLTTY_MANPAGE_DIRECTORY "${manpage_directory}"
   brlttyConfig_defineVariable BRLTTY_INCLUDE_DIRECTORY "${include_directory}"

   brlttyConfig_defineVariable BRLTTY_PRIVILEGE_PARAMETERS "${privilege_parameters}"

   brlttyConfig_defineVariable BRLAPI_VERSION "${api_version}"
   brlttyConfig_defineVariable BRLAPI_RELEASE "${api_release}"
   brlttyConfig_defineVariable BRLAPI_KEY_FILE "${sysconfdir}/${api_authkeyfile}"
}

brlttyConfig_defineVariables
