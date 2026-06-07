#include "main.h"

/**
 * puts_half - prints 2nd half of a string, followed by a new line.
 * @str: the pointer to a string whose 2nd half is to be printed
 */
void puts_half(char *str)
{
	int i, lengthcount;

	lengthcount = 0;
	while (str[lengthcount])
		lengthcount++;

	if (lengthcount % 2 == 0)
	{
		for (i = lengthcount / 2; i < lengthcount; i++)
			_putchar(str[i]);
	}
	else if (lengthcount % 2 != 0)
	{
		for (i = (lengthcount + 1) / 2; i < lengthcount; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
