#include "lists.h"
#include <stdio.h>
/**
 * print_list - check the code
 * @h: a
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	const list_t *nav = h;
	size_t count = 0;

	while (nav)
	{
		nav->str ? printf("[%d] %s\n", nav->len, nav->str) : printf("[0] (nil)\n");
		count++;
		nav = nav->next;
	}
	return (count);
}
