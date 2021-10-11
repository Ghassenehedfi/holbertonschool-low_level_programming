#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies an array
 * @dest: char
 * @src: char
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
