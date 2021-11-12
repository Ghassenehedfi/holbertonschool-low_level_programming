#include "lists.h"
/**
 * list_len - printing linked lists
 * @h: list_t
 * Return:size_t
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	size_t len = 0;
	const list_t *n = h;

	for (; n; i++)
	{
		n = n->next;
		len++;
	}
	return (len);
}
