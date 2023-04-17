#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	/* allocate memory for dog struct */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	/* allocate memory and make copies of name and owner */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
{
	free(dog);
	return (NULL);
}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
{
	free(name_copy);
	free(dog);
	return (NULL);
}
	strcpy(owner_copy, owner);

	/* set fields in dog struct */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
