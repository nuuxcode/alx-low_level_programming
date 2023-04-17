#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: size of triangle
 * @name: size of triangle
 * @age: size of triangle
 * @owner: size of triangle
 * Description: --
 * Return: --
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
