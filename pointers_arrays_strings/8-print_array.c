#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: a pointer of type int to an array of integers
 * @n: number of elements of the array to be printed
 * Description: Numbers must be separated by comma, followed by a space.
 * numbers should be displayed in the same order as they are
 * stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a[i] != a[n - 1])
			printf(", ");
	}

	printf("\n");
}
