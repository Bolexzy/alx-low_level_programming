#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * at a given index.
 *
 * @n: pointer to an unsigned long int.
 * @index: index of the bit to set.
 * Return: 1 if it worked, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 && index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
