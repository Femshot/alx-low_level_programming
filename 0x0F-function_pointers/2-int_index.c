#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer through another
 * function call.
 * @array: Pointer to array where integer is located
 * @size: Size of array
 * @cmp: Pointer to function to search for an interger
 *
 * Return: array index where integer is found, -1 if search failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, fd;


	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		fd = cmp(array[i]);
		if (fd > 0)
			return (i);
	}
	return (-1);
}
