#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct op - printf struct.
 * @op: The operator
 * @f: The function associated
 */

typedef struct printf 
{
    char pf;
    int (*fp)(va_list);
} fp_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*fp)(va_list);
int pf_c(va_list args);
extern void init_fp(void);
int pf_s(va_list args);
int pf_d(va_list args);


#endif
