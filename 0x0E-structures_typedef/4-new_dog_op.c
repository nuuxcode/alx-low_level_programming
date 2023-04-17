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
	int ownerL = 0;
	int nameL = 0;

	while (name[nameL++])
		;
	while (owner[ownerL++])
		;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return NULL;

	dog->name = malloc(nameL);
	if (dog->name == NULL)
	{
		free(dog);
		return NULL;
	}
	for (int i = 0; (dog->name[i] = name[i]); i++)
		;
	dog->name[nameL] = '\0';

	dog->owner = malloc(ownerL);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}
	for (int i = 0; (dog->owner[i] = owner[i]); i++)
		;
	dog->owner[ownerL] = '\0';

	dog->age = age;
	return dog;
}
