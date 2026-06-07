#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to the string to reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
