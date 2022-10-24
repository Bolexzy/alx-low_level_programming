#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 *
 * @h: Head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;

		nodes++;
	}
	return (nodes);
}
