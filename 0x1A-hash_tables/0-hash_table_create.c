#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * Or rather, an array as hash tables are very similar
 * @size: Size of the array to be created
 * Return: The newly created array on success, or NULL if
 * invalid size or unable to create the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);

	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash->array == NULL)
		return (NULL);

	return (new_hash);
}
