#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 & 2
 * Return: 0 always
 */

int main(void)
{
	float fibonacci[98];
	int n;

	fibonacci[1] = 1;
	fibonacci[2] = 2;

	for (n = 3; n <= 98; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 98)
		{
			printf("%G\n", fibonacci[n]);
		}
		else
		{
			printf("%G ,", fibonacci[n]);
		}
	}
	return (0);
}
