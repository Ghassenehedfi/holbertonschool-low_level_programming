#include "lists.h"
/**
 * print_list - priting linked lists
 * @h: list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)

{

	int i = 0;
	size_t len = 0;
	const list_t *n = h;

	for (; n; i++)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", n->len, n->str);
		n = n->next;
		len++;
	}
	return (len);
}
