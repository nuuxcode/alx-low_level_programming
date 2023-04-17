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
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
