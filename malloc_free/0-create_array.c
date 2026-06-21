#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: the size of the array
 * @c:the character used to initialise the array
 *
 * Return: pointer to array or NULL if size is 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
