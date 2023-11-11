#include "main.h"
#include "stdio.h"
/**
*_printf - printf clone
*@format: string with option
*Return: length printed
*/

int _printf(const char *format, ...)
{
	int i, len;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			len += conv_handler(format, args, i);
			format += 2;
			continue;
		}

		_write(*format);
		format++;
		len++;
	}

	va_end(args);
	return (len);
}
