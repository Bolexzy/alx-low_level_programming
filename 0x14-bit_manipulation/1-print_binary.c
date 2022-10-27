#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	unsigned int b;
	int rem;

	if (!n)
	{
		_putchar(n + '0');
		return;
	}

	b = n >> 1;
	if (b)
	{
		rem = n - (b * 2);
		print_binary(b);
		_putchar(rem + '0');
	}
	else
	{
		_putchar('1');
		return;
	}
}
