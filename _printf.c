#include "main.h"

/**
 * _printf - print life
 * @format: string
 *Return: len printed
 */


int _printf(const char * const format, ...)
{

	va_list arg_list;
	int i = 0, tmp, len = 0;

	va_start(arg_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		tmp = conv_handler(arg_list, format, i);
		if (tmp != 0)
		{
			i += 2;
			continue;
		}
		_write(format[i]);
		len++;
		i++;
	}
	va_end(arg_list);
	return (len);
}
