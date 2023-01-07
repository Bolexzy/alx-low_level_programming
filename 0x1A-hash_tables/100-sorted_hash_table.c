#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add (cannot be an empty string).
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current_node, *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->shead;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			strcpy(current_node->value, value);
			return (1);
		}
		current_node = current_node->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		current_node = ht->shead;
		while (current_node->snext != NULL
				&& strcmp(current_node->snext->key, key) < 0)
			current_node = current_node->snext;
		new->sprev = current_node;
		new->snext = current_node->snext;
		if (current_node->snext == NULL)
			ht->stail = new;
		else
			current_node->snext->sprev = new;
		current_node->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Get the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	current_node = ht->shead;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the keys and values
 *						of a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 *
 * Return: none.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	char *sep = "";

	if (ht == NULL)
		return;

	current_node = ht->shead;
	printf("{");

	while (current_node != NULL)
	{
		printf("%s'%s': '%s'", sep, current_node->key, current_node->value);
		current_node = current_node->snext;
		sep = ", ";
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	char *sep = "";

	if (ht == NULL)
		return;

	current_node = ht->stail;
	printf("{");

	while (current_node != NULL)
	{
		printf("%s'%s': '%s'", sep, current_node->key, current_node->value);
		current_node = current_node->sprev;
		sep = ", ";
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 *
 * Return: none.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	while ((temp = current_node) != NULL)
	{
		current_node = current_node->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(ht->array);
	free(ht);
}
