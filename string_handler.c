#include "main.h"

/**
 * string_handler - prints strings
 * @str: holds and prints the string
 * Return: the string
 */
int string_handler(char *str)
{
	int n = 0;
	int count = 0;

	if (str == NULL)
	{
		char *prnull = "(null)";

		while (n <= 5)
		{
		_putchar(prnull[n]);
		n++;
		count++;
		}
	return (count);
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			count++;
			str++;
		}
	}
	return (count);
}
