#ifndef _THRIO_H_
#define _THRIO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>

#include <glitter.h>

typedef __attribute__ ((nonnull (1, 2, 4), /*nothrow,*/ warn_unused_result))
int (*thrio_cb_t) (
   void *restrict dest,
   void const *restrict src, size_t srcsz, size_t *restrict destsz) ;

int thrio (
   fd_t in, fd_t out,
   size_t in_bufsz, size_t in_nbuf,
   size_t out_bufsz, size_t out_nbuf,
   thrio_cb_t cb)
__attribute__ ((nonnull (7), nothrow, warn_unused_result)) ;

#ifdef __cplusplus
}
#endif

#endif /* _THRIO_H_ */