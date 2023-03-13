#include "main.h"

/**
 * alloc_grid - Allocates memory for 2 dimensional array and initialises each
 * index with 0
 * @width: Size of array width or columns
 * @height: Size of array height or rows
 *
 * Return: Pointer to array created, NULL if failure
 */
int **alloc_grid(int width, int height)
{
		int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;

	return (array);
}
