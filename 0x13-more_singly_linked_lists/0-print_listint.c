#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the node head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *nav = h;
	size_t count = 0;

	while (nav)
	{
		printf("%d\n", nav->n);
		count++;
		nav = nav->next;
	}
	return (count);
}
