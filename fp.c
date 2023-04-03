#include "main.h"
#include <stdarg.h>

int (*fp)(va_list);

fp_t ops[] = {
	{'c', pf_c},
	{'s', pf_s},
	{'\0', NULL},
    };

int pf_c(va_list args)
{
    int a = va_arg(args, int);
    return _putchar(a);
}

int pf_s(va_list args)
{
    const char *str = va_arg(args, const char *);
    int count = 0;

    while (*str)
    {
        _putchar(*str++);
        count++;
    }

    return count;
}

void init_fp(void)
{
        fp = &pf_c;
}
