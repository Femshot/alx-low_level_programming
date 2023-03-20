#include "main.h"
#include <stdlib.h>

/**
 * free_dog - Frees allmemory space allocated by new_dog function
 * @d: Pointer to dog_t type
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
