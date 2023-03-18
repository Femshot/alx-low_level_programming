#include <stdio.h>
void print_num(long int n);

int main(void)
{
	long int num;

	printf("Enter a number to print out: ");
	scanf("%ld", &num);
	print_num(num);
	putchar('\n');
	return (0);
}
void print_num(long int digit)
{
	if (digit < 0)
	{
		digit *= -1;
		putchar('-');
	}
	if (digit / 10)
		print_num(digit / 10);
	putchar((digit % 10) + '0');
}
