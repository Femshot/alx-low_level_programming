#include <stdio.h>

/**
 * main - Prints number of arguments passed into it excluding program name
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && *argv[0] != 0)
		printf("%d\n", (argc - 1));
	return (0);
}
