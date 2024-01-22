#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	/* Allocate memory for the new dog */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	/* Allocate memory and copy the owner */
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	/* Set the age of the dog */
	newDog->age = age;

	return (newDog);
}
