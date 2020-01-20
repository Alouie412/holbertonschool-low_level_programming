#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes the entire hash
 * table and purges all of its contents
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *freedom = NULL, *liberation = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (freedom = ht->array[i]; freedom != NULL; freedom = liberation)
		{
			liberation = freedom->next;
			free(freedom->key);
			free(freedom->value);
			free(freedom);
		}
	}

	free(ht->array);
	free(ht);
}
