#include "main.h"
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 0
 */
	int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
	return (NULL);
	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
}
