#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(const char *s);
int _write(char t);
void _strwrite(char *s);
void conv_handler(const char *form, va_list args, int i);

#endif
