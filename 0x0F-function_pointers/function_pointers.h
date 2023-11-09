#ifndef _MAIN_H_
#define _MAIN_H_

void print_name(char *name, void (*f)(char *));
/* prints a name*/

void array_iterator(int *array, size_t size, void (*action)(int));
/* executes a function given as a parameter on each element of an array*/

int int_index(int *array, int size, int (*cmp)(int));
/* searches for an integer*/

#endif /* _MAIN_H_*/
