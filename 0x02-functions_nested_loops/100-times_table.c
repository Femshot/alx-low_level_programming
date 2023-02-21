#include "main.h"

/**
 * print_times_table - Prints n number of the times table
 * @n: number of time table to print between 0 -15
 */
void print_times_table(int n)
{
	int a, b;

	if (n >= 0 && n < 16)
	{
		for (a = 0; a <= n ; a++)
		{
			for (b = 0; b <= n; b++)
			{
				/*checks and prints first and second digit if three digit*/
				if ((a * b) > 99)
				{
					_putchar(((a * b) / 100) + '0');
					_putchar((((a * b) / 10) % 10) + '0');
				}
				/*checks and prints first digit if two digits*/
				else if ((a * b) > 9 && (a * b) <= 99)
					_putchar(((a * b) / 10) + '0');
				/*prints last or single digit*/
				_putchar(((a * b) % 10) + '0');
				if (b == n) /*checks to see if at end of line*/
				{
					_putchar('\n');
					continue;
				}
				_putchar(',');
				_putchar(' ');
			/*confirms that next output is not two digits*/
				if ((a * (b + 1) / 10) == 0)
					_putchar(' ');
			/*confirms that next output is not three digits*/
				if ((a * (b + 1) / 100) == 0)
					_putchar(' ');
			}
		}
	}
}
