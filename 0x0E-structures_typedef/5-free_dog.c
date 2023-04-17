#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - entry point
 * @d: size of triangle
 * Description: --
 * Return: --
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
