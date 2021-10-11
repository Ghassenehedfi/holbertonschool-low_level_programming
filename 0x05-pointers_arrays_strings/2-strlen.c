#include "main.h"
/**
 * _strlen - retrun the lenght
 * @s: char
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
