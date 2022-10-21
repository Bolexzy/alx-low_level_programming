#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list - Singly linked list
 *
 * @str: String data
 * @len: Length data of the string
 * @next: Pointer to next node
 *
 * Description: Linked list node structure for Alx project.
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* _LITS_H_ */
