#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: Singky linked list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		i++;
	}

	return (i);
}
