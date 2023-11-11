#include "main.h"

/**
*write_string - prints a string to STDOUT
*@args: string to print
*Return: length printed
*/

int write_string(va_list args)
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
