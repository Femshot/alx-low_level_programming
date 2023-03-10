#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints addtition of all integar arguments passed into it
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	int test;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				test = isdigit(argv[i][j]);
				if (test == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			add += atoi(argv[i]);
		}
	printf("%d\n", add);
	}
	else
	{
	printf("%d\n", 0);
	}
	return (0);
}
