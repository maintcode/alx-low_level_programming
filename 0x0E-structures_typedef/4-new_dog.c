#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: Pointer to the new dog struct, or NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Copy the age and owner */
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	/* Check for memory allocation failure */
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
