int print_unsigned(va_list args)#include "main.h"


/**
 * print_unsigned - prints unsigned integer
 * @args : arguments
 * Return : number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_args(args, unsigned int);
	int num;
	int i = 0;

	if (n == 0)
	{
		_write('0');
		return (1);
	}
	while (n != 0)
	{
		num = n % 10;
		_write(num + '0');
		n /= 10;
		i++
	}
	return (i);
}
