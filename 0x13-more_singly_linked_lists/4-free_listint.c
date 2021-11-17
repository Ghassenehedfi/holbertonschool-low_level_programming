#include "lists.h"
#include <string.h>
/**
 * free_listint - frees a  list
 * @head: a variable pointing to a struct of type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
