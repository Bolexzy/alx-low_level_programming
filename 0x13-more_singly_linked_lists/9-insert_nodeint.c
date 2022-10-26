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
	listint_t *tmp, *new, *h;

	h = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head && !idx)
	{
		*head = new;
		return (new);
	}
	if (*head == NULL && idx != 0)
		return (NULL);
	else if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx && idx != 0; i++)
	{
		tmp = h->next;
		if (i == (idx - 1))
		{
			new->next = h->next;
			h->next = new;

			break;
		}

		h = tmp;
	}
	return (new);
}