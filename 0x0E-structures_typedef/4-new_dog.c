#include "dog.h"
#include <stdlib.h>

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
	dog_t *dogptr;
	int i, index, count;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (index = 0; owner[index] != '\0'; index++)
		;

	dogptr = malloc(sizeof(dogptr));

	if (dogptr == NULL || !(name) || !(owner))
	{
		free(dogptr);
		return (NULL);
	}

	dogptr->name = malloc(sizeof(char) * (i + 1));
	dogptr->owner  = malloc(sizeof(char) * (index + 1));

	if (!(dogptr->name) || !(dogptr->owner))
	{
		free(dogptr->owner);
		free(dogptr->name);
		free(dogptr);
		return (NULL);
	}
	for (count = 0; count < i; count++)
		dogptr->name[count] = name[count];
	dogptr->name[count] = '\0';

	for (count = 0; count < index; count++)
		dogptr->owner[count] = owner[count];
	dogptr->owner[count] = '\0';
	dogptr->age = age;

	return (dogptr);
}
