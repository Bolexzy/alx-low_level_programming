#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>

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

#endif /* _LITS_H_ */
