#include "main.h"

/**
*_strlen - function to calculate a string length
*@s: the string in question
*Return: len of string
*/

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
*_write - print 1 single character
*@c: char to print
*Return: 1 on success or -1 on failure
*/

int _write(char c)
{
	return (write(1, &c, 1));
}

/**
*_strwrite - write a string to STDOUT
*@s: the string to write
*/

void _strwrite(char *s)
{
	while (*s != '\0')
	{
		_write(*s);
		s++;
	}
}

/**
*_intwrite  - write int num to STDOUT
*@num: num to convert
*/
void _intwrite(int num)
{
	int num_cp;

	if (num < 0)
	{
		_write('-');
		num_cp = -num;
	} else
		num_cp = num;


	if (num_cp / 10)
		_intwrite(num_cp / 10);

	_write((num_cp % 10) + '0');
}
