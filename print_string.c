#include "main.h"
/**
 * print_string - print string
 * @arg_list: args
 * Return: len printed
 */

int print_string(va_list arg_list)
{
	char *str;
	int i, len;

	str = va_arg(arg_list, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_write(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_write(str[i]);
		return (len);
	}
}
