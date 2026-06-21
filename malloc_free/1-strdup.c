#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: Pointer to duplicated string, NULL if str = NULL or if malloc fails
 */
char *_strdup(char *str)
{
	char *s;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	s = malloc(sizeof(char) * length + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		s[i] = str[i];

	s[length] = '\0';

	return (s);
}
