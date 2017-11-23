#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([customconf], [1.0], [travor_lzh@outlook.com])
AH_TEMPLATE([FOOBAR_ENABLED],[Determine whether foobar is enabled or not])
AM_INIT_AUTOMAKE([subdir-objects])
AC_ARG_ENABLE([foobar],AS_HELP_STRING([--enable-foobar],[enable the use of foobar]),[AC_DEFINE([FOOBAR_ENABLED],["yes"])],[AC_DEFINE([FOOBAR_ENABLED],["no"])])
# Checks for programs.
AC_CONFIG_SRCDIR([src/myconf.c])
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADER([stdio.h])
# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_LIB([c],[printf])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADER([include/config.h])
AC_OUTPUT
echo "SUCCESS"
