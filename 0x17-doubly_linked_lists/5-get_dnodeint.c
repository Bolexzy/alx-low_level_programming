#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the nth node
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
