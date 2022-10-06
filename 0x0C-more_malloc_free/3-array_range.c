#include "main.h"
#include <stdlib.h>

/**/
int *array_range(int min, int max)
{
	int *arr;
	int i, j, diff;

	if (min > max)
		return (NULL);

	diff = max - min;
	arr = malloc(sizeof *arr * diff + 1);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		if (j <= diff)
		{
			arr[j] = i;
			j++;
		}
	}

	return (arr);
}

