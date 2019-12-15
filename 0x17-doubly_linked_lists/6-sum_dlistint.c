#include "lists.h"

/**
 * sum_dlistint - Function that calculates and returns the sum
 * of all elements in the linked list
 * @head: The passed in linked list
 * Return: The sum of the entire linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
