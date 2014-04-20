#ifndef __V8SA_STDLIB_H__
#define __V8SA_STDLIB_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

void * malloc(size_t size);
void free(void * buf);
void * realloc(void * buf, size_t size);
int posix_memalign(void ** memptr, size_t alignment, size_t size);

long int strtol(const char * str, char ** endptr, int base);
double strtod(const char * str, char ** endptr);

void exit(int x);

#ifdef __cplusplus
}
#endif

#endif