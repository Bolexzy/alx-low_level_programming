#include "main.h"

/**
 * divisible - detects if an input number is divisible for primality.
 *
 * @n: input number.
 * @div: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int divisible(int n, int div)
{
	if (div == n - 1 || n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (divisible(n, div + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 *
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisible(n, 2));
}
