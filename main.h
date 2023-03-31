#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct printf
{
    char *pf;
    int (*fp)(va_list args, int a, char c);
} pf_t;

int _putchar(char c);
int _printf(const char *format, ...);
int pf_c(va_list args, int a, char c);
int (*fp)(va_list args, int a, char c);


#endif
