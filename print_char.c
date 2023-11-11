#include "main.h"

/**
*print_char - print char;
*@args: list of args
*Return: return how many chars printed
*/

int print_char(va_list args)
{
	int ch;

	ch = va_arg(args, int);
	_write(ch);

	return (1);
}
