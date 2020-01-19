#include "hash_tables.h"

/**
 * hash_djb2 - Function that implements djb2. Apparently it
 * takes the string and creates a hash index out of it
 * How is this useful anyway?
 * @str: The passed in string
 * Return: The created hash index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c; /* Will hold the ascii value of a character in our string*/

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
