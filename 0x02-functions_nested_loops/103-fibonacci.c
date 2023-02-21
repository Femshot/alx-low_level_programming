#include <stdio.h>

/**
 * main - Prints Fibonacci numbers 
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;
	long int fibonacci[32] = {1, 2}, sum = 2;

	for (i = 3; i <= 32; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (fibonacci[i] % 2 == 0)
			sum += fibonacci[i];
	}
	printf("%ld\n", sum);
	return (0);
}
