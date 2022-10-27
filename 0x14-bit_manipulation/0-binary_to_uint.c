#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: Pointer to binary number.
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int dec = 0, pos;

	if (!b)
		return (0);

	for (idx = 0; b[idx]; idx++)
		;

	idx--;
	for (pos = 1; idx >= 0; idx--, pos *= 2)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] & 1)
			dec += pos;
	}

	return (dec);
}
