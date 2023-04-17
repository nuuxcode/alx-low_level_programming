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
	dog_t *dog;
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
