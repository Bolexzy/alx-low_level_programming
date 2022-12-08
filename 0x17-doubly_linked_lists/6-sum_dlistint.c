#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t list.
 *
 * @head: head of the list
 * Return: sum of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
