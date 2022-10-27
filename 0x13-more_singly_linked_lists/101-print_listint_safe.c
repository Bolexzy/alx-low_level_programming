#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely.
 *
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *prev;
	size_t new_n, nodes = 0;

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		prev = head;
		current = current->next;
		new_n = 0;
		while (new_n < nodes)
		{
			if (current == prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (nodes);
			}
			prev = prev->next;
			new_n++;
		}
		if (head == NULL)
			exit(98);
	}

	return (nodes);
}
