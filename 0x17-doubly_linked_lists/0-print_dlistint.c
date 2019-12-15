#include "lists.h"

/**
 * print_dlistint - Function that prints all values in a linked list
 * @h: The passed in linked list
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
