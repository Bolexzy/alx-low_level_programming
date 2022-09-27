#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
