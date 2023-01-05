#include "hash_tables.h"

/**
* hash_table_create - Creates a new hashtable with a given size.
*
* @size: size of the hashtable array.
* Return: a pointer to new hash table, else Null if it fails.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int  i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
