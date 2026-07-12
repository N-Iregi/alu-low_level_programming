#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the pointer to the array to search
 * @size: number of elements in the array 'array'
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0, or -1 if no element matches or size
 * is negative or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
