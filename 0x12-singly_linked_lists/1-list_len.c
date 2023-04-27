#include "lists.h"
#include <stdio.h>
/**
 * list_len - check the code
 * @h: a
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	const list_t *nav = h;
	size_t count = 0;

	while (nav)
	{
		count++;
		nav = nav->next;
	}
	return (count);
}
