#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the char c to the stdout*/

char *_strcat(char *dest, char *src);
/* concatenates two strings*/

char *_strncat(char *dest, char *src, int n);
/* similar to _strcat except uses at most n bytes from src*/

char *_strncpy(char *dest, char *src, int n);
/* copies a sting*/

int _strcmp(char *s1, char *s2);
/* compares two strings*/

void reverse_array(int *a, int n);
/* reverses the contents of an array of integers*/

char *string_toupper(char *);
/* changes all lowercase letters to upper*/

char *cap_string(char *);
/* capitalizes all words of a string*/

char *leet(char *);
/* encodes a string into 1337*/

#endif /* _MAIN_H_*/
