#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: size of the array.
 * @c: Char to initalize the array with.
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (size == 0)
		return ('\0');

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
