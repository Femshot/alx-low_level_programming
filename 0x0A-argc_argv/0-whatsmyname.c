#include <stdio.h>

/**
 * main - Prints its own name
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}

