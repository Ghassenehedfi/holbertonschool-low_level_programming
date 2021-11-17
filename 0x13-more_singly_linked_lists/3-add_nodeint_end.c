#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 * @head: pointer
 * @n: int
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev_node = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (prev_node->next != NULL)
			prev_node = prev_node->next;
		prev_node->next = new_node;
	}
	return (new_node);
}
