#include "lists.h"

/**
 * free_dlistint - Function that frees all nodes in a linked list
 * @head: Linked list to be freed
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freedom = head;

	if (head == NULL)
		return;

	while (freedom != NULL)
	{
		freedom = head->next;
		free(head);
		head = freedom;
	}
}
