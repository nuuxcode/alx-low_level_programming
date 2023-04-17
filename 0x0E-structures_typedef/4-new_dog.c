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
	int ownerL = 0;
	int nameL = 0;

	while (name[nameL])
		nameL++;
	while (owner[ownerL])
		ownerL++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nameL + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	dog->owner = malloc(sizeof(char) * (ownerL + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
