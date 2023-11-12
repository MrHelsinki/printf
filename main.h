#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdarg.h>
#include <unistd.h>

/**
*struct converter_struct - boilerplate for functions to convert % signs
*@sign: sign detected in format passed to _printf
*@func: func to call to print the appropriate data;
*/

typedef struct converter_struct
{
	const char *sign;
	int (*func)(va_list);
} converter_t;

extern converter_t converter[];

int _printf(const char *format, ...);
int _strlen(const char *s);
int _write(char t);
int conv_handler(const char *form, va_list args);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_percent(va_list);
int print_binary(va_list args, unsigned int num);
int print_unsigned(va_list args);
int print_octal(va_list args);
#endif
