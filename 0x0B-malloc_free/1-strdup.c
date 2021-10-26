#include "main.h"

/**
 * _strdup - allocated space
 * @str:char
 * Return: 0
 */
	char *_strdup(char *str)
	{
	int i = 0, j = 0;

	char *c;

	if (str == NULL)
	return (NULL);
	for (; str[i]; i++)
	j++;
	c = malloc((j + 1) * sizeof(char));
	if (c == 0)
	return (NULL);
	for (i = 0; i < j ; i++)
	c[i] = str[i];
	c[j] = '\0';
	return (c);
}
