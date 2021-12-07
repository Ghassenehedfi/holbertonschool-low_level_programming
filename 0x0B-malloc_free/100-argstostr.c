#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: new string
 **/
char *argstostr(int ac, char **av)
{
	int i = 0, y = 0, x = -1, l, j;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		y += strlen(av[i]);
		y++;
		i++;
	}
	/* for the \0 */
	y++;

	s = malloc(sizeof(char) * y);
	if (s == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		l = strlen(av[i]);
		for (j = 0; j < l; j++)
		{
			x++;
			s[x] = av[i][j];

		}
		x++;
		s[x] = '\n';
	}
	x++;
	s[x] = '\0';

	return (s);
}
