#include "main.h"

/**
 * str_concat - Concats two strings
 * @s1: char
 * @s2: char
 * Return: 0
 */
	char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, x = 0, length = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
	length++;
	str = malloc(sizeof(char) * length);
	if (str == NULL)
	return (NULL);
	for (i = 0; s1[i]; i++)
	str[x++] = s1[i];
	for (i = 0; s2[i]; i++)
	str[x++] = s2[i];
	return (str);
}
