#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int som = 0;

	while (temp)
	{
		som += temp->n;
		temp = temp->next;
	}
	return (som);
}
