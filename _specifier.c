#include "main.h"
/**
 * _specifier - checks and handles format specifiers
 * @format: includes characters and specifiers
 * @argu_ments: the argument that va_list contains
 * Return: count the length of the format
 */
int _specifier(const char *format, va_list argu_ments)
{
	int count = 0;
				switch (*format)
				{
					case 's':
						count += string_handler(va_arg(argu_ments, char*));
						break;
					case 'c':
						count += _putchar(va_arg(argu_ments, int));
						break;
					case '%':
						count += _putchar(37);
						break;
					case 'd':
						count += decimal_handler(va_arg(argu_ments, int));
						break;
					case 'i':
						count += integer_handler(va_arg(argu_ments, int));
						break;
					default:
						count += _putchar(37);
						count += _putchar(*format);
						break;
						}
				return (count);
}
