#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int n;
	while (i < 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	putchar(n);
	putchar ('\n');
	i++;
	}
}
