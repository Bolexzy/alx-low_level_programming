#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @head: head of the linked list.
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
