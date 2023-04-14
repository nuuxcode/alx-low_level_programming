#include "main.h"
/**
 * _realloc - function that creates an array of chars,
 *  and initializes it with a specific char
 * @ptr: first bytes of the memory
 * @old_size: first bytes of the memory
 * @new_size: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *new;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		free(ptr);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = ptr;
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		new[i] = s[i];
	free(ptr);
	return ((void *)new);
}
