#include "main.h"

/**
 * reverse_array - Reverses the elements of an array of integars
 * @a: Pointer to array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= (n - i) && n != '0'; i++)
	{
		--n;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
