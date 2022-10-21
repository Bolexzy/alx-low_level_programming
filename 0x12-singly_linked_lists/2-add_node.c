#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: First list of the linked list
 * @str: String data to initiate in the list.
 * Return: Address of the new element(head).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = *head;

	*head = new;

	return (*head);
}
