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
	if (format == NULL)
	{
		return (-1);
	}
		while (*format)
		{
			if (format[0] == '%' && format[1] != '\0')
			{
				format++;
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
					default:
						count += _putchar(37);
						count += _putchar(*format);
						break;
						}
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
