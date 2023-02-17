#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits [0-9].
 *
 * Description: prints just singluar occurence of any two possible digit
 * with presedence to smaller combination of the digits
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 57)
	{
		int j = (i + 1);

		while (j < 58)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
