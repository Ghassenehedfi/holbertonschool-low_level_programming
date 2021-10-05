#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - check the code
 * Return: Alawys 0
 */
void print_alphabet(void)

{
	int n;
	for (n= "a"; n<= "z"; n++)
	putchar(n);
	putchar ('\n');	
}
int main(void)

{
	print_alphabet();
	return (0);
}
