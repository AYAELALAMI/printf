#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _specifier(const char *format, va_list argu_ments);
int string_handler(char *str);
int _len_printer(char *str);
int integer_handler(int num);
int decimal_handler(int num);

#endif
