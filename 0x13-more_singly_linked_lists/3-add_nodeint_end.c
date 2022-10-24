#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 *
 * @head: head of a list.
 * @n: n element of listint_t.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
		free(new);
	}

	new->n = n;
	new->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
