#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	unsigned int b;

	if (n)
	{
		b = n >> 1;
		if (b)
			print_binary(b);
		_putchar((n - (b * 2)) + '0');
	}
	else
		_putchar('0');
}
