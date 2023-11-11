#include "main.h"

int print_S(va_list arg_list) {
    char *str = va_arg(arg_list, char*);
	int printed_chars;

    if (str == NULL) {
        write(1, "(null)", 6);
        return 6;
    }

    printed_chars = 0;
    while (*str) {
        if (*str < 32 || *str >= 127) {
            char *hex_value = malloc(5);
            if (hex_value == NULL)
                return -1;

            sprintf(hex_value, "\\x%02X", (unsigned char)*str);
            write(1, hex_value, 4);
            free(hex_value);
            printed_chars += 4;
        } else {
            write(1, str, 1);
            printed_chars++;
        }
        str++;
    }

    return (printed_chars);
}
