#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the pointer to the name to print
 * @f: a pointer to a function that takes one argument and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
