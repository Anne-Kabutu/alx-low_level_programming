#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the character c to the stdout*/

void reset_to_98(int *n);
/* takes a ptr to int and updates the value it points to 98*/

void swap_int(int *a, int *b);
/* swaps the values of two ints*/

int _strlen(char *s);
/* returns the length of a string*/

void _puts(char *str);
/* print a string*/

void print_rev(char *s);
/* prints a string in reverse followed by a newine*/

void rev_string(char *s);void rev_string(char *s);
/* reverses a sring*/

void puts2(char *str);
/* prints every other char of a string starting with first char*/

void puts_half(char *str);
/* prints second half of a string*/

void print_array(int *a, int n);
/* prints n elements of an array of ints*/

char *_strcpy(char *dest, char *src);
/* copies string pointed by src to buffer pointed by dest*/

#endif /* _MAIN_H_*/
