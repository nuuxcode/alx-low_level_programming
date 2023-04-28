#include "lists.h"
/**
 * listint_len - check the code
 * @h: a
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *nav = h;
	size_t count = 0;

	while (nav)
	{
		count++;
		nav = nav->next;
	}
	return (count);
}
