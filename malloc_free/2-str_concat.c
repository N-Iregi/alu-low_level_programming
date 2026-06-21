#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: 1. pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and
 * null terminated.
 *         2. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, length;
	int length1 = 0;
	int length2 = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[length1] != '\0')
		length1++;
	}
	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
		length2++;
	}

	length = length1 + length2;
	s = malloc(sizeof(char) * length + 1);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < length1; a++)
		s[a] = s1[a];
	for (b = 0; b < length2; b++, a++)
		s[a] = s2[b];
	s[length] = '\0';

	return (s);
}
