#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);

	for (; index > 0; index--)
	{
		node = node->next;
		if (node == NULL)
			return (-1);
	}

	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
