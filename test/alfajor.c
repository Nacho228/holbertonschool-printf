#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 */

int _printf(const char *format, ...)
{
        va_list args;
        const char *buffer;
	int p;
	char *a;
	int i = 0;
	int count = 0;

	va_start(args, format);

	buffer = format;

        while(buffer[i] != '\0')
        {
	
                if (buffer[i] == '%')
                {
                        switch (buffer[i+1])
                        {
				case 'c':
				p = va_arg(args, int);
				write(1, &p, 1);
				count++;
				break;
				case 's':
				a = va_arg(args, char *);
				write(1, a, strlen(a));
				count += strlen(a);
				break;
				default:
				break;
                        }
		}
		else
		{	
			(write(1, &buffer[i], 1));
			count++;
		}
	i++;	
	}
va_end(args);
return (count);
}
