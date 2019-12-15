#include "lists.h"

/**
 * add_dnodeint - Function that creates a new node at the
 * beginning of a linked list. Complete with setting prev and next
 * @head: Holds the address to a node in the linked list
 * @n: Value to be added to the new node
 * Return: The newly created node, or NULL if not enough memory
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
