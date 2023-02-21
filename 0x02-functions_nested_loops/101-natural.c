#include <stdio.h>

/**
 * main - Prints sum of all  multiples of 3 & 5 from 1 - 1024
 *
 * Return: 0 after successful completion
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
