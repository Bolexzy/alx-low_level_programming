#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: number one.
 * @m: number two.
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, count = 0;

	diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
