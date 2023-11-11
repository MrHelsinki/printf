#include "main.h"

/**
*print_string - prints a string to STDOUT
*@args: string to print
*Return: length printed
*/

int print_string(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	len = 0;

	while (*str != '\0')
	{
		_write(*str);
		str++;
		len++;
	}

	return (len);
}
