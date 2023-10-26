#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the character c to stdout*/

void _puts_recursion(char *s);
/* prints a string*/

void _print_rev_recursion(char *s);
/* prints a string in reverse*/

int _strlen_recursion(char *s);
/* returns the length of a string*/

int factorial(int n);
/* returns the factorial of a given number*/

int _pow_recursion(int x, int y);
/* returns the value of x raised to the power of y*/

int _sqrt_recursion(int n);
/* returns the natural square root of a number*/

int is_prime_number(int n);
/* returns 1 if the input integer is a prime number, otherwise return 0*/

int is_palindrome(char *s);
/* returns 1 if a string is a palindrome and 0 if not*/

int wildcmp(char *s1, char *s2);
/* compares two strings, returns 1 if the strings can be considered identical*/

#endif /* _MAIN_H_*/
