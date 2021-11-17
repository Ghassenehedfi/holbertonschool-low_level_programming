#include "lists.h"
#include <string.h>
/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: a variable pointing to a struct
 * @index: index of node, starting from 0
 * Return: a variable pointing to a struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;



	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
