#include "main.h"

/**
 * main - prints the word _putchar to stdout
 *
 * Return: 0 on succes
 */
int main(void)
{
	char word[8] = "_putchar";
	int l;

	for (l = 0; l <= 7; l++)
		_putchar(word[l]);
	_putchar('\n');
	return (0);
}
