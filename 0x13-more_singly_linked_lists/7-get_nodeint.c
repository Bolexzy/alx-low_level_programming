#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 *
 * @head: Head of the linked list
 * @index: Index of the node.
 * Return: nth node, NUll if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = head->next;
		head = tmp;
	}

	return (head);
}
