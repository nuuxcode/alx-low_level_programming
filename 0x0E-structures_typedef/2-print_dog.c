#include <stdio.h>
#include "dog.h"

/**
 * print_dog - entry point
 * @d: size of triangle
 * Description: --
 * Return: --
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
