#include "lists.h"

/**
 * add_node - add a node to the begining
 * of the linked list
 * @head: pointer to head of list
 * @str: data to put in node
 *
 * Return: node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

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
	node->next = *head;
	*head = node;

	return (node);
}
