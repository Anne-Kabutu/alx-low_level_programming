#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: struct to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
