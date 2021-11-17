#include "lists.h"
/**
 * listint_len - returns the number of elements in a linkedlisti\nt_t list
* @h: a variable that points to a listint_t struct
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to pointer to struct
 * @idx: index of list where new node should be added
 * @n: value of n member for new node
 * Return: adress of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t length;
	unsigned int i;
	listint_t *new_node;
	listint_t *prev_node = *head;

	length = listint_len(*head);
		if (idx > length)
			return (NULL);
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		for (i = 0; i < idx - 1; i++)
			prev_node = prev_node->next;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
		return (new_node);
}
