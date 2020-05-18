# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/libthrio.pc src/thrio-test.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/libthrio.pc.in src/thrio-test.pc.in

SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4

