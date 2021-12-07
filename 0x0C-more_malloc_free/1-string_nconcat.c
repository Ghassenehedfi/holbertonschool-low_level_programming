#include "main.h"


/**
 * string_nconcat - concatenates two strings with
 * specified bytes
 *
 * @s1: string
 * @s2: string
 * @n: bytes
 *
 * Return: new string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, l1, l2, i;


	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n > l2)
		n = l2;

	l = l1 + n;

	s = malloc(sizeof(char) * (l + 1));
	if (!s)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < l1)
			s[i] = s1[i];
		else
			s[i] = s2[i - l1];
	}
	s[l] = '\0';


	return (s);
}
