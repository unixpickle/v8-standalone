#ifndef __V8SA_STRING_H__
#define __V8SA_STRING_H__

#include <stddef.h>

void * memcpy(void * dest, const void * src, size_t len);
char * strcpy(char * dest, const char * str);
size_t strlen(const char * str);
int strcmp(const char * str1, const char * str2);
int memcmp(const void * ptr1, const void * ptr2, size_t len);
void * memmove(void * destination, const void * source, size_t num);
void * memset(void * ptr, int value, size_t num);
int strncmp(const char * str1, const char * str2, size_t num);
char * strncpy(char * destination, const char * source, size_t num);

#ifdef __cplusplus

const char * strchr(const char * str, int character);
char * strchr(char * str, int character);

const char * strstr(const char * str1, const char * str2);
char * strstr(char * str1, const char * str2);

const void * memchr(const void * ptr, int value, size_t num);
void * memchr(void * ptr, int value, size_t num);

#endif

#endif