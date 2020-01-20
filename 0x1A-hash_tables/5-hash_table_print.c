#include "hash_tables.h"

/**
 * hash_table_print - Function that prints all the contents of
 * the hash table, if there are any contents to print
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0;
	bool flag = 0;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht == NULL)
			break;

		for (temp = ht->array[i]; temp != NULL; temp = temp->next)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
		}
	}

	printf("}\n");
}
