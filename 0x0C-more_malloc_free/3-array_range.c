#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j, diff;

	if (min > max)
		return (NULL);

	diff = max - min;
	arr = malloc(sizeof(*arr) * (diff + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}

