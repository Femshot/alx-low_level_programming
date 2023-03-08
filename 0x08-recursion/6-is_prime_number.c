#include "main.h"

/**
 * is_prime_number - Checks if n is a prime number
 * @n: Input integar
 *
 * Return: 1 if n is primenmber, 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_fac(2, n));
}

/**
 * _prime_fac - finds prime factor
 * @denum: denominator value
 * @num: number integar
 * Return: 1 if num has no prime factor, 0 if num has prime factor
 */
int _prime_fac(int denum, int num)
{
	if (denum > (num / 2))
		return (1);
	else if (num % denum == 0)
		return (0);
	return (_prime_fac(denum + 1, num));
}
