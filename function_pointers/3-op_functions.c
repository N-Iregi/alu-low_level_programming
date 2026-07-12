#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one integer from another
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of a by b.
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
