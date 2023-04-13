#include "search_algos.h"

/**
  * binary_search_ - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;

	}

	return (-1);
}

/**
  * exponential_search_rec - Searches for a value in a sorted array of
  *					integers using the Exponential search  recursively.
  * @array: A pointer to the first element of the array to search.
  * @pos: position of key within bound of value searched.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search_rec(int *array, size_t pos, size_t size, int value)
{
	if (pos < size && array[pos] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (exponential_search_rec(array, pos * 2, size, value));
	}
	return (pos);
}


/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1, end;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		pos = exponential_search_rec(array, pos, size, value);
	}

	end = pos < size ? pos : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", pos / 2, end);

	return (binary_search_(array, pos / 2, end, value));
}
