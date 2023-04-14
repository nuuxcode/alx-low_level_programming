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
		ptr = malloc((new_size) * sizeof(int));
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc((old_size) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		s[i] = *((char *)ptr + i);
	free(ptr);
	ptr = malloc((new_size) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		*((char *)ptr + i) = s[i];
	return ((void *)ptr);
}
