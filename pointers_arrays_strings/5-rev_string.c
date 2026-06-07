#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
