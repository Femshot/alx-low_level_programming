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
	int res, num1, num2;
	/*int (*f)(int a, int b);*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argv[2][0] != '+' || argv[2][0] != '-' || argv[2][0] != '*' ||
	argv[2][0] != '/' || argv[2][0] != '%' )
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(argv[2])(num1, num2);
	printf("%d\n", res);
	return (0);
}
