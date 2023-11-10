#include "main.h"

/**
*_printf - print life
*@format: string to print
*Return: length of format
*/

int _printf(const char *format, ...)
{
	int printed_char;
	int ch;
	char *str;
	va_list args;

	printed_char = 0;

	va_start(args, format);


	for (int i = 0; i < _strlen(format); i++)
	{
		ch = format[i];
		if (ch != '%' && ch != '\\')
			_write(ch);
			printed_char++;
		else if (ch == '%')
		{
			conv_handler(format, args, i);
			printed_char++;
			i++;
		}
	}

	return (printed_char);
}

