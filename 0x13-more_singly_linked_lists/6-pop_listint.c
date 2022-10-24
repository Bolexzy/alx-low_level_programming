#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 *
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (!head || !*head)
		return (0);

	node_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (node_data);
}
