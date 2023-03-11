#include "main.h"

/**
 * print_to_98 - Prints all natural numbers less then 1000
 * from any number up or down to 98
 * @n: Number to begin at
 */
void print_to_98(int n)
{
	int i;

	while (n != 98)
	{
		i = 0;
		if (n < 0)
		{
			n *= -1;
			i = -1;
			_putchar('-');
		}
		if (n > 9)
		{
			if (n > 99)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
		}
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		if (i < 0)
			n = 1 - n;
		else if (n > 98)
			n -= 1;
		else
			n += 1;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
