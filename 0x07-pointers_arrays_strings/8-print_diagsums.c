#include "main.h"
#include <stdio.h>

/**
 * printf_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to integar of array
 * @size: size of a sqaure array
 */
void print_diagsums(int *a, int size)
{
	int i, j, right_diag = 0, left_diag = 0;

	for (i = 0, j = 0; i < size; i++, j++)
		right_diag += *(a + (i * size + j));
	for (i = 0, j = (size -1); i < size; i++, j--)
		left_diag += *(a + (i * size + j));
	printf("%d, %d\n", right_diag, left_diag);
}
