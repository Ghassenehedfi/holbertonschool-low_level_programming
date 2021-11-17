#include "lists.h"
/**
 * * print_listint - printing linked lists
 * * @h: listint_t
 * * Return:size_t
 * */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
