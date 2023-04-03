#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    const char *buffer;
    int i = 0;
    int count = 0;

    va_start(args, format);
    buffer = format;

    while (buffer[i] != '\0') {
        if (buffer[i] == '%') {
            switch (buffer[i + 1]) {
                
		case 'c':
                count += pf_c(va_arg(args, int));
                break;
                case 's':
                count += fp(args);
                break;
		default:
                break;
            }
            i += 2;
        } else {
            _putchar(buffer[i++]);
            count++;
        }
    }

    va_end(args);
    return count;
}

