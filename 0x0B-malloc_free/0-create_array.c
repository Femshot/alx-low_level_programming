#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with
 * a specific char.
 * @size: Size of array to be created
 * @c: Character to initialise the arrays with
 *
 * Return: Pointer to memory address of created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
