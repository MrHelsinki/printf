#include "main.h"

/**
*_printf - print life
*@format: string to print
*Return: length of format
*/

int _printf(const char *format, ...)
{
	int printed_char, i;
	int ch;
	va_list args;

	printed_char = 0;
	i = 0;

	va_start(args, format);


	while (i < _strlen(format))
	{
		ch = format[i];
		if (ch != '%' && ch != '\\')
		{
			_write(ch);
			printed_char++;
		} else if (ch == '%')
		{
			conv_handler(format, args, i);
			printed_char++;
			i++;
		}
		i++;
	}
	va_end(args);


	return (printed_char);
}

