#include <stdlib.h>

/**
 * int_index - A function tht searches for an integar
 * @array: array to be sampled
 * @size: size of the array
 * @cmp: pointer to function to check for specific integar condition
 * Return: -1 if no elements matches or size is notmore than 0, i if search is
 * successful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || cmp == NULL)
		return (-1);
	else if (size <= 0)
		return (-1);
	else if (size > 0)
		for (i = 0; i < size; i++)
		{
			j = array[i];
				if (cmp(j) > 0)
					return (i);
		}
	return (-1);
}
