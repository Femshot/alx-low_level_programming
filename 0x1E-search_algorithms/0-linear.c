#include "search_algos.h"

/**
 * linear_search - Search array using linear search algorithm
 * @array: Array to  search
 * @size: Size of array
 * @value: Value to be found in array
 *
 * Return: index of found value or -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
