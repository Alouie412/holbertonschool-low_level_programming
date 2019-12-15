#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if(h == NULL)
		return (NULL);

	for(count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
