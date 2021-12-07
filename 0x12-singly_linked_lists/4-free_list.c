#include "lists.h"

/**
 * free_list - free linked list of type list_t
 * @head: head of linked list
 *
 **/
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
