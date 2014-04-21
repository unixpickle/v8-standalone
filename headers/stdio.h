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

#ifndef SEEK_SET
#define	SEEK_SET	0	/* set file offset to offset */
#endif
#ifndef SEEK_CUR
#define	SEEK_CUR	1	/* set file offset to current plus offset */
#endif
#ifndef SEEK_END
#define	SEEK_END	2	/* set file offset to EOF plus offset */
#endif

void printf(const char * fmt, ...);
int fprintf(FILE * fp, const char * format, ...);
int fclose(FILE * fp);
int fflush(FILE * fp);
size_t fwrite(const void * ptr, size_t size, size_t nitems, FILE * stream);
size_t fread(void * ptr, size_t size, size_t count, FILE * stream);
int setvbuf(FILE * stream, char * buf, int type, size_t size);
int fscanf(FILE * stream, const char * format, ...);

int fseek(FILE * stream, long int offset, int origin);
char * fgets(char * str, int num, FILE * stream);
void rewind(FILE * stream);
long int ftell(FILE * stream);
int feof(FILE * stream);

int ferror(FILE * stream);

#endif
