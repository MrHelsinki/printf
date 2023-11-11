#include "main.h"

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

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	if (format[0] == '\0')
	{
		va_end(args);
		return (0);
	}

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
	return (len);
}
