#include "lists.h"

/**
 * dlistint_len - counts elements in a linked list
 * @h: head
 * Return: numbers of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *buff;
	size_t i = 0;

	if (h == NULL)
		return (i);
	i++;
	buff = h->next;
	while (buff)
	{
		i++;
		buff = buff->next;
	}
	return (i);
}

