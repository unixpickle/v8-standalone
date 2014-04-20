#ifndef __V8SA_STDLIB_H__
#define __V8SA_STDLIB_H__

#ifdef __cplusplus
extern "C" {
#endif

void * malloc(size_t size);
void free(void * buf);
int posix_memalign(void ** memptr, size_t alignment, size_t size);

#ifdef __cplusplus
}
#endif

#endif