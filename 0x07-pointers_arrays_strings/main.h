#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the character c to stdout*/

char *_memset(char *s, char b, unsigned int n);
/* fills memory with a constant byte*/

char *_memcpy(char *dest, char *src, unsigned int n);
/* copies memory area*/

char *_strchr(char *s, char c);
/* locates a char in a string*/

unsigned int _strspn(char *s, char *accept);
/* gets the length of a prefix substring*/

char *_strpbrk(char *s, char *accept);
/* searches a string for any of a set of bytes*/

char *_strstr(char *haystack, char *needle);
/* locates a substring*/

void print_chessboard(char (*a)[8]);
/* prints the chessboard*/

void print_diagsums(int *a, int size);
/* prints the sum of the two diagonals of a square matrix of integers*/

void set_string(char **s, char *to);
/* sets the value of a pointer to a char*/

#endif /* _MAIN_H_*/
