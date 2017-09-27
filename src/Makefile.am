lib_LTLIBRARIES = libthrio.la
libthrio_la_SOURCES = thrio.c
include_HEADERS = thrio.h
libthrio_la_LIBADD = -lthipe -lrestart -ltscpaq -lcpaq -lpthread

bin_PROGRAMS = thrio
thrio_SOURCES = main.c
thrio_LDADD = libthrio.la -lthipe -lrestart -ltscpaq -lcpaq -lpthread

AM_CPPFLAGS += -D__STDC_INT64__
