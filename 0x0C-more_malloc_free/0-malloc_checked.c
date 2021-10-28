#include "main.h"
/**
 * malloc_checked - check if null
 * @b: unsigned int
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
