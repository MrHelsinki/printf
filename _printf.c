#include "main.h"
#include "stdio.h"
/**
*_printf - printf clone
*@format: string with option
*Return: length printed
*/

int _printf(const char *format, ...)
{
	int len;
	va_list args;

	len = 0;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += conv_handler(format, args);
			format++;
			continue;
		}

		_write(*format);
		format++;
		len++;
	}

	va_end(args);
	return (len);
}
