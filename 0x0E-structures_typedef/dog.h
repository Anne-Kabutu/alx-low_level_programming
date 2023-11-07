#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - contains dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: demographic dog data
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/* intializes struct dog*/

void print_dog(struct dog *d);
/*  prints a struct dog*/

dog_t *new_dog(char *name, float age, char *owner);
/* creates a new dog*/

void free_dog(dog_t *d);
/* frees dogs*/

#endif /* _DOG_H_*/
