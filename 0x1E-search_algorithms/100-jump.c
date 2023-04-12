#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, jump, index = 0;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (; array[index] < value && index < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (!(array[index] < value) || !(index < size))
			break;
		prev = index;
		index += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);

	for (; prev <= index && prev < size; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
