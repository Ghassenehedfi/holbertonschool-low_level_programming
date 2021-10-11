#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: int
 * @n: int
 * Return: 0
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
	continue;
else
printf(", ");
}
printf("\n");
}
