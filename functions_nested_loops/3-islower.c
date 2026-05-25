#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: first argument to check
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
