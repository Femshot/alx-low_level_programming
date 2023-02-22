#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 & 2
 * Return: 0 always
 */

int main(void)
{
	unsigned long int fibonacci[98];
	int n;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%lu, %lu, ", fibonacci[1], fibonacci[2]);
	for (n = 2; n < 98; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 98)
		{
			printf("%lu\n", fibonacci[n]);
		}
		else
		{
			printf("%lu, ", fibonacci[n]);
		}
	}
	return (0);
}
