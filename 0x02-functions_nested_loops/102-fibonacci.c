#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - fibonacci numbers
 * Return: 0	
 */
int main(void)

{
	int i;
	long int b = 1, c = 0, a;

	for(i = 0; i < 50; i++)
{
	a = b + c;
	printf("%ld",a);
	c = b;
	b = a;
	if (i < 49)
	printf(", ");
}
	return (0);    
}
