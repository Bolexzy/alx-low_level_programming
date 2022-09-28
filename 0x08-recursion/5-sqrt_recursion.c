#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number.
 *
 * @num: The number to find the square root of.
 * @r: Root iterator.
 * Return:  the square root or -1 if num does have natural square root.
 */
int find_sqrt(int num, int r)
{
	if ((r * r) > num)
		return (-1);
	if ((r * r) == num)
		return (r);
	return (find_sqrt(num, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
