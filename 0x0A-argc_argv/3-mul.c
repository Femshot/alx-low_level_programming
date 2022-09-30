#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j, mul;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (argc >= 3)
	{
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
	else if (argc != 3)
		printf("Error\n");
		return (1);
}
