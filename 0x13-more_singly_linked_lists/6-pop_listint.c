#include <string.h>
#include "lists.h"
/**
 * pop_listint -  function that deletes the head node.
 *@head: a pointer to a pointer to a struct.
 * Return: the head node’s data.
 */

int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *headref;

	if (*head == NULL)
		return (0);

	headref = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = headref;
	return (tmp);
}
