#include "main.h"

/**
*conv_handler - handle conversions in format string
*@form: format string
*@args: list of variables
*@i: current index of operation on format string
*/

void conv_handler(const char *form, va_list args, int i)
{
	char *str;
	int ch;

	if (form[i + 1] == 'c')
	{
		ch = va_arg(args, int);
		_write(ch);
	} else if (form[i + 1] == 's')
	{
		str = va_arg(args, char *);
		_strwrite(str);
	}

}
