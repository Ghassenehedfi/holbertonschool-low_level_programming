#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list.
 * @h: pointer
 * Return: the number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
