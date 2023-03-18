#include <stdio.h>
void print_num(long int);

int main(void)
{
	long int num;

	printf("Enter number to print out: ");
	scanf("%ld", &num);
	print_num(num);
	putchar('\n');
	return (0);
}
void print_num(long int n)
{
	long int r = 1;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	while (n / r >= 10)
		r *= 10;
	while (r > 0)
	{
		putchar((n / r) + '0');
		n %= r;
		r /= 10;
	}
}
