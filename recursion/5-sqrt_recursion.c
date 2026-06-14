#include "main.h"

/**
 * _find_sqrt - helper function to find natural square root
 * @n: the number whose square root is to be checked
 * @i: the value to test
 *
 * Return: natural square root, otherwise -1
 */
int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root is calculated
 *
 * Return: resultant square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, 0));
}
