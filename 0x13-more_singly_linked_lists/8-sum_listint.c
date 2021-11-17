#include "lists.h"
/**
 * sum_listint - Return the sum of all the data
 * @head: variable that points to a struct
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
