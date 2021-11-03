#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: int
 * @size: int
 * @cmp: int
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))

{

	int i = 0;

	if (array != NULL && cmp != NULL)
	{
	if (size <= 0)
	return (-1);
	else
	for (; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	else
	continue;
	}
	}
	return (-1);
}
