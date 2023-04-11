#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 * @str: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i;
	
	while (str[size])
	{
		size++;
	}
	copy = malloc(size + 1);
	if (str == NULL || copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}

/*


which contains a copy of the string given as a parameter.
returns a pointer to a new string(newly allocated space in memory) which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available


*/