AM_CPPFLAGS = -D__STDC_INT64__

#if USE_SUBMODULES
#SUBDIRS = ../glitter
#AM_CPPFLAGS += -I $(top_srcdir)/glitter/src
#
#SUBDIRS += ../restart
#AM_CPPFLAGS += -I $(top_srcdir)/restart/src
#
#SUBDIRS += ../TSCPAQ
#AM_CPPFLAGS += -I $(top_srcdir)/TSCPAQ/src
#
#SUBDIRS += ../ThIpe
#AM_CPPFLAGS += -I $(top_srcdir)/ThIpe/src
#endif

include Makefile-LIBADD.inc
#LIBTHRIO_LIBADD = ../ThIpe/src/.libs/libthipe.la $(LIBTHIPE_LIBADD)
##LIBTHRIO_LIBADD += -lrestart -ltscpaq -lcpaq -lpthread

lib_LTLIBRARIES = libthrio.la
include_HEADERS = thrio.h
bin_PROGRAMS = thrio-test
libthrio_la_LIBADD = $(LIBTHRIO_LIBADD)
thrio_test_LDADD = libthrio.la $(LIBTHRIO_LIBADD)
