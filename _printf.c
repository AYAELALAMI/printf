#include "main.h"
/**
 * _printf - function as printf that prints format's characters
 * @format: includes characters and specifiers
 * Return: count the length of the format
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list argu_ments;

	va_start(argu_ments, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	else
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				count += _specifier(format, argu_ments);
			}
			else
			{
				count += _putchar(*format);
			}
			format++;
		}
	va_end(argu_ments);
	return (count);
}
