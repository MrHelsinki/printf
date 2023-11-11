#include "main.h"

/**
*print_percent - print %
*@args: arg
*Return: 1
*/

int print_percent(va_list args)
{
	char ch;
	(void) args;
	ch = '%';

	_write(ch);
	return (1);
}
