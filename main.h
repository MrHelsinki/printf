#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * struct convertion_matcher - struct
 * @sign: char to match
 * @func: function to execute
 */

typedef struct convertion_matcher
{
	char *sign;
	int (*func)();
} converter_t;


int print_int(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int print_char(va_list val);
int print_string(va_list val);
int _write(char c);
int _printf(const char *format, ...);
int print_percent(void);
int conv_handler(va_list, const char *, int);
int print_binary(va_list);
int bit_counter(int);
int print_S(va_list);
int print_octal(va_list);
int print_unsigned(va_list);
#endif
