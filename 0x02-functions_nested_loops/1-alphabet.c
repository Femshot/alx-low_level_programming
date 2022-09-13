#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
