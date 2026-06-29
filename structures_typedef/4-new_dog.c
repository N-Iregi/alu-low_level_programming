#include "dog.h"

/**
 * _strlen - returns the length string s
 * @s: the string to check for its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte to the buffer pointed to by dest
 * @dest: the pointer to the buffer to copy the string to.
 * @src: the pointer to the string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int src_length;
	int i;

	src_length = _strlen(src);

	for (i = 0; i < src_length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog on success,NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *other_dog;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	len1 = _strlen(name);
	len2 = _strlen(owner);

	other_dog = malloc(sizeof(dog_t));
	if (other_dog == NULL)
		return (NULL);

	other_dog->name = malloc((len1 + 1) * sizeof(char));
	if (other_dog->name == NULL)
	{
		free(other_dog);
		return (NULL);
	}

	other_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (other_dog->owner == NULL)
	{
		free(other_dog->name);
		free(other_dog);
		return (NULL);
	}

	_strcpy(other_dog->name, name);
	_strcpy(other_dog->owner, owner);
	other_dog->age = age;

	return (other_dog);
}
