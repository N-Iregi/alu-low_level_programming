#include "main.h"

/**
 * print_last_digit - computes the absolute value of an integer
 * @n: the integer to compute
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = -last;   /* flip sign instead of calling _abs */
	}
	_putchar('0' + last);
	return (last);
}
