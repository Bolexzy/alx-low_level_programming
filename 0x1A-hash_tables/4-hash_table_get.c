#include "hash_tables.h"

/**
* hash_table_get - Get the value associated with a key.
* @ht: A pointer to the hash table.
* @key: Key of the item to retrieve.
*
* Return: Value of the hash on success, otherwise NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_item;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	current_item = ht->array[idx];
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);
		current_item = current_item->next;
	}

	return (NULL);
}
