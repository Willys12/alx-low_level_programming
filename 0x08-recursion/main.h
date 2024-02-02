#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int _putchar(char c);
void _puts_recursion(char *s);
int help_fun2(int x, int y);
int palindrome_func_helper(char *s, int begin, int end);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif
