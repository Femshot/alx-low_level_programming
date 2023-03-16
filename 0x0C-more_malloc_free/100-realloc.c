#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to old block created by malloc
 * @old_size: Size of old block of memory
 * @new_size: Size of new block of memory
 *
 * Return:	Pointer to new block of memory, NULL if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *new_str, *old_str;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (old_size == 0 || ptr == NULL || new_size == 0)
	{
		free(ptr);
		p = malloc(new_size);
		if (p == NULL || new_size == 0)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	old_str = ptr;
	new_str = p;
	if (old_size > new_size)
		for (; i < new_size; i++)
			*(new_str + i) = *(old_str + i);
	if (new_size > old_size)
		for (; i < old_size; i++)
			*(new_str + i) = *(old_str + i);
	free(ptr);
	return (p);
}
