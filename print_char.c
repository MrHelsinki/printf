#include "main.h"

/**
 * print_char - write char
 * @arg_list: arguments
 * Return: 1
 */
int print_char(va_list arg_list)
{
	char ch;

	ch = va_arg(arg_list, int);
	_write(ch);
	return (1);
}
