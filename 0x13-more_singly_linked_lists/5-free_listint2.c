#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		free(*head);
		return;
	}

	while (*head)
	{
		free(*head);

		*head = (*head)->next;
	}

	*head = NULL;
}
