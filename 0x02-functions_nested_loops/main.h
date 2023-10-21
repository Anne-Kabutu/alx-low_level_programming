#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
/* writes the char c to the stdout*/

void print_alphabet(void);
/* prints alphabets in lowercase forllowed by a new line*/

void print_alphabet_x10(void);
/* prints 10 times lowercase alphabets followed by a new line*/

int _islower(int c);
/* checks for lowercase chars, and returns 1, if true and 0, if false*/

int _isalpha(int c);
/* checks if input is a letter; returns 1 if true and 0, if false*/

int print_sign(int n);
/* prints the sign of a number (positive (+) or negative (_)*/

int _abs(int num);
/* computes the absolute value of an int*/

int print_last_digit(int dig);
/* returns the value of the last digit of a num*/

void jack_bauer(void);
/* prints every min of the day*/

void times_table(void);
/* prints the 9 times table*/

int add(int a, int b);
/* adds two ints and returns results*/

void print_to_98(int n);
/* prints all natural nums from n to 98*/

void print_times_table(int n);
/* prints the n times table starting with 0*/

#endif
