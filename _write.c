#include "main.h"

/**
*_write - write char to STDOUT
*@c: char
*Return: 1
*/

int _write(char c)
{
	return (write(1, &c, 1));
}
