#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(vl, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);
	va_end(vl);

	return (sum);
}
