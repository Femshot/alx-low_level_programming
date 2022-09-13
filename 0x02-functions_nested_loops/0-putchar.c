#include "main.h"
#include <unistd.h>

/**
 * main - Prints word _putchar followed by new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 1; i <= 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}

