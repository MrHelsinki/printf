#include "main.h"

/**
*conv_handler - handle %
*@arg_list: arg variables
*@format: string
*@i: fromat index
*Return: len printed
*/

int conv_handler(va_list arg_list, const char *format, int i)
{
	converter_t converter[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent},
		{"%d", print_int},
		{"%i", print_int},
		{"%b", print_binary},
		{NULL, NULL}
	};

	int struct_index, len;

	struct_index = 0;
	len = 0;
	while (converter[struct_index].sign != NULL)
		struct_index++;

	struct_index--;

	while (struct_index >= 0)
	{
		if (converter[struct_index].sign[0] == format[i])
			if (converter[struct_index].sign[1] == format[i + 1])
			{
				len = converter[struct_index].func(arg_list);
				return (len);
			}
		struct_index--;
	}

	return (0);
}
