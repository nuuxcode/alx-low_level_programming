#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i;

	for (i = 0; current; i++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
