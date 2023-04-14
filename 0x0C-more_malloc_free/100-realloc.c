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
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && new_size > old_size; i++)
		s[i] = *((char *)ptr + i);
	for (i = 0; i < new_size && new_size < old_size; i++)
		s[i] = *((char *)ptr + i);
	free(ptr);
	return (s);
}
