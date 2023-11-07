#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct variable for dog
 * @name: string containing dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}