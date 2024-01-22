#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
