#include "lists.h"

/**
 * print_dlistint - Function that counts the number of elements
 * in a given linked list
 * @h: The passed in linked list
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
