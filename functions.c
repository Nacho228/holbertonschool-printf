#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int pf_c(va_list args, int a, char c)
{
        return (_putchar(va_arg(args, int)));
}
