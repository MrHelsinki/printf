#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>



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
#endif
