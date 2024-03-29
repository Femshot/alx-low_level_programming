#include "search_algos.h"

/**
 * binary_search - Search an array using binary search
 * @array: Arry to search
 * @size: Size of Array
 * @value: Value to be searched for
 *
 * Return: Index of array where value found, -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid = 0, min = 0, max = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i < max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (min + max) / 2;
		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
