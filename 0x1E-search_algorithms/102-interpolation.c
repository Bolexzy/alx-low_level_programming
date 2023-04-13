#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value being searched.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos < (int)size)
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			break;
		}

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] == value)
			return (pos);
	}

	return (-1);
}
