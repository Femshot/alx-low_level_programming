#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates space for the inforamtion of a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owener of the dog
 *
 * Return: POinter to the address of the new dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dtr;
	char *ptr, *str;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	ptr = malloc(sizeof(*ptr) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		ptr[i] = name[i];
	ptr[i] = '\0';
	for (j = 0; owner[j]; j++)
		;
	str = malloc(sizeof(*str) * (j + 1));
	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
		str[j] = owner[j];
	str[j] = '\0';

	dtr = malloc(sizeof(dog_t));
	if (dtr == NULL)
	{
		free(ptr);
		free(str);
		return (NULL);
	}
	dtr->name = ptr;
	dtr->age = age;
	dtr->owner = str;
	return (dtr);
}
