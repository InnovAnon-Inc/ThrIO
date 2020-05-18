AM_CPPFLAGS = -D__STDC_INT64__

lib_LTLIBRARIES =
bin_PROGRAMS    =

lib_LTLIBRARIES += libthrio.la
include_HEADERS = thrio.h
libthrio_la_CPPFLAGS = $(GLITTER_CFLAGS) $(IO_CFLAGS)
#libthrio_la_LIBADD   = $(GLITTER_LIBS)   $(IO_LIBS) -lpthread
libthrio_la_LIBADD   = $(GLITTER_LIBS)   $(IO_LIBS)

bin_PROGRAMS += thrio-test
thrio_test_CPPFLAGS =         $(GLITTER_CFLAGS) $(IO_CFLAGS)
thrio_test_LDADD    = -lthrio $(GLITTER_LIBS)   $(IO_LIBS)
EXTRA_thrio_test_DEPENDENCIES = libthrio.la

