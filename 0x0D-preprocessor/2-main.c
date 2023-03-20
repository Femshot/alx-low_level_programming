#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the file is was compiled from
 *
 * Return: 0 on succes
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
