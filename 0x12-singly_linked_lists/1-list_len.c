#include "lists.h"

/**
 * list_len - Returns the number of elements in a list.
 *
 * @h: Singly linked list
 * Return: The number of elements (n).
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
