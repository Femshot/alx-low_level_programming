#include "dog.h"

/**
 * init_dog - Initializesa variable of type struct dog
 * @d: Pointer to struct dog variable
 * @name: Name of dog to initialize
 * @age: Age of dof to initialize
 * @owner: Owner of dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
