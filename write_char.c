#include "main.h"

/**
*write_char - print char;
*@args: list of args
*Return: return how many chars printed
*/

int write_char(va_list args)
{
	int ch;

	ch = va_arg(args, int);
	_write(ch);

	return (1);
}
