AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I ../glitter/src

SUBDIRS += ../restart
AM_CPPFLAGS += -I ../restart/src

SUBDIRS += ../TSCPAQ
AM_CPPFLAGS += -I ../TSCPAQ/src

SUBDIRS += ../ThIpe
AM_CPPFLAGS += -I ../ThIpe/src

LIBTHRIO_LIBADD = ../ThIpe/src/.libs/libthipe.la $(LIBTHRIO_LIBADD)
#LIBTHRIO_LIBADD += -lrestart -ltscpaq -lcpaq -lpthread

lib_LTLIBRARIES = libthrio.la
include_HEADERS = thrio.h
libthrio_la_LIBADD = $(LIBTHRIO_LIBADD)

bin_PROGRAMS = thrio-test
thrio_test_LDADD = libthrio.la $(LIBTHRIO_LIBADD)
