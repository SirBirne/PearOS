#ifndef __USTRINGFORMAT_H_
#define __USTRINGFORMAT_H_

#include "utypes.h"
#include "stdarg.h"
#include "kstring.h"

#define MAXNBUF 20

#define hex2ascii(hex)  (hex2ascii_data[hex])
char const hex2ascii_data[] = "0123456789abcdefghijklmnopqrstuvwxyz";

typedef unsigned char u_char;
typedef unsigned long u_long;
typedef unsigned int u_int;
/*typedef unsigned int size_t;*/

struct snprintf_arg {
        char    *str;
        size_t  remain;
};

extern int
vsnprintf(char *str, size_t size, const char *format, va_list ap);

extern void
snprintf_func(int ch, void *arg);

extern int
kvprintf(char const *fmt, void (*func)(int, void*), void *arg, int radix, va_list ap);

extern char *
ksprintn(char* nbuf, register u_long ul, register int base, register int* lenp);

#endif
