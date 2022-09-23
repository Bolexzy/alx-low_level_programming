#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, i2 = 0, lg, dr1, dr2, opr, add = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[i2] != '\0')
		i2++;
	if (i >= i2)
		lg = i;
	else
		lg = i2;
	if (size_r <= lg + 1)
		return (0);
	r[lg + 1] = '\0';
	i--, i2--, size_r--;
	dr1 = n1[i] - 48, dr2 = n2[i2] - 48;
	while (lg >= 0)
	{
		opr = dr1 + dr2 + add;
		if (opr >= 10)
			add = opr / 10;
		else
			add = 0;
		if (opr > 0)
		r[lg] = (opr % 10) + 48;
		else
			*(r + lg) = '0';
		if (i > 0)
			i--, dr1 = n1[i] - 48;
		else
			dr1 = 0;
		if (i2 > 0)
			i2--, dr2 = n2[i2] - 48;
		else
			dr2 = 0;
		lg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
