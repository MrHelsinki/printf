#include "main.h"

/**
*conv_handler - handle conversions in format string
*@form: format string
*@args: list of variables
*@i: current index of operation on format string
*Return: length printed
*/

int conv_handler(const char *form, va_list args, int i)
{
	converter_t converter[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL}
	};

	int y, len, struc_len;

	y = 0;
	len = 0;
	struc_len = 0;

	while (converter[struc_len].sign != NULL)
		struc_len++;

	while (y < struc_len)
	{
		if (form[i + 1] == converter[y].sign[0])
		{
			len += converter[y].func(args);
		}
		y++;
	}

	return (len);
}
