#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: 1. a pointer to a 2 dimensional array of integers.
 *         2. If width or height is 0 or negative, return NULL
 *         3. NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **a, y, z;
	int length;

	length = width * height;

	if (length <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		a[y] = malloc(sizeof(int) * width);
		if (a[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(a[y]);
			free(a);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
		for (z = 0; z < width; z++)
			a[y][z] = 0;

	return (a);
}
