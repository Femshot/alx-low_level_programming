#include <stdio.h>
#include "main.h"

/**
 * main - Prints addtition of all integar arguments passed into it
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, j, add = 0;
	int res;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res = 0;
			for (j = 0; *(argv[i] + j); j++)
			{
				if (*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9')
				{
					res = (res * 10) + (*(argv[i] + j) - '0');
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			add += res;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
