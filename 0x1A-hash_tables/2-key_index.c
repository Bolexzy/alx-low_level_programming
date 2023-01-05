#include "hash_tables.h"

/**
* key_index - Get the index at which a key/value pair should
*             be stored in array of a hash table.
* @key: The key to be hashed.
* @size: The size of the array of the hash table.
*
* Return: The index of the key.
* Description: Uses the djb2 algorithm.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
