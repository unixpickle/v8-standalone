#ifndef __V8SA_STDIO_H__
#define __V8SA_STDIO_H__

#include <stddef.h>

typedef struct {
} FILE;

FILE * stdout = NULL;
FILE * stdin = NULL;
FILE * stderr = NULL;

void printf(const char * fmt, ...);
int fclose(FILE * fp);
int fflush(FILE * fp);

#endif