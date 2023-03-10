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
    int i, add = 0;

    if (argc > 1)
    {
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
    }
    else
    {
	printf("0\n");
    }
    return (0);
}
