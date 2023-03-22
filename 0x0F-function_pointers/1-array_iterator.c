#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a
 *					parameter on each element of an array.
 * @array: Array to be executed on
 * @size: Size of the array
 * @action: Pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		(*action)(array[i]);
}
