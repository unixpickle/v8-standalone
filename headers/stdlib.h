#ifndef __V8SA_STDLIB_H__
#define __V8SA_STDLIB_H__

#ifdef __cplusplus
extern "C" {
#endif

void * malloc(size_t size);
void free(void * buf);

#ifdef __cplusplus
}
#endif

#endif