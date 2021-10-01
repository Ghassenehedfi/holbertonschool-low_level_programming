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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch); 
}
	putchar ('\n');
}
