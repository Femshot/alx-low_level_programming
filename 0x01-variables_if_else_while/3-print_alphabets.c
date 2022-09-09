#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 Always
  */
int main(void, void)
{
	char low;
	char high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);
	putchar('\n');

	return (0);
}
