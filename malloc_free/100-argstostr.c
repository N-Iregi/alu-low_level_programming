#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: array of pointers to strings
 * Return: if successful, a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int x, y, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[k] = av[x][y];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
