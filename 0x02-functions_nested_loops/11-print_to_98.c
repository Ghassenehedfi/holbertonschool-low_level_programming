#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - to 98
 *@n :int
 * Return: 0
 */
void print_to_98(int n)

{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("98\n");
}
