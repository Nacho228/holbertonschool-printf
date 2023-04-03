#include "main.h"
/**
 *
 */
int (fp)(va_list args)
{
    const char *fmt = va_arg(args, const char *);
    int count = 0;

    while (*fmt != '\0') {
        if (*fmt == '%') {
            switch (*++fmt) {
                case 'c':
                    count += pf_c(va_arg(args, int));
                    break;
                case 's':
                    count += pf_s(va_arg(args, const char *));
                    break;
                    default:
                    break;
            }
        } else {
            _putchar(*fmt++);
            count++;
        }
    }

    return count;
}

