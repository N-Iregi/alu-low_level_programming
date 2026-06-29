#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to a structure of type struct dog
 * @name: a pointer to a char
 * @age: a variable of type float
 * @owner: pointer to a char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
