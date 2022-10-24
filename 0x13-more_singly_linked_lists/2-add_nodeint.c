#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 *
 * @head: head of a list.
 * @n: n element of listint_t.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
		free(new);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (head);
}
