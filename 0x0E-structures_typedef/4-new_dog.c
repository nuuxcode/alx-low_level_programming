#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - entry point
 * @name: size of triangle
 * @age: size of triangle
 * @owner: size of triangle
 * Description: --
 * Return: --
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
