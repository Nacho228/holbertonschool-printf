#include "main.h"
/**
 * _printf - Function that prints an output according to a format.
 * @format: format.
 * Return: characters to be printed, including format specifiers.
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *buffer;
	int i = 0;
	int count = 0;

	va_start(args, format);
	buffer = format;

	while (buffer[i] != '\0')
	{
		if (buffer[i] == '%')
		{
			switch (buffer[i + 1])
			{
				case 'c':
				count += pf_c(args);
				break;
				case 's':
				count += pf_s(args);
				break;
				case '%':
				_putchar('%');
				case 'd':
				case 'i':
				break;
				default:
				break;
			}
			i++;
			}
		else
		{
			_putchar(buffer[i]);
			count++;
		}
		i++;
		}
	va_end(args);
return (count);
}

