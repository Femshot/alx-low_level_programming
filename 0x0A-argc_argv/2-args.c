#include <stdio.h>

/**
 * main - Prints all arguments passed into it
 * @argc: Program argument counter
 * @argv: Program argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
