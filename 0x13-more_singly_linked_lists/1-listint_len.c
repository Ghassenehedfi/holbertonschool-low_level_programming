#include <string.h>
#include "lists.h"
/**
 * listint_len - list len.
 * @h :a variable.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
