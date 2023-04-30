#include "lists.h"
/**
 * print_listint - check the code
 * @h: a
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
