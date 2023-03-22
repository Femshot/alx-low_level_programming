#include "3-calc.h"

/**
 * main - Performs simple arithmetic operations
 * @argc: Number of argumemts
 * @argv: Pointer to arguments
 *
 * Return: O on success
 * On Error, 98 or 99 or 100 accordingly
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
