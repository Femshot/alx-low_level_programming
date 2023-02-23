#include <stdio.h>

/**
 * main - Fizz-Buzz test printf Fizz for multiples of 3, Buzz for mutiples of 5
 * and FizzBuzz for mutiples of both 3 & 5
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
