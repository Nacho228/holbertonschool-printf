#include "main.h"
#include <stdarg.h>

int (*fp)(va_list);

	fp_t ops[] = 
	{
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
	return (count);
}

int pf_d(va_list args)
{
    int num = va_arg(args, int);
    int count = 0;

    if (num < 0)
    {
        putchar('-');
        count++;
        num = -num;
    }

    if (num / 10)
    {
        count += pf_d(args);
    }

    putchar(num % 10 + '0');
    count++;

    return count;
}

void init_fp(void)
{
	fp = &pf_c;
}
