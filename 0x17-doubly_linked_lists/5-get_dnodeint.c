#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head
 * @index: target index
 * Return: target node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *buff = head;
	unsigned int n = 0;

	while (buff)
	{
		if (n == index)
			return (buff);
		n++;
		buff = buff->next;
	}
	return (NULL);
}
