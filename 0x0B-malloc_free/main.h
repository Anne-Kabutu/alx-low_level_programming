#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the character c to stdout*/

char *create_array(unsigned int size, char c);
/* creates an array of chars, and initializes it with a specific char*/

char *_strdup(char *str);
/* returns pointer to new mem space containing string parameter*/

char *str_concat(char *s1, char *s2);
/* concatenates two strings*/

int **alloc_grid(int width, int height);
/* returns a pointer to a 2 dimensional array of integers*/

void free_grid(int **grid, int height);
/* frees a 2 dimensional grid previously created*/

char *argstostr(int ac, char **av);
/* concatenates all the arguments of your program*/

char **strtow(char *str);
/* splits a string into words*/

#endif /* _MAIN_H_*/
