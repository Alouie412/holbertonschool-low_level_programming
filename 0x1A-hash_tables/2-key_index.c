#include "hash_tables.h"

/**
 * key_index - Function that locates and returns the index
 * of a key. The hash index is taken by dividing our integer
 * obtained by using the djb2 function by the size of the hash
 * table, and obtaining the remainder. This is also known as
 * the remainder method
 * @key: The key. A passed in string
 * @size: Size of the array
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
