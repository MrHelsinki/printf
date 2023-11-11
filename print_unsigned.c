#include "main.h"
/**
*print_unsigned - func
*@arg_list: list of args
*Return: len
*/

int print_unsigned(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp = num;
	int length = 0;
	int *buff;
	int i;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (temp != 0)
	{
		temp /= 10;
		++length;
		}

	buff = malloc(length + 1);
	if (buff == NULL)
		return (-1);

	i = length - 1;
	while (num != 0)
	{
		buff[i] = '0' + (num % 10);
		num /= 10;
		--i;
	}
	write(1, buff + i + 1, length - i);
	free(buff);
	return (length - i);
}
