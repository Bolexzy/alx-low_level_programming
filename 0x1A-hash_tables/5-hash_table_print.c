#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: A pointer to the hash table.
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_item;
	unsigned long int idx;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (idx = 0; idx < ht->size; idx++)
	{
		current_item = ht->array[idx];
		while (current_item != NULL)
		{
			printf("%s'%s': '%s'", sep, current_item->key, current_item->value);
			current_item = current_item->next;
			sep = ", ";
		}
	}
	printf("}\n");
}
