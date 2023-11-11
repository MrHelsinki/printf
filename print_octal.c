#include "main.h"

int print_octal(va_list arg_list)
{
    unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp;
	int length;
	char *buff;
	int i;

    if (num == 0)
	{
        write(1, "0", 1);
        return (1);
    }

    temp = num;
    length = 0;
    while (temp != 0)
	{
        temp /= 8;
        ++length;
    }

    buff = malloc(length);
    if (buff == NULL)
        return (-1);

    i = length - 1;
    while (num != 0)
	{
        buff[i] = '0' + (num % 8);
        num /= 8;
        --i;
    }
    write(1, buff + i + 1, length - i - 1);
    free(buff);

    return (length - i - 1);
}

