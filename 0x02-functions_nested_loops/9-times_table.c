#include "main.h"

/**
 * times_table - Prints the 9 times time table
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a * b) > 9)
				_putchar(((a * b) / 10) + '0');
			_putchar(((a * b) % 10) + '0');
			if (b == 9) /*checks to see if at end of line*/
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if ((a * (b + 1) / 10) == 0) /*confirms that next output is not two digits*/
				_putchar(' ');
		}
	}
}
