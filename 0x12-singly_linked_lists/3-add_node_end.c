#include "lists.h"

/**
 * add_node_end - Adds a new nod at the end of a list.
 *
 * @head: Head of the linked list
 * @str: String data to be initilaized
 * Return: The address of the new elements(head) or
 * NULL, if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
