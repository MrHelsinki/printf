#include "main.h"

/**
*bit_counter - count bits for malloc
*@num: number
*Return: counter
*/
int bit_counter(int num)
{
	int counter = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num >>= 1;
		counter++;
	}

	return (counter);
}

/**
*print_binary - print the binary of a number
*@arg_list: args
*Return: printed length
*/

int print_binary(va_list arg_list)
{
	int num;
	char *buff;
	int i;
	int bits;

	num = va_arg(arg_list, int);
	bits = bit_counter(num);
	buff = malloc(bits + 1);

	if (buff == NULL)
	{
		return (-1);
	}
	if (num == 0)
	{
		_write('0');
		free(buff);
		return (1);
	}

	for (i = bits - 1; i >= 0; --i)
		buff[bits - 1 - i] = (num & (1 << i) ? '1' : '0');

	write(1, buff, bits);
	free(buff);
	return (bits);

}
