AM_CPPFLAGS = -D__STDC_INT64__

#include Makefile-LIBADD.inc
#LIBTHRIO_LIBADD = ../ThIpe/src/.libs/libthipe.la $(LIBTHIPE_LIBADD)
##LIBTHRIO_LIBADD += -lrestart -ltscpaq -lcpaq -lpthread

lib_LTLIBRARIES =
bin_PROGRAMS    =

lib_LTLIBRARIES += libthrio.la
include_HEADERS = thrio.h
libthrio_la_LIBADD = @LIBTHRIO_LIBADD@

bin_PROGRAMS += thrio-test
#thrio_test_LDADD = libthrio.la $(LIBTHRIO_LIBADD)
thrio_test_LDADD = @THRIO_TEST_LIBADD@
EXTRA_thrio_test_DEPENDENCIES = libthrio.la
