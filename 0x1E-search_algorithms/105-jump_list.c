#include "search_algos.h"

/**
  * index_node - Indexes a node and returns element at node.
  * @list: A pointer to the  head of the linked list to search.
  * @index: Index of node to be returned
  *
  * Return: If the index exists, a pointer to the node at the index,
  *			Otherwise, NULL.
  */
listint_t *index_node(listint_t *list, size_t index)
{
	if (list == NULL)
		return (NULL);


	while (list->next && (list->index < index))
		list = list->next;

	if (list->index != index)
		return (NULL);
	return (list);
}

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t prev = 0, jump, index = 0;
	listint_t *tmp = index_node(list, index);

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	for (; tmp->n < value && index < size;)
	{
		prev = index;
		index += jump;
		if (index >= size)
		{
			index = size - 1;
			printf("Value checked at index [%ld] = [%d]\n", index,
					index_node(list, index)->n);
			break;
		}
		tmp = index_node(list, index);
		printf("Value checked at index [%ld] = [%d]\n", index, tmp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);

	tmp = index_node(list, prev);
	for (; tmp && tmp->index <= index; tmp = tmp->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
	}

	return (NULL);
}
