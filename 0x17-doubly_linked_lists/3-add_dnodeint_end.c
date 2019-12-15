#include "lists.h"

/**
 * add_dnodeint_end - Function that creates a new node at the
 * end of a linked list. Complete with setting prev and next
 * @head: Holds the address to a node in the linked list
 * @n: Value to be added to the new node
 * Return: If the node is also the beginning of the linked list,
 * returns the beginning of the linked list. If not enough memory,
 * returns NULL. Otherwise returns the position of the newly created node
 * This is significant, as we want to print all elements of this list in
 * order from beginning to end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *position;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	/*
	 * To preserve the links between each node. Otherwise only the first and
	 * last node will be printed, as connections to nodes in between will be
	 * broken
	*/
	position = *head;
	while (position != NULL && position->next != NULL)
		position = position->next;

	position->next = new_node;
	new_node->prev = position;

	return (new_node);
}
