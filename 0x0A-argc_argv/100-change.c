#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints minimum number of coins to make change for an amount of money
  * @argc: Argument counter
  * @argv: Argument vector
  * Return: 0 on success, 1 on failure
  */
int main(int argc, char *argv[])
{
	int coin = 0, num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num <= 0)
		{
			printf("0\n");
			return (0);
		}
		while (num)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else if (num >= 1)
				num -= 1;
			coin++;
		}
		printf("%d\n", coin);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
