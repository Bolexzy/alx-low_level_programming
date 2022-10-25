#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 *
 * @head: head of the list.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	while (head)
	{
		tmp = head->next;
		sum += head->n;

		head = tmp;
	}

	return (sum);
}
