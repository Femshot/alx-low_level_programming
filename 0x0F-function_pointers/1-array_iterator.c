#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0, j;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
	{
		array[i] = j;
		action(j);
	}
}
