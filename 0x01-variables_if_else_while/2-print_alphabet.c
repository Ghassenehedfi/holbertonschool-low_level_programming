#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}
	putchar ('\n');
	return (0);
}
