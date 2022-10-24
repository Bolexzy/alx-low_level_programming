#include "lists.h"

/**
 * free_listint - Frees a linked list
 *
 * @head: head of the linked list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
