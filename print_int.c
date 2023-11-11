#include "main.h"
/**
 * print_int - prints integer
 * @arg_list: argument to print
 * Return: num of chars printed
 */
int print_int(va_list arg_list)
{
	int n = va_arg(arg_list, int);
	int num, lst = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (lst < 0)
	{
		_write('-');
		num = -num;
		n = -n;
		lst = -lst;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_write(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_write(lst + '0');
	return (i);
}
