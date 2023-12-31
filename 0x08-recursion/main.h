#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char a);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int square(int n, int val);
int is_prime_number(int n);
int check_prime(int n, int cp);
int check(char *s, int start, int end, int mod);
int is_palindrome(char *s);
int last_index(char *s);
int wildcmp(char *s1, char *s2);
int inception(char *s1, char *s2);
char *move_past_star(char *s2);

#endif
