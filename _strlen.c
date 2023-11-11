#include "main.h"
/**
 * _strlen - return len of string
 * @str:  ptr
 * Return: len
 */
int _strlen(char *str)
{
	int ch;

	for (ch = 0; str[ch] != 0; ch++)
		;
	return (ch);

}
/**
 * _strlenc - return strlen of const str
 * @str: ptr
 * Return: ch
 */
int _strlenc(const char *str)
{
	int ch;

	for (ch = 0; str[ch] != 0; ch++)
		;
	return (ch);
}
