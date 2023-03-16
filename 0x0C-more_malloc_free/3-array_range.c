#include "main.h"

/**
 * array_range - Creates an array with the range of numbers inputed
 * @min: Lower limit or start of range
 * @max: Upper limit or end of range
 *
 * Return: Pointer to created array
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, range = 1;

	if (min > max)
		return (NULL);
	while ((min + range) <= max)
		range++;

	ptr = malloc(sizeof(*ptr) * range);
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		*(ptr + i++) = min++;

	return (ptr);
}
