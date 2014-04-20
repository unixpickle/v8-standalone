#ifndef __V8SA_STDIO_H__
#define __V8SA_STDIO_H__

#include <stddef.h>

typedef struct {
} FILE;

static FILE * stdout = NULL;
static FILE * stdin = NULL;

void printf(const char * fmt, ...);
void fclose(FILE * fp);

#endif