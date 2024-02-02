#include "main.h"
/**
 * integer_handler - holds and prints an integer
 * @num: int
 * Return: count
 */
int integer_handler(int num)
{
	int n, len = num % 10, digit, fi_num = 1, count = 1;

	num = num / 10;
	n = num;
	if (len < 0)
	{
		_putchar(45);
		n = -n;
		num = -num;
		len = -len;
		count++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			fi_num = fi_num * 10;
			n = n / 10;
		}
		n = num;
		while (fi_num > 0)
		{
			digit = n / fi_num;
			_putchar(digit + '0');
			n = n - (digit * fi_num);
			fi_num = fi_num / 10;
			count++;
		}
	}
	_putchar(len + '0');

	return (count);
}
