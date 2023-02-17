#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits[0-9]
 *
 * Description: prints just singluar occurence of any three possible digit
 * with presedence to smaller combination of the digits
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 56)
	{
		int j = (i + 1);

		while (j < 57)
		{
			int k = (j + 1);

			while (k < 58)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
