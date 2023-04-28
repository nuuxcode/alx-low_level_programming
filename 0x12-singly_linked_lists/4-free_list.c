#include "lists.h"
#include <stdio.h>
/**
 * free_list - check the code
 * @head: a
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *nav, *nav2;

	nav = head;
	while (nav)
	{
		free(nav->str);
		nav2 = nav->next;
		free(nav);
		nav = nav2;
	}
}
