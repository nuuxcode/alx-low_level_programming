#include "lists.h"

/**
 * dlistint_len -  prints all the elements of a dlistint_t list
 * @h: head of double list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i;

	for (i = 0; current; i++)
	{
		current = current->next;
	}
	return (i);
}
