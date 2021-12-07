#include "lists.h"

/**
 * add_node_end - add a node to the end
 * of the linked list
 * @head: pointer to head of list
 * @str: data to put in node
 *
 * Return: node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *node_p = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(node->str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (node_p->next != NULL)
		node_p = node_p->next;

	node_p->next = node;

	return (node);
}
