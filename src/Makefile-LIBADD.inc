#include $(top_srcdir)/ThIpe/src/Makefile-LIBADD.inc

#if USE_SUBMODULES
#LIBTHRIO_LIBADD = ../ThIpe/src/.libs/libthipe.la $(LIBTHIPE_LIBADD)
#else
LIBTHRIO_LIBADD = -lthipe $(LIBTHIPE_LIBADD)
#endif
#LIBTHRIO_LIBADD += -lrestart -ltscpaq -lcpaq -lpthread
