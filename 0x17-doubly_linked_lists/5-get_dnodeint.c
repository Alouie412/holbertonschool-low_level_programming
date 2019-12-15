#include "lists.h"

/**
 * get_dnodeint_at_index - Function that finds the element of a node
 * in the linked list
 * @head: The passed in linked list
 * @index: The position of the desired node
 * Return: The desired node, if it exists. Otherwise, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
