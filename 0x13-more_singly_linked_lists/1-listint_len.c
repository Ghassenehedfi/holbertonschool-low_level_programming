#include "lists.h"
/**
* listint_len - printing linked lists
* @h: listint_t
* Return:size_t
*/
size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h)
{
h = h->next;
	len++;
}
	return (len);
}   
