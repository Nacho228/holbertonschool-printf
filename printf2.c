#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
        va_list args;
        const char *buffer;
	int p, a;
	int i = 0;
	int count = 0;

	init_fp();
	va_start(args, format);
	buffer = format;

        while(buffer[i] != '\0')
        {
	
                if (buffer[i] == '%')
                {
                        switch (buffer[i + 1])
                        {
				case 'c':
				p = va_arg(args, int);
				count += fp(args, p);
				break;
				case 's':
				a = va_arg(args, int);
				count += fp(args, a);
				break;
				default:
				break;
                        }
		i += 2;
		continue;
		}	
			(write(1, &buffer[i], 1));
			count++;
			i++;	
	}
va_end(args);
return (count);
}

