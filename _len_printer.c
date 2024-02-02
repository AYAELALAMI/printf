#include "main.h"
/**
 * _len_printer -  print the string and count its length
 * @strr: the string
 * Return: the count of the string
 */
int _len_printer(char *strr)
{
	int len = strlen(strr);
	int n = 0;
	int count = 0;

	if (strr == NULL)
	{
		exit(-1);
	}

	for (n = 0; n < len; n++)
	{
		count += _putchar(strr[n]);
	}
	return (count);
}

