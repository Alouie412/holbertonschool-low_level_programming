#include "lists.h"

/**
 * get_dnodeint_at_index - Function that finds the element of a node
 * in the linked list
 * @head: The passed in linked list
 * @index: The position of the desired node
 * Return: The desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
