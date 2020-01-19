#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	if (size <= 0)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t) * size);

	if (new_hash == NULL)
		return (NULL);

	return (new_hash);
}
