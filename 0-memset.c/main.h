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

#endif /* _MAIN_H_*/
