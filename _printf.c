#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...){
        int print_char = 0;
        va_list args;

        if (format == NULL)
                return (-1);
        va_start(args, format);

        while (*format){
                if (*format != '%'){
                        write(1, format, 1);
                        print_char++;
                }
                else {
                        format++;
                        if(*format == '\0')
                                break;
                        if(*format == '%'){
                                write(1, format, 1);
                                print_char++;
                        }
                        else if (*format == 'c'){
                                char c = va_arg(args, int);
                                write(1, &c, 1);
                                print_char++;
                        }
                        else if (*format == 's'){
                                char *str = va_arg(args, char *);
                                int str_len =0;

                                while (str[str_len] != '\0')
                                        str_len++;

                                write(1, str, str_len);
                                print_char += str_len;
                        }
                }format++;
        }
        va_end(args);
}
