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

	while (i < _strlen(format))
	{
		if (format[i] == '%')
		{
			len += conv_handler(format, args, i);
			i += 2;
			continue;
		}

		_write(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}
