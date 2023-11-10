#include "main.h"

/**
*_printf - print life
*@format: string to print
*Return: length of format
*/

int _printf(const char *format, ...)
{
	int ch;
	char *str;
	va_list args;

	va_start(args, format);


	for (int i = 0; i < _strlen(format); i++)
	{
		ch = format[i];
		if (ch != '%' && ch != '\\')
			_write(ch);
		else if (ch == '%')
		{
			conv_handler(format, args, i);
			i++;
		}
	}

	return (1);
}

