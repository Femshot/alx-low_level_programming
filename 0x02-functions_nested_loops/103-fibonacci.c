#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int fibonacci[32], sum = 2;
	int n;

	fibonacci[1] = 1;
	fibonacci[2] = 2;

	for (n = 3; n <= 32; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (fibonacci[n] % 2 == 0)
			sum += fibonacci[n];
	}
	printf("%u\n", sum);

	return (0);
}
