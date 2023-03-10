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
		while (num >= 25)
		{
			coin++;
			num -= 25;
		}
		while (num >= 10)
		{
			coin++;
			num -= 10;
		}
		while (num >= 5)
		{
			coin++;
			num -= 5;
		}
		while (num >= 2)
		{
			coin++;
			num -= 2;
		}
		while (num >= 1)
		{
			coin++;
			num -= 1;
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
