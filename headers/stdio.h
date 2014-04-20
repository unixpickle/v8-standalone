#ifndef __V8SA_STDIO_H__
#define __V8SA_STDIO_H__

#include <stddef.h>

typedef struct {
} FILE;

FILE * stdout = NULL;
FILE * stdin = NULL;
FILE * stderr = NULL;

#define	_IOFBF	0		/* setvbuf should set fully buffered */
#define	_IOLBF	1		/* setvbuf should set line buffered */
#define	_IONBF	2		/* setvbuf should set unbuffered */

void printf(const char * fmt, ...);
int fclose(FILE * fp);
int fflush(FILE * fp);
size_t fwrite(const void * ptr, size_t size, size_t nitems, FILE * stream);
int setvbuf(FILE * stream, char * buf, int type, size_t size);

#endif