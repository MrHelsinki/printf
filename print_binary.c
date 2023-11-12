#include "main.h"
#include <stdarg.h>

/**
 * print_binary - converts and unsigned int argument into binary
 * @args : list of arguments.
 * @num : integer.
 * Return : returns the binary of the int.
 */

int print_binary(va_list args, unsigned int num)
{
	if (num == 0)
		_write(num);
	int binary_num[64];
	int in = 0;

	for (; num > 0;)
	{
		binary_num[i++] = num % 2;
		num /= 2;
	}
	for (int j = i-1; j >= 0; j--)
		_write(binary_num[j]);
}
