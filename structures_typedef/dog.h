#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A structure defined as dog
 * @name: First member = pointer to characters / string literal
 * @age: Second member
 * @owner: Third member = string literal / string literal
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
