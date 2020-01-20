#include "hash_tables.h"

/**
 * hash_table_set - Function that accesses an index in the hash
 * table and sets the value. In the event of a possible collision,
 * a new node is created and the value filled there instead
 * @ht: The hash table
 * @key: The key. The position in the hash table to be filled
 * @value: The value to fill the key with
 * Return: 1 if successful, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && ht->array[index]->value == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
