#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments passed into it
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return (0);
}
