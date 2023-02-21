#include <stdio.h>

/**
 * main - Prints Fibonacci numbers
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;
	long int fibonacci[50] = {1, 2};

	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);
	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 49)
			printf("%ld\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
	}
	return (0);
}
