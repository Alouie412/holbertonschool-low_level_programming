#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves the value at a given
 * key. Assuming the key exists within the hash table, anyway
 * @ht: The hash table
 * @key: The key. Needed to access a particular index in the
 * hash table
 * Return: The value inside the key, or NULL if the key does not exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}
