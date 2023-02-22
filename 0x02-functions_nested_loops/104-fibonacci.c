#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 & 2
 * Return: 0 always
 */

int main(void)
{
	unsigned long int fibonacci[98] = {1, 2};
	int n;

	printf("%lu, %lu, ", fibonacci[0], fibonacci[1]);
	for (n = 2; n < 98; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 97)
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
