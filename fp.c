#include "main.h"
/**
 *
 *
 */
int (*fp)(va_list args, int a);

	 fp_t ops[] = 
	 {
        	{"c", pf_c},
		{"s", pf_s},
		{NULL, NULL}
	 };
/**
 *
 *
 */
int pf_c(va_list args, int a)
{
        return (_putchar(a));
}
int pf_s(va_list args, int a)
{
	const char *str = va_arg(args, const char *);
	int count, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

/**
 *
 */
void init_fp(void)
{
        fp = &pf_c;
}

