#include "dog.h"
#include <stddef.h>

/**
 * new_dog - creates a new dog struct type
 * @name: string of dog name
 * @age: age of dog
 * @owner: name of dogowner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname, *newowner;
	dog_t newdog, *dogptr;

	newname = name;
	newowner = owner;

	newdog.name = newname;
	newdog.owner = newowner;
	newdog.age = age;

	dogptr = &newdog;

	if (dogptr == NULL)
		return (NULL);

	return (dogptr);
}
