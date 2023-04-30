#include "lists.h"
/**
 * print_listint - check the code
 * @h: a
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *nav = h;
	size_t count = 0;
	if (h == NULL)
		return (0);
	while (nav)
	{
		printf("%d\n", nav->n);
		count++;
		nav = nav->next;
	}
	return (count);
}
