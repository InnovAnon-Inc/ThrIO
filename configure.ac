AC_INIT([libthrio], [1.0], [InnovAnon-Inc@protonmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_AR
LT_INIT([])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
 src/libthrio.pc
 src/thrio-test.pc
])

PKG_PROG_PKG_CONFIG

AC_ARG_ENABLE([use-submodules],
    AS_HELP_STRING([--enable-use-submodules], [Enable use submodules]))
AM_CONDITIONAL([USE_SUBMODULES], [test x"$enable_use_submodules" = "xyes"])

AC_CONFIG_MACRO_DIR([m4])

AC_CHECK_HEADERS([stdlib.h])
#AC_CHECK_HEADERS([glitter.h restart.h io.h tscpaq.h])

AC_CHECK_LIB([stdlib],[malloc,free])
#AC_CHECK_LIB([restart],[r_read,r_write])
#AC_CHECK_LIB([tscpaq],[tscpaq_alloc_queue,tscpaq_free_queue])
#AC_CHECK_LIB([tscpaq],[tscpaq_enqueue,tscpaq_dequeue])
#AC_CHECK_LIB([thipe],[alloc_io,free_io])

PKG_CHECK_MODULES([GLITTER],[glitter],,)
PKG_CHECK_MODULES([IO],[libio],,)

INNOVANON_WARNINGS([])

AC_OUTPUT

