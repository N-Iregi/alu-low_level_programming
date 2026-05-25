#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase and new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');

		i++;
	}
}
