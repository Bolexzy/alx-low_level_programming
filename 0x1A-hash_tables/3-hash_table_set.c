#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon Success - 1.
 *         Otherwise - 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *current_item;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[idx];
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(current_item->value, value);
			return (1);
		}
		current_item = current_item->next;
	}


	new = malloc(sizeof(hash_node_t));
	new->value = strdup(value);
	new->key = strdup(key);
	if (new->value == NULL || new->key == NULL)
	{
		free(new);
		return (0);
	}


	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
