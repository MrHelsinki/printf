#include "main.h"

/**
*conv_handler - handle % 
*@arg_list: arg variables
*@i: fromat index
*Return: len printed
*/

int conv_handler(va_list arg_list,const char* format, int i)
{
	converter_t converter[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%i", print_int},
		{"%d", print_int},
		{"%%", print_percent}
	};

	int struct_index = 4, len = 0;

	while (struct_index >= 0)
	{
		if (converter[struct_index].sign[0] == format[i])
			if (converter[struct_index].sign[1] == format[i + 1])
			{
				len += converter[struct_index].func(arg_list);
				return (len);
			}
		struct_index--;
	}

	return (0);
}
