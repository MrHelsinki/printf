#include "main.h"

/**
 * print_binary - print binary num
 * @val: list of variables
 * Return: len printed
 */
int print_binary(va_list arg_list)
{
	int limit = 0, len_printed = 0;
	int b, i, a = 1;
	unsigned int num = va_arg(arg_list, unsigned int), n;

	for (i = 0; i < 32; i++)
	{
		n = ((a << (31 - i)) & num);
		if (n >> (31 - i))
			limit = 1;
		if (limit)
		{
			b = n >> (31 - i);
			_write(b + 48);
			len_printed++;
		}
	}
	if (len_printed++ == 0)
		_write('0');
	return (len_printed);
}
