#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to the hash table.
 *
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current_item, *temp;

	for (idx = 0; idx < ht->size; idx++)
	{
		current_item = ht->array[idx];

		while (current_item != NULL)
		{
			temp = current_item;
			current_item = current_item->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
