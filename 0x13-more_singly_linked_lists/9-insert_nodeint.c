#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 *
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *h;

	h = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 0;
	while (i < (idx - 1))
	{
		h = h->next;
		i++;
	}
	new->next = h->next;
	h->next = new;

	return (new);
}
