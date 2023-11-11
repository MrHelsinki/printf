#include "main.h"

/**
 * _printf - print life
 * @format: string
 *Return: len printed
 */


int _printf(const char * const format, ...)
{
	converter_t  converter[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int},
		{"%d", print_int}
	};
	va_list arg_list;
	int i = 0, j, len = 0;

	va_start(arg_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (converter[j].sign[0] == format[i])
			{
				if (converter[j].sign[1] == format[i + 1])
				{
					len += converter[j].func(arg_list);
					i += 2;
					goto Here;
				}
			}
			j--;
		}
		_write(format[i]);
		len++;
		i++;
	}
	va_end(arg_list);
	return (len);
}
