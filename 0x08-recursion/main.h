#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int sqrt_verif(int sq, int n);
int is_prime_number(int n);
int prime_checker(int p, int n);
int is_palindrome(char *s);
int isPal(char *s, int i, int n);
int _strlen(char *s);
int wildcmp(char *s1, char *s2);
#endif
