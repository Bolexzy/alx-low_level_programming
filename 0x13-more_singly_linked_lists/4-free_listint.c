#include "lists.h"

/**
 * free_listint - Frees a linked list
 *
 * @head: head of the linked list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->n);
		free(head);

		head = head->next;
	}
}
