#include "main.h"
#include <stdio.h>

/**
 * array_range -  creates an array of integers
 * of range from min to max
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 **/
int *array_range(int min, int max)
{
	int *a, i, m;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * ((max - min) + 1));
	if (!a)
		return (NULL);

	i = 0;
	m = min;
	while (i <= (max - min))
		a[i++] = m++;

	return (a);
}
