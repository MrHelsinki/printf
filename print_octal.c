#include <stdlib.h>
#include "main.h"

/**
 * get_octal - returns the octal representation of a given integer.
 * @args : list of arguments
 * Return: octal representation as an integer.
 */

int print_octal(va_list args)
{
	int num;
	if (num == 0)
	{
		return 0;
	}

	int counter = 0;
	unsigned int temp = num;

	while (temp != 0)
	{
		temp /= 8;
		counter++;
	}

	int *array = malloc(counter * sizeof(int));

	for (int i = 0; i < counter; i++)
	{
		array[i] = num % 8;
		num /= 8;
	}
	int octalNumber = 0;

	for (int i = counter - 1; i >= 0; i--)
	{
		_write(array[i] + '0');
	}
	free(array);

	return (octalNumber);
}
