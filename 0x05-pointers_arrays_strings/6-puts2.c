#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints a string
 * @str: char
 * Return: 0
 */
void puts2(char *str)
{
int i = 0, j = 0;
while (str[i++])
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
