#include "main.h"

/**
 * primenumhelp - checks if integer is a prime number
 * @a: the number to help check if number is a prime one
 * @b: the number to check
 *
 * Return: an int
 */
int primenumhelp(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);

	else if (a * a > b)
		return (1);

	return (primenumhelp(a + 1, b));

}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: the integer to check
 *
 * Return: 1: if the input integer is a prime number.
 *         0: if otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (primenumhelp(2, n));
}
