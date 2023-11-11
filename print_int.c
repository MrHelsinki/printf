#include "main.h"

/**
*write_int - write int to STDOUT
*@n: list of args
*Return: length of char printed
*/
int write_int(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		_write('-');
		n = -n;
		len++;
	}
	if (n / 10)
		len += write_int(n / 10);
	_write((n % 10) + '0');
	len++;
	return (len);
}

/**
*print_int - func
*@args: list
*Return: length
*/
int print_int(va_list args)
{
	return (write_int(va_arg(args, int)));
}
